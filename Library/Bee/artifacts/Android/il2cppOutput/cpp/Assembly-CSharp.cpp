#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>
struct InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>[]
struct InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
// UnityEngine.XR.ARFoundation.ARAnchor[]
struct ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation[]
struct GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[]
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928;
// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu
struct CanvasControllerButtonMenu_t715AA53946C546C9B6664C8157659607B950A243;
// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion
struct CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87;
// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice
struct CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation
struct CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Qualcomm.Snapdragon.Spaces.FusionLifecycleEvents
struct FusionLifecycleEvents_tCA91A68C6F919D118A3E1CA8CC89A00144767925;
// Qualcomm.Snapdragon.Spaces.Samples.FusionPrefabReferenceHelper
struct FusionPrefabReferenceHelper_tCBF4254883C8C693CD39294E2F09E03410FA93DA;
// Qualcomm.Snapdragon.Spaces.Samples.FusionSceneManager
struct FusionSceneManager_tDC7F3BCD1C50C5BD6ED6BB6E0E3E1B05F9CA2452;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton
struct GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507;
// Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation
struct GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323;
// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NextScene
struct NextScene_t59FCDF49C09F996737601AEC20A6CC2955743B8F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler
struct TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower
struct XRCameraPoseFollower_t09D012868515CA1D1095B7739E563C8E223E7B75;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5
struct U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C;
// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened
struct PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// NextScene/<DelayNextScene>d__1
struct U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24;
IL2CPP_EXTERN_C String_t* _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral3DEB08AB3020EE7584E18061AD7D0E17BB93CADC;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE33C30634CAA2F8654AB666FD5ECDFB0ED4D6D;
IL2CPP_EXTERN_C String_t* _stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C;
IL2CPP_EXTERN_C String_t* _stringLiteral94ECF857C1EFD5F738A63C310E08104353849CAC;
IL2CPP_EXTERN_C String_t* _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567;
IL2CPP_EXTERN_C String_t* _stringLiteralD852AF62343C34CB53423C4F06C8FF95C37AE23D;
IL2CPP_EXTERN_C String_t* _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D;
IL2CPP_EXTERN_C const RuntimeMethod* ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432_m3957D0D8F6F298173F867E33A3E5ED0F9A591F85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_AddDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mC9F94C406C1E72A1F2A0E288A5FB41B0D9AD2819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mD9F4E94809F62B1BB1A564E4CA4202EB386787CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_mB3F24654B9B59B7CF50BEBC4057184C34B7F9F30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m37257717947270E998846FA705C924152D249FA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisGyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323_mF63F123F5457E0476E3C7EF4295737C4449D210D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayNextSceneU3Ed__1_System_Collections_IEnumerator_Reset_mC23E1BC284AE36FA430EE46EECA055271236E1F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGyroResetRepeatU3Ed__5_System_Collections_IEnumerator_Reset_m7F36D7058460076D1F14364FCE7BA655665F1CBF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARAnchorU5BU5D_t589CB7678527B30DBFABED0E377BC500C9D3454A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E  : public RuntimeObject
{
	// System.Int32 UnityEngine.Gyroscope::m_GyroIndex
	int32_t ___m_GyroIndex_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5
struct U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C  : public RuntimeObject
{
	// System.Int32 Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::<>4__this
	GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* ___U3CU3E4__this_2;
};

// NextScene/<DelayNextScene>d__1
struct U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C  : public RuntimeObject
{
	// System.Int32 NextScene/<DelayNextScene>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NextScene/<DelayNextScene>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>
struct Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ____current_3;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>
struct Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Index
	int32_t ___m_Index_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>
struct Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Index
	int32_t ___m_Index_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Int32>>
struct InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF* ___additionalValues_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>
struct ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC 
{
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs::<plane>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_pinvoke
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_com
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// CanvasControllerCompanionInputDeviceState
struct CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95 
{
	// System.Int32 CanvasControllerCompanionInputDeviceState::buttons
	int32_t ___buttons_0;
	// UnityEngine.Vector2 CanvasControllerCompanionInputDeviceState::touchpadPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchpadPosition_1;
	// UnityEngine.Vector3 CanvasControllerCompanionInputDeviceState::devicePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_2;
	// UnityEngine.Quaternion CanvasControllerCompanionInputDeviceState::deviceRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_3;
	// System.Int32 CanvasControllerCompanionInputDeviceState::trackingState
	int32_t ___trackingState_4;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns_0;
};

struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kVersionKey_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_40;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::m_ByteOffset
	uint32_t ___m_ByteOffset_41;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_42;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_43;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInvalid
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInvalid_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_32;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_34;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_35;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_36;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_37;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatPose
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatPose_38;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>
struct Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___value_1;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_CachedValueIsStale
	bool ___m_CachedValueIsStale_18;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_UnprocessedCachedValueIsStale
	bool ___m_UnprocessedCachedValueIsStale_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_20;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_21;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.InputControl::m_OptimizedControlDataType
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType_23;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074  : public MulticastDelegate_t
{
};

// UnityEngine.InputSystem.InputControl`1<System.Int32>
struct InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	int32_t ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	int32_t ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	float ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	float ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_27;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_28;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_29;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_30;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_31;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_32;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_33;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_34;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_35;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_36;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_37;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_38;
	// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[] UnityEngine.InputSystem.InputDevice::m_ControlTreeNodes
	ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27* ___m_ControlTreeNodes_39;
	// System.UInt16[] UnityEngine.InputSystem.InputDevice::m_ControlTreeIndices
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_ControlTreeIndices_40;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened
struct PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9  : public MulticastDelegate_t
{
};

// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7  : public InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A
{
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_30;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_31;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_32;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_33;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_34;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_35;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_36;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_37;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_38;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice
struct CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.ButtonControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::<buttonMenu>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonMenuU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.ButtonControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::<touchpadClick>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CtouchpadClickU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.Vector2Control Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::<touchpadPosition>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CtouchpadPositionU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.Vector3Control Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::<devicePosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CdevicePositionU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.QuaternionControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::<deviceRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CdeviceRotationU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.IntegerControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::<trackingState>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CtrackingStateU3Ek__BackingField_49;
};

// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB  : public InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1  : public InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_29;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<z>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CzU3Ek__BackingField_30;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<w>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CwU3Ek__BackingField_31;
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432  : public InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_29;
};

// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A  : public InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_29;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<z>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CzU3Ek__BackingField_30;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
};

// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ARFeatheredPlaneMeshVisualizer::m_FeatheringWidth
	float ___m_FeatheringWidth_4;
	// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer ARFeatheredPlaneMeshVisualizer::m_PlaneMeshVisualizer
	ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* ___m_PlaneMeshVisualizer_7;
	// UnityEngine.XR.ARFoundation.ARPlane ARFeatheredPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
	// UnityEngine.Material ARFeatheredPlaneMeshVisualizer::m_FeatheredPlaneMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_FeatheredPlaneMaterial_9;
};

struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_FeatheringUVs
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_FeatheringUVs_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_Vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_Vertices_6;
};

// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::<mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CmeshU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_TrackingStateVisibilityThreshold
	int32_t ___m_TrackingStateVisibilityThreshold_5;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_HideSubsumed
	bool ___m_HideSubsumed_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_InitialLineWidthMultiplier
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_InitialLineWidthMultiplier_7;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AnchorCreator
struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject AnchorCreator::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_4;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> AnchorCreator::m_AnchorPoints
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___m_AnchorPoints_6;
	// UnityEngine.XR.ARFoundation.ARRaycastManager AnchorCreator::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_7;
	// UnityEngine.XR.ARFoundation.ARAnchorManager AnchorCreator::m_AnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___m_AnchorManager_8;
	// UnityEngine.XR.ARFoundation.ARPlaneManager AnchorCreator::m_PlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___m_PlaneManager_9;
};

struct AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> AnchorCreator::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_5;
};

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF  : public AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_39;
};

struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_StaticFields
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_40;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_41;
};

// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion
struct CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::OnTouchpadEnd
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnTouchpadEnd_4;
	// CanvasControllerCompanionInputDeviceState Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::deviceState
	CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95 ___deviceState_5;
	// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::inputDevice
	CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* ___inputDevice_6;
};

// Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation
struct CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::cube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cube_4;
	// UnityEngine.MeshRenderer Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_5;
};

// Qualcomm.Snapdragon.Spaces.Samples.FusionPrefabReferenceHelper
struct FusionPrefabReferenceHelper_tCBF4254883C8C693CD39294E2F09E03410FA93DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Qualcomm.Snapdragon.Spaces.Samples.FusionPrefabReferenceHelper::FusionPointer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FusionPointer_4;
	// UnityEngine.InputSystem.InputActionReference Qualcomm.Snapdragon.Spaces.Samples.FusionPrefabReferenceHelper::SwitchInputAction
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___SwitchInputAction_5;
	// Qualcomm.Snapdragon.Spaces.FusionLifecycleEvents Qualcomm.Snapdragon.Spaces.Samples.FusionPrefabReferenceHelper::FusionLifecycleEventsReference
	FusionLifecycleEvents_tCA91A68C6F919D118A3E1CA8CC89A00144767925* ___FusionLifecycleEventsReference_6;
};

