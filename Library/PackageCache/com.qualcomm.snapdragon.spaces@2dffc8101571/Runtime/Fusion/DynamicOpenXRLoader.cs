/******************************************************************************
 * File: DynamicOpenXRLoader.cs
 * Copyright (c) 2023-2024 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
 *
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 *
 ******************************************************************************/

using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.Management;
using UnityEngine.XR.OpenXR;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace Qualcomm.Snapdragon.Spaces
{
    /// <summary>
    ///     Class handling late loading and on-demand unloading of openXR.
    /// </summary>
    [AddComponentMenu("XR/Dual Render Fusion/Dynamic OpenXR Loader")]
    [RequireComponent(typeof(SpacesGlassStatus))]
    [DefaultExecutionOrder(int.MinValue + 1)]
    public class DynamicOpenXRLoader : MonoBehaviour
    {
        public delegate void DynamicLoaderMessageCallback(OpenXRState state, DynamicLoaderError error = DynamicLoaderError.None);

        /// <summary>
        ///     Error messages generated upon failure of the Dynamic OpenXR Loader.
        /// </summary>
        public enum DynamicLoaderError
        {
            None,
            NoRuntimeInstalled,
            FailedToInitialize,
            OpenXRNotSupported,
            CannotDisplayOverlay
        }

        /// <summary>
        ///     The openXR states tracked by the Dynamic OpenXR Loader.
        /// </summary>
        public enum OpenXRState
        {
            /// <summary>
            ///     OpenXRAvailable is broadcast when suitable AR glasses are connected, or when manually attempting to start/stop
            ///     openXR.
            /// </summary>
            OpenXRAvailable,

            /// <summary>
            ///     OpenXRUnavailable is broadcast when AR glasses disconnect, or when manually attempting to start/stop openXR.
            /// </summary>
            OpenXRUnavailable,

            /// <summary>
            ///     OpenXRStarting is broadcast just before openXR subsystems are started.
            /// </summary>
            OpenXRStarting,

            /// <summary>
            ///     OpenXRStarted is broadcast immediately after openXR subsystems have started
            /// </summary>
            OpenXRStarted,

            /// <summary>
            ///     OpenXRStopping is broadcast just before openXR subsystems are stopped
            /// </summary>
            OpenXRStopping,

            /// <summary>
            ///     OpenXRStopped is broadcast immediately after openXR subsystems have stopped
            /// </summary>
            OpenXRStopped,

            /// <summary>
            ///     OpenXRLoaderInit is broadcast when the openXR loader attempts to initialise an openXR instance
            /// </summary>
            OpenXRLoaderInit,

            /// <summary>
            ///     OpenXRLoaderFail is broadcast when something goes wrong in the openXR loading process
            /// </summary>
            OpenXRLoaderFail
        }

        public bool AutoStartXROnDisplayConnected = true;

        // Auto-manage AR Camera turns the AR Session Origin on / off as needed
        public bool AutoManageXRCamera = true;

        public bool AreSubsystemsRunning { get; private set; }
        public static DynamicOpenXRLoader Instance { get; private set; }
        public DynamicLoaderMessageCallback DynamicLoaderMessage;
        // Always set to true for now.
        private readonly bool _autoShutdownXROnDisplayDisconnected = true;
        private SpacesGlassStatus _glassStatus;
        private bool _isLoaderActive;
        private bool _isLoaderInitialising;
        private ARSession _session;
        private GameObject _sessionOriginObject;
        private bool _tryInitializeLoader;
        private bool _tryShutdownLoader;
        internal UnityEvent OnOpenXRAvailable;
        internal UnityEvent OnOpenXRStarted;
        internal UnityEvent OnOpenXRStarting;
        internal UnityEvent OnOpenXRStopped;
        internal UnityEvent OnOpenXRStopping;
        internal UnityEvent OnOpenXRUnavailable;

        [Header("Optional")]
        [Tooltip("The Snapdragon Spaces Services application requires the 'Display over other apps' permission to be allowed in order to render Dual Render Fusion applications correctly on the phone and the headset at the same time." +
            "\n\nBy setting a provider here, a developer can fully control the text which will be displayed to the user by the pop-up dialog prompt (e.g. for localisation)." +
            "\nA provider is a simple component which must be implemented by each developer according to the demands of their localisation toolchain." +
            "\n\nIf no provider is given, the following text is used:" +
            "\nTitle: \"OpenXR Runtime permissions\"\n" +
            "Message: \"The 'Display over other apps' permission is required for the OpenXR runtime to render XR content. Select 'Configure' to grant this permission manually by selecting 'Snapdragon Spaces Services' from the list shown.\"\n" +
            "PositiveButtonText: \"Configure\"\n" +
            "NegativeButtonText: \"Not Now\"")]
        public SimpleDialogOptionsProvider CannotDisplayOverlayDialogOptionsProvider;

        [Tooltip("The Snapdragon Spaces Services application requires 'Camera' permission to be allowed in order to render Dual Render Fusion applications correctly on the phone and the headset at the same time." +
            "\n\nBy setting a provider here, a developer can fully control the text which will be displayed to the user by the pop-up dialog prompt (e.g. for localisation)." +
            "\nA provider is a simple component which must be implemented by each developer according to the demands of their localisation toolchain." +
            "\n\nIf no provider is given, the following text is used:" +
            "\nTitle: \"Snapdragon Spaces Services permissions\"\n" +
            "Message: \"Camera permissions for the OpenXR runtime are not granted. Some features might not work. Would you like to grant the camera permissions now? If you select yes, this application will close and you will need to re-start it.\"\n" +
            "PositiveButtonText: \"Yes\"\n" +
            "NegativeButtonText: \"Not Now\"")]
        public SimpleDialogOptionsProvider RuntimeCameraPermissionsDialogOptionsProvider;


        private void Awake()
        {
            if (Instance == null)
            {
                Instance = this;
            }
            else
            {
                Destroy(this.gameObject);
            }

            DontDestroyOnLoad(this.gameObject);
            _sessionOriginObject = OriginLocationUtility.GetOriginTransform(true).gameObject;
            _session = FindObjectOfType<ARSession>(true);
            RegisterForGlassConnectionEvents();
            OpenXRRuntime.wantsToQuit += OnOpenXRRuntimeWantsToQuit;
            OpenXRRuntime.wantsToRestart += OnOpenXRRuntimeWantsToRestart;
        }

        private void Start()
        {
            if (!IsRuntimeInstalled())
            {
#if !UNITY_EDITOR
                Debug.LogError("DynamicOpenXRLoader - Runtime is not installed");
                DynamicLoaderMessage?.Invoke(OpenXRState.OpenXRLoaderFail, DynamicLoaderError.NoRuntimeInstalled);
                return;
#endif
            }

            BaseRuntimeFeature baseRuntimeFeature = OpenXRSettings.Instance.GetFeature<BaseRuntimeFeature>();
            if (!baseRuntimeFeature.CheckServicesOverlayPermissions())
            {
#if !UNITY_EDITOR
                Debug.LogError("DynamicOpenXRLoader - Snapdragon Spaces Services application is not allowed to 'Display over other apps'");
                BroadcastOpenXRState(OpenXRState.OpenXRLoaderFail, DynamicLoaderError.CannotDisplayOverlay);
#endif
            }
        }

        private void OnEnable()
        {
            if (AutoManageXRCamera)
            {
                SetSessionOriginActive(false);
            }

            BroadcastXrAvailability();
        }

        private void OnDestroy()
        {
            if (Instance != this)
            {
                return;
            }

            if (_glassStatus != null)
            {
                _glassStatus.OnConnected.RemoveListener(OnGlassesConnected);
                _glassStatus.OnDisconnected.RemoveListener(OnGlassesDisconnected);
            }

            OpenXRRuntime.wantsToQuit -= OnOpenXRRuntimeWantsToQuit;
            OpenXRRuntime.wantsToRestart -= OnOpenXRRuntimeWantsToRestart;

            ChangeSecondDisplayStack(false);

            TryDeinitializeLoader();
        }

        private void OnApplicationPause(bool pauseStatus)
        {
            // if the application is resuming, but openXr is not active, then we should do nothing.
            if (!pauseStatus && !(_isLoaderActive && AreSubsystemsRunning))
            {
                return;
            }

            ChangeSecondDisplayStack(!pauseStatus);
        }

        internal void RegisterForGlassConnectionEvents()
        {
            _glassStatus = SpacesGlassStatus.Instance;

            _glassStatus.OnConnected.AddListener(OnGlassesConnected);
            _glassStatus.OnDisconnected.AddListener(OnGlassesDisconnected);
        }

        public void StartOpenXR()
        {
            BroadcastXrAvailability();
            if (_glassStatus.GlassConnectionState != SpacesGlassStatus.ConnectionState.Connected)
            {
                Debug.LogWarning("Attempt to start openxr without a valid glass connection");
                return;
            }

            ChangeSecondDisplayStack(true);

            // Attempting to start without the 'Display over other apps' permission can happen automatically if the permission has not been granted and the user connects the glasses
            // before the permissions have been granted e.g the permission request popup dialog was created and the user is reading it.
            // Setting the correct permission will forcibly exit the application, so this check prevents launching openXr while they have not correctly set the permission.
            // In any case if the user refuses to grant the permission, then launching xr content is a bad idea as it will hide any fusion content.
            BaseRuntimeFeature baseRuntimeFeature = OpenXRSettings.Instance.GetFeature<BaseRuntimeFeature>();
            if (!baseRuntimeFeature.CheckServicesOverlayPermissions())
            {
                Debug.LogWarning("Attempt to start openxr without 'Display over other apps' permission. Cannot render successfully on phone if this proceeds. Not launching");
                // This will retrigger the request to grant the permissions in case the user selected 'Not Now' earlier and then plugged in glasses anyway.
                BroadcastOpenXRState(OpenXRState.OpenXRLoaderFail, DynamicLoaderError.CannotDisplayOverlay);
                return;
            }

            // Checks if there in an enabled feature that requires runtime camera permissions and if the runtime camera permissions are not enabled.
            if (baseRuntimeFeature.CheckSpacesFeaturesRuntimeCameraPermission() && !baseRuntimeFeature.CheckServicesCameraPermissions())
            {
                baseRuntimeFeature.RequestCameraPermissions(RuntimeCameraPermissionsDialogOptionsProvider?.GetDialogOptions() ?? null);
            }

            if (!_isLoaderActive)
            {
                StartCoroutine(TryInitializeLoader());
            }
            else
            {
                TryStartSubsystems();
            }
        }

        public void StopOpenXR(bool deinitializeLoader = false)
        {
            if (_isLoaderActive)
            {
                if (deinitializeLoader)
                {
                    TryDeinitializeLoader();
                }
                else
                {
                    TryStopSubsystems();
                }
            }

            ChangeSecondDisplayStack(false);

            BroadcastXrAvailability();
        }

        internal void BroadcastXrAvailability()
        {
#if !UNITY_EDITOR
            if (_glassStatus.GlassConnectionState == SpacesGlassStatus.ConnectionState.Disconnected)
            {
                BroadcastOpenXRState(OpenXRState.OpenXRUnavailable, DynamicLoaderError.OpenXRNotSupported);
            }
            else if (_glassStatus.GlassConnectionState == SpacesGlassStatus.ConnectionState.Connected)
            {
                BroadcastOpenXRState(OpenXRState.OpenXRAvailable);
            }
#endif
        }

        /// <summary>
        ///     Prevents openxr failures from killing the entire application
        /// </summary>
        /// <returns>false to prevent unity from closing in the event of openxr errors</returns>
        private bool OnOpenXRRuntimeWantsToQuit()
        {
            return false;
        }

        /// <summary>
        ///     Prevents openxr from restarting
        /// </summary>
        /// <returns>false to prevent openxr from restarting</returns>
        private bool OnOpenXRRuntimeWantsToRestart()
        {
            return false;
        }

        private void OnGlassesDisconnected()
        {
            Debug.Log("DynamicOpenXRLoader::OnGlassesDisconnected()");
            if (_autoShutdownXROnDisplayDisconnected)
            {
                Debug.Log("DynamicOpenXRLoader::OnGlassesDisconnected() Going to StopOpenXR");
                StopOpenXR(_autoShutdownXROnDisplayDisconnected);
            }

            Debug.Log("DynamicOpenXRLoader::OnGlassesDisconnected() Done");
        }

        private void OnGlassesConnected()
        {
            Debug.Log("DynamicOpenXRLoader::OnGlassesConnected()");
            if (AutoStartXROnDisplayConnected)
            {
                Debug.Log("DynamicOpenXRLoader::OnGLassesConnected() Going to startOpenXR");
                StartOpenXR();
                Canvas.ForceUpdateCanvases();
            }

            Debug.Log("DynamicOpenXRLoader::OnGLassesConnected() Done");
        }

        private void ChangeSecondDisplayStack(bool doPause)
        {
#pragma warning disable CS0162
            // if fusion is not enabled never launch the drf empty second screen activity
            if (!OpenXRSettings.Instance.GetFeature<FusionFeature>()?.enabled ?? false)
            {
                return;
            }

            try {
                var activity = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity");
                //var context = activity.Call<AndroidJavaObject>("getApplicationContext");
                AndroidJavaClass drfEmptySecondScreenActivity = null;
                try
                {
                    drfEmptySecondScreenActivity = new AndroidJavaClass("com.qualcomm.snapdragon.spaces.helpers.DRFEmptySecondScreenActivity");
                }
                catch (Exception e)
                {
                    Debug.Log("Could not setup 2nd display Empty Activity. " + e);
                }

                if (drfEmptySecondScreenActivity != null && doPause)
                {
                    drfEmptySecondScreenActivity.CallStatic("TryStartThisActivityOnSecondScreen", activity);
                }
                else if (drfEmptySecondScreenActivity != null && !doPause)
                {
                    drfEmptySecondScreenActivity.CallStatic("FinishDRFEmptyActivity");
                }
            }
            catch (Exception e) {
                Debug.Log("Could not alter 2nd display for DRF application: " + e);
            }
#pragma warning restore CS0162
        }

        private IEnumerator TryInitializeLoader()
        {
            if (_isLoaderInitialising)
            {
                yield break;
            }

            _isLoaderInitialising = true;

            yield return null;

            XRManagerSettings manager = XRGeneralSettings.Instance.Manager;
            yield return StartCoroutine(manager.InitializeLoader());

            while (!manager.isInitializationComplete)
            {
                yield return new WaitForEndOfFrame();
            }

            yield return new WaitForEndOfFrame();

            if (manager.activeLoader)
            {
                BroadcastOpenXRState(OpenXRState.OpenXRLoaderInit);
                _isLoaderActive = true;
                TryStartSubsystems();
            }
            else
            {
                DynamicLoaderMessage?.Invoke(OpenXRState.OpenXRLoaderFail, DynamicLoaderError.FailedToInitialize);
            }

            yield return null;

            _isLoaderInitialising = false;
        }

        private void TryStartSubsystems()
        {
            if (AreSubsystemsRunning)
            {
                return;
            }

            BroadcastOpenXRState(OpenXRState.OpenXRStarting);
            XRManagerSettings manager = XRGeneralSettings.Instance.Manager;
            manager.StartSubsystems();
            AreSubsystemsRunning = true;

            if (AutoManageXRCamera)
            {
                SetSessionOriginActive(true);
            }

            BroadcastOpenXRState(OpenXRState.OpenXRStarted);
        }

        private void TryStopSubsystems()
        {
            if (!AreSubsystemsRunning)
            {
                return;
            }

            BroadcastOpenXRState(OpenXRState.OpenXRStopping);

            XRManagerSettings manager = XRGeneralSettings.Instance.Manager;
            manager.StopSubsystems();
            AreSubsystemsRunning = false;

            BroadcastOpenXRState(OpenXRState.OpenXRStopped);

            if (AutoManageXRCamera)
            {
                SetSessionOriginActive(false);
            }
        }

        private void TryDeinitializeLoader()
        {
            if (!AreSubsystemsRunning)
            {
                return;
            }

            BroadcastOpenXRState(OpenXRState.OpenXRStopping);

            XRManagerSettings manager = XRGeneralSettings.Instance.Manager;
            manager.DeinitializeLoader();
            AreSubsystemsRunning = false;

            BroadcastOpenXRState(OpenXRState.OpenXRStopped);

            if (AutoManageXRCamera)
            {
                SetSessionOriginActive(false);
            }

            _isLoaderActive = false;
        }

        private void BroadcastOpenXRState(OpenXRState state, DynamicLoaderError error = DynamicLoaderError.None)
        {
            DynamicLoaderMessage?.Invoke(state, error);
            switch (state)
            {
                case OpenXRState.OpenXRAvailable:
                    OnOpenXRAvailable?.Invoke();
                    break;
                case OpenXRState.OpenXRUnavailable:
                    OnOpenXRUnavailable?.Invoke();
                    break;
                case OpenXRState.OpenXRStarting:
                    OnOpenXRStarting?.Invoke();
                    break;
                case OpenXRState.OpenXRStopping:
                    OnOpenXRStopping?.Invoke();
                    break;
                case OpenXRState.OpenXRStarted:
                    OnOpenXRStarted?.Invoke();
                    break;
                case OpenXRState.OpenXRStopped:
                    OnOpenXRStopped?.Invoke();
                    break;
                case OpenXRState.OpenXRLoaderFail:
                    if (error == DynamicLoaderError.CannotDisplayOverlay)
                    {
                        BaseRuntimeFeature baseRuntimeFeature = OpenXRSettings.Instance.GetFeature<BaseRuntimeFeature>();
                        baseRuntimeFeature.RequestServicesOverlayPermissions(CannotDisplayOverlayDialogOptionsProvider?.GetDialogOptions() ?? null);
                    }
                    break;
            }
        }

        internal bool IsRuntimeInstalled()
        {
#if UNITY_EDITOR
            return false;
#endif

#pragma warning disable CS0162
            var activity = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity");
            var context = activity.Call<AndroidJavaObject>("getApplicationContext");
            AndroidJavaClass runtimeChecker = null;
            try
            {
                runtimeChecker = new AndroidJavaClass("com.qualcomm.snapdragon.spaces.serviceshelper.RuntimeChecker");
            }
            catch (Exception e)
            {
                Debug.Log("Could not find services helper. Looking for unity services helper. " + e);
                try
                {
                    runtimeChecker = new AndroidJavaClass("com.qualcomm.snapdragon.spaces.unityserviceshelper.RuntimeChecker");
                }
                catch (Exception e2)
                {
                    Debug.Log("Could not find unity services helper. " + e2);
                }
            }

            if (runtimeChecker != null)
            {
                return runtimeChecker.CallStatic<bool>("CheckInstalledWithDialog", activity, context, null);
            }

            return false;
#pragma warning restore CS0162
        }

        /// <summary>
        ///     When called, sets the active state of the GameObject for the session origin (ARSessionOrigin or XROrigin).
        /// </summary>
        /// <param name="shouldBeActive">
        ///     Active state of the GameObject for the session origin.
        ///     @SpacesGlassStatus.ConnectionState should be verified before making the session object active. Making the session
        ///     origin active without glasses connected can mean that there is nowhere to display an XR Camera.
        /// </param>
        public void SetSessionOriginActive(bool shouldBeActive)
        {
#if !UNITY_EDITOR
            if (_sessionOriginObject != null)
            {
                _sessionOriginObject.SetActive(shouldBeActive);
            }

            if (_session != null)
            {
                _session.gameObject.SetActive(shouldBeActive);
            }
#endif
        }
    }
}