// Qualcomm.Snapdragon.Spaces.Samples.FusionSceneManager
struct FusionSceneManager_tDC7F3BCD1C50C5BD6ED6BB6E0E3E1B05F9CA2452  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation
struct GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::xrCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___xrCamera_4;
	// UnityEngine.GameObject Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::controllerRepresentation
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___controllerRepresentation_5;
	// UnityEngine.Vector3 Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::rotationRate
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationRate_6;
};

// NextScene
struct NextScene_t59FCDF49C09F996737601AEC20A6CC2955743B8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler
struct TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::inputDevice
	CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* ___inputDevice_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower
struct XRCameraPoseFollower_t09D012868515CA1D1095B7739E563C8E223E7B75  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::TrackPosition
	bool ___TrackPosition_4;
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::TrackRotation
	bool ___TrackRotation_5;
	// UnityEngine.Vector3 Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::PositionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionOffset_6;
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::UsePositionOffset
	bool ___UsePositionOffset_7;
	// UnityEngine.Camera Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::xrCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___xrCamera_8;
	// UnityEngine.Transform Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::_rotationTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____rotationTransform_9;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103  : public SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06  : public ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B
{
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};

// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928  : public ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* ___planesChanged_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu
struct CanvasControllerButtonMenu_t715AA53946C546C9B6664C8157659607B950A243  : public Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098
{
	// Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu::inputDevice
	CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* ___inputDevice_21;
};

// Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton
struct GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507  : public Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098
{
	// Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation[] Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::gyroToRotations
	GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* ___gyroToRotations_21;
	// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::repeatReset
	bool ___repeatReset_22;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation[]
struct GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D  : public RuntimeArray
{
	ALIGN_FIELD (8) GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* m_Items[1];

	inline GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// TDevice UnityEngine.InputSystem.InputSystem::GetDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputSystem_GetDevice_TisRuntimeObject_m22FD8A607B43EEC99A8B28AC860513CF017E4C09_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueStateEvent<CanvasControllerCompanionInputDeviceState>(UnityEngine.InputSystem.InputDevice,TState,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_mB3F24654B9B59B7CF50BEBC4057184C34B7F9F30_gshared (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95 ___state1, double ___time2, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<System.Object>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RegisterLayout_TisRuntimeObject_m813B86BCE0AFC470691B88D57FB3281A47DF4913_gshared (String_t* ___name0, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___matches1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<TValue> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94 ReadOnlyArray_1_GetEnumerator_mE43A032C7C67896D9F8377C6C1C863C22F3044B6_gshared (ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m041721B53AC187277BACB4EA9C86E299322EB0AB_gshared (Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mC38F33A423715DE1D9EAD3EADE1C8C03C52E4465_gshared (Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m95272BAC87E97D7B862DB72A8639565003BD244B_gshared (Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94* __this, const RuntimeMethod* method) ;
// TDevice UnityEngine.InputSystem.InputSystem::AddDevice<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputSystem_AddDevice_TisRuntimeObject_m14C010215A2038F4F2CE809FFDD57319F89A30F9_gshared (String_t* ___name0, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;

// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::GetEnumerator()
inline Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::Dispose()
inline void Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3 (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::get_Current()
inline ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::MoveNext()
inline bool Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Clear()
inline void List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARAnchorManager>()
inline ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::.ctor()
inline void List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4 (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARRaycastHit::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3 (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneManager::GetPlane(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE (ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___trackableId0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARAnchor UnityEngine.XR.ARFoundation.ARAnchorManager::AttachAnchor(UnityEngine.XR.ARFoundation.ARPlane,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* __this, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___plane0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::Add(T)
inline void List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* __this, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*, ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer>()
inline ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlane>()
inline ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1 (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARPlane::add_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARPlane::remove_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::get_mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) ;
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
inline int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Mesh::GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___channel0, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___uvs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, bool ___markNoLongerReadable0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Collections.IEnumerator NextScene::DelayNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NextScene_DelayNextScene_m150B5F6294F32E3300E2280720E3AC26F5FBAB55 (NextScene_t59FCDF49C09F996737601AEC20A6CC2955743B8F* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void NextScene/<DelayNextScene>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayNextSceneU3Ed__1__ctor_m134456FC71F54F94CFA5F079EB25DDE996BB8BD4 (U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.FourCC::.ctor(System.Char,System.Char,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FourCC__ctor_mFE3A3F80C6900CD18CB9BDD3C9B604823F2E791F (FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED* __this, Il2CppChar ___a0, Il2CppChar ___b1, Il2CppChar ___c2, Il2CppChar ___d3, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.FourCC CanvasControllerCompanionInputDeviceState::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED CanvasControllerCompanionInputDeviceState_get_format_m5F93BBFEB9EBBB16F01A9CBD2D3B2893503A3ABE (CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_OnPointerDown_m4425D3C7641AAD2430A7E666F35047E2F3B623D3 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::SendMenuButtonEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion_SendMenuButtonEvent_m3BD627E7224A9EC49A47F2A20D2CE7A0A3AC4DFE (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, int32_t ___phase0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_OnPointerUp_mF7B6987EE86DD7079DDA835339A17BCFC6E7A4C9 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button__ctor_m0A1FC265F589989085C1909BC8D93E33A698D8E5 (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// TDevice UnityEngine.InputSystem.InputSystem::GetDevice<Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice>()
inline CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mD9F4E94809F62B1BB1A564E4CA4202EB386787CB (const RuntimeMethod* method)
{
	return ((  CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* (*) (const RuntimeMethod*))InputSystem_GetDevice_TisRuntimeObject_m22FD8A607B43EEC99A8B28AC860513CF017E4C09_gshared)(method);
}
// System.Void UnityEngine.InputSystem.InputSystem::QueueStateEvent<CanvasControllerCompanionInputDeviceState>(UnityEngine.InputSystem.InputDevice,TState,System.Double)
inline void InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_mB3F24654B9B59B7CF50BEBC4057184C34B7F9F30 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95 ___state1, double ___time2, const RuntimeMethod* method)
{
	((  void (*) (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*, CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95, double, const RuntimeMethod*))InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_mB3F24654B9B59B7CF50BEBC4057184C34B7F9F30_gshared)(___device0, ___state1, ___time2, method);
}
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m37257717947270E998846FA705C924152D249FA6 (String_t* ___name0, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C, const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m813B86BCE0AFC470691B88D57FB3281A47DF4913_gshared)(___name0, ___matches1, method);
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputSystem::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA InputSystem_get_devices_m92D52284ABC0BCE6CF46CB98EB870F2AA3890BF8 (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<TValue> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>::GetEnumerator()
inline Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C (ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B (*) (ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mE43A032C7C67896D9F8377C6C1C863C22F3044B6_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::Dispose()
inline void Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B*, const RuntimeMethod*))Enumerator_Dispose_m041721B53AC187277BACB4EA9C86E299322EB0AB_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::get_Current()
inline InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945 (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* (*) (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B*, const RuntimeMethod*))Enumerator_get_Current_mC38F33A423715DE1D9EAD3EADE1C8C03C52E4465_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B*, const RuntimeMethod*))Enumerator_MoveNext_m95272BAC87E97D7B862DB72A8639565003BD244B_gshared)(__this, method);
}
// TDevice UnityEngine.InputSystem.InputSystem::AddDevice<Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice>(System.String)
inline CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* InputSystem_AddDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mC9F94C406C1E72A1F2A0E288A5FB41B0D9AD2819 (String_t* ___name0, const RuntimeMethod* method)
{
	return ((  CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* (*) (String_t*, const RuntimeMethod*))InputSystem_AddDevice_TisRuntimeObject_m14C010215A2038F4F2CE809FFDD57319F89A30F9_gshared)(___name0, method);
}
// System.Void UnityEngine.InputSystem.InputControl::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_FinishSetup_m46B682B124C6E127183D19E1BA86E966472C7C15 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.ButtonControl>(System.String)
inline ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___path0, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_buttonMenu(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_buttonMenu_m4963BD0C0E36148C921B8B5DA270E3521E9708C6_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___value0, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_touchpadClick(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_touchpadClick_mE382CCF5D7FF2F04BAFBF34EAE6B31A6F9429546_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___value0, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector2Control>(System.String)
inline Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* InputControl_GetChildControl_TisVector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432_m3957D0D8F6F298173F867E33A3E5ED0F9A591F85 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___path0, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_touchpadPosition(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_touchpadPosition_m0500DB4258C86297C295479E585A774E64B8FA97_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___value0, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector3Control>(System.String)
inline Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___path0, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_devicePosition_m50D5E9D566E874CF05F9A0D3DCDB61BA723CD147_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___value0, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.QuaternionControl>(System.String)
inline QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___path0, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_deviceRotation_m7BF4E7D2A7D70B0BC93919D34C6B53CC065C8EB2_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___value0, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.IntegerControl>(System.String)
inline IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___path0, method);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_trackingState_m7F07A884822BFEF0552B86CE183599949D85AFB1_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice__ctor_mAA72B9458CD588116A968FE54C2AD2B59C787E51 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_Awake_m55439376D9E09A622C61C4BD7DA413E1E0EFD469 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation>()
inline GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* Object_FindObjectsOfType_TisGyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323_mF63F123F5457E0476E3C7EF4295737C4449D210D (const RuntimeMethod* method)
{
	return ((  GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Collections.IEnumerator Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::GyroResetRepeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GyroResetButton_GyroResetRepeat_mC2DAF9ED53DB76FBFEDB357EE88A5E4B65EFA8D4 (GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* __this, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGyroResetRepeatU3Ed__5__ctor_mCBAB4C7EF700135FD32D55CE95E2516ABE473D3A (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::ResetGyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_ResetGyro_mFFE175C4D3BE450100F516FEE65322FCEAC57D90 (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera Qualcomm.Snapdragon.Spaces.OriginLocationUtility::GetOriginCamera(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* OriginLocationUtility_GetOriginCamera_m86D927D8C7D5D84E68F2E7178921F6DF23BFA8CF (bool ___includeInactive0, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::EnableGyro(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_EnableGyro_mDF565F723E189BAE9C11B0D616C699D2F48239FD (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, bool ___isOn0, const RuntimeMethod* method) ;
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Gyroscope::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gyroscope_get_enabled_m10F5B3F646AB1A6EEE2831010642E9E1E0BCBDB9 (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Gyroscope::get_rotationRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Gyroscope_get_rotationRate_mCF8F2D040B77A6C147092302C80C8DEC39918954 (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::get_RotationRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GyroToRotation_get_RotationRate_mDEA51F1527F8237DBE8DC2B71BC9A9F2E74001CC_inline (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::NormalizedPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7 (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eventPosition0, const RuntimeMethod* method) ;
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::SendTouchpadEvent(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3 (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, int32_t ___phase0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject AnchorCreator::get_AnchorPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AnchorCreator_get_AnchorPrefab_mBBAF7805E9D9F8D79408EE642D153BC76306B25A (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AnchorPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_AnchorPrefab_4;
		return L_0;
	}
}
// System.Void AnchorCreator::set_AnchorPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_set_AnchorPrefab_m53CC9CC3022C713826B44536B48B462C8A1FACFF (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_AnchorPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_AnchorPrefab_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPrefab_4), (void*)L_0);
		return;
	}
}
// System.Void AnchorCreator::RemoveAllAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_RemoveAllAnchors_m6BA302DD9EECA47969FD3F6E5397441DCB09ED21 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var anchor in m_AnchorPoints)
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_0 = __this->___m_AnchorPoints_6;
		NullCheck(L_0);
		Enumerator_t931CB0AD3EC6D604C0583DE600B7B530E43D9054 L_1;
		L_1 = List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502(L_0, List_1_GetEnumerator_mEE1B2EFD76218372C2F754E07BFDE6CA16244502_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3((&V_0), Enumerator_Dispose_m8A7D84A46E830A9A7C690AFD40780E721E0212D3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_2;
				L_2 = Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_inline((&V_0), Enumerator_get_Current_m765B5B047B9C59BB1A6DF6B8B884A1714DF83060_RuntimeMethod_var);
				// Destroy(anchor);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var anchor in m_AnchorPoints)
				bool L_3;
				L_3 = Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F((&V_0), Enumerator_MoveNext_mE9F6469E9C52AF5A301EC8FEF983A3C5BFBF2C4F_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// m_AnchorPoints.Clear();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_4 = __this->___m_AnchorPoints_6;
		NullCheck(L_4);
		List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_inline(L_4, List_1_Clear_m5FC367B31C239426FA8CCE3EEB6D76AA2684BCAC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AnchorCreator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Awake_m8820A3F157354D7EDED7B2D7CE2BFA42844F1F8E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___m_RaycastManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastManager_7), (void*)L_0);
		// m_AnchorManager = GetComponent<ARAnchorManager>();
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_1;
		L_1 = Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907(__this, Component_GetComponent_TisARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_mABCA912A8D3AFCEEA2F2FE0EF30C541DA7DD7907_RuntimeMethod_var);
		__this->___m_AnchorManager_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorManager_8), (void*)L_1);
		// m_PlaneManager = GetComponent<ARPlaneManager>();
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_2;
		L_2 = Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF(__this, Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		__this->___m_PlaneManager_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneManager_9), (void*)L_2);
		// m_AnchorPoints = new List<ARAnchor>();
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_3 = (List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53*)il2cpp_codegen_object_new(List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4(L_3, List_1__ctor_m97CA83C0EF5D88B61FDF3CE17A6A4A8677697DD4_RuntimeMethod_var);
		__this->___m_AnchorPoints_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnchorPoints_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void AnchorCreator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator_Update_mA0A8BCCBAB0AE50DB087524E6273D11F1D6456D0 (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* V_3 = NULL;
	ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* V_4 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (Input.touchCount == 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// var touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_1;
		// if (touch.phase != TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		return;
	}

IL_0019:
	{
		// if (m_RaycastManager.Raycast(touch.position, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_3 = __this->___m_RaycastManager_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_3);
		bool L_6;
		L_6 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_3, L_4, L_5, 1, NULL);
		if (!L_6)
		{
			goto IL_00ae;
		}
	}
	{
		// var hitPose = s_Hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_7);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_8;
		L_8 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_7, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_5 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_5), NULL);
		V_1 = L_9;
		// var hitTrackableId = s_Hits[0].trackableId;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = ((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_10);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_11;
		L_11 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_10, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_5 = L_11;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_12;
		L_12 = ARRaycastHit_get_trackableId_m4E510F2C326AFF23086203E4241C8F9B293616C3((&V_5), NULL);
		V_2 = L_12;
		// var hitPlane = m_PlaneManager.GetPlane(hitTrackableId);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_13 = __this->___m_PlaneManager_9;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_14 = V_2;
		NullCheck(L_13);
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_15;
		L_15 = ARPlaneManager_GetPlane_m49FC33F6BC0DCFE67C4FC5F5CEE99CC8A7036FAE(L_13, L_14, NULL);
		V_3 = L_15;
		// var anchor = m_AnchorManager.AttachAnchor(hitPlane, hitPose);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_16 = __this->___m_AnchorManager_8;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_17 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = V_1;
		NullCheck(L_16);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_19;
		L_19 = ARAnchorManager_AttachAnchor_m8FA6B772401F90B38A06F43B8EA1B02EA82FFA75(L_16, L_17, L_18, NULL);
		V_4 = L_19;
		// Instantiate(m_AnchorPrefab, anchor.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___m_AnchorPrefab_4;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_21 = V_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_20, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// if (anchor == null)
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_24 = V_4;
		bool L_25;
		L_25 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00a1;
		}
	}
	{
		// Debug.Log("Error creating anchor.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral849043193B4849A97BE2F08CFC3CAC883A0F096C, NULL);
		return;
	}

IL_00a1:
	{
		// m_AnchorPoints.Add(anchor);
		List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* L_26 = __this->___m_AnchorPoints_6;
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_27 = V_4;
		NullCheck(L_26);
		List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_inline(L_26, L_27, List_1_Add_m9DD96A685E24BAB041179C80B0CF8875AE04426A_RuntimeMethod_var);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void AnchorCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__ctor_m702B01425680D7FD1C9272A423AAF8A913E5476E (AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AnchorCreator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorCreator__cctor_mF5AE519F086E52A01EA091115062D84D9F094F34 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_StaticFields*)il2cpp_codegen_static_fields_for(AnchorCreator_tBBEE94135B5183E0A8EE52FB00513F69C7C980ED_il2cpp_TypeInfo_var))->___s_Hits_5), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::set_featheringWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_set_featheringWidth_mD616A09A3B426EA5DE1FA37334DD194E43EEC110 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_FeatheringWidth = value; }
		float L_0 = ___value0;
		__this->___m_FeatheringWidth_4 = L_0;
		// set { m_FeatheringWidth = value; }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_Awake_mC5DB0414A2514BF4851266C25141C903F0AC57BA (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PlaneMeshVisualizer = GetComponent<ARPlaneMeshVisualizer>();
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0;
		L_0 = Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01(__this, Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		__this->___m_PlaneMeshVisualizer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneMeshVisualizer_7), (void*)L_0);
		// m_FeatheredPlaneMaterial = GetComponent<MeshRenderer>().material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___m_FeatheredPlaneMaterial_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FeatheredPlaneMaterial_9), (void*)L_2);
		// m_Plane = GetComponent<ARPlane>();
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_3;
		L_3 = Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F(__this, Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		__this->___m_Plane_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Plane_8), (void*)L_3);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnEnable_m8781C85CFED871C8A81A5B88DB1031856E0FC9F0 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged += ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnDisable_m2343B05B1A8F14BAD4DD516C584281B66FE6A4E8 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged -= ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::ARPlane_boundaryUpdated(UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC ___eventArgs0, const RuntimeMethod* method) 
{
	{
		// GenerateBoundaryUVs(m_PlaneMeshVisualizer.mesh);
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0 = __this->___m_PlaneMeshVisualizer_7;
		NullCheck(L_0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline(L_0, NULL);
		ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int vertexCount = mesh.vertexCount;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___mesh0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_0, NULL);
		V_0 = L_1;
		// s_FeatheringUVs.Clear();
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_2);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_2, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6(L_3, List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE(L_6, L_7, List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
	}

IL_0029:
	{
		// mesh.GetVertices(s_Vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8 = ___mesh0;
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_9 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_8);
		Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E(L_8, L_9, NULL);
		// Vector3 centerInPlaneSpace = s_Vertices[s_Vertices.Count - 1];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_11, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_10, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_1 = L_13;
		// Vector3 uv = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// float shortestUVMapping = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < vertexCount - 1; i++)
		V_4 = 0;
		goto IL_00b5;
	}

IL_006c:
	{
		// float vertexDist = Vector3.Distance(s_Vertices[i], centerInPlaneSpace);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_14, L_15, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18;
		L_18 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_16, L_17, NULL);
		// float uvMapping = vertexDist / Mathf.Max(vertexDist - featheringWidth, 0.001f);
		float L_19 = L_18;
		float L_20;
		L_20 = ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline(__this, NULL);
		float L_21;
		L_21 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_subtract(L_19, L_20)), (0.00100000005f), NULL);
		V_5 = ((float)(L_19/L_21));
		// uv.x = uvMapping;
		float L_22 = V_5;
		(&V_2)->___x_2 = L_22;
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_23 = V_3;
		float L_24 = V_5;
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00a4;
		}
	}
	{
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_25 = V_5;
		V_3 = L_25;
	}

IL_00a4:
	{
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_26 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		NullCheck(L_26);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_26, L_27, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00b5:
	{
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_30, 1)))))
		{
			goto IL_006c;
		}
	}
	{
		// m_FeatheredPlaneMaterial.SetFloat("_ShortestUVMapping", shortestUVMapping);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___m_FeatheredPlaneMaterial_9;
		float L_32 = V_3;
		NullCheck(L_31);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_31, _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24, L_32, NULL);
		// uv.Set(0, 0, 0);
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_33 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		NullCheck(L_33);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_33, L_34, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// mesh.SetUVs(1, s_FeatheringUVs);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35 = ___mesh0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_36 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_35);
		Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2(L_35, 1, L_36, NULL);
		// mesh.UploadMeshData(false);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37 = ___mesh0;
		NullCheck(L_37);
		Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB(L_37, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__ctor_m9A77651BCAE58AA0B994FFF6C6B63B1CFF2729F6 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// float m_FeatheringWidth = 0.2f;
		__this->___m_FeatheringWidth_4 = (0.200000003f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__cctor_mF4BA6DDB611A3FD966C8B9494AE6B3EB8647CEAD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<Vector3> s_FeatheringUVs = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5), (void*)L_0);
		// static List<Vector3> s_Vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NextScene::LoadNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextScene_LoadNextScene_mCF491D254761B7EE15266F4EDB793F474793C7F7 (NextScene_t59FCDF49C09F996737601AEC20A6CC2955743B8F* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(DelayNextScene());
		RuntimeObject* L_0;
		L_0 = NextScene_DelayNextScene_m150B5F6294F32E3300E2280720E3AC26F5FBAB55(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator NextScene::DelayNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NextScene_DelayNextScene_m150B5F6294F32E3300E2280720E3AC26F5FBAB55 (NextScene_t59FCDF49C09F996737601AEC20A6CC2955743B8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C* L_0 = (U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C*)il2cpp_codegen_object_new(U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDelayNextSceneU3Ed__1__ctor_m134456FC71F54F94CFA5F079EB25DDE996BB8BD4(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void NextScene::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextScene_Update_m5AA5CFFDC6687DDAE51529DE556DDFBE0B431ADD (NextScene_t59FCDF49C09F996737601AEC20A6CC2955743B8F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NextScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextScene__ctor_mF930690F11186753D518C23AF63B16D8CBA87419 (NextScene_t59FCDF49C09F996737601AEC20A6CC2955743B8F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NextScene/<DelayNextScene>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayNextSceneU3Ed__1__ctor_m134456FC71F54F94CFA5F079EB25DDE996BB8BD4 (U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NextScene/<DelayNextScene>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayNextSceneU3Ed__1_System_IDisposable_Dispose_m69E123C79A566CAA19227A73767A67A61F2CCC20 (U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NextScene/<DelayNextScene>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayNextSceneU3Ed__1_MoveNext_mB471E8AC5D6F9D1260517DBB2583C118EF8C063D (U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		// }
		return (bool)0;
	}
}
// System.Object NextScene/<DelayNextScene>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayNextSceneU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m02EA2A07F8CFD7FB61EABFD0D3AA2CCF34D09685 (U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NextScene/<DelayNextScene>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayNextSceneU3Ed__1_System_Collections_IEnumerator_Reset_mC23E1BC284AE36FA430EE46EECA055271236E1F3 (U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayNextSceneU3Ed__1_System_Collections_IEnumerator_Reset_mC23E1BC284AE36FA430EE46EECA055271236E1F3_RuntimeMethod_var)));
	}
}
// System.Object NextScene/<DelayNextScene>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayNextSceneU3Ed__1_System_Collections_IEnumerator_get_Current_m085884E4DA6A10EE21EE1F07B313EDCFA4D85299 (U3CDelayNextSceneU3Ed__1_tB0DF74FE9C58022FA435C379EF7F791582445C3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.Utilities.FourCC CanvasControllerCompanionInputDeviceState::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED CanvasControllerCompanionInputDeviceState_get_format_m5F93BBFEB9EBBB16F01A9CBD2D3B2893503A3ABE (CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* __this, const RuntimeMethod* method) 
{
	{
		// public FourCC format => new FourCC('M', 'Y', 'D', 'V');
		FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED L_0;
		memset((&L_0), 0, sizeof(L_0));
		FourCC__ctor_mFE3A3F80C6900CD18CB9BDD3C9B604823F2E791F((&L_0), ((int32_t)77), ((int32_t)89), ((int32_t)68), ((int32_t)86), /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED CanvasControllerCompanionInputDeviceState_get_format_m5F93BBFEB9EBBB16F01A9CBD2D3B2893503A3ABE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95*>(__this + _offset);
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED _returnValue;
	_returnValue = CanvasControllerCompanionInputDeviceState_get_format_m5F93BBFEB9EBBB16F01A9CBD2D3B2893503A3ABE(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerButtonMenu_OnPointerDown_m840A5F2FCD2556FD5853F2C4E452597100706E08 (CanvasControllerButtonMenu_t715AA53946C546C9B6664C8157659607B950A243* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		Selectable_OnPointerDown_m4425D3C7641AAD2430A7E666F35047E2F3B623D3(__this, L_0, NULL);
		// inputDevice.SendMenuButtonEvent(1);
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_1 = __this->___inputDevice_21;
		NullCheck(L_1);
		CanvasControllerCompanion_SendMenuButtonEvent_m3BD627E7224A9EC49A47F2A20D2CE7A0A3AC4DFE(L_1, 1, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerButtonMenu_OnPointerUp_m202F8AAA1A93170914369ED0EE6DF8D991C70608 (CanvasControllerButtonMenu_t715AA53946C546C9B6664C8157659607B950A243* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		Selectable_OnPointerUp_mF7B6987EE86DD7079DDA835339A17BCFC6E7A4C9(__this, L_0, NULL);
		// inputDevice.SendMenuButtonEvent(0);
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_1 = __this->___inputDevice_21;
		NullCheck(L_1);
		CanvasControllerCompanion_SendMenuButtonEvent_m3BD627E7224A9EC49A47F2A20D2CE7A0A3AC4DFE(L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerButtonMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerButtonMenu__ctor_mF1531A8090CB431F21E431F6FABB04772629398A (CanvasControllerButtonMenu_t715AA53946C546C9B6664C8157659607B950A243* __this, const RuntimeMethod* method) 
{
	{
		Button__ctor_m0A1FC265F589989085C1909BC8D93E33A698D8E5(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion_Awake_mC278F5A7D428A71AF6823F6EA0858A4C3A157959 (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, const RuntimeMethod* method) 
{
	{
		// deviceState = new CanvasControllerCompanionInputDeviceState();
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_0 = (&__this->___deviceState_5);
		il2cpp_codegen_initobj(L_0, sizeof(CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95));
		// deviceState.trackingState = 1;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_1 = (&__this->___deviceState_5);
		L_1->___trackingState_4 = 1;
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::SendTouchpadEvent(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3 (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, int32_t ___phase0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mD9F4E94809F62B1BB1A564E4CA4202EB386787CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_mB3F24654B9B59B7CF50BEBC4057184C34B7F9F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// var bit = 1 << 1;
		V_0 = 2;
		// if (phase != 0)
		int32_t L_0 = ___phase0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// deviceState.buttons |= (ushort)bit;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_1 = (&__this->___deviceState_5);
		int32_t* L_2 = (&L_1->___buttons_0);
		int32_t* L_3 = L_2;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5 = V_0;
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4|((int32_t)(uint16_t)L_5)));
		goto IL_003b;
	}

IL_0018:
	{
		// deviceState.buttons &= (ushort)~bit;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_6 = (&__this->___deviceState_5);
		int32_t* L_7 = (&L_6->___buttons_0);
		int32_t* L_8 = L_7;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = V_0;
		*((int32_t*)L_8) = (int32_t)((int32_t)(L_9&((int32_t)(uint16_t)((~L_10)))));
		// OnTouchpadEnd?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = __this->___OnTouchpadEnd_4;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = L_11;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_0036;
		}
	}
	{
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck(G_B4_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B4_0, NULL);
	}

IL_003b:
	{
		// deviceState.touchpadPosition.x = position.x;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_13 = (&__this->___deviceState_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&L_13->___touchpadPosition_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___position1;
		float L_16 = L_15.___x_0;
		L_14->___x_0 = L_16;
		// deviceState.touchpadPosition.y = position.y;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_17 = (&__this->___deviceState_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&L_17->___touchpadPosition_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___position1;
		float L_20 = L_19.___y_1;
		L_18->___y_1 = L_20;
		// InputSystem.QueueStateEvent(InputSystem.GetDevice<CanvasControllerCompanionInputDevice>(), deviceState);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* L_21;
		L_21 = InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mD9F4E94809F62B1BB1A564E4CA4202EB386787CB(InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mD9F4E94809F62B1BB1A564E4CA4202EB386787CB_RuntimeMethod_var);
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95 L_22 = __this->___deviceState_5;
		InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_mB3F24654B9B59B7CF50BEBC4057184C34B7F9F30(L_21, L_22, (-1.0), InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_mB3F24654B9B59B7CF50BEBC4057184C34B7F9F30_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::SendMenuButtonEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion_SendMenuButtonEvent_m3BD627E7224A9EC49A47F2A20D2CE7A0A3AC4DFE (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, int32_t ___phase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mD9F4E94809F62B1BB1A564E4CA4202EB386787CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_mB3F24654B9B59B7CF50BEBC4057184C34B7F9F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var bit = 1 << 0;
		V_0 = 1;
		// if (phase != 0)
		int32_t L_0 = ___phase0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// deviceState.buttons |= (ushort)bit;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_1 = (&__this->___deviceState_5);
		int32_t* L_2 = (&L_1->___buttons_0);
		int32_t* L_3 = L_2;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5 = V_0;
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4|((int32_t)(uint16_t)L_5)));
		goto IL_002a;
	}

IL_0018:
	{
		// deviceState.buttons &= (ushort)~bit;
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95* L_6 = (&__this->___deviceState_5);
		int32_t* L_7 = (&L_6->___buttons_0);
		int32_t* L_8 = L_7;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = V_0;
		*((int32_t*)L_8) = (int32_t)((int32_t)(L_9&((int32_t)(uint16_t)((~L_10)))));
	}

IL_002a:
	{
		// InputSystem.QueueStateEvent(InputSystem.GetDevice<CanvasControllerCompanionInputDevice>(), deviceState);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* L_11;
		L_11 = InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mD9F4E94809F62B1BB1A564E4CA4202EB386787CB(InputSystem_GetDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mD9F4E94809F62B1BB1A564E4CA4202EB386787CB_RuntimeMethod_var);
		CanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95 L_12 = __this->___deviceState_5;
		InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_mB3F24654B9B59B7CF50BEBC4057184C34B7F9F30(L_11, L_12, (-1.0), InputSystem_QueueStateEvent_TisCanvasControllerCompanionInputDeviceState_t47DD44263E2213F1D87BE34679A257BFC425CB95_mB3F24654B9B59B7CF50BEBC4057184C34B7F9F30_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion_Quit_mD61922341B683D9AC797512BE9A63CF4849651D3 (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRGeneralSettings.Instance.Manager.DeinitializeLoader();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB(L_1, NULL);
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanion__ctor_mEC225A457A6FD4A1C095311237DD9AC835AA6D44 (CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice__cctor_m80BFBB1C78DC9C9D05A7A23E8DA28246158A6C73 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_AddDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mC9F94C406C1E72A1F2A0E288A5FB41B0D9AD2819_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m37257717947270E998846FA705C924152D249FA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B V_1;
	memset((&V_1), 0, sizeof(V_1));
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// InputSystem.RegisterLayout<CanvasControllerCompanionInputDevice>();
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C));
		Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayout_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m37257717947270E998846FA705C924152D249FA6((String_t*)NULL, L_0, InputSystem_RegisterLayout_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_m37257717947270E998846FA705C924152D249FA6_RuntimeMethod_var);
		// foreach (InputDevice inputDevice in InputSystem.devices)
		ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA L_1;
		L_1 = InputSystem_get_devices_m92D52284ABC0BCE6CF46CB98EB870F2AA3890BF8(NULL);
		V_2 = L_1;
		Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B L_2;
		L_2 = ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C((&V_2), ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB((&V_1), Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002f_1;
			}

IL_001f_1:
			{
				// foreach (InputDevice inputDevice in InputSystem.devices)
				InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_3;
				L_3 = Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945((&V_1), Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var);
				// if (inputDevice is CanvasControllerCompanionInputDevice)
				if (!((CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC*)IsInstClass((RuntimeObject*)L_3, CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_il2cpp_TypeInfo_var)))
				{
					goto IL_002f_1;
				}
			}
			{
				// return;
				goto IL_004f;
			}

IL_002f_1:
			{
				// foreach (InputDevice inputDevice in InputSystem.devices)
				bool L_4;
				L_4 = Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC((&V_1), Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// InputSystem.AddDevice<CanvasControllerCompanionInputDevice>();
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* L_5;
		L_5 = InputSystem_AddDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mC9F94C406C1E72A1F2A0E288A5FB41B0D9AD2819((String_t*)NULL, InputSystem_AddDevice_TisCanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC_mC9F94C406C1E72A1F2A0E288A5FB41B0D9AD2819_RuntimeMethod_var);
	}

IL_004f:
	{
		// }
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::get_buttonMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* CanvasControllerCompanionInputDevice_get_buttonMenu_mA9A2FF745F7A2D998385A67E61858E88C5496CD4 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl buttonMenu { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CbuttonMenuU3Ek__BackingField_44;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_buttonMenu(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_buttonMenu_m4963BD0C0E36148C921B8B5DA270E3521E9708C6 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___value0, const RuntimeMethod* method) 
{
	{
		// public ButtonControl buttonMenu { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___value0;
		__this->___U3CbuttonMenuU3Ek__BackingField_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbuttonMenuU3Ek__BackingField_44), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::get_touchpadClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* CanvasControllerCompanionInputDevice_get_touchpadClick_mCF78CAC579365D9AF49FA014251A6644BB234F0B (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl touchpadClick { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CtouchpadClickU3Ek__BackingField_45;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_touchpadClick(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_touchpadClick_mE382CCF5D7FF2F04BAFBF34EAE6B31A6F9429546 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___value0, const RuntimeMethod* method) 
{
	{
		// public ButtonControl touchpadClick { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___value0;
		__this->___U3CtouchpadClickU3Ek__BackingField_45 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtouchpadClickU3Ek__BackingField_45), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector2Control Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::get_touchpadPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* CanvasControllerCompanionInputDevice_get_touchpadPosition_m167B92EA0574BE59615762A9B67A09888B25BFEB (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Control touchpadPosition { get; private set; }
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_0 = __this->___U3CtouchpadPositionU3Ek__BackingField_46;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_touchpadPosition(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_touchpadPosition_m0500DB4258C86297C295479E585A774E64B8FA97 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2Control touchpadPosition { get; private set; }
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_0 = ___value0;
		__this->___U3CtouchpadPositionU3Ek__BackingField_46 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtouchpadPositionU3Ek__BackingField_46), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* CanvasControllerCompanionInputDevice_get_devicePosition_m62D433C415567C6FA7FAC87D144AC9DB87A6D554 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = __this->___U3CdevicePositionU3Ek__BackingField_47;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_devicePosition_m50D5E9D566E874CF05F9A0D3DCDB61BA723CD147 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___value0;
		__this->___U3CdevicePositionU3Ek__BackingField_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdevicePositionU3Ek__BackingField_47), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* CanvasControllerCompanionInputDevice_get_deviceRotation_m318AC016CB049A19B3C114D569FD134F71BD5632 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = __this->___U3CdeviceRotationU3Ek__BackingField_48;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_deviceRotation_m7BF4E7D2A7D70B0BC93919D34C6B53CC065C8EB2 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___value0, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___value0;
		__this->___U3CdeviceRotationU3Ek__BackingField_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdeviceRotationU3Ek__BackingField_48), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* CanvasControllerCompanionInputDevice_get_trackingState_m2E5BD05420D5A1736C2CB29D8943CC76CA063B88 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_0 = __this->___U3CtrackingStateU3Ek__BackingField_49;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_trackingState_m7F07A884822BFEF0552B86CE183599949D85AFB1 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___value0, const RuntimeMethod* method) 
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_0 = ___value0;
		__this->___U3CtrackingStateU3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtrackingStateU3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_FinishSetup_m538873427CBBBFD835528983B0CF8EA13F496D69 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432_m3957D0D8F6F298173F867E33A3E5ED0F9A591F85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DEB08AB3020EE7584E18061AD7D0E17BB93CADC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE33C30634CAA2F8654AB666FD5ECDFB0ED4D6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD852AF62343C34CB53423C4F06C8FF95C37AE23D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		InputControl_FinishSetup_m46B682B124C6E127183D19E1BA86E966472C7C15(__this, NULL);
		// buttonMenu = GetChildControl<ButtonControl>("buttonMenu");
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044(__this, _stringLiteral4EE33C30634CAA2F8654AB666FD5ECDFB0ED4D6D, InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		CanvasControllerCompanionInputDevice_set_buttonMenu_m4963BD0C0E36148C921B8B5DA270E3521E9708C6_inline(__this, L_0, NULL);
		// touchpadClick = GetChildControl<ButtonControl>("touchpadClick");
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_1;
		L_1 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044(__this, _stringLiteralD852AF62343C34CB53423C4F06C8FF95C37AE23D, InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		CanvasControllerCompanionInputDevice_set_touchpadClick_mE382CCF5D7FF2F04BAFBF34EAE6B31A6F9429546_inline(__this, L_1, NULL);
		// touchpadPosition = GetChildControl<Vector2Control>("touchpadPosition");
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_2;
		L_2 = InputControl_GetChildControl_TisVector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432_m3957D0D8F6F298173F867E33A3E5ED0F9A591F85(__this, _stringLiteral3DEB08AB3020EE7584E18061AD7D0E17BB93CADC, InputControl_GetChildControl_TisVector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432_m3957D0D8F6F298173F867E33A3E5ED0F9A591F85_RuntimeMethod_var);
		CanvasControllerCompanionInputDevice_set_touchpadPosition_m0500DB4258C86297C295479E585A774E64B8FA97_inline(__this, L_2, NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_3;
		L_3 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		CanvasControllerCompanionInputDevice_set_devicePosition_m50D5E9D566E874CF05F9A0D3DCDB61BA723CD147_inline(__this, L_3, NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_4;
		L_4 = InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		CanvasControllerCompanionInputDevice_set_deviceRotation_m7BF4E7D2A7D70B0BC93919D34C6B53CC065C8EB2_inline(__this, L_4, NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_5;
		L_5 = InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297_RuntimeMethod_var);
		CanvasControllerCompanionInputDevice_set_trackingState_m7F07A884822BFEF0552B86CE183599949D85AFB1_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::InitializeInPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_InitializeInPlayer_mE41BDA47A12FC2C6B15A1D1842AC32B20C21AA8A (const RuntimeMethod* method) 
{
	{
		// private static void InitializeInPlayer() { }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CanvasControllerCompanionInputDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice__ctor_m557AE522FEAD4D96F612A7BCD70B3D26FAEED494 (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, const RuntimeMethod* method) 
{
	{
		InputDevice__ctor_mAA72B9458CD588116A968FE54C2AD2B59C787E51(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroResetButton_Awake_m9FB20B4063864219F250319AA4E892D014082BA1 (GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisGyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323_mF63F123F5457E0476E3C7EF4295737C4449D210D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		Selectable_Awake_m55439376D9E09A622C61C4BD7DA413E1E0EFD469(__this, NULL);
		// gyroToRotations = FindObjectsOfType<GyroToRotation>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* L_0;
		L_0 = Object_FindObjectsOfType_TisGyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323_mF63F123F5457E0476E3C7EF4295737C4449D210D(Object_FindObjectsOfType_TisGyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323_mF63F123F5457E0476E3C7EF4295737C4449D210D_RuntimeMethod_var);
		__this->___gyroToRotations_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gyroToRotations_21), (void*)L_0);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroResetButton_OnPointerDown_m1D39E336297F715E14F6C9AFE6D8C887C7BBCCAF (GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		Selectable_OnPointerDown_m4425D3C7641AAD2430A7E666F35047E2F3B623D3(__this, L_0, NULL);
		// repeatReset = true;
		__this->___repeatReset_22 = (bool)1;
		// StartCoroutine(GyroResetRepeat());
		RuntimeObject* L_1;
		L_1 = GyroResetButton_GyroResetRepeat_mC2DAF9ED53DB76FBFEDB357EE88A5E4B65EFA8D4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::GyroResetRepeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GyroResetButton_GyroResetRepeat_mC2DAF9ED53DB76FBFEDB357EE88A5E4B65EFA8D4 (GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* L_0 = (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C*)il2cpp_codegen_object_new(U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGyroResetRepeatU3Ed__5__ctor_mCBAB4C7EF700135FD32D55CE95E2516ABE473D3A(L_0, 0, NULL);
		U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroResetButton_OnPointerUp_m38A51F4C5079B471268B9CB23F0369249FFE7529 (GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		Selectable_OnPointerUp_mF7B6987EE86DD7079DDA835339A17BCFC6E7A4C9(__this, L_0, NULL);
		// repeatReset = false;
		__this->___repeatReset_22 = (bool)0;
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroResetButton__ctor_m0F535DB05BB537C40CA80DB9B23008BF3BC8C9FA (GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* __this, const RuntimeMethod* method) 
{
	{
		Button__ctor_m0A1FC265F589989085C1909BC8D93E33A698D8E5(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_Multicast(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* currentDelegate = reinterpret_cast<PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___button0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_Open(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___button0, method);
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenStaticInvoker(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* >::Invoke(__this->___method_ptr_0, method, NULL, ___button0);
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_ClosedStaticInvoker(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___button0);
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenVirtual(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___button0);
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenInterface(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___button0);
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenGenericVirtual(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___button0);
}
void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenGenericInterface(PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___button0);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerActionHappened__ctor_m1D93CEC25A37FA5E1E63C60D15A9D342890DCD67 (PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00_Multicast;
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened::Invoke(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerActionHappened_Invoke_mDFBA71F8135C5F834947336D2C5E9B8A89A8DB00 (PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___button0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened::BeginInvoke(UnityEngine.UI.Button,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PointerActionHappened_BeginInvoke_mBF99CB43EC7DF4FB9DB77FA83F12F3F60B68CA96 (PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___button0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/PointerActionHappened::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerActionHappened_EndInvoke_mF0D9C422E8755DE1C5AFDC7188F4675A6B8D33CE (PointerActionHappened_t5C4FA71DE8DD9357C9E932AA1DE0CDCA6C5544A9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGyroResetRepeatU3Ed__5__ctor_mCBAB4C7EF700135FD32D55CE95E2516ABE473D3A (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGyroResetRepeatU3Ed__5_System_IDisposable_Dispose_mBA0BC8D2D084F3768641947B4F4F15137EEB0A89 (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGyroResetRepeatU3Ed__5_MoveNext_mC3F760122EE581FCC25096714207BC73C0BA1B0F (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* V_1 = NULL;
	GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0059;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0060;
	}

IL_0020:
	{
		// if (gyroToRotations != null)
		GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* L_4 = V_1;
		NullCheck(L_4);
		GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* L_5 = L_4->___gyroToRotations_21;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// foreach (GyroToRotation gyroToRotation in gyroToRotations)
		GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* L_6 = V_1;
		NullCheck(L_6);
		GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* L_7 = L_6->___gyroToRotations_21;
		V_2 = L_7;
		V_3 = 0;
		goto IL_003f;
	}

IL_0033:
	{
		// foreach (GyroToRotation gyroToRotation in gyroToRotations)
		GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		// gyroToRotation.ResetGyro();
		NullCheck(L_11);
		GyroToRotation_ResetGyro_mFFE175C4D3BE450100F516FEE65322FCEAC57D90(L_11, NULL);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003f:
	{
		// foreach (GyroToRotation gyroToRotation in gyroToRotations)
		int32_t L_13 = V_3;
		GyroToRotationU5BU5D_t054399F5CA57DDDCB4412C3F6CB0DDAD4D7A752D* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_0045:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_15 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_15, NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0059:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0060:
	{
		// while (repeatReset)
		GyroResetButton_tD1A8966EE1F79609A1269707DB34CD9DFE3A6507* L_16 = V_1;
		NullCheck(L_16);
		bool L_17 = L_16->___repeatReset_22;
		if (L_17)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGyroResetRepeatU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEEF7731D39D157CAC1C9EB5662463179F25862B4 (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGyroResetRepeatU3Ed__5_System_Collections_IEnumerator_Reset_m7F36D7058460076D1F14364FCE7BA655665F1CBF (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGyroResetRepeatU3Ed__5_System_Collections_IEnumerator_Reset_m7F36D7058460076D1F14364FCE7BA655665F1CBF_RuntimeMethod_var)));
	}
}
// System.Object Qualcomm.Snapdragon.Spaces.Samples.GyroResetButton/<GyroResetRepeat>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGyroResetRepeatU3Ed__5_System_Collections_IEnumerator_get_Current_m87C215DA013CA01878D21D56DC4768F3B201658D (U3CGyroResetRepeatU3Ed__5_t8216B2AE59DDB968486096EB7F951F54BE75D29C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::get_RotationRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GyroToRotation_get_RotationRate_mDEA51F1527F8237DBE8DC2B71BC9A9F2E74001CC (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	{
		// get => rotationRate;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___rotationRate_6;
		return L_0;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::set_RotationRate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_set_RotationRate_mEF60A7D260D8A2E65B0404A92EB9615BAD276379 (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => rotationRate = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___rotationRate_6 = L_0;
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_Awake_m790FF449A9648162619AFF5CD749AD9CC36EE9C9 (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (xrCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___xrCamera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// xrCamera = OriginLocationUtility.GetOriginCamera();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = OriginLocationUtility_GetOriginCamera_m86D927D8C7D5D84E68F2E7178921F6DF23BFA8CF((bool)0, NULL);
		__this->___xrCamera_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrCamera_4), (void*)L_2);
	}

IL_001a:
	{
		// EnableGyro(true);
		GyroToRotation_EnableGyro_mDF565F723E189BAE9C11B0D616C699D2F48239FD(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_Start_m3CA6D7A76225DB4B25E2C30B3395243AB9522D7F (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	{
		// ResetGyro();
		GyroToRotation_ResetGyro_mFFE175C4D3BE450100F516FEE65322FCEAC57D90(__this, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_Update_m114492A32B1BB574C1EAF6D964140E162145C269 (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (Input.gyro.enabled)
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_0;
		L_0 = Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Gyroscope_get_enabled_m10F5B3F646AB1A6EEE2831010642E9E1E0BCBDB9(L_0, NULL);
		if (!L_1)
		{
			goto IL_007d;
		}
	}
	{
		// rotationRate = Input.gyro.rotationRate;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_2;
		L_2 = Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC(NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Gyroscope_get_rotationRate_mCF8F2D040B77A6C147092302C80C8DEC39918954(L_2, NULL);
		__this->___rotationRate_6 = L_3;
		// float rx = -rotationRate.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___rotationRate_6);
		float L_5 = L_4->___x_2;
		V_0 = ((-L_5));
		// float ry = -rotationRate.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___rotationRate_6);
		float L_7 = L_6->___z_4;
		V_1 = ((-L_7));
		// float rz = -rotationRate.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___rotationRate_6);
		float L_9 = L_8->___y_3;
		V_2 = ((-L_9));
		// rotationRate.x = rx;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___rotationRate_6);
		float L_11 = V_0;
		L_10->___x_2 = L_11;
		// rotationRate.y = ry;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___rotationRate_6);
		float L_13 = V_1;
		L_12->___y_3 = L_13;
		// rotationRate.z = rz;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___rotationRate_6);
		float L_15 = V_2;
		L_14->___z_4 = L_15;
		// controllerRepresentation.transform.Rotate(RotationRate);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___controllerRepresentation_5;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = GyroToRotation_get_RotationRate_mDEA51F1527F8237DBE8DC2B71BC9A9F2E74001CC_inline(__this, NULL);
		NullCheck(L_17);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_17, L_18, NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::EnableGyro(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_EnableGyro_mDF565F723E189BAE9C11B0D616C699D2F48239FD (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, bool ___isOn0, const RuntimeMethod* method) 
{
	{
		// Input.gyro.enabled = isOn;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_0;
		L_0 = Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC(NULL);
		bool L_1 = ___isOn0;
		NullCheck(L_0);
		Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::ResetGyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation_ResetGyro_mFFE175C4D3BE450100F516FEE65322FCEAC57D90 (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 forward = xrCamera.transform.forward;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___xrCamera_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_1, NULL);
		V_0 = L_2;
		// forward.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// controllerRepresentation.transform.forward = forward; // rotation = Quaternion.Euler(0, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___controllerRepresentation_5;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.GyroToRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroToRotation__ctor_mB00D894B98DCF8965272E286D4B55A9FBAC0152D (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 rotationRate = new Vector3(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rotationRate_6 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadDragHandler_OnBeginDrag_m7C7864DACF551EAD30EE93B3A890FCD866014DCC (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// inputDevice.SendTouchpadEvent(1, NormalizedPosition(eventData.position));
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_0 = __this->___inputDevice_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7(__this, L_2, NULL);
		NullCheck(L_0);
		CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3(L_0, 1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadDragHandler_OnDrag_mCED6D26962BEC6A1848E5F79324325FFE0B5751F (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// inputDevice.SendTouchpadEvent(2, NormalizedPosition(eventData.position));
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_0 = __this->___inputDevice_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7(__this, L_2, NULL);
		NullCheck(L_0);
		CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3(L_0, 2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadDragHandler_OnEndDrag_m893258B6930F206E2F92CFDE31F318DED9EB292C (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// inputDevice.SendTouchpadEvent(0, NormalizedPosition(eventData.position));
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_0 = __this->___inputDevice_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7(__this, L_2, NULL);
		NullCheck(L_0);
		CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3(L_0, 0, L_3, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadDragHandler_OnPointerDown_m56F614DF9FF8A3595236114F03271DDF92A00A57 (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// inputDevice.SendTouchpadEvent(1, NormalizedPosition(eventData.position));
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_0 = __this->___inputDevice_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7(__this, L_2, NULL);
		NullCheck(L_0);
		CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3(L_0, 1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadDragHandler_OnPointerUp_m16FD6131EAB5CF1C4DA63D64251942247B738BC7 (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// inputDevice.SendTouchpadEvent(0, NormalizedPosition(eventData.position));
		CanvasControllerCompanion_t08C2CA11A0270D580D4BA29E477545B90899ED87* L_0 = __this->___inputDevice_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7(__this, L_2, NULL);
		NullCheck(L_0);
		CanvasControllerCompanion_SendTouchpadEvent_m53485D2FF3EDE51A6F03D62BA5F19F13390FE3C3(L_0, 0, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::NormalizedPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TouchpadDragHandler_NormalizedPosition_mFF22319FD52119CEF7EA58CA72F1E62A000D17A7 (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eventPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// RectTransform rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		// float halfWidth = rectTransform.rect.width / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = L_0;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_3 = L_2;
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_3), NULL);
		V_0 = ((float)(L_3/(2.0f)));
		// float halfHeight = rectTransform.rect.height / 2;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_3 = L_4;
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_3), NULL);
		V_1 = ((float)(L_5/(2.0f)));
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(GetComponent<RectTransform>(), eventPosition,
		//         null, out localizedPosition))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___eventPosition0;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_6, L_7, (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL, (&V_2), NULL);
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// Vector2 normalized = new Vector2(localizedPosition.x / halfWidth, localizedPosition.y / halfHeight);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		float L_10 = L_9.___x_0;
		float L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = L_12.___y_1;
		float L_14 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), ((float)(L_10/L_11)), ((float)(L_13/L_14)), /*hidden argument*/NULL);
		// return normalized;
		return L_15;
	}

IL_0056:
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		return L_16;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.TouchpadDragHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchpadDragHandler__ctor_m0428A75D03057DEA01A8F73BA30F2CA1395BD58C (TouchpadDragHandler_tCDB79E79A9DB170F0F31997492ADA6CA4B7DA1AA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraPoseFollower_Awake_m2FD19DB7CD2AC6C8D78FA834E7FFEED75633F771 (XRCameraPoseFollower_t09D012868515CA1D1095B7739E563C8E223E7B75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94ECF857C1EFD5F738A63C310E08104353849CAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (xrCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___xrCamera_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// xrCamera = OriginLocationUtility.GetOriginCamera(true);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = OriginLocationUtility_GetOriginCamera_m86D927D8C7D5D84E68F2E7178921F6DF23BFA8CF((bool)1, NULL);
		__this->___xrCamera_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrCamera_8), (void*)L_2);
		// if (xrCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___xrCamera_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogError("No XR Camera in the scene");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral94ECF857C1EFD5F738A63C310E08104353849CAC, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraPoseFollower_Update_m51AC7DA05751A5BB3545FC93448B97A4F7A61759 (XRCameraPoseFollower_t09D012868515CA1D1095B7739E563C8E223E7B75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_2 = NULL;
	{
		// if (TrackPosition)
		bool L_0 = __this->___TrackPosition_4;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		// transform.position = xrCamera.transform.position + (UsePositionOffset ? PositionOffset : Vector3.zero);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___xrCamera_8;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		bool L_5 = __this->___UsePositionOffset_7;
		G_B2_0 = L_4;
		G_B2_1 = L_1;
		if (L_5)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_1;
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		G_B4_0 = L_6;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0033;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___PositionOffset_6;
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0033:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(G_B4_1, G_B4_0, NULL);
		NullCheck(G_B4_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(G_B4_2, L_8, NULL);
	}

IL_003d:
	{
		// if (TrackRotation && _rotationTransform != null)
		bool L_9 = __this->___TrackRotation_5;
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->____rotationTransform_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		// transform.rotation = _rotationTransform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->____rotationTransform_9;
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_14, NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.XRCameraPoseFollower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraPoseFollower__ctor_m3774BA9EA2D6CDE276356A2121A42C11E7273119 (XRCameraPoseFollower_t09D012868515CA1D1095B7739E563C8E223E7B75* __this, const RuntimeMethod* method) 
{
	{
		// public bool TrackPosition = true;
		__this->___TrackPosition_4 = (bool)1;
		// public bool TrackRotation = true;
		__this->___TrackRotation_5 = (bool)1;
		// public Vector3 PositionOffset = new Vector3(0.0f, -0.5f, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (-0.5f), (0.0f), /*hidden argument*/NULL);
		__this->___PositionOffset_6 = L_0;
		// public bool UsePositionOffset = true;
		__this->___UsePositionOffset_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::SetColor(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeManipulation_SetColor_mEBA884DAAC04DA1E6F65465EAC7D68E7BBAD8C22 (CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image0, const RuntimeMethod* method) 
{
	{
		// meshRenderer.material.color = image.color;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___meshRenderer_5;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = ___image0;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		NullCheck(L_1);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::UpdateRotation(UnityEngine.UI.Slider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeManipulation_UpdateRotation_m99A0884F54F81A3721804FBE97DB02C218C065CC (CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderRot0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 localEulerAngles = cube.transform.localEulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cube_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_1, NULL);
		V_0 = L_2;
		// localEulerAngles.y = -sliderRot.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = ___sliderRot0;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		(&V_0)->___y_3 = ((-L_4));
		// cube.transform.localEulerAngles = localEulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___cube_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::UpdateVisibility(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeManipulation_UpdateVisibility_m3FA6CCFD4039E88C6D77EED7BAA4F8BB0E582427 (CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle0, const RuntimeMethod* method) 
{
	{
		// cube.SetActive(toggle.isOn);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cube_4;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = ___toggle0;
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::PlaceCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeManipulation_PlaceCube_m28808710737264B30B26CF0BC32811E419F0CB99 (CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	{
		// Camera c = OriginLocationUtility.GetOriginCamera();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = OriginLocationUtility_GetOriginCamera_m86D927D8C7D5D84E68F2E7178921F6DF23BFA8CF((bool)0, NULL);
		V_0 = L_0;
		// if (c != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		// cube.transform.position = c.transform.position + (c.transform.forward * 1.25f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___cube_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, (1.25f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_7, L_11, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_12, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.CubeManipulation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeManipulation__ctor_m3C6D0FAA4BC79ACD03AF5E708BB1CEBD1A3B5B1C (CubeManipulation_t09B0C3E2E5FCC20618FB4181777920756CC2E922* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.Samples.FusionPrefabReferenceHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionPrefabReferenceHelper__ctor_m84D4EE324D0AF9DA36D689E727C25361D29BF66C (FusionPrefabReferenceHelper_tCBF4254883C8C693CD39294E2F09E03410FA93DA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Qualcomm.Snapdragon.Spaces.Samples.FusionSceneManager::ReloadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionSceneManager_ReloadScene_m76E35EE717E523A265575D202B4F9BA36CA149BD (FusionSceneManager_tDC7F3BCD1C50C5BD6ED6BB6E0E3E1B05F9CA2452* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(L_1, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.FusionSceneManager::LoadSceneByID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionSceneManager_LoadSceneByID_m2FDD2A37191298164696B9B7E5AF807158B75A9A (FusionSceneManager_tDC7F3BCD1C50C5BD6ED6BB6E0E3E1B05F9CA2452* __this, int32_t ___sceneId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneId);
		int32_t L_0 = ___sceneId0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(L_0, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.FusionSceneManager::LoadSceneByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionSceneManager_LoadSceneByName_m2C25077406D19133085F7B18440F16A31284FBDB (FusionSceneManager_tDC7F3BCD1C50C5BD6ED6BB6E0E3E1B05F9CA2452* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___sceneName0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.FusionSceneManager::ToggleObjectVisibility(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionSceneManager_ToggleObjectVisibility_m24CA668BEF20F3F9E81037FDA978CDB49B299503 (FusionSceneManager_tDC7F3BCD1C50C5BD6ED6BB6E0E3E1B05F9CA2452* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToToggle0, const RuntimeMethod* method) 
{
	{
		// objectToToggle.SetActive(!objectToToggle.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___objectToToggle0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___objectToToggle0;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.FusionSceneManager::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionSceneManager_Quit_m1760BBA48EF82C5E65A4286744F01B2BE6F2E96B (FusionSceneManager_tDC7F3BCD1C50C5BD6ED6BB6E0E3E1B05F9CA2452* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void Qualcomm.Snapdragon.Spaces.Samples.FusionSceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionSceneManager__ctor_m3CD1933206D990E3C96CE15D423B4DCD6D210C14 (FusionSceneManager_tDC7F3BCD1C50C5BD6ED6BB6E0E3E1B05F9CA2452* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) 
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___U3CmeshU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___newX0;
		__this->___x_2 = L_0;
		float L_1 = ___newY1;
		__this->___y_3 = L_1;
		float L_2 = ___newZ2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_buttonMenu_m4963BD0C0E36148C921B8B5DA270E3521E9708C6_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___value0, const RuntimeMethod* method) 
{
	{
		// public ButtonControl buttonMenu { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___value0;
		__this->___U3CbuttonMenuU3Ek__BackingField_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbuttonMenuU3Ek__BackingField_44), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_touchpadClick_mE382CCF5D7FF2F04BAFBF34EAE6B31A6F9429546_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___value0, const RuntimeMethod* method) 
{
	{
		// public ButtonControl touchpadClick { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___value0;
		__this->___U3CtouchpadClickU3Ek__BackingField_45 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtouchpadClickU3Ek__BackingField_45), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_touchpadPosition_m0500DB4258C86297C295479E585A774E64B8FA97_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2Control touchpadPosition { get; private set; }
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_0 = ___value0;
		__this->___U3CtouchpadPositionU3Ek__BackingField_46 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtouchpadPositionU3Ek__BackingField_46), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_devicePosition_m50D5E9D566E874CF05F9A0D3DCDB61BA723CD147_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___value0;
		__this->___U3CdevicePositionU3Ek__BackingField_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdevicePositionU3Ek__BackingField_47), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_deviceRotation_m7BF4E7D2A7D70B0BC93919D34C6B53CC065C8EB2_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___value0, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___value0;
		__this->___U3CdeviceRotationU3Ek__BackingField_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdeviceRotationU3Ek__BackingField_48), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasControllerCompanionInputDevice_set_trackingState_m7F07A884822BFEF0552B86CE183599949D85AFB1_inline (CanvasControllerCompanionInputDevice_tB3AEDB64924041FF1B3312066F42A2B2E50F4BFC* __this, IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___value0, const RuntimeMethod* method) 
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_0 = ___value0;
		__this->___U3CtrackingStateU3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtrackingStateU3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GyroToRotation_get_RotationRate_mDEA51F1527F8237DBE8DC2B71BC9A9F2E74001CC_inline (GyroToRotation_tE2813BAFF266F383590088A77176E27D7031F323* __this, const RuntimeMethod* method) 
{
	{
		// get => rotationRate;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___rotationRate_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
