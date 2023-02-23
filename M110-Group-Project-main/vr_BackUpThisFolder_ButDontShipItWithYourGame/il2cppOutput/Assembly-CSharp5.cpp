#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.UI.LayoutGroup[]
struct LayoutGroupU5BU5D_t3322578226E09FC899731C905814C7521FD81EF4;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// MaterialUI.ScreenConfig[]
struct ScreenConfigU5BU5D_t9A87D4088C46E27940AA22DF56870EE6DFAD3FC2;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// MaterialUI.ShadowAnim[]
struct ShadowAnimU5BU5D_t5E9BFBF1BA0EE29A02BE2F8CAD1A01AEB2EDE473;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B;
// MaterialUI.CheckBoxToggler
struct CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// MaterialUI.InputFieldConfig
struct InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE;
// UnityEngine.UI.Mask
struct Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MaterialUI.MaterialGlobals
struct MaterialGlobals_tA9ABC4A265C7E8335FD8B070FE6A198C0B9C2E1C;
// MaterialUI.MaterialUIScaler
struct MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// MaterialUI.MenuArrowAnim
struct MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MaterialUI.NavDrawerConfig
struct NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// MaterialUI.RadioConfig
struct RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// MaterialUI.RectTransformSnap
struct RectTransformSnap_tE01ECC8D9D0CC4A448B885F2A7A52A8821EBE9E7;
// MaterialUI.RippleAnim
struct RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92;
// MaterialUI.RippleConfig
struct RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// MaterialUI.ScreenConfig
struct ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4;
// MaterialUI.ScreenManager
struct ScreenManager_t544AF9CFFA29D3188AE8C163B60758400B1A4EC7;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// MaterialUI.SelectionBoxConfig
struct SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A;
// MaterialUI.SelectionBoxSubscriber
struct SelectionBoxSubscriber_tF01796386C8D81F4D4729E45759DC7898140235B;
// MaterialUI.SelectionListItemConfig
struct SelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12;
// MaterialUI.ShadowAnim
struct ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F;
// MaterialUI.ShadowConfig
struct ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A;
// MaterialUI.ShadowSnap
struct ShadowSnap_t5EEE8216C2931F9E095772CB74FE2D7561280757;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// MaterialUI.SliderConfig
struct SliderConfig_t90B4137C2A268DEDC9DF818E5074F3F4D067A7A3;
// MaterialUI.SnapButtonToText
struct SnapButtonToText_tD080412F7AC57AE0CF215BD7BE22CA3018A2A5E8;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// MaterialUI.SpriteSwapper
struct SpriteSwapper_t8C76CD448BEC3E3B78B1F4D7E2309716AB6B4998;
// System.String
struct String_t;
// MaterialUI.SwitchConfig
struct SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// MaterialUI.TextInputLine
struct TextInputLine_t212804154FD57E38FF5ABAFABD027E8F44CCDF58;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// MaterialUI.ToastAnim
struct ToastAnim_t6E91644F45C4CBCFB16840A94A43BBE4D66F979B;
// MaterialUI.Toaster
struct Toaster_t67BA5E50D59D9D7582E30E3AFEB4DC2EC5574439;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// MaterialUI.ToggleConfig
struct ToggleConfig_tE30AB181A736B6C13168B34FA7B1C4F85324A18D;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// MaterialUI.InputFieldConfig/<DelayedHeight>d__30
struct U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// MaterialUI.RippleConfig/<DelayedMaskCheck>d__44
struct U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A;
// MaterialUI.RippleConfig/<DragCheck>d__43
struct U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3;
// MaterialUI.RippleConfig/<GetRect>d__45
struct U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777;
// MaterialUI.SelectionBoxConfig/PickItem
struct PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// MaterialUI.ToastAnim/<WaitTime>d__15
struct U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral23A1CFA088EDBF9528EEE97D010A634CE87EA2AB;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral5D78BEBDA86E4A1F4EE1AB4159FE6CF35CD5885A;
IL2CPP_EXTERN_C String_t* _stringLiteral800CA8F02BAF81AD4EE3B052BFFA745ADA0E00CB;
IL2CPP_EXTERN_C String_t* _stringLiteral962A31B336A863751A0C221EE2E14CD1A2E094E9;
IL2CPP_EXTERN_C String_t* _stringLiteralBB259FE354C9FFA6F42C15391CE91A8B9F6E9CCD;
IL2CPP_EXTERN_C String_t* _stringLiteralC008E503687BA2A627379D4E257787AEA3506830;
IL2CPP_EXTERN_C String_t* _stringLiteralCB22F96B242BE73256217C026D1F667896032FDA;
IL2CPP_EXTERN_C String_t* _stringLiteralF08A1D713CEE64966CBF68880E2C8ADBBF12B324;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F_mCF62027827508AE4F7C975A097137808332ABE72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_m975EB99B90AB413CA715FFE07563605E0D4A215B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_mF37E1C928AF195AD949836E650B9E7646D1BBA47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_mAB9A7CE273F47DA107A278EEFEF3C1B61C08B303_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_m68F9DD4540464857D8BAD1EA7BBF472DC8D7FA65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m5B183CEC40C6D124CD6B9AB842C1E9E8CA972E4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisMaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F_m39A4C2087AC0B0B140D6D65A33DA167EA354244F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisSelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A_m4D83D1A949477F95D4729B6A66535E0FB2280E6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m25C8620453831113C9063019F4E90A35F0B737AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A_m37DD9E8A4AFA0A3CD719ED84DD1F287B790AC477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12_mC8DAF88588B8BC977DD61B4CF257C5B2B369F9BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A_mFF0B17F79C75B3DBC58A006081263B436C03965B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC8B5ACBEEF3B80C0B0FB6B10286C4524EB9FADEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SelectionBoxSubscriber_DoThing_mFB0A3D3360E020B361AEF9DE8345272651B38397_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedHeightU3Ed__30_System_Collections_IEnumerator_Reset_m4D6E70959301CA99CF6BA0053EC96585F18B47E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedMaskCheckU3Ed__44_System_Collections_IEnumerator_Reset_m6ED7065E88AA9248621EEF81FE4FE422880935EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDragCheckU3Ed__43_System_Collections_IEnumerator_Reset_mD50FE8495AABB72F802CCC8820F18F9A5E3871E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRectU3Ed__45_System_Collections_IEnumerator_Reset_m2D3A127E44D52FE7E91C1BD8294AA6FF60DCFD1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitTimeU3Ed__15_System_Collections_IEnumerator_Reset_m4E8D598D87563D009C21BE09C314CD01FCA2FD29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct ScreenConfigU5BU5D_t9A87D4088C46E27940AA22DF56870EE6DFAD3FC2;
struct ShadowAnimU5BU5D_t5E9BFBF1BA0EE29A02BE2F8CAD1A01AEB2EDE473;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// MaterialUI.RippleControl
struct RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// MaterialUI.InputFieldConfig/<DelayedHeight>d__30
struct U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81  : public RuntimeObject
{
	// System.Int32 MaterialUI.InputFieldConfig/<DelayedHeight>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MaterialUI.InputFieldConfig/<DelayedHeight>d__30::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MaterialUI.InputFieldConfig MaterialUI.InputFieldConfig/<DelayedHeight>d__30::<>4__this
	InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* ___U3CU3E4__this_2;
};

// MaterialUI.RippleConfig/<DelayedMaskCheck>d__44
struct U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A  : public RuntimeObject
{
	// System.Int32 MaterialUI.RippleConfig/<DelayedMaskCheck>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MaterialUI.RippleConfig/<DelayedMaskCheck>d__44::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MaterialUI.RippleConfig MaterialUI.RippleConfig/<DelayedMaskCheck>d__44::<>4__this
	RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* ___U3CU3E4__this_2;
};

// MaterialUI.RippleConfig/<GetRect>d__45
struct U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777  : public RuntimeObject
{
	// System.Int32 MaterialUI.RippleConfig/<GetRect>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MaterialUI.RippleConfig/<GetRect>d__45::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MaterialUI.RippleConfig MaterialUI.RippleConfig/<GetRect>d__45::<>4__this
	RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* ___U3CU3E4__this_2;
	// UnityEngine.GameObject MaterialUI.RippleConfig/<GetRect>d__45::<sizeRefGameObject>5__2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CsizeRefGameObjectU3E5__2_3;
	// UnityEngine.RectTransform MaterialUI.RippleConfig/<GetRect>d__45::<sizeRefRectTransform>5__3
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___U3CsizeRefRectTransformU3E5__3_4;
};

// MaterialUI.ToastAnim/<WaitTime>d__15
struct U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B  : public RuntimeObject
{
	// System.Int32 MaterialUI.ToastAnim/<WaitTime>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MaterialUI.ToastAnim/<WaitTime>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MaterialUI.ToastAnim MaterialUI.ToastAnim/<WaitTime>d__15::<>4__this
	ToastAnim_t6E91644F45C4CBCFB16840A94A43BBE4D66F979B* ___U3CU3E4__this_2;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// MaterialUI.HSBColor
struct HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A 
{
	// System.Single MaterialUI.HSBColor::h
	float ___h_0;
	// System.Single MaterialUI.HSBColor::s
	float ___s_1;
	// System.Single MaterialUI.HSBColor::b
	float ___b_2;
	// System.Single MaterialUI.HSBColor::a
	float ___a_3;
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

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// MaterialUI.ToastControl
struct ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551  : public RuntimeObject
{
};

// MaterialUI.RippleConfig/<DragCheck>d__43
struct U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3  : public RuntimeObject
{
	// System.Int32 MaterialUI.RippleConfig/<DragCheck>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MaterialUI.RippleConfig/<DragCheck>d__43::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MaterialUI.RippleConfig MaterialUI.RippleConfig/<DragCheck>d__43::<>4__this
	RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 MaterialUI.RippleConfig/<DragCheck>d__43::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// MaterialUI.SelectionBoxConfig/PickItem
struct PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// MaterialUI.CheckBoxToggler
struct CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle MaterialUI.CheckBoxToggler::theToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___theToggle_4;
};

// MaterialUI.InputFieldConfig
struct InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color MaterialUI.InputFieldConfig::activeColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___activeColor_4;
	// System.Boolean MaterialUI.InputFieldConfig::dynamicHeight
	bool ___dynamicHeight_5;
	// System.Boolean MaterialUI.InputFieldConfig::selected
	bool ___selected_6;
	// System.Single MaterialUI.InputFieldConfig::animationDuration
	float ___animationDuration_7;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::parentRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___parentRect_8;
	// UnityEngine.UI.Text MaterialUI.InputFieldConfig::placeholderText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___placeholderText_9;
	// UnityEngine.UI.Text MaterialUI.InputFieldConfig::inputText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___inputText_10;
	// UnityEngine.UI.Text MaterialUI.InputFieldConfig::displayText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___displayText_11;
	// UnityEngine.UI.Image MaterialUI.InputFieldConfig::activeLine
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___activeLine_12;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::textRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___textRect_13;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::displayTextRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___displayTextRect_14;
	// UnityEngine.UI.InputField MaterialUI.InputFieldConfig::inputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputField_15;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::activeLineRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___activeLineRect_16;
	// UnityEngine.RectTransform MaterialUI.InputFieldConfig::placeholderRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___placeholderRect_17;
	// UnityEngine.Color MaterialUI.InputFieldConfig::placeholderOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___placeholderOffColor_18;
	// UnityEngine.Color MaterialUI.InputFieldConfig::placeholderColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___placeholderColor_19;
	// System.Single MaterialUI.InputFieldConfig::placeholderScale
	float ___placeholderScale_20;
	// System.Single MaterialUI.InputFieldConfig::placeholderPivot
	float ___placeholderPivot_21;
	// System.Single MaterialUI.InputFieldConfig::activeLineAlpha
	float ___activeLineAlpha_22;
	// System.Single MaterialUI.InputFieldConfig::activeLinePos
	float ___activeLinePos_23;
	// System.Single MaterialUI.InputFieldConfig::animStartTime
	float ___animStartTime_24;
	// System.Single MaterialUI.InputFieldConfig::animDeltaTime
	float ___animDeltaTime_25;
	// System.Boolean MaterialUI.InputFieldConfig::selectedBefore
	bool ___selectedBefore_26;
	// System.Int32 MaterialUI.InputFieldConfig::state
	int32_t ___state_27;
};

// MaterialUI.MaterialGlobals
struct MaterialGlobals_tA9ABC4A265C7E8335FD8B070FE6A198C0B9C2E1C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MaterialUI.MaterialUIScaler
struct MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 MaterialUI.MaterialUIScaler::referenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___referenceResolution_4;
	// UnityEngine.Vector2 MaterialUI.MaterialUIScaler::currentResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currentResolution_5;
	// System.Single MaterialUI.MaterialUIScaler::<scaleFactor>k__BackingField
	float ___U3CscaleFactorU3Ek__BackingField_6;
	// UnityEngine.UI.CanvasScaler MaterialUI.MaterialUIScaler::scaler
	CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* ___scaler_7;
};

// MaterialUI.MenuArrowAnim
struct MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MaterialUI.MenuArrowAnim::state
	int32_t ___state_4;
	// System.Single MaterialUI.MenuArrowAnim::animStartTime
	float ___animStartTime_5;
	// System.Single MaterialUI.MenuArrowAnim::animDeltaTime
	float ___animDeltaTime_6;
	// System.Single MaterialUI.MenuArrowAnim::animationDuration
	float ___animationDuration_7;
	// UnityEngine.RectTransform MaterialUI.MenuArrowAnim::thisTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___thisTransform_8;
	// UnityEngine.RectTransform MaterialUI.MenuArrowAnim::topTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___topTransform_9;
	// UnityEngine.RectTransform MaterialUI.MenuArrowAnim::middleTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___middleTransform_10;
	// UnityEngine.RectTransform MaterialUI.MenuArrowAnim::bottomTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___bottomTransform_11;
	// UnityEngine.Vector2 MaterialUI.MenuArrowAnim::tempVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tempVector2_12;
	// UnityEngine.Vector3 MaterialUI.MenuArrowAnim::tempVector3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tempVector3_13;
	// UnityEngine.Quaternion MaterialUI.MenuArrowAnim::tempQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___tempQuaternion_14;
	// System.Boolean MaterialUI.MenuArrowAnim::isArrow
	bool ___isArrow_15;
};

// MaterialUI.NavDrawerConfig
struct NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MaterialUI.NavDrawerConfig::maxPosition
	float ___maxPosition_4;
	// System.Single MaterialUI.NavDrawerConfig::minPosition
	float ___minPosition_5;
	// UnityEngine.RectTransform MaterialUI.NavDrawerConfig::thisRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___thisRectTransform_6;
	// UnityEngine.UI.Image MaterialUI.NavDrawerConfig::backgroundImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___backgroundImage_7;
	// UnityEngine.RectTransform MaterialUI.NavDrawerConfig::backgroundRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___backgroundRectTransform_8;
	// UnityEngine.CanvasGroup MaterialUI.NavDrawerConfig::backgroundCanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___backgroundCanvasGroup_9;
	// UnityEngine.UI.Image MaterialUI.NavDrawerConfig::ShadowImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ShadowImage_10;
	// UnityEngine.CanvasGroup MaterialUI.NavDrawerConfig::shadowCanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___shadowCanvasGroup_11;
	// System.Boolean MaterialUI.NavDrawerConfig::darkenBackground
	bool ___darkenBackground_12;
	// System.Boolean MaterialUI.NavDrawerConfig::tapBackgroundToClose
	bool ___tapBackgroundToClose_13;
	// System.Byte MaterialUI.NavDrawerConfig::state
	uint8_t ___state_14;
	// System.Single MaterialUI.NavDrawerConfig::animStartTime
	float ___animStartTime_15;
	// System.Single MaterialUI.NavDrawerConfig::animDeltaTime
	float ___animDeltaTime_16;
	// System.Single MaterialUI.NavDrawerConfig::animationDuration
	float ___animationDuration_17;
	// UnityEngine.Vector2 MaterialUI.NavDrawerConfig::currentPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currentPos_18;
	// System.Single MaterialUI.NavDrawerConfig::currentBackgroundAlpha
	float ___currentBackgroundAlpha_19;
	// System.Single MaterialUI.NavDrawerConfig::currentShadowAlpha
	float ___currentShadowAlpha_20;
	// UnityEngine.Vector2 MaterialUI.NavDrawerConfig::tempVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tempVector2_21;
	// System.Single MaterialUI.NavDrawerConfig::positionCompensation
	float ___positionCompensation_22;
};

// MaterialUI.RadioConfig
struct RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MaterialUI.RadioConfig::animationDuration
	float ___animationDuration_4;
	// UnityEngine.Color MaterialUI.RadioConfig::onColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___onColor_5;
	// UnityEngine.Color MaterialUI.RadioConfig::offColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___offColor_6;
	// UnityEngine.Color MaterialUI.RadioConfig::disabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___disabledColor_7;
	// System.Boolean MaterialUI.RadioConfig::changeTextColor
	bool ___changeTextColor_8;
	// UnityEngine.Color MaterialUI.RadioConfig::textNormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___textNormalColor_9;
	// UnityEngine.Color MaterialUI.RadioConfig::textDisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___textDisabledColor_10;
	// System.Boolean MaterialUI.RadioConfig::changeRippleColor
	bool ___changeRippleColor_11;
	// UnityEngine.UI.Image MaterialUI.RadioConfig::dotImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___dotImage_12;
	// UnityEngine.UI.Image MaterialUI.RadioConfig::ringImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ringImage_13;
	// UnityEngine.UI.Text MaterialUI.RadioConfig::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_14;
	// UnityEngine.RectTransform MaterialUI.RadioConfig::dotRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___dotRectTransform_15;
	// MaterialUI.CheckBoxToggler MaterialUI.RadioConfig::checkBoxToggler
	CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* ___checkBoxToggler_16;
	// MaterialUI.RippleConfig MaterialUI.RadioConfig::rippleConfig
	RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* ___rippleConfig_17;
	// UnityEngine.UI.Toggle MaterialUI.RadioConfig::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_18;
	// UnityEngine.UI.ToggleGroup MaterialUI.RadioConfig::toggleGroup
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___toggleGroup_19;
	// System.Boolean MaterialUI.RadioConfig::lastToggleInteractableState
	bool ___lastToggleInteractableState_20;
	// System.Boolean MaterialUI.RadioConfig::lastToggleState
	bool ___lastToggleState_21;
	// System.Single MaterialUI.RadioConfig::currentDotSize
	float ___currentDotSize_22;
	// UnityEngine.Color MaterialUI.RadioConfig::currentColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentColor_23;
	// UnityEngine.Color MaterialUI.RadioConfig::currentTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentTextColor_24;
	// UnityEngine.Vector3 MaterialUI.RadioConfig::tempVector3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tempVector3_25;
	// UnityEngine.Color MaterialUI.RadioConfig::tempColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tempColor_26;
	// System.Int32 MaterialUI.RadioConfig::state
	int32_t ___state_27;
	// System.Single MaterialUI.RadioConfig::animStartTime
	float ___animStartTime_28;
	// System.Single MaterialUI.RadioConfig::animDeltaTime
	float ___animDeltaTime_29;
};

// MaterialUI.RectTransformSnap
struct RectTransformSnap_tE01ECC8D9D0CC4A448B885F2A7A52A8821EBE9E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform MaterialUI.RectTransformSnap::targetRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___targetRect_4;
	// UnityEngine.RectTransform MaterialUI.RectTransformSnap::thisRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___thisRect_5;
	// System.Single MaterialUI.RectTransformSnap::xPadding
	float ___xPadding_6;
	// System.Single MaterialUI.RectTransformSnap::yPadding
	float ___yPadding_7;
	// System.Boolean MaterialUI.RectTransformSnap::percentage
	bool ___percentage_8;
	// System.Single MaterialUI.RectTransformSnap::xPercent
	float ___xPercent_9;
	// System.Single MaterialUI.RectTransformSnap::yPercent
	float ___yPercent_10;
	// System.Boolean MaterialUI.RectTransformSnap::snapEveryFrame
	bool ___snapEveryFrame_11;
	// System.Boolean MaterialUI.RectTransformSnap::sizeOnly
	bool ___sizeOnly_12;
	// UnityEngine.Rect MaterialUI.RectTransformSnap::lastRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastRect_13;
};

// MaterialUI.RippleAnim
struct RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite MaterialUI.RippleAnim::im64px
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___im64px_4;
	// UnityEngine.Sprite MaterialUI.RippleAnim::im128px
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___im128px_5;
	// UnityEngine.Sprite MaterialUI.RippleAnim::im256px
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___im256px_6;
	// UnityEngine.Sprite MaterialUI.RippleAnim::im384px
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___im384px_7;
	// UnityEngine.Sprite MaterialUI.RippleAnim::im512px
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___im512px_8;
	// UnityEngine.Sprite MaterialUI.RippleAnim::im640px
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___im640px_9;
	// UnityEngine.Sprite MaterialUI.RippleAnim::im768px
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___im768px_10;
	// UnityEngine.Sprite MaterialUI.RippleAnim::im896px
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___im896px_11;
	// UnityEngine.Sprite MaterialUI.RippleAnim::im1024px
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___im1024px_12;
	// System.Single MaterialUI.RippleAnim::animationSpeed
	float ___animationSpeed_13;
	// UnityEngine.UI.Image MaterialUI.RippleAnim::thisImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___thisImage_14;
	// UnityEngine.RectTransform MaterialUI.RippleAnim::thisRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___thisRect_15;
	// UnityEngine.Vector3 MaterialUI.RippleAnim::tempRect
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tempRect_16;
	// UnityEngine.Color MaterialUI.RippleAnim::tempColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tempColor_17;
	// System.Single MaterialUI.RippleAnim::startColorAlpha
	float ___startColorAlpha_18;
	// System.Single MaterialUI.RippleAnim::endColorAlpha
	float ___endColorAlpha_19;
	// System.Single MaterialUI.RippleAnim::animStartTime
	float ___animStartTime_20;
	// System.Single MaterialUI.RippleAnim::animFirstStartTime
	float ___animFirstStartTime_21;
	// System.Single MaterialUI.RippleAnim::animDeltaTime
	float ___animDeltaTime_22;
	// System.Single MaterialUI.RippleAnim::animFirstDeltaTime
	float ___animFirstDeltaTime_23;
	// System.Single MaterialUI.RippleAnim::clearInkSize
	float ___clearInkSize_24;
	// System.Single MaterialUI.RippleAnim::clearInkAlpha
	float ___clearInkAlpha_25;
	// UnityEngine.Vector3 MaterialUI.RippleAnim::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_26;
	// UnityEngine.Vector3 MaterialUI.RippleAnim::endPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPos_27;
	// System.Boolean MaterialUI.RippleAnim::moveTowardCenter
	bool ___moveTowardCenter_28;
	// System.Single MaterialUI.RippleAnim::endScale
	float ___endScale_29;
	// System.Int32 MaterialUI.RippleAnim::scaledSize
	int32_t ___scaledSize_30;
	// System.Int32 MaterialUI.RippleAnim::state
	int32_t ___state_31;
};

// MaterialUI.RippleConfig
struct RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MaterialUI.RippleConfig::autoSize
	bool ___autoSize_4;
	// System.Single MaterialUI.RippleConfig::sizePercentage
	float ___sizePercentage_5;
	// System.Int32 MaterialUI.RippleConfig::rippleSize
	int32_t ___rippleSize_6;
	// System.Single MaterialUI.RippleConfig::rippleSpeed
	float ___rippleSpeed_7;
	// UnityEngine.Color MaterialUI.RippleConfig::rippleColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rippleColor_8;
	// System.Single MaterialUI.RippleConfig::rippleStartAlpha
	float ___rippleStartAlpha_9;
	// System.Single MaterialUI.RippleConfig::rippleEndAlpha
	float ___rippleEndAlpha_10;
	// UnityEngine.UI.LayoutGroup[] MaterialUI.RippleConfig::groups
	LayoutGroupU5BU5D_t3322578226E09FC899731C905814C7521FD81EF4* ___groups_11;
	// System.Boolean[] MaterialUI.RippleConfig::groupBools
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___groupBools_12;
	// MaterialUI.RippleConfig/HighlightActive MaterialUI.RippleConfig::highlightWhen
	int32_t ___highlightWhen_13;
	// System.Boolean MaterialUI.RippleConfig::moveTowardCenter
	bool ___moveTowardCenter_14;
	// System.Boolean MaterialUI.RippleConfig::toggleMask
	bool ___toggleMask_15;
	// System.Boolean MaterialUI.RippleConfig::dontRippleOnScroll
	bool ___dontRippleOnScroll_16;
	// System.Single MaterialUI.RippleConfig::scrollDelayCheckTime
	float ___scrollDelayCheckTime_17;
	// System.Boolean MaterialUI.RippleConfig::hasLifted
	bool ___hasLifted_18;
	// UnityEngine.Vector2 MaterialUI.RippleConfig::mousePos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___mousePos_19;
	// MaterialUI.RippleAnim MaterialUI.RippleConfig::currentRippleAnim
	RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* ___currentRippleAnim_20;
	// UnityEngine.UI.Mask MaterialUI.RippleConfig::thisMask
	Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* ___thisMask_21;
	// UnityEngine.Canvas MaterialUI.RippleConfig::theCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___theCanvas_22;
	// UnityEngine.Camera MaterialUI.RippleConfig::theCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___theCamera_23;
	// UnityEngine.UI.Image MaterialUI.RippleConfig::thisImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___thisImage_24;
	// System.Boolean MaterialUI.RippleConfig::worldSpace
	bool ___worldSpace_25;
	// UnityEngine.Color MaterialUI.RippleConfig::normalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___normalColor_26;
	// UnityEngine.Color MaterialUI.RippleConfig::highlightColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___highlightColor_27;
	// UnityEngine.Color MaterialUI.RippleConfig::tempColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tempColor_28;
	// UnityEngine.Color MaterialUI.RippleConfig::currentColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentColor_29;
	// System.Int32 MaterialUI.RippleConfig::state
	int32_t ___state_30;
	// System.Single MaterialUI.RippleConfig::animStartTime
	float ___animStartTime_31;
	// System.Single MaterialUI.RippleConfig::animDeltaTime
	float ___animDeltaTime_32;
	// System.Single MaterialUI.RippleConfig::animationDuration
	float ___animationDuration_33;
	// UnityEngine.Rect MaterialUI.RippleConfig::sizeReferenceRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___sizeReferenceRect_34;
};

// MaterialUI.ScreenConfig
struct ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String MaterialUI.ScreenConfig::screenName
	String_t* ___screenName_4;
	// MaterialUI.ScreenConfig/TransitionType MaterialUI.ScreenConfig::transitionInType
	int32_t ___transitionInType_5;
	// MaterialUI.ScreenConfig/TransitionType MaterialUI.ScreenConfig::transitionOutType
	int32_t ___transitionOutType_6;
	// MaterialUI.ScreenConfig/SlideDirection MaterialUI.ScreenConfig::slideIn
	int32_t ___slideIn_7;
	// System.Single MaterialUI.ScreenConfig::slideInPercent
	float ___slideInPercent_8;
	// System.Boolean MaterialUI.ScreenConfig::scaleIn
	bool ___scaleIn_9;
	// System.Single MaterialUI.ScreenConfig::scaleInStartValue
	float ___scaleInStartValue_10;
	// System.Boolean MaterialUI.ScreenConfig::fadeIn
	bool ___fadeIn_11;
	// System.Single MaterialUI.ScreenConfig::fadeInStartValue
	float ___fadeInStartValue_12;
	// MaterialUI.ScreenConfig/SlideDirection MaterialUI.ScreenConfig::slideOut
	int32_t ___slideOut_13;
	// System.Single MaterialUI.ScreenConfig::slideOutPercent
	float ___slideOutPercent_14;
	// System.Boolean MaterialUI.ScreenConfig::scaleOut
	bool ___scaleOut_15;
	// System.Single MaterialUI.ScreenConfig::scaleOutEndValue
	float ___scaleOutEndValue_16;
	// System.Boolean MaterialUI.ScreenConfig::fadeOut
	bool ___fadeOut_17;
	// System.Single MaterialUI.ScreenConfig::fadeOutEndValue
	float ___fadeOutEndValue_18;
	// System.Int32 MaterialUI.ScreenConfig::state
	int32_t ___state_19;
	// System.Single MaterialUI.ScreenConfig::animStartTime
	float ___animStartTime_20;
	// System.Single MaterialUI.ScreenConfig::animDeltaTime
	float ___animDeltaTime_21;
	// System.Single MaterialUI.ScreenConfig::animationDuration
	float ___animationDuration_22;
	// UnityEngine.RectTransform MaterialUI.ScreenConfig::theRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___theRectTransform_23;
	// UnityEngine.CanvasGroup MaterialUI.ScreenConfig::theCanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___theCanvasGroup_24;
	// UnityEngine.Vector2 MaterialUI.ScreenConfig::slideInDirectionPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___slideInDirectionPosition_25;
	// UnityEngine.Vector2 MaterialUI.ScreenConfig::slideOutDirectionPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___slideOutDirectionPosition_26;
	// UnityEngine.Vector2 MaterialUI.ScreenConfig::screenDimensions
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenDimensions_27;
	// UnityEngine.Vector2 MaterialUI.ScreenConfig::tempVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tempVector2_28;
	// UnityEngine.Vector3 MaterialUI.ScreenConfig::tempVector3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tempVector3_29;
	// UnityEngine.GameObject MaterialUI.ScreenConfig::screenSpace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___screenSpace_30;
	// UnityEngine.RectTransform MaterialUI.ScreenConfig::currentRipple
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___currentRipple_31;
	// UnityEngine.Vector2 MaterialUI.ScreenConfig::screenSpacePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenSpacePosition_32;
	// System.Single MaterialUI.ScreenConfig::rippleSize
	float ___rippleSize_33;
	// UnityEngine.Vector2 MaterialUI.ScreenConfig::thisScreenSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___thisScreenSize_34;
	// MaterialUI.ScreenConfig MaterialUI.ScreenConfig::hideScreen
	ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* ___hideScreen_35;
};

// MaterialUI.ScreenManager
struct ScreenManager_t544AF9CFFA29D3188AE8C163B60758400B1A4EC7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MaterialUI.ScreenConfig[] MaterialUI.ScreenManager::screens
	ScreenConfigU5BU5D_t9A87D4088C46E27940AA22DF56870EE6DFAD3FC2* ___screens_4;
	// MaterialUI.ScreenConfig MaterialUI.ScreenManager::currentScreen
	ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* ___currentScreen_5;
	// MaterialUI.ScreenConfig MaterialUI.ScreenManager::lastScreen
	ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* ___lastScreen_6;
};

// MaterialUI.SelectionBoxConfig
struct SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MaterialUI.SelectionBoxConfig::rippleEnabled
	bool ___rippleEnabled_4;
	// System.Int32 MaterialUI.SelectionBoxConfig::rippleSize
	int32_t ___rippleSize_5;
	// System.Single MaterialUI.SelectionBoxConfig::rippleSpeed
	float ___rippleSpeed_6;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::rippleColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rippleColor_7;
	// System.Single MaterialUI.SelectionBoxConfig::rippleStartAlpha
	float ___rippleStartAlpha_8;
	// System.Single MaterialUI.SelectionBoxConfig::rippleEndAlpha
	float ___rippleEndAlpha_9;
	// MaterialUI.SelectionBoxConfig/HighlightActive MaterialUI.SelectionBoxConfig::highlightWhen
	int32_t ___highlightWhen_10;
	// System.Boolean MaterialUI.SelectionBoxConfig::moveTowardCenter
	bool ___moveTowardCenter_11;
	// System.Boolean MaterialUI.SelectionBoxConfig::toggleMask
	bool ___toggleMask_12;
	// System.Boolean MaterialUI.SelectionBoxConfig::highlightLastSelected
	bool ___highlightLastSelected_13;
	// System.Single MaterialUI.SelectionBoxConfig::animationDuration
	float ___animationDuration_14;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::expandedListColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___expandedListColor_15;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::contractedListColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___contractedListColor_16;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::currentColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentColor_17;
	// System.Int32 MaterialUI.SelectionBoxConfig::expandedListShadowLevel
	int32_t ___expandedListShadowLevel_18;
	// MaterialUI.ShadowConfig MaterialUI.SelectionBoxConfig::shadowConfig
	ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* ___shadowConfig_19;
	// System.Int32 MaterialUI.SelectionBoxConfig::contractedNormalShadow
	int32_t ___contractedNormalShadow_20;
	// System.Int32 MaterialUI.SelectionBoxConfig::contractedHoverShadow
	int32_t ___contractedHoverShadow_21;
	// System.String[] MaterialUI.SelectionBoxConfig::listItems
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___listItems_22;
	// System.Boolean MaterialUI.SelectionBoxConfig::autoMaxItemHeight
	bool ___autoMaxItemHeight_23;
	// System.Single MaterialUI.SelectionBoxConfig::percentageOfScreenHeight
	float ___percentageOfScreenHeight_24;
	// System.Int32 MaterialUI.SelectionBoxConfig::manualMaxItemHeight
	int32_t ___manualMaxItemHeight_25;
	// System.Int32 MaterialUI.SelectionBoxConfig::currentSelection
	int32_t ___currentSelection_26;
	// MaterialUI.SelectionBoxConfig/PopDirection MaterialUI.SelectionBoxConfig::expandDirection
	int32_t ___expandDirection_27;
	// UnityEngine.GameObject MaterialUI.SelectionBoxConfig::listLayer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___listLayer_28;
	// UnityEngine.UI.Text MaterialUI.SelectionBoxConfig::selectedText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___selectedText_29;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::cancelLayer
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___cancelLayer_30;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::scrollbar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___scrollbar_31;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___icon_32;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::textLine
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___textLine_33;
	// System.Single MaterialUI.SelectionBoxConfig::textLineAlpha
	float ___textLineAlpha_34;
	// UnityEngine.GameObject[] MaterialUI.SelectionBoxConfig::listItemObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___listItemObjects_35;
	// System.Single MaterialUI.SelectionBoxConfig::listheight
	float ___listheight_36;
	// System.Single MaterialUI.SelectionBoxConfig::listLayerHeight
	float ___listLayerHeight_37;
	// System.Single MaterialUI.SelectionBoxConfig::listPos
	float ___listPos_38;
	// System.Boolean MaterialUI.SelectionBoxConfig::hasShadows
	bool ___hasShadows_39;
	// System.Int32 MaterialUI.SelectionBoxConfig::contractedShadowLevel
	int32_t ___contractedShadowLevel_40;
	// MaterialUI.RippleConfig MaterialUI.SelectionBoxConfig::rippleConfig
	RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* ___rippleConfig_41;
	// UnityEngine.UI.Button MaterialUI.SelectionBoxConfig::thisButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___thisButton_42;
	// UnityEngine.GameObject MaterialUI.SelectionBoxConfig::listItemPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___listItemPrefab_43;
	// UnityEngine.GameObject MaterialUI.SelectionBoxConfig::listItem
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___listItem_44;
	// UnityEngine.CanvasGroup MaterialUI.SelectionBoxConfig::listCanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___listCanvasGroup_45;
	// UnityEngine.RectTransform MaterialUI.SelectionBoxConfig::thisRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___thisRect_46;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::thisImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___thisImage_47;
	// UnityEngine.CanvasGroup MaterialUI.SelectionBoxConfig::scrollbarCanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___scrollbarCanvasGroup_48;
	// System.Single MaterialUI.SelectionBoxConfig::originalHeight
	float ___originalHeight_49;
	// System.Single MaterialUI.SelectionBoxConfig::expandedPos
	float ___expandedPos_50;
	// System.Single MaterialUI.SelectionBoxConfig::originalPos
	float ___originalPos_51;
	// UnityEngine.Vector3 MaterialUI.SelectionBoxConfig::textPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___textPos_52;
	// UnityEngine.Vector3 MaterialUI.SelectionBoxConfig::iconPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___iconPos_53;
	// System.Single MaterialUI.SelectionBoxConfig::listCanvasAlpha
	float ___listCanvasAlpha_54;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::normalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___normalColor_55;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::highlightColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___highlightColor_56;
	// System.Single MaterialUI.SelectionBoxConfig::animStartTime
	float ___animStartTime_57;
	// System.Single MaterialUI.SelectionBoxConfig::animDeltaTime
	float ___animDeltaTime_58;
	// System.Int32 MaterialUI.SelectionBoxConfig::state
	int32_t ___state_59;
	// System.Boolean MaterialUI.SelectionBoxConfig::scrollbarEnabled
	bool ___scrollbarEnabled_60;
	// MaterialUI.SelectionBoxConfig/PickItem MaterialUI.SelectionBoxConfig::ItemPicked
	PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* ___ItemPicked_61;
	// UnityEngine.Transform MaterialUI.SelectionBoxConfig::parentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentTransform_62;
};

// MaterialUI.SelectionBoxSubscriber
struct SelectionBoxSubscriber_tF01796386C8D81F4D4729E45759DC7898140235B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MaterialUI.SelectionBoxConfig MaterialUI.SelectionBoxSubscriber::config
	SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* ___config_4;
};

// MaterialUI.SelectionListItemConfig
struct SelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MaterialUI.SelectionListItemConfig::listId
	int32_t ___listId_4;
	// MaterialUI.SelectionBoxConfig MaterialUI.SelectionListItemConfig::selectionBoxConfig
	SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* ___selectionBoxConfig_5;
};

// MaterialUI.ShadowAnim
struct ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MaterialUI.ShadowAnim::isOn
	bool ___isOn_4;
	// System.Boolean MaterialUI.ShadowAnim::anim
	bool ___anim_5;
	// UnityEngine.CanvasGroup MaterialUI.ShadowAnim::thisGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___thisGroup_6;
	// UnityEngine.UI.Image[] MaterialUI.ShadowAnim::shadows
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___shadows_7;
};

// MaterialUI.ShadowConfig
struct ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MaterialUI.ShadowAnim[] MaterialUI.ShadowConfig::shadows
	ShadowAnimU5BU5D_t5E9BFBF1BA0EE29A02BE2F8CAD1A01AEB2EDE473* ___shadows_4;
	// System.Int32 MaterialUI.ShadowConfig::shadowNormalSize
	int32_t ___shadowNormalSize_5;
	// System.Int32 MaterialUI.ShadowConfig::shadowActiveSize
	int32_t ___shadowActiveSize_6;
	// MaterialUI.ShadowConfig/ShadowsActive MaterialUI.ShadowConfig::shadowsActiveWhen
	int32_t ___shadowsActiveWhen_7;
	// System.Boolean MaterialUI.ShadowConfig::isEnabled
	bool ___isEnabled_8;
};

// MaterialUI.ShadowSnap
struct ShadowSnap_t5EEE8216C2931F9E095772CB74FE2D7561280757  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform MaterialUI.ShadowSnap::targetRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___targetRect_4;
	// UnityEngine.RectTransform MaterialUI.ShadowSnap::thisRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___thisRect_5;
	// System.Single MaterialUI.ShadowSnap::xPadding
	float ___xPadding_6;
	// System.Single MaterialUI.ShadowSnap::yPadding
	float ___yPadding_7;
	// System.Boolean MaterialUI.ShadowSnap::percentage
	bool ___percentage_8;
	// System.Single MaterialUI.ShadowSnap::xPercent
	float ___xPercent_9;
	// System.Single MaterialUI.ShadowSnap::yPercent
	float ___yPercent_10;
	// UnityEngine.Rect MaterialUI.ShadowSnap::lastRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastRect_11;
	// UnityEngine.Vector3 MaterialUI.ShadowSnap::lastPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastPos_12;
};

// MaterialUI.SliderConfig
struct SliderConfig_t90B4137C2A268DEDC9DF818E5074F3F4D067A7A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean MaterialUI.SliderConfig::textHasDecimal
	bool ___textHasDecimal_4;
	// System.Boolean MaterialUI.SliderConfig::hasPopup
	bool ___hasPopup_5;
	// System.Single MaterialUI.SliderConfig::animationDuration
	float ___animationDuration_6;
	// UnityEngine.RectTransform MaterialUI.SliderConfig::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_7;
	// UnityEngine.RectTransform MaterialUI.SliderConfig::popup
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___popup_8;
	// UnityEngine.UI.Text MaterialUI.SliderConfig::popupText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___popupText_9;
	// UnityEngine.UI.Slider MaterialUI.SliderConfig::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_10;
	// System.Single MaterialUI.SliderConfig::currentPopupScale
	float ___currentPopupScale_11;
	// System.Single MaterialUI.SliderConfig::currentHandleScale
	float ___currentHandleScale_12;
	// System.Single MaterialUI.SliderConfig::currentPos
	float ___currentPos_13;
	// System.Boolean MaterialUI.SliderConfig::isSelected
	bool ___isSelected_14;
	// System.Int32 MaterialUI.SliderConfig::state
	int32_t ___state_15;
	// System.Single MaterialUI.SliderConfig::animStartTime
	float ___animStartTime_16;
	// System.Single MaterialUI.SliderConfig::animDeltaTime
	float ___animDeltaTime_17;
	// UnityEngine.Vector3 MaterialUI.SliderConfig::tempVec3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tempVec3_18;
};

// MaterialUI.SnapButtonToText
struct SnapButtonToText_tD080412F7AC57AE0CF215BD7BE22CA3018A2A5E8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform MaterialUI.SnapButtonToText::buttonRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___buttonRectTransform_4;
	// System.Boolean MaterialUI.SnapButtonToText::snapEveryFrame
	bool ___snapEveryFrame_5;
	// UnityEngine.RectTransform MaterialUI.SnapButtonToText::thisRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___thisRectTransform_6;
	// UnityEngine.Vector2 MaterialUI.SnapButtonToText::textSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textSize_7;
	// UnityEngine.Vector2 MaterialUI.SnapButtonToText::basePadding
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___basePadding_8;
	// UnityEngine.Vector2 MaterialUI.SnapButtonToText::buttonSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___buttonSize_9;
	// UnityEngine.Vector2 MaterialUI.SnapButtonToText::buttonPadding
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___buttonPadding_10;
	// UnityEngine.Vector2 MaterialUI.SnapButtonToText::finalSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___finalSize_11;
};

// MaterialUI.SpriteSwapper
struct SpriteSwapper_t8C76CD448BEC3E3B78B1F4D7E2309716AB6B4998  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite MaterialUI.SpriteSwapper::sprite1x
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite1x_4;
	// UnityEngine.Sprite MaterialUI.SpriteSwapper::sprite2x
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite2x_5;
	// UnityEngine.Sprite MaterialUI.SpriteSwapper::sprite4x
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite4x_6;
	// System.Single MaterialUI.SpriteSwapper::scaleFactor
	float ___scaleFactor_7;
	// UnityEngine.UI.Image MaterialUI.SpriteSwapper::thisImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___thisImage_8;
	// MaterialUI.MaterialUIScaler MaterialUI.SpriteSwapper::scaler
	MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* ___scaler_9;
};

// MaterialUI.SwitchConfig
struct SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MaterialUI.SwitchConfig::animationDuration
	float ___animationDuration_4;
	// UnityEngine.Color MaterialUI.SwitchConfig::onColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___onColor_5;
	// UnityEngine.Color MaterialUI.SwitchConfig::offColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___offColor_6;
	// UnityEngine.Color MaterialUI.SwitchConfig::disabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___disabledColor_7;
	// UnityEngine.Color MaterialUI.SwitchConfig::backOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backOffColor_8;
	// UnityEngine.Color MaterialUI.SwitchConfig::backDisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backDisabledColor_9;
	// System.Boolean MaterialUI.SwitchConfig::changeTextColor
	bool ___changeTextColor_10;
	// UnityEngine.Color MaterialUI.SwitchConfig::textNormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___textNormalColor_11;
	// UnityEngine.Color MaterialUI.SwitchConfig::textDisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___textDisabledColor_12;
	// System.Boolean MaterialUI.SwitchConfig::changeRippleColor
	bool ___changeRippleColor_13;
	// UnityEngine.UI.Image MaterialUI.SwitchConfig::switchImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___switchImage_14;
	// UnityEngine.UI.Image MaterialUI.SwitchConfig::backImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___backImage_15;
	// UnityEngine.UI.Text MaterialUI.SwitchConfig::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_16;
	// UnityEngine.RectTransform MaterialUI.SwitchConfig::switchRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___switchRectTransform_17;
	// MaterialUI.CheckBoxToggler MaterialUI.SwitchConfig::checkBoxToggler
	CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* ___checkBoxToggler_18;
	// MaterialUI.RippleConfig MaterialUI.SwitchConfig::rippleConfig
	RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* ___rippleConfig_19;
	// UnityEngine.UI.Toggle MaterialUI.SwitchConfig::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_20;
	// System.Boolean MaterialUI.SwitchConfig::lastToggleInteractableState
	bool ___lastToggleInteractableState_21;
	// System.Boolean MaterialUI.SwitchConfig::lastToggleState
	bool ___lastToggleState_22;
	// System.Single MaterialUI.SwitchConfig::currentSwitchPosition
	float ___currentSwitchPosition_23;
	// UnityEngine.Color MaterialUI.SwitchConfig::currentColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentColor_24;
	// UnityEngine.Color MaterialUI.SwitchConfig::currentBackColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentBackColor_25;
	// UnityEngine.Color MaterialUI.SwitchConfig::currentTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___currentTextColor_26;
	// System.Int32 MaterialUI.SwitchConfig::state
	int32_t ___state_27;
	// System.Single MaterialUI.SwitchConfig::animStartTime
	float ___animStartTime_28;
	// System.Single MaterialUI.SwitchConfig::animDeltaTime
	float ___animDeltaTime_29;
};

// MaterialUI.TextInputLine
struct TextInputLine_t212804154FD57E38FF5ABAFABD027E8F44CCDF58  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color MaterialUI.TextInputLine::lineColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lineColor_4;
	// UnityEngine.RectTransform MaterialUI.TextInputLine::thisRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___thisRect_5;
	// UnityEngine.UI.Image MaterialUI.TextInputLine::thisIm
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___thisIm_6;
	// UnityEngine.UI.Text MaterialUI.TextInputLine::placeholderText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___placeholderText_7;
	// UnityEngine.RectTransform MaterialUI.TextInputLine::textInputRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___textInputRect_8;
	// System.Single MaterialUI.TextInputLine::animStartTime
	float ___animStartTime_9;
	// System.Single MaterialUI.TextInputLine::animDeltaTime
	float ___animDeltaTime_10;
	// System.Single MaterialUI.TextInputLine::animPosX
	float ___animPosX_11;
	// System.Int32 MaterialUI.TextInputLine::mode
	int32_t ___mode_12;
};

// MaterialUI.ToastAnim
struct ToastAnim_t6E91644F45C4CBCFB16840A94A43BBE4D66F979B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MaterialUI.ToastAnim::state
	int32_t ___state_4;
	// UnityEngine.Vector2 MaterialUI.ToastAnim::onPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___onPos_5;
	// UnityEngine.Vector2 MaterialUI.ToastAnim::offPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offPos_6;
	// UnityEngine.UI.Text MaterialUI.ToastAnim::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_7;
	// UnityEngine.RectTransform MaterialUI.ToastAnim::thisRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___thisRect_8;
	// UnityEngine.UI.Image MaterialUI.ToastAnim::panelImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___panelImage_9;
	// UnityEngine.UI.Image MaterialUI.ToastAnim::shadowImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___shadowImage_10;
	// UnityEngine.CanvasGroup MaterialUI.ToastAnim::canvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___canvasGroup_11;
	// UnityEngine.Color MaterialUI.ToastAnim::tempColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tempColor_12;
	// UnityEngine.Vector2 MaterialUI.ToastAnim::tempVec2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tempVec2_13;
	// UnityEngine.Vector3 MaterialUI.ToastAnim::tempVec3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tempVec3_14;
	// System.Single MaterialUI.ToastAnim::timeToWait
	float ___timeToWait_15;
	// System.Single MaterialUI.ToastAnim::animSpeed
	float ___animSpeed_16;
};

// MaterialUI.Toaster
struct Toaster_t67BA5E50D59D9D7582E30E3AFEB4DC2EC5574439  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String MaterialUI.Toaster::text
	String_t* ___text_4;
	// System.Single MaterialUI.Toaster::duration
	float ___duration_5;
	// UnityEngine.Color MaterialUI.Toaster::panelColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___panelColor_6;
	// UnityEngine.Color MaterialUI.Toaster::textColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___textColor_7;
	// System.Int32 MaterialUI.Toaster::fontSize
	int32_t ___fontSize_8;
};

// MaterialUI.ToggleConfig
struct ToggleConfig_tE30AB181A736B6C13168B34FA7B1C4F85324A18D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider MaterialUI.ToggleConfig::theSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___theSlider_4;
	// UnityEngine.UI.Toggle MaterialUI.ToggleConfig::theToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___theToggle_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;
	// System.Boolean UnityEngine.UI.CanvasScaler::m_PresetInfoIsWorld
	bool ___m_PresetInfoIsWorld_18;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Mask
struct Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_4;
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_5;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Graphic_6;
	// UnityEngine.Material UnityEngine.UI.Mask::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_7;
	// UnityEngine.Material UnityEngine.UI.Mask::m_UnmaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_UnmaskMaterial_8;
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

// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.ToggleGroup::m_AllowSwitchOff
	bool ___m_AllowSwitchOff_4;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::m_Toggles
	List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* ___m_Toggles_5;
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
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
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

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// MaterialUI.RippleControl
struct RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields
{
	// UnityEngine.GameObject MaterialUI.RippleControl::ripplePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ripplePrefab_0;
	// UnityEngine.GameObject MaterialUI.RippleControl::currentRipple
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentRipple_1;
};

// MaterialUI.RippleControl

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// MaterialUI.InputFieldConfig/<DelayedHeight>d__30

// MaterialUI.InputFieldConfig/<DelayedHeight>d__30

// MaterialUI.RippleConfig/<DelayedMaskCheck>d__44

// MaterialUI.RippleConfig/<DelayedMaskCheck>d__44

// MaterialUI.RippleConfig/<GetRect>d__45

// MaterialUI.RippleConfig/<GetRect>d__45

// MaterialUI.ToastAnim/<WaitTime>d__15

// MaterialUI.ToastAnim/<WaitTime>d__15

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// MaterialUI.HSBColor

// MaterialUI.HSBColor

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1385A3395CDC9F7F90324CB0A06C5AC11AD4A425A35BBB7D5C9C0C33D8ADE9A0
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___1385A3395CDC9F7F90324CB0A06C5AC11AD4A425A35BBB7D5C9C0C33D8ADE9A0_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_2;
};

// <PrivateImplementationDetails>

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// MaterialUI.ToastControl
struct ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields
{
	// UnityEngine.GameObject MaterialUI.ToastControl::theToast
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___theToast_0;
	// System.String MaterialUI.ToastControl::toastText
	String_t* ___toastText_1;
	// System.Single MaterialUI.ToastControl::toastDuration
	float ___toastDuration_2;
	// UnityEngine.Color MaterialUI.ToastControl::toastPanelColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___toastPanelColor_3;
	// UnityEngine.Color MaterialUI.ToastControl::toastTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___toastTextColor_4;
	// System.Int32 MaterialUI.ToastControl::toastFontSize
	int32_t ___toastFontSize_5;
	// UnityEngine.Canvas MaterialUI.ToastControl::parentCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___parentCanvas_6;
};

// MaterialUI.ToastControl

// MaterialUI.RippleConfig/<DragCheck>d__43

// MaterialUI.RippleConfig/<DragCheck>d__43

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// MaterialUI.SelectionBoxConfig/PickItem

// MaterialUI.SelectionBoxConfig/PickItem

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// MaterialUI.CheckBoxToggler

// MaterialUI.CheckBoxToggler

// MaterialUI.InputFieldConfig

// MaterialUI.InputFieldConfig

// MaterialUI.MaterialGlobals
struct MaterialGlobals_tA9ABC4A265C7E8335FD8B070FE6A198C0B9C2E1C_StaticFields
{
	// UnityEngine.Vector4 MaterialUI.MaterialGlobals::shadowSpriteBorder
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___shadowSpriteBorder_4;
	// System.Single MaterialUI.MaterialGlobals::uiScale
	float ___uiScale_5;
};

// MaterialUI.MaterialGlobals

// MaterialUI.MaterialUIScaler

// MaterialUI.MaterialUIScaler

// MaterialUI.MenuArrowAnim

// MaterialUI.MenuArrowAnim

// MaterialUI.NavDrawerConfig

// MaterialUI.NavDrawerConfig

// MaterialUI.RadioConfig

// MaterialUI.RadioConfig

// MaterialUI.RectTransformSnap

// MaterialUI.RectTransformSnap

// MaterialUI.RippleAnim

// MaterialUI.RippleAnim

// MaterialUI.RippleConfig

// MaterialUI.RippleConfig

// MaterialUI.ScreenConfig

// MaterialUI.ScreenConfig

// MaterialUI.ScreenManager

// MaterialUI.ScreenManager

// MaterialUI.SelectionBoxConfig

// MaterialUI.SelectionBoxConfig

// MaterialUI.SelectionBoxSubscriber

// MaterialUI.SelectionBoxSubscriber

// MaterialUI.SelectionListItemConfig

// MaterialUI.SelectionListItemConfig

// MaterialUI.ShadowAnim

// MaterialUI.ShadowAnim

// MaterialUI.ShadowConfig

// MaterialUI.ShadowConfig

// MaterialUI.ShadowSnap

// MaterialUI.ShadowSnap

// MaterialUI.SliderConfig

// MaterialUI.SliderConfig

// MaterialUI.SnapButtonToText

// MaterialUI.SnapButtonToText

// MaterialUI.SpriteSwapper

// MaterialUI.SpriteSwapper

// MaterialUI.SwitchConfig

// MaterialUI.SwitchConfig

// MaterialUI.TextInputLine

// MaterialUI.TextInputLine

// MaterialUI.ToastAnim

// MaterialUI.ToastAnim

// MaterialUI.Toaster

// MaterialUI.Toaster

// MaterialUI.ToggleConfig

// MaterialUI.ToggleConfig

// UnityEngine.UI.CanvasScaler

// UnityEngine.UI.CanvasScaler

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Mask

// UnityEngine.UI.Mask

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.ToggleGroup

// UnityEngine.UI.ToggleGroup

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// MaterialUI.ScreenConfig[]
struct ScreenConfigU5BU5D_t9A87D4088C46E27940AA22DF56870EE6DFAD3FC2  : public RuntimeArray
{
	ALIGN_FIELD (8) ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* m_Items[1];

	inline ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
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
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MaterialUI.ShadowAnim[]
struct ShadowAnimU5BU5D_t5E9BFBF1BA0EE29A02BE2F8CAD1A01AEB2EDE473  : public RuntimeArray
{
	ALIGN_FIELD (8) ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F* m_Items[1];

	inline ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.CanvasScaler>()
inline CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::get_uiScaleMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CanvasScaler_get_uiScaleMode_m8E92609E011796E8CC23B1739F95CE7BE2631525_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::get_referenceResolution()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CanvasScaler_get_referenceResolution_m79C03DD8CE6759B045928C5339A3C5E6220276B5_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void MaterialUI.MaterialUIScaler::set_scaleFactor(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MaterialUIScaler_set_scaleFactor_mBF1565B38029BD9B57F1E14247410963043C30DD_inline (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.CanvasScaler::get_scaleFactor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CanvasScaler_get_scaleFactor_mB2BFA22B99AEC96F09886F490DA9EE2F825D3431_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void MaterialUI.MenuArrowAnim::Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Menu_m37C9A517D399F0B23E42E0C9D99FFDF76AFB6E27 (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.MenuArrowAnim::Arrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Arrow_m8B506BC0C1668C55235038C6AA10CD1569FD8A9E (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Quint::SoftOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E (float ___0_startValue, float ___1_endValue, float ___2_time, float ___3_duration, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 MaterialUI.Anim/Quint::SoftOut(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Quint_SoftOut_mE8D976284483F0B8ABEA315245D50293CFC89352 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_startValue, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_endValue, float ___2_time, float ___3_duration, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.NavDrawerConfig::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Close_mA02B61D4C1AEFD33D4A761A90FADCB1B72610272 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 MaterialUI.Anim/Quint::Out(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Quint_Out_m0D5446E0799ABEEEBD1C16AD2D273BCB4246B6A0 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_startValue, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_endValue, float ___2_time, float ___3_duration, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Quint::Out(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7 (float ___0_startValue, float ___1_endValue, float ___2_time, float ___3_duration, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Quint::In(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460 (float ___0_startValue, float ___1_endValue, float ___2_time, float ___3_duration, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void MaterialUI.NavDrawerConfig::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Open_m447C2165290EACA621D8EA4964A71CB618E6B7BD (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.ToggleGroup>()
inline ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* Component_GetComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_mF37E1C928AF195AD949836E650B9E7646D1BBA47 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<MaterialUI.CheckBoxToggler>()
inline CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<MaterialUI.RippleConfig>()
inline RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Toggle::set_group(UnityEngine.UI.ToggleGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_group_mEE85FE3AB2ACFF9056DA613239DBACECA588507B (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.RadioConfig::TurnOnSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOnSilent_m5AC09AD9FFB688EC2F9B0A6AD0BB8D4252208EA8 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.RadioConfig::TurnOffSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOffSilent_mCA5BF60941B25B4A5551DC9DF4E49406E835845C (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.RadioConfig::TurnOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOn_m055CBC4E91A4A14CF0E270B60B4D29AAE92341A1 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.RadioConfig::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOff_mE6BBFD85DDD02E70E6E974350EE76FC13EC74B7B (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MaterialUI.Anim::Overshoot(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Anim_Overshoot_m4306436AF6F04B5753F5CA2C96CE3A1E60A6CA3B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_startValue, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endValue, float ___2_time, float ___3_duration, const RuntimeMethod* method) ;
// UnityEngine.Color MaterialUI.Anim/Quint::SoftOut(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_startValue, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_endValue, float ___2_time, float ___3_duration, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MaterialUI.Anim/Sept::InOut(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Sept_InOut_m9A697497142F6DEDAE999DC4999072B2B0E9AB1B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_startValue, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endValue, float ___2_time, float ___3_duration, const RuntimeMethod* method) ;
// UnityEngine.Color MaterialUI.Anim/Sept::InOut(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Sept_InOut_m446BE1F1757BF0591F1F052F9C0031165BB5812D (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_startValue, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_endValue, float ___2_time, float ___3_duration, const RuntimeMethod* method) ;
// System.Void MaterialUI.RadioConfig::EnableRadioButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_EnableRadioButton_mFEABED3ED154238C697F1FB4C8CE38504F997044 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.RadioConfig::DisableRadioButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_DisableRadioButton_mA7A9EDBAE4C57EE8273EFC4644C811CB4E659BF3 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void MaterialUI.RectTransformSnap::Snap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransformSnap_Snap_mDE60F0C0DA6E421F8E600924718481E61C0063DD (RectTransformSnap_tE01ECC8D9D0CC4A448B885F2A7A52A8821EBE9E7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Inequality_mB5D7316EB50B1DDA9324F4BE6741DFF6A673137D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_lhs, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsFirstSibling_mBE0D0E76099F829466DC2FBD71ACFCF3C8EC03BD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<MaterialUI.MaterialUIScaler>()
inline MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* GameObject_GetComponentInParent_TisMaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F_m39A4C2087AC0B0B140D6D65A33DA167EA354244F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// System.Single MaterialUI.MaterialUIScaler::get_scaleFactor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MaterialUIScaler_get_scaleFactor_m853F366519FCBD659D04D6BFA0C3AE48D17319C0_inline (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void MaterialUI.RippleControl::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleControl_Initialize_mDA9F33145AF8827FF031CBD56AC7230807C8CED6 (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Mask>()
inline Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* GameObject_GetComponent_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m25C8620453831113C9063019F4E90A35F0B737AF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Mask>()
inline Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* GameObject_AddComponent_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_mAB9A7CE273F47DA107A278EEFEF3C1B61C08B303 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.RippleConfig::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_Refresh_mC2281C7B12A553E8D9E774FFBF4DCF0F020A4AE5 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MaterialUI.RippleConfig::GetRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RippleConfig_GetRect_m374CEDFB0BAE1BF808991CA726629D4268FE5879 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void MaterialUI.RippleConfig::RefreshContinued()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_RefreshContinued_m691C3CA3E7F527819A2781AA3EBBD6E70AE39913 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, const RuntimeMethod* method) ;
// MaterialUI.HSBColor MaterialUI.HSBColor::FromColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A HSBColor_FromColor_m70EF18BA22C46F43BD47ACC0D7976862A291D05A (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) ;
// UnityEngine.Color MaterialUI.HSBColor::ToColor(MaterialUI.HSBColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSBColor_ToColor_mBF4D235881CF9E626E2DB5E2EE780798C4269607 (HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A ___0_hsbColor, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim::Linear(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2 (float ___0_startValue, float ___1_endValue, float ___2_time, float ___3_duration, const RuntimeMethod* method) ;
// UnityEngine.Color MaterialUI.Anim/Quint::Out(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Quint_Out_mDC1C9CCF37FC9B50A6895773873B7917B03AA27F (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_startValue, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_endValue, float ___2_time, float ___3_duration, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MaterialUI.RippleConfig::DragCheck(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RippleConfig_DragCheck_m79F2AD0FA0D56BC35103E3E50CE6295BC900138C (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MaterialUI.RippleConfig::DelayedMaskCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RippleConfig_DelayedMaskCheck_m6BD98BDCCE5E352AF61D4471C2251EAB8C369CF8 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.RippleAnim::ClearRipple()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleAnim_ClearRipple_m76705AB4FF88828551D6545C7ACABF111D7B0ED9 (RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject MaterialUI.RippleControl::MakeRipple(UnityEngine.Vector3,UnityEngine.Transform,System.Int32,System.Single,System.Single,System.Single,UnityEngine.Color,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RippleControl_MakeRipple_m4083D244D0806FEDA3C433DDA78800869B5F94B5 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, int32_t ___2_size, float ___3_animSpeed, float ___4_startAlpha, float ___5_endAlpha, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___6_color, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_endPosition, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<MaterialUI.RippleAnim>()
inline RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.GameObject MaterialUI.RippleControl::MakeRipple(UnityEngine.Vector3,UnityEngine.Transform,System.Int32,System.Single,System.Single,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RippleControl_MakeRipple_m489D70458E76126AACEA99C297DF960D933B475E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, int32_t ___2_size, float ___3_animSpeed, float ___4_startAlpha, float ___5_endAlpha, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___6_color, const RuntimeMethod* method) ;
// System.Void MaterialUI.RippleConfig/<DragCheck>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDragCheckU3Ed__43__ctor_m1E5F4D65DE5FC221FEC3B87D95A53199195579B3 (U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void MaterialUI.RippleConfig/<DelayedMaskCheck>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedMaskCheckU3Ed__44__ctor_mE1AA25F32FA0D7EC76E1E8D7620B86E98CBF8822 (U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void MaterialUI.RippleConfig/<GetRect>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRectU3Ed__45__ctor_m99DCCB3A84EE0C5EB08D4F4FD26969BC66C6FEEE (U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void MaterialUI.RippleConfig::MakeInkBlot(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_MakeInkBlot_m40B5E184BFF2C32F0750634E093A192FB7CB1006 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<MaterialUI.RippleAnim>()
inline RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* GameObject_GetComponentInChildren_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_m68F9DD4540464857D8BAD1EA7BBF472DC8D7FA65 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33 (String_t* ___0_path, Type_t* ___1_systemTypeInstance, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void MaterialUI.RippleAnim::MakeRipple(System.Int32,System.Single,System.Single,System.Single,UnityEngine.Color,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleAnim_MakeRipple_m40EEDF4CB5B03421F07036A1563DE4EEBC56F263 (RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* __this, int32_t ___0_size, float ___1_animSpeed, float ___2_startAlpha, float ___3_endAlpha, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_color, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_endPosition, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void MaterialUI.ScreenConfig::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenConfig_Show_mCF57507B642E8DF53BFFE75D8FED54EF2D7D83BA (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, int32_t ___0_axis, float ___1_size, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void MaterialUI.ScreenConfig::HideWithoutTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenConfig_HideWithoutTransition_m2E716058A6C8B22B07E08AF9B91CB56F63337A13 (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsLastSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.ScreenConfig::Show(MaterialUI.ScreenConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenConfig_Show_m05EA512A4DBA46CC878866CAE8626E2BE8712EBF (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* __this, ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* ___0_screenToHide, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void MaterialUI.ScreenManager::Set(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenManager_Set_m4BDD53D07F550ED8BBB1800B6B6EEB0BB0D0A1CF (ScreenManager_t544AF9CFFA29D3188AE8C163B60758400B1A4EC7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void MaterialUI.ScreenConfig::ShowWithoutTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenConfig_ShowWithoutTransition_mE5E039798FA03CEDF6BAE12C9C21575717E7EACB (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.ScreenConfig::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenConfig_Hide_m956BD9B13BBF9E4897043AC7DE2DFAC67246B109 (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<MaterialUI.ShadowConfig>()
inline ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* GameObject_GetComponent_TisShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A_mFF0B17F79C75B3DBC58A006081263B436C03965B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void MaterialUI.SelectionBoxConfig::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxConfig_Setup_mE4AFB4222721ACB807240234B36A917D1BCAFF9C (SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<MaterialUI.SelectionListItemConfig>()
inline SelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12* GameObject_GetComponent_TisSelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12_mC8DAF88588B8BC977DD61B4CF257C5B2B369F9BC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<MaterialUI.RippleConfig>()
inline RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* Component_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_m975EB99B90AB413CA715FFE07563605E0D4A215B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void MaterialUI.SelectionListItemConfig::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionListItemConfig_Setup_m81E89F361586171F702ED14179CA34DBB6CF9C22 (SelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_mD0296202733CB2D5342FB7C82B48AEDA63036758_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void MaterialUI.ShadowConfig::SetShadows(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowConfig_SetShadows_m14702C338A4E17AD2406E5AC5A56D901851A43E6 (ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* __this, int32_t ___0_shadowOn, const RuntimeMethod* method) ;
// System.Single MaterialUI.Anim/Quint::InOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E (float ___0_startValue, float ___1_endValue, float ___2_time, float ___3_duration, const RuntimeMethod* method) ;
// UnityEngine.Color MaterialUI.Anim/Quint::In(UnityEngine.Color,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Quint_In_m907D9D8D1DED580C17D263181DABC9D3912F58C1 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_startValue, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_endValue, float ___2_time, float ___3_duration, const RuntimeMethod* method) ;
// System.Void MaterialUI.SelectionBoxConfig::ContractList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxConfig_ContractList_m13FEC5F2A4DC419129DD53B0B8E5680F9E2313D9 (SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.SelectionBoxConfig/PickItem::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickItem_Invoke_mD3F22F8AE04006B6DDEA1E911514886E2762E028_inline (PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* __this, int32_t ___0_itemId, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<MaterialUI.SelectionBoxConfig>()
inline SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* GameObject_GetComponent_TisSelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A_m37DD9E8A4AFA0A3CD719ED84DD1F287B790AC477 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void MaterialUI.SelectionBoxConfig/PickItem::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickItem__ctor_m624913CB2E6D55AF6836F0F6C701DA36E4FDC061 (PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<MaterialUI.SelectionBoxConfig>()
inline SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* GameObject_GetComponentInParent_TisSelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A_m4D83D1A949477F95D4729B6A66535E0FB2280E6C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// System.Void MaterialUI.SelectionBoxConfig::Select(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxConfig_Select_mB4C8EBCFE5C9DF58D56B52776819524EB05FDBCC (SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* __this, int32_t ___0_selectionId, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Image>()
inline ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC8B5ACBEEF3B80C0B0FB6B10286C4524EB9FADEA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void MaterialUI.ShadowAnim::SetShadow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowAnim_SetShadow_m2CB32244A312F8454B77A1E382116A0AC60C3915 (ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F* __this, bool ___0_set, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void MaterialUI.SliderConfig::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderConfig_UpdateText_mB5769457E4EC95E8C10BD62C5EFC64680D9EF983 (SliderConfig_t90B4137C2A268DEDC9DF818E5074F3F4D067A7A3* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Void MaterialUI.SnapButtonToText::Snap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapButtonToText_Snap_m58579E4CDE87DDA58C5A82BE4DAE710670BEB0E0 (SnapButtonToText_tD080412F7AC57AE0CF215BD7BE22CA3018A2A5E8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<MaterialUI.MaterialUIScaler>()
inline MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* Component_GetComponent_TisMaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F_mCF62027827508AE4F7C975A097137808332ABE72 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void MaterialUI.SwitchConfig::TurnOnSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_TurnOnSilent_m03C45F12CBECEDA6E390120D3A83E33016B68738 (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.SwitchConfig::TurnOffSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_TurnOffSilent_mE447C10C219609AA75D0B41D5DD2CB7E914F1206 (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.SwitchConfig::TurnOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_TurnOn_m7E2F1BD63785D4FD7B797E886F042452DEE7B3CE (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.SwitchConfig::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_TurnOff_m33E49D5AED45CA74F6A7BF6184C056284995E69E (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.SwitchConfig::EnableSwitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_EnableSwitch_m02FCAC29BF986987F17928C6445BB339EF402DD1 (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.SwitchConfig::DisableSwitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_DisableSwitch_mCE89920D03C7DEA8048DB1D35C88DDD90F096EEA (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MaterialUI.ToastAnim::WaitTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToastAnim_WaitTime_mCDE1A229501919FA64E8514D1896DFF631122A75 (ToastAnim_t6E91644F45C4CBCFB16840A94A43BBE4D66F979B* __this, const RuntimeMethod* method) ;
// System.Void MaterialUI.ToastAnim/<WaitTime>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitTimeU3Ed__15__ctor_m5F623D85B46D1132AAB05BEA3A536C2573F43FF0 (U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void MaterialUI.ToastControl::InitToastSystem(UnityEngine.Canvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastControl_InitToastSystem_mA65233BEB8C72DDDE7D3E5DAA7FE60C16DC2294E (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___0_theCanvas, const RuntimeMethod* method) ;
// System.Void MaterialUI.ToastControl::MakeToast(System.String,System.Single,UnityEngine.Color,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastControl_MakeToast_m93BD3413DEB9436B91E945E668AD58E025B28E19 (String_t* ___0_content, float ___1_duration, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_panelColor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_textColor, int32_t ___4_fontSize, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* GameObject_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m5B183CEC40C6D124CD6B9AB842C1E9E8CA972E4B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MaterialUI.InputFieldConfig/<DelayedHeight>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedHeightU3Ed__30__ctor_m920598C14F7240D76E977A08165066A2853B9075 (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MaterialUI.InputFieldConfig/<DelayedHeight>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedHeightU3Ed__30_System_IDisposable_Dispose_mC5B8B97AE978E356395FF48DEC2C70B2D534CCBF (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MaterialUI.InputFieldConfig/<DelayedHeight>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedHeightU3Ed__30_MoveNext_m045421AE8B065692B86C414E4A063C79BBE9E843 (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!selectedBefore)
		InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->___selectedBefore_26;
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		// inputText.color = Color.clear;
		InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* L_7 = V_1;
		NullCheck(L_7);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = L_7->___inputText_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// selectedBefore = true;
		InputFieldConfig_tB20732E596ED5AC8DD3E58706D1FD19E39D719CE* L_10 = V_1;
		NullCheck(L_10);
		L_10->___selectedBefore_26 = (bool)1;
	}

IL_0058:
	{
		// }
		return (bool)0;
	}
}
// System.Object MaterialUI.InputFieldConfig/<DelayedHeight>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayedHeightU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBA314AA56D227E3BC37FDB577E62959291799E25 (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MaterialUI.InputFieldConfig/<DelayedHeight>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedHeightU3Ed__30_System_Collections_IEnumerator_Reset_m4D6E70959301CA99CF6BA0053EC96585F18B47E1 (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayedHeightU3Ed__30_System_Collections_IEnumerator_Reset_m4D6E70959301CA99CF6BA0053EC96585F18B47E1_RuntimeMethod_var)));
	}
}
// System.Object MaterialUI.InputFieldConfig/<DelayedHeight>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayedHeightU3Ed__30_System_Collections_IEnumerator_get_Current_m7022A55676F2018E9ADBFDC017310B91C4653F81 (U3CDelayedHeightU3Ed__30_t55D9EF710D6DB70316857C63B9AF9AF7852CCA81* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.MaterialGlobals::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialGlobals__ctor_m0B2BC2E796A9757A908B65BD7EA491E5B9E3A6AE (MaterialGlobals_tA9ABC4A265C7E8335FD8B070FE6A198C0B9C2E1C* __this, const RuntimeMethod* method) 
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
// System.Single MaterialUI.MaterialUIScaler::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MaterialUIScaler_get_scaleFactor_m853F366519FCBD659D04D6BFA0C3AE48D17319C0 (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, const RuntimeMethod* method) 
{
	{
		// public float scaleFactor { get; private set; }
		float L_0 = __this->___U3CscaleFactorU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void MaterialUI.MaterialUIScaler::set_scaleFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialUIScaler_set_scaleFactor_mBF1565B38029BD9B57F1E14247410963043C30DD (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float scaleFactor { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CscaleFactorU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void MaterialUI.MaterialUIScaler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialUIScaler_Update_m3276F4A7B629ED35BA9BBBDB8DA3FC8616EE55D7 (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!scaler)
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_0 = __this->___scaler_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// scaler = gameObject.GetComponent<CanvasScaler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_3;
		L_3 = GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8(L_2, GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8_RuntimeMethod_var);
		__this->___scaler_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scaler_7), (void*)L_3);
	}

IL_001e:
	{
		// if (scaler.uiScaleMode == CanvasScaler.ScaleMode.ScaleWithScreenSize)
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_4 = __this->___scaler_7;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = CanvasScaler_get_uiScaleMode_m8E92609E011796E8CC23B1739F95CE7BE2631525_inline(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		// referenceResolution = scaler.referenceResolution;
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_6 = __this->___scaler_7;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = CanvasScaler_get_referenceResolution_m79C03DD8CE6759B045928C5339A3C5E6220276B5_inline(L_6, NULL);
		__this->___referenceResolution_4 = L_7;
		// currentResolution = new Vector2(Screen.width, Screen.height);
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_9;
		L_9 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), ((float)L_8), ((float)L_9), /*hidden argument*/NULL);
		__this->___currentResolution_5 = L_10;
		// scaleFactor = (currentResolution.x*currentResolution.y)/(referenceResolution.x*referenceResolution.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___currentResolution_5);
		float L_12 = L_11->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___currentResolution_5);
		float L_14 = L_13->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___referenceResolution_4);
		float L_16 = L_15->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___referenceResolution_4);
		float L_18 = L_17->___y_1;
		MaterialUIScaler_set_scaleFactor_mBF1565B38029BD9B57F1E14247410963043C30DD_inline(__this, ((float)(((float)il2cpp_codegen_multiply(L_12, L_14))/((float)il2cpp_codegen_multiply(L_16, L_18)))), NULL);
		return;
	}

IL_008a:
	{
		// else if (scaler.uiScaleMode == CanvasScaler.ScaleMode.ConstantPixelSize)
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_19 = __this->___scaler_7;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = CanvasScaler_get_uiScaleMode_m8E92609E011796E8CC23B1739F95CE7BE2631525_inline(L_19, NULL);
		if (L_20)
		{
			goto IL_00a8;
		}
	}
	{
		// scaleFactor = scaler.scaleFactor;
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_21 = __this->___scaler_7;
		NullCheck(L_21);
		float L_22;
		L_22 = CanvasScaler_get_scaleFactor_mB2BFA22B99AEC96F09886F490DA9EE2F825D3431_inline(L_21, NULL);
		MaterialUIScaler_set_scaleFactor_mBF1565B38029BD9B57F1E14247410963043C30DD_inline(__this, L_22, NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.MaterialUIScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialUIScaler__ctor_m2E2FB8D6B882DAF56ECF421A113FC671F4976827 (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.MenuArrowAnim::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Awake_m97C62A938D0A9E7E3531480353AB1EDD307377EC (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisTransform = gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___thisTransform_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisTransform_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void MaterialUI.MenuArrowAnim::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Toggle_m128369CA2AD57BC0A48B9BF623DCD94BBF08A6AF (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) 
{
	{
		// if (isArrow)
		bool L_0 = __this->___isArrow_15;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Menu();
		MenuArrowAnim_Menu_m37C9A517D399F0B23E42E0C9D99FFDF76AFB6E27(__this, NULL);
		return;
	}

IL_000f:
	{
		// Arrow();
		MenuArrowAnim_Arrow_m8B506BC0C1668C55235038C6AA10CD1569FD8A9E(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.MenuArrowAnim::Arrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Arrow_m8B506BC0C1668C55235038C6AA10CD1569FD8A9E (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) 
{
	{
		// animStartTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_5 = L_0;
		// state = 1;
		__this->___state_4 = 1;
		// isArrow = true;
		__this->___isArrow_15 = (bool)1;
		// }
		return;
	}
}
// System.Void MaterialUI.MenuArrowAnim::Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Menu_m37C9A517D399F0B23E42E0C9D99FFDF76AFB6E27 (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) 
{
	{
		// animStartTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_5 = L_0;
		// state = 2;
		__this->___state_4 = 2;
		// isArrow = false;
		__this->___isArrow_15 = (bool)0;
		// }
		return;
	}
}
// System.Void MaterialUI.MenuArrowAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim_Update_m8015CBCC0CEBADA41AC991A0FB2D30F9E3A27188 (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) 
{
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = __this->___animStartTime_5;
		__this->___animDeltaTime_6 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (state == 1)
		int32_t L_2 = __this->___state_4;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_02ae;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_3 = __this->___animDeltaTime_6;
		float L_4 = __this->___animationDuration_7;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_02a6;
		}
	}
	{
		// tempVector3 = thisTransform.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___thisTransform_8;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_5, NULL);
		__this->___tempVector3_13 = L_6;
		// tempVector3.z = Anim.Quint.SoftOut(0f, -180f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___tempVector3_13);
		float L_8 = __this->___animDeltaTime_6;
		float L_9 = __this->___animationDuration_7;
		float L_10;
		L_10 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((0.0f), (-180.0f), L_8, L_9, NULL);
		L_7->___z_4 = L_10;
		// thisTransform.localEulerAngles = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___thisTransform_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___tempVector3_13;
		NullCheck(L_11);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_11, L_12, NULL);
		// tempVector2 = topTransform.pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___topTransform_9;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_13, NULL);
		__this->___tempVector2_12 = L_14;
		// tempVector2.x = Anim.Quint.SoftOut(0.5f, 1f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___tempVector2_12);
		float L_16 = __this->___animDeltaTime_6;
		float L_17 = __this->___animationDuration_7;
		float L_18;
		L_18 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((0.5f), (1.0f), L_16, L_17, NULL);
		L_15->___x_0 = L_18;
		// topTransform.pivot = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = __this->___tempVector2_12;
		NullCheck(L_19);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_19, L_20, NULL);
		// tempVector2 = topTransform.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = __this->___topTransform_9;
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_21, NULL);
		__this->___tempVector2_12 = L_22;
		// tempVector2.x = Anim.Quint.SoftOut(18f, 12f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&__this->___tempVector2_12);
		float L_24 = __this->___animDeltaTime_6;
		float L_25 = __this->___animationDuration_7;
		float L_26;
		L_26 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((18.0f), (12.0f), L_24, L_25, NULL);
		L_23->___x_0 = L_26;
		// topTransform.sizeDelta = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = __this->___tempVector2_12;
		NullCheck(L_27);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_27, L_28, NULL);
		// topTransform.localPosition = Anim.Quint.SoftOut(new Vector2(0f, 5f), new Vector2(9.4f, -0.7f), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_29 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_30), (0.0f), (5.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), (9.39999962f), (-0.699999988f), /*hidden argument*/NULL);
		float L_32 = __this->___animDeltaTime_6;
		float L_33 = __this->___animationDuration_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Quint_SoftOut_mE8D976284483F0B8ABEA315245D50293CFC89352(L_30, L_31, L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_34, NULL);
		NullCheck(L_29);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_29, L_35, NULL);
		// tempVector3 = topTransform.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_36 = __this->___topTransform_9;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_36, NULL);
		__this->___tempVector3_13 = L_37;
		// tempVector3.z = Anim.Quint.SoftOut(0f, -45f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (&__this->___tempVector3_13);
		float L_39 = __this->___animDeltaTime_6;
		float L_40 = __this->___animationDuration_7;
		float L_41;
		L_41 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((0.0f), (-45.0f), L_39, L_40, NULL);
		L_38->___z_4 = L_41;
		// topTransform.localEulerAngles = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42 = __this->___topTransform_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = __this->___tempVector3_13;
		NullCheck(L_42);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_42, L_43, NULL);
		// tempVector2 = bottomTransform.pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_44 = __this->___bottomTransform_11;
		NullCheck(L_44);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		L_45 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_44, NULL);
		__this->___tempVector2_12 = L_45;
		// tempVector2.x = Anim.Quint.SoftOut(0.5f, 1f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (&__this->___tempVector2_12);
		float L_47 = __this->___animDeltaTime_6;
		float L_48 = __this->___animationDuration_7;
		float L_49;
		L_49 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((0.5f), (1.0f), L_47, L_48, NULL);
		L_46->___x_0 = L_49;
		// bottomTransform.pivot = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = __this->___tempVector2_12;
		NullCheck(L_50);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_50, L_51, NULL);
		// tempVector2 = bottomTransform.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_52 = __this->___bottomTransform_11;
		NullCheck(L_52);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		L_53 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_52, NULL);
		__this->___tempVector2_12 = L_53;
		// tempVector2.x = Anim.Quint.SoftOut(18f, 12f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_54 = (&__this->___tempVector2_12);
		float L_55 = __this->___animDeltaTime_6;
		float L_56 = __this->___animationDuration_7;
		float L_57;
		L_57 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((18.0f), (12.0f), L_55, L_56, NULL);
		L_54->___x_0 = L_57;
		// bottomTransform.sizeDelta = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_58 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = __this->___tempVector2_12;
		NullCheck(L_58);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_58, L_59, NULL);
		// bottomTransform.localPosition = Anim.Quint.SoftOut(new Vector2(0f, -5f), new Vector2(9.4f, 0.7f), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_60 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), (0.0f), (-5.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_62), (9.39999962f), (0.699999988f), /*hidden argument*/NULL);
		float L_63 = __this->___animDeltaTime_6;
		float L_64 = __this->___animationDuration_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = Quint_SoftOut_mE8D976284483F0B8ABEA315245D50293CFC89352(L_61, L_62, L_63, L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_65, NULL);
		NullCheck(L_60);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_60, L_66, NULL);
		// tempVector3 = bottomTransform.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_67 = __this->___bottomTransform_11;
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_67, NULL);
		__this->___tempVector3_13 = L_68;
		// tempVector3.z = Anim.Quint.SoftOut(0f, 45f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_69 = (&__this->___tempVector3_13);
		float L_70 = __this->___animDeltaTime_6;
		float L_71 = __this->___animationDuration_7;
		float L_72;
		L_72 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((0.0f), (45.0f), L_70, L_71, NULL);
		L_69->___z_4 = L_72;
		// bottomTransform.localEulerAngles = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_73 = __this->___bottomTransform_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = __this->___tempVector3_13;
		NullCheck(L_73);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_73, L_74, NULL);
		return;
	}

IL_02a6:
	{
		// state = 0;
		__this->___state_4 = 0;
		return;
	}

IL_02ae:
	{
		// else if (state == 2)
		int32_t L_75 = __this->___state_4;
		if ((!(((uint32_t)L_75) == ((uint32_t)2))))
		{
			goto IL_0549;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_76 = __this->___animDeltaTime_6;
		float L_77 = __this->___animationDuration_7;
		if ((!(((float)L_76) <= ((float)L_77))))
		{
			goto IL_0542;
		}
	}
	{
		// tempVector3 = thisTransform.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_78 = __this->___thisTransform_8;
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_78, NULL);
		__this->___tempVector3_13 = L_79;
		// tempVector3.z = Anim.Quint.SoftOut(180f, 0f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_80 = (&__this->___tempVector3_13);
		float L_81 = __this->___animDeltaTime_6;
		float L_82 = __this->___animationDuration_7;
		float L_83;
		L_83 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((180.0f), (0.0f), L_81, L_82, NULL);
		L_80->___z_4 = L_83;
		// thisTransform.localEulerAngles = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_84 = __this->___thisTransform_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = __this->___tempVector3_13;
		NullCheck(L_84);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_84, L_85, NULL);
		// tempVector2 = topTransform.pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_86 = __this->___topTransform_9;
		NullCheck(L_86);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87;
		L_87 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_86, NULL);
		__this->___tempVector2_12 = L_87;
		// tempVector2.x = Anim.Quint.SoftOut(1f, 0.5f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_88 = (&__this->___tempVector2_12);
		float L_89 = __this->___animDeltaTime_6;
		float L_90 = __this->___animationDuration_7;
		float L_91;
		L_91 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((1.0f), (0.5f), L_89, L_90, NULL);
		L_88->___x_0 = L_91;
		// topTransform.pivot = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_92 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93 = __this->___tempVector2_12;
		NullCheck(L_92);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_92, L_93, NULL);
		// tempVector2 = topTransform.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_94 = __this->___topTransform_9;
		NullCheck(L_94);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95;
		L_95 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_94, NULL);
		__this->___tempVector2_12 = L_95;
		// tempVector2.x = Anim.Quint.SoftOut(12f, 18f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_96 = (&__this->___tempVector2_12);
		float L_97 = __this->___animDeltaTime_6;
		float L_98 = __this->___animationDuration_7;
		float L_99;
		L_99 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((12.0f), (18.0f), L_97, L_98, NULL);
		L_96->___x_0 = L_99;
		// topTransform.sizeDelta = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_100 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_101 = __this->___tempVector2_12;
		NullCheck(L_100);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_100, L_101, NULL);
		// topTransform.localPosition = Anim.Quint.SoftOut(new Vector2(9.4f, -0.7f), new Vector2(0f, 5), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_102 = __this->___topTransform_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_103;
		memset((&L_103), 0, sizeof(L_103));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_103), (9.39999962f), (-0.699999988f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_104), (0.0f), (5.0f), /*hidden argument*/NULL);
		float L_105 = __this->___animDeltaTime_6;
		float L_106 = __this->___animationDuration_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_107;
		L_107 = Quint_SoftOut_mE8D976284483F0B8ABEA315245D50293CFC89352(L_103, L_104, L_105, L_106, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_107, NULL);
		NullCheck(L_102);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_102, L_108, NULL);
		// tempVector3 = topTransform.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_109 = __this->___topTransform_9;
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_109, NULL);
		__this->___tempVector3_13 = L_110;
		// tempVector3.z = Anim.Quint.SoftOut(-45f, 0f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_111 = (&__this->___tempVector3_13);
		float L_112 = __this->___animDeltaTime_6;
		float L_113 = __this->___animationDuration_7;
		float L_114;
		L_114 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((-45.0f), (0.0f), L_112, L_113, NULL);
		L_111->___z_4 = L_114;
		// topTransform.localEulerAngles = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_115 = __this->___topTransform_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = __this->___tempVector3_13;
		NullCheck(L_115);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_115, L_116, NULL);
		// tempVector2 = bottomTransform.pivot;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_117 = __this->___bottomTransform_11;
		NullCheck(L_117);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118;
		L_118 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_117, NULL);
		__this->___tempVector2_12 = L_118;
		// tempVector2.x = Anim.Quint.SoftOut(1f, 0.5f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_119 = (&__this->___tempVector2_12);
		float L_120 = __this->___animDeltaTime_6;
		float L_121 = __this->___animationDuration_7;
		float L_122;
		L_122 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((1.0f), (0.5f), L_120, L_121, NULL);
		L_119->___x_0 = L_122;
		// bottomTransform.pivot = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_123 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_124 = __this->___tempVector2_12;
		NullCheck(L_123);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_123, L_124, NULL);
		// tempVector2 = bottomTransform.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_125 = __this->___bottomTransform_11;
		NullCheck(L_125);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_126;
		L_126 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_125, NULL);
		__this->___tempVector2_12 = L_126;
		// tempVector2.x = Anim.Quint.SoftOut(12f, 18f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_127 = (&__this->___tempVector2_12);
		float L_128 = __this->___animDeltaTime_6;
		float L_129 = __this->___animationDuration_7;
		float L_130;
		L_130 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((12.0f), (18.0f), L_128, L_129, NULL);
		L_127->___x_0 = L_130;
		// bottomTransform.sizeDelta = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_131 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_132 = __this->___tempVector2_12;
		NullCheck(L_131);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_131, L_132, NULL);
		// bottomTransform.localPosition = Anim.Quint.SoftOut(new Vector2(9.5f, 0.7f), new Vector2(0f, -5f), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_133 = __this->___bottomTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_134;
		memset((&L_134), 0, sizeof(L_134));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_134), (9.5f), (0.699999988f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_135;
		memset((&L_135), 0, sizeof(L_135));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_135), (0.0f), (-5.0f), /*hidden argument*/NULL);
		float L_136 = __this->___animDeltaTime_6;
		float L_137 = __this->___animationDuration_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_138;
		L_138 = Quint_SoftOut_mE8D976284483F0B8ABEA315245D50293CFC89352(L_134, L_135, L_136, L_137, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		L_139 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_138, NULL);
		NullCheck(L_133);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_133, L_139, NULL);
		// tempVector3 = bottomTransform.localEulerAngles;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_140 = __this->___bottomTransform_11;
		NullCheck(L_140);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_140, NULL);
		__this->___tempVector3_13 = L_141;
		// tempVector3.z = Anim.Quint.SoftOut(45f, 0f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_142 = (&__this->___tempVector3_13);
		float L_143 = __this->___animDeltaTime_6;
		float L_144 = __this->___animationDuration_7;
		float L_145;
		L_145 = Quint_SoftOut_m7783CAF5AB1E820079238FA836FF3EC4F4007D2E((45.0f), (0.0f), L_143, L_144, NULL);
		L_142->___z_4 = L_145;
		// bottomTransform.localEulerAngles = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_146 = __this->___bottomTransform_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147 = __this->___tempVector3_13;
		NullCheck(L_146);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_146, L_147, NULL);
		return;
	}

IL_0542:
	{
		// state = 0;
		__this->___state_4 = 0;
	}

IL_0549:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.MenuArrowAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuArrowAnim__ctor_m7BBADBF82A6E3D3267A367B9DB5BBF0FA6F9BA2E (MenuArrowAnim_t662F9715D8794CE72A6FDB78A721EECF8CA07AB6* __this, const RuntimeMethod* method) 
{
	{
		// public float animationDuration = 1f;
		__this->___animationDuration_7 = (1.0f);
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
// System.Void MaterialUI.NavDrawerConfig::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Awake_m057086824DD06A1FA8ED0271CA731114F5AC6AEE (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisRectTransform = gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___thisRectTransform_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisRectTransform_6), (void*)L_1);
		// backgroundRectTransform = backgroundImage.GetComponent<RectTransform>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___backgroundImage_7;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_2, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___backgroundRectTransform_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backgroundRectTransform_8), (void*)L_3);
		// backgroundCanvasGroup = backgroundImage.GetComponent<CanvasGroup>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___backgroundImage_7;
		NullCheck(L_4);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_5;
		L_5 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(L_4, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->___backgroundCanvasGroup_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backgroundCanvasGroup_9), (void*)L_5);
		// shadowCanvasGroup = ShadowImage.GetComponent<CanvasGroup>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___ShadowImage_10;
		NullCheck(L_6);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_7;
		L_7 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(L_6, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->___shadowCanvasGroup_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shadowCanvasGroup_11), (void*)L_7);
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Start_mBDE1CC3B6008EE1412DD020CB8830599D264C5A0 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// maxPosition = thisRectTransform.rect.width / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___thisRectTransform_6;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		__this->___maxPosition_4 = ((float)(L_2/(2.0f)));
		// minPosition = -maxPosition;
		float L_3 = __this->___maxPosition_4;
		__this->___minPosition_5 = ((-L_3));
		// backgroundRectTransform.sizeDelta = new Vector2(Screen.width, backgroundRectTransform.sizeDelta.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___backgroundRectTransform_8;
		int32_t L_5;
		L_5 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___backgroundRectTransform_8;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_6, NULL);
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), ((float)L_5), L_8, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_4, L_9, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::BackgroundTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_BackgroundTap_m47496C52F2BF03D96C09B374AAA1664F85F07A56 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	{
		// if (tapBackgroundToClose)
		bool L_0 = __this->___tapBackgroundToClose_13;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Close();
		NavDrawerConfig_Close_mA02B61D4C1AEFD33D4A761A90FADCB1B72610272(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Open_m447C2165290EACA621D8EA4964A71CB618E6B7BD (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	{
		// currentPos = thisRectTransform.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___thisRectTransform_6;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		__this->___currentPos_18 = L_1;
		// currentBackgroundAlpha = backgroundCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = __this->___backgroundCanvasGroup_9;
		NullCheck(L_2);
		float L_3;
		L_3 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_2, NULL);
		__this->___currentBackgroundAlpha_19 = L_3;
		// currentShadowAlpha = shadowCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_4 = __this->___shadowCanvasGroup_11;
		NullCheck(L_4);
		float L_5;
		L_5 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_4, NULL);
		__this->___currentShadowAlpha_20 = L_5;
		// backgroundCanvasGroup.blocksRaycasts = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->___backgroundCanvasGroup_9;
		NullCheck(L_6);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_6, (bool)1, NULL);
		// animStartTime = Time.realtimeSinceStartup;
		float L_7;
		L_7 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_15 = L_7;
		// state = 1;
		__this->___state_14 = (uint8_t)1;
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Close_mA02B61D4C1AEFD33D4A761A90FADCB1B72610272 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	{
		// currentPos = thisRectTransform.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___thisRectTransform_6;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		__this->___currentPos_18 = L_1;
		// currentBackgroundAlpha = backgroundCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = __this->___backgroundCanvasGroup_9;
		NullCheck(L_2);
		float L_3;
		L_3 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_2, NULL);
		__this->___currentBackgroundAlpha_19 = L_3;
		// currentShadowAlpha = shadowCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_4 = __this->___shadowCanvasGroup_11;
		NullCheck(L_4);
		float L_5;
		L_5 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_4, NULL);
		__this->___currentShadowAlpha_20 = L_5;
		// backgroundCanvasGroup.blocksRaycasts = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->___backgroundCanvasGroup_9;
		NullCheck(L_6);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_6, (bool)0, NULL);
		// animStartTime = Time.realtimeSinceStartup;
		float L_7;
		L_7 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_15 = L_7;
		// state = 2;
		__this->___state_14 = (uint8_t)2;
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_Update_m760E1FB40043825564D16018C1FDF684F9C51561 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	{
		// if (state == 1)
		uint8_t L_0 = __this->___state_14;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0107;
		}
	}
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_2 = __this->___animStartTime_15;
		__this->___animDeltaTime_16 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (animDeltaTime <= animationDuration)
		float L_3 = __this->___animDeltaTime_16;
		float L_4 = __this->___animationDuration_17;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_00c5;
		}
	}
	{
		// thisRectTransform.anchoredPosition = Anim.Quint.Out(currentPos, new Vector2(maxPosition, thisRectTransform.anchoredPosition.y), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___currentPos_18;
		float L_7 = __this->___maxPosition_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___thisRectTransform_6;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_8, NULL);
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_7, L_10, /*hidden argument*/NULL);
		float L_12 = __this->___animDeltaTime_16;
		float L_13 = __this->___animationDuration_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Quint_Out_m0D5446E0799ABEEEBD1C16AD2D273BCB4246B6A0(L_6, L_11, L_12, L_13, NULL);
		NullCheck(L_5);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_5, L_14, NULL);
		// backgroundCanvasGroup.alpha = Anim.Quint.Out(currentBackgroundAlpha, 1f, animDeltaTime, animationDuration);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_15 = __this->___backgroundCanvasGroup_9;
		float L_16 = __this->___currentBackgroundAlpha_19;
		float L_17 = __this->___animDeltaTime_16;
		float L_18 = __this->___animationDuration_17;
		float L_19;
		L_19 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_16, (1.0f), L_17, L_18, NULL);
		NullCheck(L_15);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_15, L_19, NULL);
		// shadowCanvasGroup.alpha = Anim.Quint.In(currentShadowAlpha, 1f, animDeltaTime, animationDuration / 2f);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_20 = __this->___shadowCanvasGroup_11;
		float L_21 = __this->___currentShadowAlpha_20;
		float L_22 = __this->___animDeltaTime_16;
		float L_23 = __this->___animationDuration_17;
		float L_24;
		L_24 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_21, (1.0f), L_22, ((float)(L_23/(2.0f))), NULL);
		NullCheck(L_20);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_20, L_24, NULL);
		goto IL_0200;
	}

IL_00c5:
	{
		// thisRectTransform.anchoredPosition = new Vector2(maxPosition, thisRectTransform.anchoredPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25 = __this->___thisRectTransform_6;
		float L_26 = __this->___maxPosition_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = __this->___thisRectTransform_6;
		NullCheck(L_27);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_27, NULL);
		float L_29 = L_28.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_30), L_26, L_29, /*hidden argument*/NULL);
		NullCheck(L_25);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_25, L_30, NULL);
		// backgroundCanvasGroup.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_31 = __this->___backgroundCanvasGroup_9;
		NullCheck(L_31);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_31, (1.0f), NULL);
		// state = 0;
		__this->___state_14 = (uint8_t)0;
		goto IL_0200;
	}

IL_0107:
	{
		// else if (state == 2)
		uint8_t L_32 = __this->___state_14;
		if ((!(((uint32_t)L_32) == ((uint32_t)2))))
		{
			goto IL_0200;
		}
	}
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_33;
		L_33 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_34 = __this->___animStartTime_15;
		__this->___animDeltaTime_16 = ((float)il2cpp_codegen_subtract(L_33, L_34));
		// if (animDeltaTime <= animationDuration)
		float L_35 = __this->___animDeltaTime_16;
		float L_36 = __this->___animationDuration_17;
		if ((!(((float)L_35) <= ((float)L_36))))
		{
			goto IL_01c3;
		}
	}
	{
		// thisRectTransform.anchoredPosition = Anim.Quint.Out(currentPos, new Vector2(minPosition, thisRectTransform.anchoredPosition.y), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = __this->___currentPos_18;
		float L_39 = __this->___minPosition_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_40 = __this->___thisRectTransform_6;
		NullCheck(L_40);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_40, NULL);
		float L_42 = L_41.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_43), L_39, L_42, /*hidden argument*/NULL);
		float L_44 = __this->___animDeltaTime_16;
		float L_45 = __this->___animationDuration_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Quint_Out_m0D5446E0799ABEEEBD1C16AD2D273BCB4246B6A0(L_38, L_43, L_44, L_45, NULL);
		NullCheck(L_37);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_37, L_46, NULL);
		// backgroundCanvasGroup.alpha = Anim.Quint.Out(currentBackgroundAlpha, 0f, animDeltaTime, animationDuration);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_47 = __this->___backgroundCanvasGroup_9;
		float L_48 = __this->___currentBackgroundAlpha_19;
		float L_49 = __this->___animDeltaTime_16;
		float L_50 = __this->___animationDuration_17;
		float L_51;
		L_51 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_48, (0.0f), L_49, L_50, NULL);
		NullCheck(L_47);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_47, L_51, NULL);
		// shadowCanvasGroup.alpha = Anim.Quint.In(currentShadowAlpha, 0f, animDeltaTime, animationDuration);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_52 = __this->___shadowCanvasGroup_11;
		float L_53 = __this->___currentShadowAlpha_20;
		float L_54 = __this->___animDeltaTime_16;
		float L_55 = __this->___animationDuration_17;
		float L_56;
		L_56 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_53, (0.0f), L_54, L_55, NULL);
		NullCheck(L_52);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_52, L_56, NULL);
		goto IL_0200;
	}

IL_01c3:
	{
		// thisRectTransform.anchoredPosition = new Vector2(minPosition, thisRectTransform.anchoredPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_57 = __this->___thisRectTransform_6;
		float L_58 = __this->___minPosition_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_59 = __this->___thisRectTransform_6;
		NullCheck(L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_59, NULL);
		float L_61 = L_60.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_62), L_58, L_61, /*hidden argument*/NULL);
		NullCheck(L_57);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_57, L_62, NULL);
		// backgroundCanvasGroup.alpha = 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_63 = __this->___backgroundCanvasGroup_9;
		NullCheck(L_63);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_63, (0.0f), NULL);
		// state = 0;
		__this->___state_14 = (uint8_t)0;
	}

IL_0200:
	{
		// thisRectTransform.anchoredPosition = new Vector2(Mathf.Clamp(thisRectTransform.anchoredPosition.x, minPosition, maxPosition), thisRectTransform.anchoredPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_64 = __this->___thisRectTransform_6;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_65 = __this->___thisRectTransform_6;
		NullCheck(L_65);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		L_66 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_65, NULL);
		float L_67 = L_66.___x_0;
		float L_68 = __this->___minPosition_5;
		float L_69 = __this->___maxPosition_4;
		float L_70;
		L_70 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_67, L_68, L_69, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_71 = __this->___thisRectTransform_6;
		NullCheck(L_71);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		L_72 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_71, NULL);
		float L_73 = L_72.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_74), L_70, L_73, /*hidden argument*/NULL);
		NullCheck(L_64);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_64, L_74, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_OnBeginDrag_m5FD11458917574247FAF151A488C0412B054B2D1 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// state = 0;
		__this->___state_14 = (uint8_t)0;
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_OnDrag_m7353B5E5406611ED482FD2381E2D0EEF060F5486 (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// tempVector2 = thisRectTransform.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___thisRectTransform_6;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		__this->___tempVector2_21 = L_2;
		// tempVector2.x += data.delta.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___tempVector2_21);
		float* L_4 = (&L_3->___x_0);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = ___0_data;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_7, NULL);
		float L_9 = L_8.___x_0;
		*((float*)L_5) = (float)((float)il2cpp_codegen_add(L_6, L_9));
		// thisRectTransform.position = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___thisRectTransform_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___tempVector2_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_11, NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_12, NULL);
		// backgroundCanvasGroup.alpha = 1 - (maxPosition - thisRectTransform.anchoredPosition.x) / (maxPosition - minPosition);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_13 = __this->___backgroundCanvasGroup_9;
		float L_14 = __this->___maxPosition_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___thisRectTransform_6;
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_15, NULL);
		float L_17 = L_16.___x_0;
		float L_18 = __this->___maxPosition_4;
		float L_19 = __this->___minPosition_5;
		NullCheck(L_13);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_13, ((float)il2cpp_codegen_subtract((1.0f), ((float)(((float)il2cpp_codegen_subtract(L_14, L_17))/((float)il2cpp_codegen_subtract(L_18, L_19)))))), NULL);
		// shadowCanvasGroup.alpha = 1 - (maxPosition - thisRectTransform.anchoredPosition.x) / ((maxPosition - minPosition) * 2);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_20 = __this->___shadowCanvasGroup_11;
		float L_21 = __this->___maxPosition_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = __this->___thisRectTransform_6;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_22, NULL);
		float L_24 = L_23.___x_0;
		float L_25 = __this->___maxPosition_4;
		float L_26 = __this->___minPosition_5;
		NullCheck(L_20);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_20, ((float)il2cpp_codegen_subtract((1.0f), ((float)(((float)il2cpp_codegen_subtract(L_21, L_24))/((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_25, L_26)), (2.0f))))))), NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig_OnEndDrag_mCF9B424490A5348D25F9B2E7C969D5B45E1451AE (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// if (Mathf.Abs(data.delta.x) >= 0.5f)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_data;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_0, NULL);
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = fabsf(L_2);
		if ((!(((float)L_3) >= ((float)(0.5f)))))
		{
			goto IL_0037;
		}
	}
	{
		// if (data.delta.x > 0.5f)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___0_data;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_4, NULL);
		float L_6 = L_5.___x_0;
		if ((!(((float)L_6) > ((float)(0.5f)))))
		{
			goto IL_0030;
		}
	}
	{
		// Open();
		NavDrawerConfig_Open_m447C2165290EACA621D8EA4964A71CB618E6B7BD(__this, NULL);
		return;
	}

IL_0030:
	{
		// Close();
		NavDrawerConfig_Close_mA02B61D4C1AEFD33D4A761A90FADCB1B72610272(__this, NULL);
		return;
	}

IL_0037:
	{
		// if ((thisRectTransform.anchoredPosition.x - minPosition) > (maxPosition - thisRectTransform.anchoredPosition.x))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___thisRectTransform_6;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_7, NULL);
		float L_9 = L_8.___x_0;
		float L_10 = __this->___minPosition_5;
		float L_11 = __this->___maxPosition_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___thisRectTransform_6;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_12, NULL);
		float L_14 = L_13.___x_0;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_9, L_10))) > ((float)((float)il2cpp_codegen_subtract(L_11, L_14))))))
		{
			goto IL_006e;
		}
	}
	{
		// Open();
		NavDrawerConfig_Open_m447C2165290EACA621D8EA4964A71CB618E6B7BD(__this, NULL);
		return;
	}

IL_006e:
	{
		// Close();
		NavDrawerConfig_Close_mA02B61D4C1AEFD33D4A761A90FADCB1B72610272(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.NavDrawerConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavDrawerConfig__ctor_m572D9A0B97B0F9AC69D8C7EE181802371C1E5B0A (NavDrawerConfig_tBCB87F459CAB64F041C3E8D87A7C2795DE0E80DE* __this, const RuntimeMethod* method) 
{
	{
		// public bool darkenBackground = true;
		__this->___darkenBackground_12 = (bool)1;
		// public bool tapBackgroundToClose = true;
		__this->___tapBackgroundToClose_13 = (bool)1;
		// public float animationDuration = 0.5f;
		__this->___animationDuration_17 = (0.5f);
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
// System.Void MaterialUI.RadioConfig::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_OnEnable_mE3793D2B9404CFD17DADC90C175BB5D9261AA516 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_mF37E1C928AF195AD949836E650B9E7646D1BBA47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle = gameObject.GetComponent<Toggle>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1;
		L_1 = GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17(L_0, GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		__this->___toggle_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_18), (void*)L_1);
		// toggleGroup = gameObject.GetComponent<Transform>().parent.parent.GetComponent<ToggleGroup>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_2, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
		NullCheck(L_5);
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_6;
		L_6 = Component_GetComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_mF37E1C928AF195AD949836E650B9E7646D1BBA47(L_5, Component_GetComponent_TisToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C_mF37E1C928AF195AD949836E650B9E7646D1BBA47_RuntimeMethod_var);
		__this->___toggleGroup_19 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggleGroup_19), (void*)L_6);
		// dotRectTransform = dotImage.GetComponent<RectTransform>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___dotImage_12;
		NullCheck(L_7);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_7, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___dotRectTransform_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dotRectTransform_15), (void*)L_8);
		// checkBoxToggler = text.GetComponent<CheckBoxToggler>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___text_14;
		NullCheck(L_9);
		CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* L_10;
		L_10 = Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5(L_9, Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5_RuntimeMethod_var);
		__this->___checkBoxToggler_16 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checkBoxToggler_16), (void*)L_10);
		// rippleConfig = gameObject.GetComponent<RippleConfig>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_12;
		L_12 = GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995(L_11, GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var);
		__this->___rippleConfig_17 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rippleConfig_17), (void*)L_12);
		// toggle.group = toggleGroup;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_13 = __this->___toggle_18;
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_14 = __this->___toggleGroup_19;
		NullCheck(L_13);
		Toggle_set_group_mEE85FE3AB2ACFF9056DA613239DBACECA588507B(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_Start_m1F78A6C6E4BC5DA2CEF9C24EB721F313CA8D10BC (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// lastToggleInteractableState = toggle.interactable;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_18;
		NullCheck(L_0);
		bool L_1;
		L_1 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_0, NULL);
		__this->___lastToggleInteractableState_20 = L_1;
		// if (lastToggleInteractableState)
		bool L_2 = __this->___lastToggleInteractableState_20;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// if (lastToggleState != toggle.isOn)
		bool L_3 = __this->___lastToggleState_21;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = __this->___toggle_18;
		NullCheck(L_4);
		bool L_5;
		L_5 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_4, NULL);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0053;
		}
	}
	{
		// lastToggleState = toggle.isOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_6 = __this->___toggle_18;
		NullCheck(L_6);
		bool L_7;
		L_7 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_6, NULL);
		__this->___lastToggleState_21 = L_7;
		// if (lastToggleState)
		bool L_8 = __this->___lastToggleState_21;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// TurnOnSilent();
		RadioConfig_TurnOnSilent_m5AC09AD9FFB688EC2F9B0A6AD0BB8D4252208EA8(__this, NULL);
		goto IL_0053;
	}

IL_004d:
	{
		// TurnOffSilent();
		RadioConfig_TurnOffSilent_mCA5BF60941B25B4A5551DC9DF4E49406E835845C(__this, NULL);
	}

IL_0053:
	{
		// if (changeRippleColor)
		bool L_9 = __this->___changeRippleColor_11;
		if (!L_9)
		{
			goto IL_0071;
		}
	}
	{
		// rippleConfig.rippleColor = ringImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_10 = __this->___rippleConfig_17;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___ringImage_13;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_11);
		NullCheck(L_10);
		L_10->___rippleColor_8 = L_12;
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::ToggleCheckbox(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_ToggleCheckbox_m5479C038A48A17EB85EBF071C4C2D9D223633AC2 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, bool ___0_state, const RuntimeMethod* method) 
{
	{
		// if (toggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_18;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// TurnOn ();
		RadioConfig_TurnOn_m055CBC4E91A4A14CF0E270B60B4D29AAE92341A1(__this, NULL);
		return;
	}

IL_0014:
	{
		// TurnOff ();
		RadioConfig_TurnOff_mE6BBFD85DDD02E70E6E974350EE76FC13EC74B7B(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::TurnOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOn_m055CBC4E91A4A14CF0E270B60B4D29AAE92341A1 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// dotImage.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___dotImage_12;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// currentDotSize = dotRectTransform.localScale.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___dotRectTransform_15;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		__this->___currentDotSize_22 = L_3;
		// currentColor = ringImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___ringImage_13;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		__this->___currentColor_23 = L_5;
		// currentTextColor = text.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___text_14;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		__this->___currentTextColor_24 = L_7;
		// animStartTime = Time.realtimeSinceStartup;
		float L_8;
		L_8 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_28 = L_8;
		// state = 1;
		__this->___state_27 = 1;
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::TurnOnSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOnSilent_m5AC09AD9FFB688EC2F9B0A6AD0BB8D4252208EA8 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// dotImage.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___dotImage_12;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// if (dotRectTransform.localScale != new Vector3(1f, 1f, 1f))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___dotRectTransform_15;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		bool L_4;
		L_4 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		// dotRectTransform.localScale = new Vector3(1f, 1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___dotRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_6, NULL);
	}

IL_0051:
	{
		// if (lastToggleInteractableState)
		bool L_7 = __this->___lastToggleInteractableState_20;
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		// ringImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___onColor_5;
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// if (changeTextColor)
		bool L_10 = __this->___changeTextColor_8;
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		// text.color = onColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___onColor_5;
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
	}

IL_0083:
	{
		// if (changeRippleColor)
		bool L_13 = __this->___changeRippleColor_11;
		if (!L_13)
		{
			goto IL_009c;
		}
	}
	{
		// rippleConfig.rippleColor = onColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_14 = __this->___rippleConfig_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___onColor_5;
		NullCheck(L_14);
		L_14->___rippleColor_8 = L_15;
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOff_mE6BBFD85DDD02E70E6E974350EE76FC13EC74B7B (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// currentDotSize = dotRectTransform.localScale.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___dotRectTransform_15;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___currentDotSize_22 = L_2;
		// currentColor = ringImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___ringImage_13;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		__this->___currentColor_23 = L_4;
		// currentTextColor = text.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___text_14;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		__this->___currentTextColor_24 = L_6;
		// animStartTime = Time.realtimeSinceStartup;
		float L_7;
		L_7 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_28 = L_7;
		// state = 2;
		__this->___state_27 = 2;
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::TurnOffSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_TurnOffSilent_mCA5BF60941B25B4A5551DC9DF4E49406E835845C (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// if (dotRectTransform.localScale != new Vector3(0f, 0f, 1f))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___dotRectTransform_15;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		bool L_3;
		L_3 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// dotRectTransform.localScale = new Vector3(0f, 0f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___dotRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_5, NULL);
	}

IL_0045:
	{
		// if (lastToggleInteractableState)
		bool L_6 = __this->___lastToggleInteractableState_20;
		if (!L_6)
		{
			goto IL_0090;
		}
	}
	{
		// ringImage.color = offColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___offColor_6;
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// if (changeTextColor)
		bool L_9 = __this->___changeTextColor_8;
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = __this->___textNormalColor_9;
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
	}

IL_0077:
	{
		// if (changeRippleColor)
		bool L_12 = __this->___changeRippleColor_11;
		if (!L_12)
		{
			goto IL_0090;
		}
	}
	{
		// rippleConfig.rippleColor = offColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_13 = __this->___rippleConfig_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___offColor_6;
		NullCheck(L_13);
		L_13->___rippleColor_8 = L_14;
	}

IL_0090:
	{
		// dotImage.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___dotImage_12;
		NullCheck(L_15);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_15, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::EnableRadioButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_EnableRadioButton_mFEABED3ED154238C697F1FB4C8CE38504F997044 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// if (toggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_18;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		// ringImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___onColor_5;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// if (changeTextColor)
		bool L_4 = __this->___changeTextColor_8;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// text.color = onColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___onColor_5;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		goto IL_006e;
	}

IL_0039:
	{
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___textNormalColor_9;
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		goto IL_006e;
	}

IL_004c:
	{
		// ringImage.color = offColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___offColor_6;
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___textNormalColor_9;
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
	}

IL_006e:
	{
		// checkBoxToggler.enabled = true;
		CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* L_13 = __this->___checkBoxToggler_16;
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
		// rippleConfig.enabled = true;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_14 = __this->___rippleConfig_17;
		NullCheck(L_14);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::DisableRadioButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_DisableRadioButton_mA7A9EDBAE4C57EE8273EFC4644C811CB4E659BF3 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// ringImage.color = disabledColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___disabledColor_7;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// text.color = disabledColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___disabledColor_7;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// checkBoxToggler.enabled = false;
		CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* L_4 = __this->___checkBoxToggler_16;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// rippleConfig.enabled = false;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_5 = __this->___rippleConfig_17;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig_Update_m067A4E7F0065E8703A1ECEE54BCB4B21D3B804CE (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = __this->___animStartTime_28;
		__this->___animDeltaTime_29 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (state == 1)    // Turning on
		int32_t L_2 = __this->___state_27;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0161;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_3 = __this->___animDeltaTime_29;
		float L_4 = __this->___animationDuration_4;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_00f3;
		}
	}
	{
		// dotRectTransform.localScale = Anim.Overshoot(new Vector3(currentDotSize, currentDotSize, 1f), new Vector3(1f, 1f, 1f), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___dotRectTransform_15;
		float L_6 = __this->___currentDotSize_22;
		float L_7 = __this->___currentDotSize_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_6, L_7, (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		float L_10 = __this->___animDeltaTime_29;
		float L_11 = __this->___animationDuration_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Anim_Overshoot_m4306436AF6F04B5753F5CA2C96CE3A1E60A6CA3B(L_8, L_9, L_10, L_11, NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_12, NULL);
		// ringImage.color = Anim.Quint.SoftOut(currentColor, onColor, animDeltaTime, animationDuration);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___currentColor_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___onColor_5;
		float L_16 = __this->___animDeltaTime_29;
		float L_17 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2(L_14, L_15, L_16, L_17, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_18);
		// if (changeTextColor)
		bool L_19 = __this->___changeTextColor_8;
		if (!L_19)
		{
			goto IL_00cd;
		}
	}
	{
		// text.color = Anim.Quint.SoftOut(currentTextColor, onColor, animDeltaTime, animationDuration);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = __this->___currentTextColor_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = __this->___onColor_5;
		float L_23 = __this->___animDeltaTime_29;
		float L_24 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2(L_21, L_22, L_23, L_24, NULL);
		NullCheck(L_20);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_25);
	}

IL_00cd:
	{
		// if (changeRippleColor)
		bool L_26 = __this->___changeRippleColor_11;
		if (!L_26)
		{
			goto IL_02c6;
		}
	}
	{
		// rippleConfig.rippleColor = ringImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_27 = __this->___rippleConfig_17;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___ringImage_13;
		NullCheck(L_28);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		L_29 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_28);
		NullCheck(L_27);
		L_27->___rippleColor_8 = L_29;
		goto IL_02c6;
	}

IL_00f3:
	{
		// dotRectTransform.localScale = new Vector3(1f, 1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30 = __this->___dotRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_30, L_31, NULL);
		// ringImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = __this->___onColor_5;
		NullCheck(L_32);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_32, L_33);
		// if (changeTextColor)
		bool L_34 = __this->___changeTextColor_8;
		if (!L_34)
		{
			goto IL_013c;
		}
	}
	{
		// text.color = onColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = __this->___onColor_5;
		NullCheck(L_35);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_36);
	}

IL_013c:
	{
		// if (changeRippleColor)
		bool L_37 = __this->___changeRippleColor_11;
		if (!L_37)
		{
			goto IL_0155;
		}
	}
	{
		// rippleConfig.rippleColor = onColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_38 = __this->___rippleConfig_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = __this->___onColor_5;
		NullCheck(L_38);
		L_38->___rippleColor_8 = L_39;
	}

IL_0155:
	{
		// state = 0;
		__this->___state_27 = 0;
		goto IL_02c6;
	}

IL_0161:
	{
		// else if (state == 2)    // Turning off
		int32_t L_40 = __this->___state_27;
		if ((!(((uint32_t)L_40) == ((uint32_t)2))))
		{
			goto IL_02c6;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_41 = __this->___animDeltaTime_29;
		float L_42 = __this->___animationDuration_4;
		if ((!(((float)L_41) <= ((float)L_42))))
		{
			goto IL_0251;
		}
	}
	{
		// dotRectTransform.localScale = Anim.Sept.InOut(new Vector3(currentDotSize, currentDotSize, 1f), new Vector3(0f, 0f, 1f), animDeltaTime, animationDuration * 0.75f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_43 = __this->___dotRectTransform_15;
		float L_44 = __this->___currentDotSize_22;
		float L_45 = __this->___currentDotSize_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_46), L_44, L_45, (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_47), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_48 = __this->___animDeltaTime_29;
		float L_49 = __this->___animationDuration_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Sept_InOut_m9A697497142F6DEDAE999DC4999072B2B0E9AB1B(L_46, L_47, L_48, ((float)il2cpp_codegen_multiply(L_49, (0.75f))), NULL);
		NullCheck(L_43);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_43, L_50, NULL);
		// ringImage.color = Anim.Sept.InOut(currentColor, offColor, animDeltaTime, animationDuration * 0.75f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_51 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = __this->___currentColor_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53 = __this->___offColor_6;
		float L_54 = __this->___animDeltaTime_29;
		float L_55 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_56;
		L_56 = Sept_InOut_m446BE1F1757BF0591F1F052F9C0031165BB5812D(L_52, L_53, L_54, ((float)il2cpp_codegen_multiply(L_55, (0.75f))), NULL);
		NullCheck(L_51);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_51, L_56);
		// if (changeTextColor)
		bool L_57 = __this->___changeTextColor_8;
		if (!L_57)
		{
			goto IL_022e;
		}
	}
	{
		// text.color = Anim.Quint.SoftOut(currentTextColor, textNormalColor, animDeltaTime, animationDuration * 0.75f);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_58 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59 = __this->___currentTextColor_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_60 = __this->___textNormalColor_9;
		float L_61 = __this->___animDeltaTime_29;
		float L_62 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2(L_59, L_60, L_61, ((float)il2cpp_codegen_multiply(L_62, (0.75f))), NULL);
		NullCheck(L_58);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_58, L_63);
	}

IL_022e:
	{
		// if (changeRippleColor)
		bool L_64 = __this->___changeRippleColor_11;
		if (!L_64)
		{
			goto IL_02c6;
		}
	}
	{
		// rippleConfig.rippleColor = ringImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_65 = __this->___rippleConfig_17;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_66 = __this->___ringImage_13;
		NullCheck(L_66);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_67;
		L_67 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_66);
		NullCheck(L_65);
		L_65->___rippleColor_8 = L_67;
		goto IL_02c6;
	}

IL_0251:
	{
		// dotRectTransform.localScale = new Vector3(0f, 0f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_68 = __this->___dotRectTransform_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_69), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_68);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_68, L_69, NULL);
		// ringImage.color = offColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_70 = __this->___ringImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_71 = __this->___offColor_6;
		NullCheck(L_70);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_70, L_71);
		// if (changeTextColor)
		bool L_72 = __this->___changeTextColor_8;
		if (!L_72)
		{
			goto IL_029a;
		}
	}
	{
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_73 = __this->___text_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74 = __this->___textNormalColor_9;
		NullCheck(L_73);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_73, L_74);
	}

IL_029a:
	{
		// if (changeRippleColor)
		bool L_75 = __this->___changeRippleColor_11;
		if (!L_75)
		{
			goto IL_02b3;
		}
	}
	{
		// rippleConfig.rippleColor = offColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_76 = __this->___rippleConfig_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77 = __this->___offColor_6;
		NullCheck(L_76);
		L_76->___rippleColor_8 = L_77;
	}

IL_02b3:
	{
		// dotImage.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_78 = __this->___dotImage_12;
		NullCheck(L_78);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_78, (bool)0, NULL);
		// state = 0;
		__this->___state_27 = 0;
	}

IL_02c6:
	{
		// if (lastToggleInteractableState != toggle.interactable)
		bool L_79 = __this->___lastToggleInteractableState_20;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_80 = __this->___toggle_18;
		NullCheck(L_80);
		bool L_81;
		L_81 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_80, NULL);
		if ((((int32_t)L_79) == ((int32_t)L_81)))
		{
			goto IL_0300;
		}
	}
	{
		// lastToggleInteractableState = toggle.interactable;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_82 = __this->___toggle_18;
		NullCheck(L_82);
		bool L_83;
		L_83 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_82, NULL);
		__this->___lastToggleInteractableState_20 = L_83;
		// if (lastToggleInteractableState)
		bool L_84 = __this->___lastToggleInteractableState_20;
		if (!L_84)
		{
			goto IL_02fa;
		}
	}
	{
		// EnableRadioButton();
		RadioConfig_EnableRadioButton_mFEABED3ED154238C697F1FB4C8CE38504F997044(__this, NULL);
		goto IL_0300;
	}

IL_02fa:
	{
		// DisableRadioButton();
		RadioConfig_DisableRadioButton_mA7A9EDBAE4C57EE8273EFC4644C811CB4E659BF3(__this, NULL);
	}

IL_0300:
	{
		// if (!Application.isPlaying)
		bool L_85;
		L_85 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_85)
		{
			goto IL_035f;
		}
	}
	{
		// if (lastToggleState != toggle.isOn)
		bool L_86 = __this->___lastToggleState_21;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_87 = __this->___toggle_18;
		NullCheck(L_87);
		bool L_88;
		L_88 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_87, NULL);
		if ((((int32_t)L_86) == ((int32_t)L_88)))
		{
			goto IL_0341;
		}
	}
	{
		// lastToggleState = toggle.isOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_89 = __this->___toggle_18;
		NullCheck(L_89);
		bool L_90;
		L_90 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_89, NULL);
		__this->___lastToggleState_21 = L_90;
		// if (lastToggleState)
		bool L_91 = __this->___lastToggleState_21;
		if (!L_91)
		{
			goto IL_033b;
		}
	}
	{
		// TurnOnSilent();
		RadioConfig_TurnOnSilent_m5AC09AD9FFB688EC2F9B0A6AD0BB8D4252208EA8(__this, NULL);
		goto IL_0341;
	}

IL_033b:
	{
		// TurnOffSilent();
		RadioConfig_TurnOffSilent_mCA5BF60941B25B4A5551DC9DF4E49406E835845C(__this, NULL);
	}

IL_0341:
	{
		// if (changeRippleColor)
		bool L_92 = __this->___changeRippleColor_11;
		if (!L_92)
		{
			goto IL_035f;
		}
	}
	{
		// rippleConfig.rippleColor = ringImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_93 = __this->___rippleConfig_17;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_94 = __this->___ringImage_13;
		NullCheck(L_94);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_95;
		L_95 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_94);
		NullCheck(L_93);
		L_93->___rippleColor_8 = L_95;
	}

IL_035f:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.RadioConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadioConfig__ctor_mA1DD282BA883998C3E733DF7BC918ED7B75BD960 (RadioConfig_t08C8F1320494F3EBC15D174A1B02CF2D8724D8C6* __this, const RuntimeMethod* method) 
{
	{
		// public float animationDuration = 0.5f;
		__this->___animationDuration_4 = (0.5f);
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
// System.Void MaterialUI.RectTransformSnap::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransformSnap_OnEnable_mFC4F607E4EE5EC049F964DCFAF2031BCB624BF72 (RectTransformSnap_tE01ECC8D9D0CC4A448B885F2A7A52A8821EBE9E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!thisRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___thisRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// thisRect = gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_2, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___thisRect_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisRect_5), (void*)L_3);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.RectTransformSnap::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransformSnap_LateUpdate_m69F5116B49479F4F6A62203270CB8ACB426CA170 (RectTransformSnap_tE01ECC8D9D0CC4A448B885F2A7A52A8821EBE9E7* __this, const RuntimeMethod* method) 
{
	{
		// if (snapEveryFrame)
		bool L_0 = __this->___snapEveryFrame_11;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Snap();
		RectTransformSnap_Snap_mDE60F0C0DA6E421F8E600924718481E61C0063DD(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.RectTransformSnap::Snap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransformSnap_Snap_mDE60F0C0DA6E421F8E600924718481E61C0063DD (RectTransformSnap_tE01ECC8D9D0CC4A448B885F2A7A52A8821EBE9E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF08A1D713CEE64966CBF68880E2C8ADBBF12B324);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (targetRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___targetRect_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0169;
		}
	}
	{
		// if (lastRect != new Rect(targetRect.position.x, targetRect.position.y, targetRect.sizeDelta.x, targetRect.sizeDelta.y))
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = __this->___lastRect_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___targetRect_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___targetRect_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___targetRect_4;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_9, NULL);
		float L_11 = L_10.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___targetRect_4;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_12, NULL);
		float L_14 = L_13.___y_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_15), L_5, L_8, L_11, L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = Rect_op_Inequality_mB5D7316EB50B1DDA9324F4BE6741DFF6A673137D(L_2, L_15, NULL);
		if (!L_16)
		{
			goto IL_0173;
		}
	}
	{
		// lastRect = new Rect(targetRect.position.x, targetRect.position.y, targetRect.sizeDelta.x, targetRect.sizeDelta.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->___targetRect_4;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->___targetRect_4;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		float L_22 = L_21.___y_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = __this->___targetRect_4;
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_23, NULL);
		float L_25 = L_24.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = __this->___targetRect_4;
		NullCheck(L_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_26, NULL);
		float L_28 = L_27.___y_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_29;
		memset((&L_29), 0, sizeof(L_29));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_29), L_19, L_22, L_25, L_28, /*hidden argument*/NULL);
		__this->___lastRect_13 = L_29;
		// if (!sizeOnly)
		bool L_30 = __this->___sizeOnly_12;
		if (L_30)
		{
			goto IL_00ce;
		}
	}
	{
		// thisRect.position = targetRect.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31 = __this->___thisRect_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32 = __this->___targetRect_4;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		NullCheck(L_31);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_33, NULL);
	}

IL_00ce:
	{
		// if (percentage)
		bool L_34 = __this->___percentage_8;
		if (!L_34)
		{
			goto IL_0120;
		}
	}
	{
		// tempVect2.x = targetRect.sizeDelta.x*xPercent*0.01f;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_35 = __this->___targetRect_4;
		NullCheck(L_35);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_35, NULL);
		float L_37 = L_36.___x_0;
		float L_38 = __this->___xPercent_9;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_37, L_38)), (0.00999999978f)));
		// tempVect2.y = targetRect.sizeDelta.y*yPercent*0.01f;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_39 = __this->___targetRect_4;
		NullCheck(L_39);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_39, NULL);
		float L_41 = L_40.___y_1;
		float L_42 = __this->___yPercent_10;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_41, L_42)), (0.00999999978f)));
		goto IL_015c;
	}

IL_0120:
	{
		// tempVect2.x = targetRect.sizeDelta.x + xPadding;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_43 = __this->___targetRect_4;
		NullCheck(L_43);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_43, NULL);
		float L_45 = L_44.___x_0;
		float L_46 = __this->___xPadding_6;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_add(L_45, L_46));
		// tempVect2.y = targetRect.sizeDelta.y + yPadding;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_47 = __this->___targetRect_4;
		NullCheck(L_47);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_47, NULL);
		float L_49 = L_48.___y_1;
		float L_50 = __this->___yPadding_7;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_add(L_49, L_50));
	}

IL_015c:
	{
		// thisRect.sizeDelta = tempVect2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51 = __this->___thisRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_0;
		NullCheck(L_51);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_51, L_52, NULL);
		return;
	}

IL_0169:
	{
		// Debug.Log("No target rect! Please attach one.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF08A1D713CEE64966CBF68880E2C8ADBBF12B324, NULL);
	}

IL_0173:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.RectTransformSnap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransformSnap__ctor_m424ECAB2A98DE5D1A147489D20E8B6F4D9353A76 (RectTransformSnap_tE01ECC8D9D0CC4A448B885F2A7A52A8821EBE9E7* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.RippleAnim::MakeRipple(System.Int32,System.Single,System.Single,System.Single,UnityEngine.Color,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleAnim_MakeRipple_m40EEDF4CB5B03421F07036A1563DE4EEBC56F263 (RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* __this, int32_t ___0_size, float ___1_animSpeed, float ___2_startAlpha, float ___3_endAlpha, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_color, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_endPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisMaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F_m39A4C2087AC0B0B140D6D65A33DA167EA354244F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisImage = gameObject.GetComponent<Image> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___thisImage_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisImage_14), (void*)L_1);
		// thisRect = gameObject.GetComponent<RectTransform> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_2, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___thisRect_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisRect_15), (void*)L_3);
		// thisRect.SetAsFirstSibling ();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___thisRect_15;
		NullCheck(L_4);
		Transform_SetAsFirstSibling_mBE0D0E76099F829466DC2FBD71ACFCF3C8EC03BD(L_4, NULL);
		// thisRect.sizeDelta = new Vector2 (size * 1.5f, size * 1.5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___thisRect_15;
		int32_t L_6 = ___0_size;
		int32_t L_7 = ___0_size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(((float)L_6), (1.5f))), ((float)il2cpp_codegen_multiply(((float)L_7), (1.5f))), /*hidden argument*/NULL);
		NullCheck(L_5);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_5, L_8, NULL);
		// thisRect.localScale = new Vector3(0f, 0f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___thisRect_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// if (gameObject.GetComponentInParent<MaterialUIScaler> ())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* L_12;
		L_12 = GameObject_GetComponentInParent_TisMaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F_m39A4C2087AC0B0B140D6D65A33DA167EA354244F(L_11, GameObject_GetComponentInParent_TisMaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F_m39A4C2087AC0B0B140D6D65A33DA167EA354244F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		if (!L_13)
		{
			goto IL_009e;
		}
	}
	{
		// scaledSize = Mathf.RoundToInt(gameObject.GetComponentInParent<MaterialUIScaler>().scaleFactor * size);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* L_15;
		L_15 = GameObject_GetComponentInParent_TisMaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F_m39A4C2087AC0B0B140D6D65A33DA167EA354244F(L_14, GameObject_GetComponentInParent_TisMaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F_m39A4C2087AC0B0B140D6D65A33DA167EA354244F_RuntimeMethod_var);
		NullCheck(L_15);
		float L_16;
		L_16 = MaterialUIScaler_get_scaleFactor_m853F366519FCBD659D04D6BFA0C3AE48D17319C0_inline(L_15, NULL);
		int32_t L_17 = ___0_size;
		int32_t L_18;
		L_18 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(L_16, ((float)L_17))), NULL);
		__this->___scaledSize_30 = L_18;
		goto IL_00a5;
	}

IL_009e:
	{
		// scaledSize = size;
		int32_t L_19 = ___0_size;
		__this->___scaledSize_30 = L_19;
	}

IL_00a5:
	{
		// if (scaledSize <= 64 && im64px)
		int32_t L_20 = __this->___scaledSize_30;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)64))))
		{
			goto IL_00d2;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21 = __this->___im64px_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_21, NULL);
		if (!L_22)
		{
			goto IL_00d2;
		}
	}
	{
		// thisImage.sprite = im64px;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23 = __this->___thisImage_14;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_24 = __this->___im64px_4;
		NullCheck(L_23);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_23, L_24, NULL);
		goto IL_0237;
	}

IL_00d2:
	{
		// else if (scaledSize <= 128 && im128px)
		int32_t L_25 = __this->___scaledSize_30;
		if ((((int32_t)L_25) > ((int32_t)((int32_t)128))))
		{
			goto IL_0102;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_26 = __this->___im128px_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_26, NULL);
		if (!L_27)
		{
			goto IL_0102;
		}
	}
	{
		// thisImage.sprite = im128px;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___thisImage_14;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_29 = __this->___im128px_5;
		NullCheck(L_28);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_28, L_29, NULL);
		goto IL_0237;
	}

IL_0102:
	{
		// else if (scaledSize <= 256 && im256px)
		int32_t L_30 = __this->___scaledSize_30;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)256))))
		{
			goto IL_0132;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_31 = __this->___im256px_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_31, NULL);
		if (!L_32)
		{
			goto IL_0132;
		}
	}
	{
		// thisImage.sprite = im256px;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = __this->___thisImage_14;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_34 = __this->___im256px_6;
		NullCheck(L_33);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_33, L_34, NULL);
		goto IL_0237;
	}

IL_0132:
	{
		// else if (scaledSize <= 384 && im384px)
		int32_t L_35 = __this->___scaledSize_30;
		if ((((int32_t)L_35) > ((int32_t)((int32_t)384))))
		{
			goto IL_0162;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_36 = __this->___im384px_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_36, NULL);
		if (!L_37)
		{
			goto IL_0162;
		}
	}
	{
		// thisImage.sprite = im384px;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_38 = __this->___thisImage_14;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_39 = __this->___im384px_7;
		NullCheck(L_38);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_38, L_39, NULL);
		goto IL_0237;
	}

IL_0162:
	{
		// else if (scaledSize <= 512 && im512px)
		int32_t L_40 = __this->___scaledSize_30;
		if ((((int32_t)L_40) > ((int32_t)((int32_t)512))))
		{
			goto IL_0192;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_41 = __this->___im512px_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_41, NULL);
		if (!L_42)
		{
			goto IL_0192;
		}
	}
	{
		// thisImage.sprite = im512px;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_43 = __this->___thisImage_14;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_44 = __this->___im512px_8;
		NullCheck(L_43);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_43, L_44, NULL);
		goto IL_0237;
	}

IL_0192:
	{
		// else if (scaledSize <= 640 && im640px)
		int32_t L_45 = __this->___scaledSize_30;
		if ((((int32_t)L_45) > ((int32_t)((int32_t)640))))
		{
			goto IL_01bf;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_46 = __this->___im640px_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_46, NULL);
		if (!L_47)
		{
			goto IL_01bf;
		}
	}
	{
		// thisImage.sprite = im640px;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___thisImage_14;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_49 = __this->___im640px_9;
		NullCheck(L_48);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_48, L_49, NULL);
		goto IL_0237;
	}

IL_01bf:
	{
		// else if (scaledSize <= 768 && im768px)
		int32_t L_50 = __this->___scaledSize_30;
		if ((((int32_t)L_50) > ((int32_t)((int32_t)768))))
		{
			goto IL_01ec;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_51 = __this->___im768px_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_51, NULL);
		if (!L_52)
		{
			goto IL_01ec;
		}
	}
	{
		// thisImage.sprite = im768px;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_53 = __this->___thisImage_14;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_54 = __this->___im768px_10;
		NullCheck(L_53);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_53, L_54, NULL);
		goto IL_0237;
	}

IL_01ec:
	{
		// else if (scaledSize <= 896 && im896px)
		int32_t L_55 = __this->___scaledSize_30;
		if ((((int32_t)L_55) > ((int32_t)((int32_t)896))))
		{
			goto IL_0219;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_56 = __this->___im896px_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_56, NULL);
		if (!L_57)
		{
			goto IL_0219;
		}
	}
	{
		// thisImage.sprite = im896px;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_58 = __this->___thisImage_14;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_59 = __this->___im896px_11;
		NullCheck(L_58);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_58, L_59, NULL);
		goto IL_0237;
	}

IL_0219:
	{
		// else if (im1024px)
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_60 = __this->___im1024px_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_60, NULL);
		if (!L_61)
		{
			goto IL_0237;
		}
	}
	{
		// thisImage.sprite = im1024px;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_62 = __this->___thisImage_14;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_63 = __this->___im1024px_12;
		NullCheck(L_62);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_62, L_63, NULL);
	}

IL_0237:
	{
		// tempColor = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_64 = ___4_color;
		__this->___tempColor_17 = L_64;
		// tempColor.a = startAlpha;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_65 = (&__this->___tempColor_17);
		float L_66 = ___2_startAlpha;
		L_65->___a_3 = L_66;
		// thisImage.color = tempColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_67 = __this->___thisImage_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_68 = __this->___tempColor_17;
		NullCheck(L_67);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_67, L_68);
		// if (endPosition != new Vector3 (0, 0, 0))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = ___5_endPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_70), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_71;
		L_71 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_69, L_70, NULL);
		if (!L_71)
		{
			goto IL_0288;
		}
	}
	{
		// moveTowardCenter = true;
		__this->___moveTowardCenter_28 = (bool)1;
		// endPos = endPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = ___5_endPosition;
		__this->___endPos_27 = L_72;
	}

IL_0288:
	{
		// startPos = thisRect.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_73 = __this->___thisRect_15;
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_73, NULL);
		__this->___startPos_26 = L_74;
		// startColorAlpha = startAlpha;
		float L_75 = ___2_startAlpha;
		__this->___startColorAlpha_18 = L_75;
		// endColorAlpha = endAlpha;
		float L_76 = ___3_endAlpha;
		__this->___endColorAlpha_19 = L_76;
		// animationSpeed = animSpeed;
		float L_77 = ___1_animSpeed;
		__this->___animationSpeed_13 = L_77;
		// state = 1;
		__this->___state_31 = 1;
		// animStartTime = Time.realtimeSinceStartup;
		float L_78;
		L_78 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_20 = L_78;
		// animFirstStartTime = animStartTime;
		float L_79 = __this->___animStartTime_20;
		__this->___animFirstStartTime_21 = L_79;
		// }
		return;
	}
}
// System.Void MaterialUI.RippleAnim::ClearRipple()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleAnim_ClearRipple_m76705AB4FF88828551D6545C7ACABF111D7B0ED9 (RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* __this, const RuntimeMethod* method) 
{
	{
		// state = 2;
		__this->___state_31 = 2;
		// animStartTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_20 = L_0;
		// clearInkSize = thisRect.localScale.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___thisRect_15;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		__this->___clearInkSize_24 = L_3;
		// clearInkAlpha = thisImage.color.a;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___thisImage_14;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		float L_6 = L_5.___a_3;
		__this->___clearInkAlpha_25 = L_6;
		// if (moveTowardCenter)
		bool L_7 = __this->___moveTowardCenter_28;
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// endScale = 1f;
		__this->___endScale_29 = (1.0f);
		return;
	}

IL_0052:
	{
		// endScale = 1.21f;
		__this->___endScale_29 = (1.21000004f);
		// }
		return;
	}
}
// System.Void MaterialUI.RippleAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleAnim_Update_mF49D979991EC070D797F1E36608562065AC24203 (RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = __this->___animStartTime_20;
		__this->___animDeltaTime_22 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (state == 1)    // After initiated
		int32_t L_2 = __this->___state_31;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_01bc;
		}
	}
	{
		// if (thisRect.localScale.x < 1f)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___thisRect_15;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_3, NULL);
		float L_5 = L_4.___x_2;
		if ((!(((float)L_5) < ((float)(1.0f)))))
		{
			goto IL_0188;
		}
	}
	{
		// tempRect = thisRect.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___thisRect_15;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		__this->___tempRect_16 = L_7;
		// tempRect.x = Anim.Quint.Out(0f, 1f, animDeltaTime, 4 / animationSpeed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___tempRect_16);
		float L_9 = __this->___animDeltaTime_22;
		float L_10 = __this->___animationSpeed_13;
		float L_11;
		L_11 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((0.0f), (1.0f), L_9, ((float)((4.0f)/L_10)), NULL);
		L_8->___x_2 = L_11;
		// tempRect.y = tempRect.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___tempRect_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___tempRect_16);
		float L_14 = L_13->___x_2;
		L_12->___y_3 = L_14;
		// tempRect.z = 1f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___tempRect_16);
		L_15->___z_4 = (1.0f);
		// thisRect.localScale = tempRect;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___thisRect_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___tempRect_16;
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_17, NULL);
		// tempColor = thisImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___thisImage_14;
		NullCheck(L_18);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_18);
		__this->___tempColor_17 = L_19;
		// tempColor.a = Anim.Quint.Out(startColorAlpha, endColorAlpha, animDeltaTime, 4 / animationSpeed);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = (&__this->___tempColor_17);
		float L_21 = __this->___startColorAlpha_18;
		float L_22 = __this->___endColorAlpha_19;
		float L_23 = __this->___animDeltaTime_22;
		float L_24 = __this->___animationSpeed_13;
		float L_25;
		L_25 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_21, L_22, L_23, ((float)((4.0f)/L_24)), NULL);
		L_20->___a_3 = L_25;
		// thisImage.color = tempColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___thisImage_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = __this->___tempColor_17;
		NullCheck(L_26);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_26, L_27);
		// if (moveTowardCenter)
		bool L_28 = __this->___moveTowardCenter_28;
		if (!L_28)
		{
			goto IL_0350;
		}
	}
	{
		// Vector3 tempVec3 = thisRect.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_29 = __this->___thisRect_15;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		V_0 = L_30;
		// tempVec3.x = Anim.Quint.Out(startPos.x, endPos.x, animDeltaTime, 4 / animationSpeed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&__this->___startPos_26);
		float L_32 = L_31->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (&__this->___endPos_27);
		float L_34 = L_33->___x_2;
		float L_35 = __this->___animDeltaTime_22;
		float L_36 = __this->___animationSpeed_13;
		float L_37;
		L_37 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_32, L_34, L_35, ((float)((4.0f)/L_36)), NULL);
		(&V_0)->___x_2 = L_37;
		// tempVec3.y = Anim.Quint.Out(startPos.y, endPos.y, animDeltaTime, 4 / animationSpeed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (&__this->___startPos_26);
		float L_39 = L_38->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = (&__this->___endPos_27);
		float L_41 = L_40->___y_3;
		float L_42 = __this->___animDeltaTime_22;
		float L_43 = __this->___animationSpeed_13;
		float L_44;
		L_44 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_39, L_41, L_42, ((float)((4.0f)/L_43)), NULL);
		(&V_0)->___y_3 = L_44;
		// thisRect.position = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_45 = __this->___thisRect_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_0;
		NullCheck(L_45);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_45, L_46, NULL);
		return;
	}

IL_0188:
	{
		// tempColor = thisImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_47 = __this->___thisImage_14;
		NullCheck(L_47);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
		L_48 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_47);
		__this->___tempColor_17 = L_48;
		// tempColor.a = endColorAlpha;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_49 = (&__this->___tempColor_17);
		float L_50 = __this->___endColorAlpha_19;
		L_49->___a_3 = L_50;
		// thisImage.color = tempColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_51 = __this->___thisImage_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = __this->___tempColor_17;
		NullCheck(L_51);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_51, L_52);
		return;
	}

IL_01bc:
	{
		// else if (state == 2)    // After released
		int32_t L_53 = __this->___state_31;
		if ((!(((uint32_t)L_53) == ((uint32_t)2))))
		{
			goto IL_0350;
		}
	}
	{
		// if (thisImage.color.a > 0f)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_54 = __this->___thisImage_14;
		NullCheck(L_54);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55;
		L_55 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_54);
		float L_56 = L_55.___a_3;
		if ((!(((float)L_56) > ((float)(0.0f)))))
		{
			goto IL_0345;
		}
	}
	{
		// animFirstDeltaTime = Time.realtimeSinceStartup - animFirstStartTime;
		float L_57;
		L_57 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_58 = __this->___animFirstStartTime_21;
		__this->___animFirstDeltaTime_23 = ((float)il2cpp_codegen_subtract(L_57, L_58));
		// tempRect = thisRect.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_59 = __this->___thisRect_15;
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_59, NULL);
		__this->___tempRect_16 = L_60;
		// tempRect.x = Anim.Quint.Out(clearInkSize, endScale, animDeltaTime, 6 / animationSpeed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_61 = (&__this->___tempRect_16);
		float L_62 = __this->___clearInkSize_24;
		float L_63 = __this->___endScale_29;
		float L_64 = __this->___animDeltaTime_22;
		float L_65 = __this->___animationSpeed_13;
		float L_66;
		L_66 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_62, L_63, L_64, ((float)((6.0f)/L_65)), NULL);
		L_61->___x_2 = L_66;
		// tempRect.y = tempRect.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_67 = (&__this->___tempRect_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_68 = (&__this->___tempRect_16);
		float L_69 = L_68->___x_2;
		L_67->___y_3 = L_69;
		// tempRect.z = 1f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_70 = (&__this->___tempRect_16);
		L_70->___z_4 = (1.0f);
		// thisRect.localScale = tempRect;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_71 = __this->___thisRect_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = __this->___tempRect_16;
		NullCheck(L_71);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_71, L_72, NULL);
		// tempColor = thisImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_73 = __this->___thisImage_14;
		NullCheck(L_73);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74;
		L_74 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_73);
		__this->___tempColor_17 = L_74;
		// tempColor.a = Anim.Quint.Out(clearInkAlpha, 0f, animDeltaTime, 6 / animationSpeed);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_75 = (&__this->___tempColor_17);
		float L_76 = __this->___clearInkAlpha_25;
		float L_77 = __this->___animDeltaTime_22;
		float L_78 = __this->___animationSpeed_13;
		float L_79;
		L_79 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_76, (0.0f), L_77, ((float)((6.0f)/L_78)), NULL);
		L_75->___a_3 = L_79;
		// thisImage.color = tempColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_80 = __this->___thisImage_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_81 = __this->___tempColor_17;
		NullCheck(L_80);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_80, L_81);
		// if (moveTowardCenter)
		bool L_82 = __this->___moveTowardCenter_28;
		if (!L_82)
		{
			goto IL_0350;
		}
	}
	{
		// Vector3 tempVec3 = thisRect.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_83 = __this->___thisRect_15;
		NullCheck(L_83);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_83, NULL);
		V_1 = L_84;
		// tempVec3.x = Anim.Quint.Out(startPos.x, endPos.x, animFirstDeltaTime, 4 / animationSpeed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_85 = (&__this->___startPos_26);
		float L_86 = L_85->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_87 = (&__this->___endPos_27);
		float L_88 = L_87->___x_2;
		float L_89 = __this->___animFirstDeltaTime_23;
		float L_90 = __this->___animationSpeed_13;
		float L_91;
		L_91 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_86, L_88, L_89, ((float)((4.0f)/L_90)), NULL);
		(&V_1)->___x_2 = L_91;
		// tempVec3.y = Anim.Quint.Out(startPos.y, endPos.y, animFirstDeltaTime, 4 / animationSpeed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_92 = (&__this->___startPos_26);
		float L_93 = L_92->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_94 = (&__this->___endPos_27);
		float L_95 = L_94->___y_3;
		float L_96 = __this->___animFirstDeltaTime_23;
		float L_97 = __this->___animationSpeed_13;
		float L_98;
		L_98 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_93, L_95, L_96, ((float)((4.0f)/L_97)), NULL);
		(&V_1)->___y_3 = L_98;
		// thisRect.position = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_99 = __this->___thisRect_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_1;
		NullCheck(L_99);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_99, L_100, NULL);
		return;
	}

IL_0345:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101;
		L_101 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_101, NULL);
	}

IL_0350:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.RippleAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleAnim__ctor_mC7F2EB895F2BD7E9D85C21C1F066DF99FC402FAA (RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.RippleConfig::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_Setup_m57440857B29E5BB6359C1DB1B629263E6C167615 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisImage = gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___thisImage_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisImage_24), (void*)L_1);
		// }
		return;
	}
}
// System.Void MaterialUI.RippleConfig::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_Awake_m701A1EFDA80758E21D1052844D578C41D14A0578 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RippleControl.Initialize();
		RippleControl_Initialize_mDA9F33145AF8827FF031CBD56AC7230807C8CED6(NULL);
		// thisImage = gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___thisImage_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisImage_24), (void*)L_1);
		// }
		return;
	}
}
// System.Void MaterialUI.RippleConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_Start_m3FC8BCC6705EBE8554037D94FE01AAE260C380CB (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_mAB9A7CE273F47DA107A278EEFEF3C1B61C08B303_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m25C8620453831113C9063019F4E90A35F0B737AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (toggleMask)
		bool L_0 = __this->___toggleMask_15;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		// if (gameObject.GetComponent<Mask>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* L_2;
		L_2 = GameObject_GetComponent_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m25C8620453831113C9063019F4E90A35F0B737AF(L_1, GameObject_GetComponent_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m25C8620453831113C9063019F4E90A35F0B737AF_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// thisMask = gameObject.GetComponent<Mask>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* L_5;
		L_5 = GameObject_GetComponent_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m25C8620453831113C9063019F4E90A35F0B737AF(L_4, GameObject_GetComponent_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m25C8620453831113C9063019F4E90A35F0B737AF_RuntimeMethod_var);
		__this->___thisMask_21 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisMask_21), (void*)L_5);
		goto IL_004a;
	}

IL_002d:
	{
		// thisMask = gameObject.AddComponent<Mask>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* L_7;
		L_7 = GameObject_AddComponent_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_mAB9A7CE273F47DA107A278EEFEF3C1B61C08B303(L_6, GameObject_AddComponent_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_mAB9A7CE273F47DA107A278EEFEF3C1B61C08B303_RuntimeMethod_var);
		__this->___thisMask_21 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisMask_21), (void*)L_7);
		// thisMask.enabled = false;
		Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* L_8 = __this->___thisMask_21;
		NullCheck(L_8);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
	}

IL_004a:
	{
		// theCanvas = gameObject.GetComponentInParent<Canvas>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_10;
		L_10 = GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991(L_9, GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991_RuntimeMethod_var);
		__this->___theCanvas_22 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theCanvas_22), (void*)L_10);
		// if (theCanvas.renderMode != RenderMode.ScreenSpaceOverlay)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_11 = __this->___theCanvas_22;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_11, NULL);
		if (!L_12)
		{
			goto IL_0092;
		}
	}
	{
		// if (theCanvas.worldCamera)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_13 = __this->___theCanvas_22;
		NullCheck(L_13);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		// theCamera = theCanvas.worldCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = __this->___theCanvas_22;
		NullCheck(L_16);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_16, NULL);
		__this->___theCamera_23 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theCamera_23), (void*)L_17);
		// worldSpace = true;
		__this->___worldSpace_25 = (bool)1;
	}

IL_0092:
	{
		// Refresh();
		RippleConfig_Refresh_mC2281C7B12A553E8D9E774FFBF4DCF0F020A4AE5(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.RippleConfig::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_Refresh_mC2281C7B12A553E8D9E774FFBF4DCF0F020A4AE5 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, const RuntimeMethod* method) 
{
	{
		// if (autoSize)
		bool L_0 = __this->___autoSize_4;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// StartCoroutine(GetRect());
		RuntimeObject* L_1;
		L_1 = RippleConfig_GetRect_m374CEDFB0BAE1BF808991CA726629D4268FE5879(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		return;
	}

IL_0016:
	{
		// RefreshContinued();
		RippleConfig_RefreshContinued_m691C3CA3E7F527819A2781AA3EBBD6E70AE39913(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.RippleConfig::RefreshContinued()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_RefreshContinued_m691C3CA3E7F527819A2781AA3EBBD6E70AE39913 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, const RuntimeMethod* method) 
{
	HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A V_0;
	memset((&V_0), 0, sizeof(V_0));
	HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// normalColor = thisImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___thisImage_24;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		__this->___normalColor_26 = L_1;
		// if (highlightWhen != HighlightActive.Never)
		int32_t L_2 = __this->___highlightWhen_13;
		if (!L_2)
		{
			goto IL_01e2;
		}
	}
	{
		// highlightColor = rippleColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___rippleColor_8;
		__this->___highlightColor_27 = L_3;
		// HSBColor highlightColorHSB = HSBColor.FromColor(highlightColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___highlightColor_27;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_5;
		L_5 = HSBColor_FromColor_m70EF18BA22C46F43BD47ACC0D7976862A291D05A(L_4, NULL);
		V_0 = L_5;
		// HSBColor normalColorHSB = HSBColor.FromColor(normalColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___normalColor_26;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_7;
		L_7 = HSBColor_FromColor_m70EF18BA22C46F43BD47ACC0D7976862A291D05A(L_6, NULL);
		V_1 = L_7;
		// if (highlightColorHSB.s <= 0.05f)
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_8 = V_0;
		float L_9 = L_8.___s_1;
		if ((!(((float)L_9) <= ((float)(0.0500000007f)))))
		{
			goto IL_0122;
		}
	}
	{
		// if (highlightColorHSB.b > 0.5f)
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_10 = V_0;
		float L_11 = L_10.___b_2;
		if ((!(((float)L_11) > ((float)(0.5f)))))
		{
			goto IL_00ce;
		}
	}
	{
		// if (normalColorHSB.b > 0.9f)
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_12 = V_1;
		float L_13 = L_12.___b_2;
		if ((!(((float)L_13) > ((float)(0.899999976f)))))
		{
			goto IL_009f;
		}
	}
	{
		// highlightColorHSB.h = normalColorHSB.h;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_14 = V_1;
		float L_15 = L_14.___h_0;
		(&V_0)->___h_0 = L_15;
		// highlightColorHSB.s = normalColorHSB.s - 0.1f;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_16 = V_1;
		float L_17 = L_16.___s_1;
		(&V_0)->___s_1 = ((float)il2cpp_codegen_subtract(L_17, (0.100000001f)));
		// highlightColorHSB.b = normalColorHSB.b + 0.2f;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_18 = V_1;
		float L_19 = L_18.___b_2;
		(&V_0)->___b_2 = ((float)il2cpp_codegen_add(L_19, (0.200000003f)));
		goto IL_00fb;
	}

IL_009f:
	{
		// highlightColorHSB.h = normalColorHSB.h;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_20 = V_1;
		float L_21 = L_20.___h_0;
		(&V_0)->___h_0 = L_21;
		// highlightColorHSB.s = normalColorHSB.s;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_22 = V_1;
		float L_23 = L_22.___s_1;
		(&V_0)->___s_1 = L_23;
		// highlightColorHSB.b = normalColorHSB.b + 0.2f;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_24 = V_1;
		float L_25 = L_24.___b_2;
		(&V_0)->___b_2 = ((float)il2cpp_codegen_add(L_25, (0.200000003f)));
		goto IL_00fb;
	}

IL_00ce:
	{
		// highlightColorHSB.h = normalColorHSB.h;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_26 = V_1;
		float L_27 = L_26.___h_0;
		(&V_0)->___h_0 = L_27;
		// highlightColorHSB.s = normalColorHSB.s;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_28 = V_1;
		float L_29 = L_28.___s_1;
		(&V_0)->___s_1 = L_29;
		// highlightColorHSB.b = normalColorHSB.b - 0.15f;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_30 = V_1;
		float L_31 = L_30.___b_2;
		(&V_0)->___b_2 = ((float)il2cpp_codegen_subtract(L_31, (0.150000006f)));
	}

IL_00fb:
	{
		// highlightColor = HSBColor.ToColor(highlightColorHSB);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_32 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		L_33 = HSBColor_ToColor_mBF4D235881CF9E626E2DB5E2EE780798C4269607(L_32, NULL);
		__this->___highlightColor_27 = L_33;
		// highlightColor.a = normalColor.a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_34 = (&__this->___highlightColor_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_35 = (&__this->___normalColor_26);
		float L_36 = L_35->___a_3;
		L_34->___a_3 = L_36;
		goto IL_01e2;
	}

IL_0122:
	{
		// highlightColor.r = Anim.Linear(normalColor.r, highlightColor.r, 0.2f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_37 = (&__this->___highlightColor_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_38 = (&__this->___normalColor_26);
		float L_39 = L_38->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_40 = (&__this->___highlightColor_27);
		float L_41 = L_40->___r_0;
		float L_42;
		L_42 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_39, L_41, (0.200000003f), (1.0f), NULL);
		L_37->___r_0 = L_42;
		// highlightColor.g = Anim.Linear(normalColor.g, highlightColor.g, 0.2f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_43 = (&__this->___highlightColor_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_44 = (&__this->___normalColor_26);
		float L_45 = L_44->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_46 = (&__this->___highlightColor_27);
		float L_47 = L_46->___g_1;
		float L_48;
		L_48 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_45, L_47, (0.200000003f), (1.0f), NULL);
		L_43->___g_1 = L_48;
		// highlightColor.b = Anim.Linear(normalColor.b, highlightColor.b, 0.2f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_49 = (&__this->___highlightColor_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_50 = (&__this->___normalColor_26);
		float L_51 = L_50->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_52 = (&__this->___highlightColor_27);
		float L_53 = L_52->___b_2;
		float L_54;
		L_54 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_51, L_53, (0.200000003f), (1.0f), NULL);
		L_49->___b_2 = L_54;
		// highlightColor.a = Anim.Linear(normalColor.a, highlightColor.a, 0.2f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_55 = (&__this->___highlightColor_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_56 = (&__this->___normalColor_26);
		float L_57 = L_56->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_58 = (&__this->___highlightColor_27);
		float L_59 = L_58->___a_3;
		float L_60;
		L_60 = Anim_Linear_m5D84F1881CDA1D5A9FC7EC42DB680B11BDD287F2(L_57, L_59, (0.200000003f), (1.0f), NULL);
		L_55->___a_3 = L_60;
	}

IL_01e2:
	{
		// animationDuration = 4 / rippleSpeed;
		float L_61 = __this->___rippleSpeed_7;
		__this->___animationDuration_33 = ((float)((4.0f)/L_61));
		// }
		return;
	}
}
// System.Void MaterialUI.RippleConfig::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_Update_m94D2D5DF96831CCC016A48EC79704F7B06548F2B (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, const RuntimeMethod* method) 
{
	{
		// if (state == 1)
		int32_t L_0 = __this->___state_30;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_2 = __this->___animStartTime_31;
		__this->___animDeltaTime_32 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (animDeltaTime < animationDuration)
		float L_3 = __this->___animDeltaTime_32;
		float L_4 = __this->___animationDuration_33;
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_0052;
		}
	}
	{
		// thisImage.color = Anim.Quint.Out(currentColor, highlightColor, animDeltaTime, animationDuration);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___thisImage_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___currentColor_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___highlightColor_27;
		float L_8 = __this->___animDeltaTime_32;
		float L_9 = __this->___animationDuration_33;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Quint_Out_mDC1C9CCF37FC9B50A6895773873B7917B03AA27F(L_6, L_7, L_8, L_9, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_10);
		return;
	}

IL_0052:
	{
		// thisImage.color = highlightColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___thisImage_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___highlightColor_27;
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// state = 0;
		__this->___state_30 = 0;
		return;
	}

IL_006b:
	{
		// else if (state == 2)
		int32_t L_13 = __this->___state_30;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_00d5;
		}
	}
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_14;
		L_14 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_15 = __this->___animStartTime_31;
		__this->___animDeltaTime_32 = ((float)il2cpp_codegen_subtract(L_14, L_15));
		// if (animDeltaTime < animationDuration)
		float L_16 = __this->___animDeltaTime_32;
		float L_17 = __this->___animationDuration_33;
		if ((!(((float)L_16) < ((float)L_17))))
		{
			goto IL_00bd;
		}
	}
	{
		// thisImage.color = Anim.Quint.Out(currentColor, normalColor, animDeltaTime, animationDuration);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___thisImage_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = __this->___currentColor_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = __this->___normalColor_26;
		float L_21 = __this->___animDeltaTime_32;
		float L_22 = __this->___animationDuration_33;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Quint_Out_mDC1C9CCF37FC9B50A6895773873B7917B03AA27F(L_19, L_20, L_21, L_22, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_23);
		return;
	}

IL_00bd:
	{
		// thisImage.color = normalColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___thisImage_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = __this->___normalColor_26;
		NullCheck(L_24);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_24, L_25);
		// state = 0;
		__this->___state_30 = 0;
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.RippleConfig::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_OnPointerEnter_m5481C0E02DA4582ABB5CE7EC61A878A64AFBFA04 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// if (highlightWhen == HighlightActive.Hovered)
		int32_t L_0 = __this->___highlightWhen_13;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_002c;
		}
	}
	{
		// currentColor = thisImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___thisImage_24;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		__this->___currentColor_29 = L_2;
		// animStartTime = Time.realtimeSinceStartup;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_31 = L_3;
		// state = 1;
		__this->___state_30 = 1;
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.RippleConfig::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_OnPointerDown_mB1734DA0EDF3A3C1EDCCA14AEED509D7F30E301C (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (worldSpace)
		bool L_0 = __this->___worldSpace_25;
		if (!L_0)
		{
			goto IL_008e;
		}
	}
	{
		// StartCoroutine(DragCheck(theCamera.ScreenToWorldPoint(new Vector3 (data.position.x, data.position.y, Vector3.Distance(theCamera.transform.position, transform.position) - Mathf.Sqrt(Vector2.Distance(data.position, new Vector2(Screen.width / 2f, Screen.height / 2f)))))));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___theCamera_23;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_data;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		float L_4 = L_3.___x_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___0_data;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_5, NULL);
		float L_7 = L_6.___y_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->___theCamera_23;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13;
		L_13 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_10, L_12, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_14 = ___0_data;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_14, NULL);
		int32_t L_16;
		L_16 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_17;
		L_17 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), ((float)(((float)L_16)/(2.0f))), ((float)(((float)L_17)/(2.0f))), /*hidden argument*/NULL);
		float L_19;
		L_19 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_15, L_18, NULL);
		float L_20;
		L_20 = sqrtf(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), L_4, L_7, ((float)il2cpp_codegen_subtract(L_13, L_20)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_21, NULL);
		RuntimeObject* L_23;
		L_23 = RippleConfig_DragCheck_m79F2AD0FA0D56BC35103E3E50CE6295BC900138C(__this, L_22, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_24;
		L_24 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_23, NULL);
		goto IL_00a6;
	}

IL_008e:
	{
		// StartCoroutine(DragCheck (data.position));
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_25 = ___0_data;
		NullCheck(L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_26, NULL);
		RuntimeObject* L_28;
		L_28 = RippleConfig_DragCheck_m79F2AD0FA0D56BC35103E3E50CE6295BC900138C(__this, L_27, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_29;
		L_29 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_28, NULL);
	}

IL_00a6:
	{
		// if (thisMask && toggleMask)
		Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* L_30 = __this->___thisMask_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_30, NULL);
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		bool L_32 = __this->___toggleMask_15;
		if (!L_32)
		{
			goto IL_00c7;
		}
	}
	{
		// thisMask.enabled = true;
		Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* L_33 = __this->___thisMask_21;
		NullCheck(L_33);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_33, (bool)1, NULL);
	}

IL_00c7:
	{
		// if (highlightWhen == HighlightActive.Clicked)
		int32_t L_34 = __this->___highlightWhen_13;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00f3;
		}
	}
	{
		// currentColor = thisImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = __this->___thisImage_24;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
		L_36 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_35);
		__this->___currentColor_29 = L_36;
		// animStartTime = Time.realtimeSinceStartup;
		float L_37;
		L_37 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_31 = L_37;
		// state = 1;
		__this->___state_30 = 1;
	}

IL_00f3:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.RippleConfig::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_OnPointerUp_m38AE4DCE559D6C7C383E97D0C295A3FA29B460C8 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (toggleMask)
		bool L_0 = __this->___toggleMask_15;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// StartCoroutine (DelayedMaskCheck());
		RuntimeObject* L_1;
		L_1 = RippleConfig_DelayedMaskCheck_m6BD98BDCCE5E352AF61D4471C2251EAB8C369CF8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
	}

IL_0015:
	{
		// if (currentRippleAnim)
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_3 = __this->___currentRippleAnim_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// currentRippleAnim.ClearRipple ();
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_5 = __this->___currentRippleAnim_20;
		NullCheck(L_5);
		RippleAnim_ClearRipple_m76705AB4FF88828551D6545C7ACABF111D7B0ED9(L_5, NULL);
	}

IL_002d:
	{
		// currentRippleAnim = null;
		__this->___currentRippleAnim_20 = (RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRippleAnim_20), (void*)(RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92*)NULL);
		// if (highlightWhen != HighlightActive.Never)
		int32_t L_6 = __this->___highlightWhen_13;
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		// currentColor = thisImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___thisImage_24;
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		__this->___currentColor_29 = L_8;
		// animStartTime = Time.realtimeSinceStartup;
		float L_9;
		L_9 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_31 = L_9;
		// state = 2;
		__this->___state_30 = 2;
	}

IL_005f:
	{
		// hasLifted = true;
		__this->___hasLifted_18 = (bool)1;
		// }
		return;
	}
}
// System.Void MaterialUI.RippleConfig::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_OnPointerExit_mD58D1C2C2020B858DF21764E6236E9E0F073777A (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (toggleMask)
		bool L_0 = __this->___toggleMask_15;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// StartCoroutine (DelayedMaskCheck());
		RuntimeObject* L_1;
		L_1 = RippleConfig_DelayedMaskCheck_m6BD98BDCCE5E352AF61D4471C2251EAB8C369CF8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
	}

IL_0015:
	{
		// if (currentRippleAnim)
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_3 = __this->___currentRippleAnim_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// currentRippleAnim.ClearRipple ();
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_5 = __this->___currentRippleAnim_20;
		NullCheck(L_5);
		RippleAnim_ClearRipple_m76705AB4FF88828551D6545C7ACABF111D7B0ED9(L_5, NULL);
	}

IL_002d:
	{
		// currentRippleAnim = null;
		__this->___currentRippleAnim_20 = (RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRippleAnim_20), (void*)(RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92*)NULL);
		// if (highlightWhen != HighlightActive.Never)
		int32_t L_6 = __this->___highlightWhen_13;
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		// currentColor = thisImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___thisImage_24;
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		__this->___currentColor_29 = L_8;
		// animStartTime = Time.realtimeSinceStartup;
		float L_9;
		L_9 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_31 = L_9;
		// state = 2;
		__this->___state_30 = 2;
	}

IL_005f:
	{
		// hasLifted = true;
		__this->___hasLifted_18 = (bool)1;
		// }
		return;
	}
}
// System.Void MaterialUI.RippleConfig::MakeInkBlot(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig_MakeInkBlot_m40B5E184BFF2C32F0750634E093A192FB7CB1006 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentRippleAnim)
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_0 = __this->___currentRippleAnim_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// currentRippleAnim.ClearRipple ();
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_2 = __this->___currentRippleAnim_20;
		NullCheck(L_2);
		RippleAnim_ClearRipple_m76705AB4FF88828551D6545C7ACABF111D7B0ED9(L_2, NULL);
	}

IL_0018:
	{
		// if (moveTowardCenter)
		bool L_3 = __this->___moveTowardCenter_14;
		if (!L_3)
		{
			goto IL_0066;
		}
	}
	{
		// currentRippleAnim = RippleControl.MakeRipple (pos, transform, rippleSize, rippleSpeed, rippleStartAlpha, rippleEndAlpha, rippleColor, gameObject.GetComponent<RectTransform>().position).GetComponent<RippleAnim>();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_6 = __this->___rippleSize_6;
		float L_7 = __this->___rippleSpeed_7;
		float L_8 = __this->___rippleStartAlpha_9;
		float L_9 = __this->___rippleEndAlpha_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___rippleColor_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_11, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = RippleControl_MakeRipple_m4083D244D0806FEDA3C433DDA78800869B5F94B5(L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_13, NULL);
		NullCheck(L_14);
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_15;
		L_15 = GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D(L_14, GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D_RuntimeMethod_var);
		__this->___currentRippleAnim_20 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRippleAnim_20), (void*)L_15);
		return;
	}

IL_0066:
	{
		// currentRippleAnim = RippleControl.MakeRipple (pos, transform, rippleSize, rippleSpeed, rippleStartAlpha, rippleEndAlpha, rippleColor).GetComponent<RippleAnim>();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_18 = __this->___rippleSize_6;
		float L_19 = __this->___rippleSpeed_7;
		float L_20 = __this->___rippleStartAlpha_9;
		float L_21 = __this->___rippleEndAlpha_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = __this->___rippleColor_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = RippleControl_MakeRipple_m489D70458E76126AACEA99C297DF960D933B475E(L_16, L_17, L_18, L_19, L_20, L_21, L_22, NULL);
		NullCheck(L_23);
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_24;
		L_24 = GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D(L_23, GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D_RuntimeMethod_var);
		__this->___currentRippleAnim_20 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRippleAnim_20), (void*)L_24);
		// }
		return;
	}
}
// System.Collections.IEnumerator MaterialUI.RippleConfig::DragCheck(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RippleConfig_DragCheck_m79F2AD0FA0D56BC35103E3E50CE6295BC900138C (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3* L_0 = (U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3*)il2cpp_codegen_object_new(U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDragCheckU3Ed__43__ctor_m1E5F4D65DE5FC221FEC3B87D95A53199195579B3(L_0, 0, NULL);
		U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_pos;
		NullCheck(L_2);
		L_2->___pos_3 = L_3;
		return L_2;
	}
}
// System.Collections.IEnumerator MaterialUI.RippleConfig::DelayedMaskCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RippleConfig_DelayedMaskCheck_m6BD98BDCCE5E352AF61D4471C2251EAB8C369CF8 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A* L_0 = (U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A*)il2cpp_codegen_object_new(U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDelayedMaskCheckU3Ed__44__ctor_mE1AA25F32FA0D7EC76E1E8D7620B86E98CBF8822(L_0, 0, NULL);
		U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator MaterialUI.RippleConfig::GetRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RippleConfig_GetRect_m374CEDFB0BAE1BF808991CA726629D4268FE5879 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777* L_0 = (U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777*)il2cpp_codegen_object_new(U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetRectU3Ed__45__ctor_m99DCCB3A84EE0C5EB08D4F4FD26969BC66C6FEEE(L_0, 0, NULL);
		U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MaterialUI.RippleConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleConfig__ctor_m9803AA247AE006BAE24332CE66B48FB274BC1B93 (RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* __this, const RuntimeMethod* method) 
{
	{
		// public bool autoSize = true;
		__this->___autoSize_4 = (bool)1;
		// public float sizePercentage = 75f;
		__this->___sizePercentage_5 = (75.0f);
		// public float rippleSpeed = 6f;
		__this->___rippleSpeed_7 = (6.0f);
		// public Color rippleColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___rippleColor_8 = L_0;
		// public float rippleStartAlpha = 0.5f;
		__this->___rippleStartAlpha_9 = (0.5f);
		// public float rippleEndAlpha = 0.3f;
		__this->___rippleEndAlpha_10 = (0.300000012f);
		// public HighlightActive highlightWhen = HighlightActive.Clicked;
		__this->___highlightWhen_13 = 2;
		// public bool toggleMask = true;
		__this->___toggleMask_15 = (bool)1;
		// [HideInInspector] public float scrollDelayCheckTime = 0.05f;
		__this->___scrollDelayCheckTime_17 = (0.0500000007f);
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
// System.Void MaterialUI.RippleConfig/<DragCheck>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDragCheckU3Ed__43__ctor_m1E5F4D65DE5FC221FEC3B87D95A53199195579B3 (U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MaterialUI.RippleConfig/<DragCheck>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDragCheckU3Ed__43_System_IDisposable_Dispose_m0C0C9432DDA31FD2FD6C7D762524BD3EEF1AC8D0 (U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MaterialUI.RippleConfig/<DragCheck>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDragCheckU3Ed__43_MoveNext_m68D5E735A371F7C65E6C3C733D06F68A491F5A11 (U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_00c6;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (dontRippleOnScroll)
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_3 = V_1;
		NullCheck(L_3);
		bool L_4 = L_3->___dontRippleOnScroll_16;
		if (!L_4)
		{
			goto IL_00ef;
		}
	}
	{
		// mousePos = Input.mousePosition;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		NullCheck(L_5);
		L_5->___mousePos_19 = L_7;
		// hasLifted = false;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_8 = V_1;
		NullCheck(L_8);
		L_8->___hasLifted_18 = (bool)0;
		// yield return new WaitForSeconds(scrollDelayCheckTime);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___scrollDelayCheckTime_17;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, L_10, NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0065:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (mousePos.x == Input.mousePosition.x && mousePos.y == Input.mousePosition.y)
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_12 = V_1;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&L_12->___mousePos_19);
		float L_14 = L_13->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_16 = L_15.___x_2;
		if ((!(((float)L_14) == ((float)L_16))))
		{
			goto IL_00fb;
		}
	}
	{
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_17 = V_1;
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&L_17->___mousePos_19);
		float L_19 = L_18->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_21 = L_20.___y_3;
		if ((!(((float)L_19) == ((float)L_21))))
		{
			goto IL_00fb;
		}
	}
	{
		// MakeInkBlot(pos);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___pos_3;
		NullCheck(L_22);
		RippleConfig_MakeInkBlot_m40B5E184BFF2C32F0750634E093A192FB7CB1006(L_22, L_23, NULL);
		// yield return new WaitForSeconds(scrollDelayCheckTime * 2f);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_24 = V_1;
		NullCheck(L_24);
		float L_25 = L_24->___scrollDelayCheckTime_17;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_26 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_26, ((float)il2cpp_codegen_multiply(L_25, (2.0f))), NULL);
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00c6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (hasLifted)
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_27 = V_1;
		NullCheck(L_27);
		bool L_28 = L_27->___hasLifted_18;
		if (!L_28)
		{
			goto IL_00fb;
		}
	}
	{
		// if (currentRippleAnim)
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_29 = V_1;
		NullCheck(L_29);
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_30 = L_29->___currentRippleAnim_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_30, NULL);
		if (!L_31)
		{
			goto IL_00fb;
		}
	}
	{
		// currentRippleAnim.ClearRipple();
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_32 = V_1;
		NullCheck(L_32);
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_33 = L_32->___currentRippleAnim_20;
		NullCheck(L_33);
		RippleAnim_ClearRipple_m76705AB4FF88828551D6545C7ACABF111D7B0ED9(L_33, NULL);
		goto IL_00fb;
	}

IL_00ef:
	{
		// MakeInkBlot(pos);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_34 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___pos_3;
		NullCheck(L_34);
		RippleConfig_MakeInkBlot_m40B5E184BFF2C32F0750634E093A192FB7CB1006(L_34, L_35, NULL);
	}

IL_00fb:
	{
		// }
		return (bool)0;
	}
}
// System.Object MaterialUI.RippleConfig/<DragCheck>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDragCheckU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFD3804F67C6838A6CF1924F8DBB3DC3BC0FAEC27 (U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MaterialUI.RippleConfig/<DragCheck>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDragCheckU3Ed__43_System_Collections_IEnumerator_Reset_mD50FE8495AABB72F802CCC8820F18F9A5E3871E0 (U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDragCheckU3Ed__43_System_Collections_IEnumerator_Reset_mD50FE8495AABB72F802CCC8820F18F9A5E3871E0_RuntimeMethod_var)));
	}
}
// System.Object MaterialUI.RippleConfig/<DragCheck>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDragCheckU3Ed__43_System_Collections_IEnumerator_get_Current_m8257F3DB32C8D3EB0A2F2676605423C24E7F3590 (U3CDragCheckU3Ed__43_tFA4BB8B4BB279B54BC68FD54E4E9FB592CF189D3* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.RippleConfig/<DelayedMaskCheck>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedMaskCheckU3Ed__44__ctor_mE1AA25F32FA0D7EC76E1E8D7620B86E98CBF8822 (U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MaterialUI.RippleConfig/<DelayedMaskCheck>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedMaskCheckU3Ed__44_System_IDisposable_Dispose_mA103EFBD405FC2E3CC92964D3C8E02488FFC74F0 (U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MaterialUI.RippleConfig/<DelayedMaskCheck>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedMaskCheckU3Ed__44_MoveNext_mBB20E19DA7C33D80000A69C6EFDB8C30F1781C55 (U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_m68F9DD4540464857D8BAD1EA7BBF472DC8D7FA65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!gameObject.GetComponentInChildren<RippleAnim>())
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_7;
		L_7 = GameObject_GetComponentInChildren_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_m68F9DD4540464857D8BAD1EA7BBF472DC8D7FA65(L_6, GameObject_GetComponentInChildren_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_m68F9DD4540464857D8BAD1EA7BBF472DC8D7FA65_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		// thisMask.enabled = false;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_9 = V_1;
		NullCheck(L_9);
		Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* L_10 = L_9->___thisMask_21;
		NullCheck(L_10);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)0, NULL);
	}

IL_005c:
	{
		// }
		return (bool)0;
	}
}
// System.Object MaterialUI.RippleConfig/<DelayedMaskCheck>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayedMaskCheckU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m665FF98D83AC60880A0A6E86C0F7DA778EB91E2B (U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MaterialUI.RippleConfig/<DelayedMaskCheck>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedMaskCheckU3Ed__44_System_Collections_IEnumerator_Reset_m6ED7065E88AA9248621EEF81FE4FE422880935EB (U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayedMaskCheckU3Ed__44_System_Collections_IEnumerator_Reset_m6ED7065E88AA9248621EEF81FE4FE422880935EB_RuntimeMethod_var)));
	}
}
// System.Object MaterialUI.RippleConfig/<DelayedMaskCheck>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayedMaskCheckU3Ed__44_System_Collections_IEnumerator_get_Current_mB11C6BFA55561C3964DDA3D8E5FF356FC4FC0E97 (U3CDelayedMaskCheckU3Ed__44_t8875D3218CA792018286232854D34255D486002A* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.RippleConfig/<GetRect>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRectU3Ed__45__ctor_m99DCCB3A84EE0C5EB08D4F4FD26969BC66C6FEEE (U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MaterialUI.RippleConfig/<GetRect>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRectU3Ed__45_System_IDisposable_Dispose_m17C03862B7647FA06EAEE06EAA475C57DBD80B7A (U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MaterialUI.RippleConfig/<GetRect>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRectU3Ed__45_MoveNext_mE1738DABAA7285E9222CF982A64A6A10EA5AE274 (U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral962A31B336A863751A0C221EE2E14CD1A2E094E9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* V_1 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0118;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Rect tempRect2 = gameObject.GetComponent<RectTransform>().rect;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_5, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_6, NULL);
		V_2 = L_7;
		// if (tempRect2 != new Rect(0, 0, 0, 0))
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		memset((&L_9), 0, sizeof(L_9));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_9), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_10;
		L_10 = Rect_op_Inequality_mB5D7316EB50B1DDA9324F4BE6741DFF6A673137D(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// sizeReferenceRect = tempRect2;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_11 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12 = V_2;
		NullCheck(L_11);
		L_11->___sizeReferenceRect_34 = L_12;
		goto IL_0149;
	}

IL_005f:
	{
		// GameObject sizeRefGameObject = new GameObject("SizeRefGameObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_13, _stringLiteral962A31B336A863751A0C221EE2E14CD1A2E094E9, NULL);
		__this->___U3CsizeRefGameObjectU3E5__2_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsizeRefGameObjectU3E5__2_3), (void*)L_13);
		// RectTransform sizeRefRectTransform = sizeRefGameObject.AddComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___U3CsizeRefGameObjectU3E5__2_3;
		NullCheck(L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15;
		L_15 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_14, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		__this->___U3CsizeRefRectTransformU3E5__3_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsizeRefRectTransformU3E5__3_4), (void*)L_15);
		// sizeRefRectTransform.SetParent(transform);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___U3CsizeRefRectTransformU3E5__3_4;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_17 = V_1;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_16);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_16, L_18, NULL);
		// sizeRefRectTransform.localScale = new Vector3(1f, 1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = __this->___U3CsizeRefRectTransformU3E5__3_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_19, L_20, NULL);
		// sizeRefRectTransform.anchorMax = new Vector2(1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = __this->___U3CsizeRefRectTransformU3E5__3_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_21, L_22, NULL);
		// sizeRefRectTransform.anchorMin = new Vector2(0f, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = __this->___U3CsizeRefRectTransformU3E5__3_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_24), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_23, L_24, NULL);
		// sizeRefRectTransform.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25 = __this->___U3CsizeRefRectTransformU3E5__3_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_25);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_25, L_26, NULL);
		// sizeRefRectTransform.sizeDelta = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = __this->___U3CsizeRefRectTransformU3E5__3_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_27);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_27, L_28, NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_29 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_29, NULL);
		__this->___U3CU3E2__current_1 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_29);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0118:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// sizeReferenceRect = sizeRefRectTransform.rect;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_30 = V_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31 = __this->___U3CsizeRefRectTransformU3E5__3_4;
		NullCheck(L_31);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_32;
		L_32 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_31, NULL);
		NullCheck(L_30);
		L_30->___sizeReferenceRect_34 = L_32;
		// Destroy(sizeRefGameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___U3CsizeRefGameObjectU3E5__2_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_33, NULL);
		// }
		__this->___U3CsizeRefGameObjectU3E5__2_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsizeRefGameObjectU3E5__2_3), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		__this->___U3CsizeRefRectTransformU3E5__3_4 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsizeRefRectTransformU3E5__3_4), (void*)(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL);
	}

IL_0149:
	{
		// if (sizeReferenceRect.width > sizeReferenceRect.height)
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_34 = V_1;
		NullCheck(L_34);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_35 = (&L_34->___sizeReferenceRect_34);
		float L_36;
		L_36 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_35, NULL);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_37 = V_1;
		NullCheck(L_37);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_38 = (&L_37->___sizeReferenceRect_34);
		float L_39;
		L_39 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_38, NULL);
		if ((!(((float)L_36) > ((float)L_39))))
		{
			goto IL_0179;
		}
	}
	{
		// rippleSize = Mathf.RoundToInt(sizeReferenceRect.width);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_40 = V_1;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_41 = V_1;
		NullCheck(L_41);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_42 = (&L_41->___sizeReferenceRect_34);
		float L_43;
		L_43 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_42, NULL);
		int32_t L_44;
		L_44 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_43, NULL);
		NullCheck(L_40);
		L_40->___rippleSize_6 = L_44;
		goto IL_018f;
	}

IL_0179:
	{
		// rippleSize = Mathf.RoundToInt(sizeReferenceRect.height);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_45 = V_1;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_46 = V_1;
		NullCheck(L_46);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_47 = (&L_46->___sizeReferenceRect_34);
		float L_48;
		L_48 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_47, NULL);
		int32_t L_49;
		L_49 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_48, NULL);
		NullCheck(L_45);
		L_45->___rippleSize_6 = L_49;
	}

IL_018f:
	{
		// rippleSize = Mathf.RoundToInt(rippleSize * sizePercentage / 100f);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_50 = V_1;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_51 = V_1;
		NullCheck(L_51);
		int32_t L_52 = L_51->___rippleSize_6;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_53 = V_1;
		NullCheck(L_53);
		float L_54 = L_53->___sizePercentage_5;
		int32_t L_55;
		L_55 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(((float)il2cpp_codegen_multiply(((float)L_52), L_54))/(100.0f))), NULL);
		NullCheck(L_50);
		L_50->___rippleSize_6 = L_55;
		// RefreshContinued();
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_56 = V_1;
		NullCheck(L_56);
		RippleConfig_RefreshContinued_m691C3CA3E7F527819A2781AA3EBBD6E70AE39913(L_56, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MaterialUI.RippleConfig/<GetRect>d__45::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRectU3Ed__45_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m69574635866FC474353EB8E43B5F7D21360EB84B (U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MaterialUI.RippleConfig/<GetRect>d__45::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRectU3Ed__45_System_Collections_IEnumerator_Reset_m2D3A127E44D52FE7E91C1BD8294AA6FF60DCFD1D (U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRectU3Ed__45_System_Collections_IEnumerator_Reset_m2D3A127E44D52FE7E91C1BD8294AA6FF60DCFD1D_RuntimeMethod_var)));
	}
}
// System.Object MaterialUI.RippleConfig/<GetRect>d__45::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRectU3Ed__45_System_Collections_IEnumerator_get_Current_mF7327B221AE036866EB3A944B5429E2C10EFD245 (U3CGetRectU3Ed__45_tB82C4E82F133A7650CACF1B81BCD58506C658777* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.RippleControl::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RippleControl_Initialize_mDA9F33145AF8827FF031CBD56AC7230807C8CED6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB259FE354C9FFA6F42C15391CE91A8B9F6E9CCD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ripplePrefab == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___ripplePrefab_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// ripplePrefab = Resources.Load ("InkBlot", typeof(GameObject)) as GameObject;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4;
		L_4 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(_stringLiteralBB259FE354C9FFA6F42C15391CE91A8B9F6E9CCD, L_3, NULL);
		((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___ripplePrefab_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_4, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___ripplePrefab_0), (void*)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_4, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
	}

IL_002b:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject MaterialUI.RippleControl::MakeRipple(UnityEngine.Vector3,UnityEngine.Transform,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RippleControl_MakeRipple_m2E2C40D22569657BA46D6169D837CFB9422AAB1B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, int32_t ___2_size, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentRipple = GameObject.Instantiate (ripplePrefab) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___ripplePrefab_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1), (void*)L_1);
		// Canvas parentCanvas = parent.GetComponentInParent<Canvas> ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___1_parent;
		NullCheck(L_2);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(L_2, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		// if (parentCanvas.renderMode == RenderMode.ScreenSpaceOverlay)
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_3, NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// currentRipple.GetComponent<RectTransform>().position = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_5, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_position;
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_7, NULL);
		goto IL_003e;
	}

IL_002e:
	{
		// currentRipple.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_position;
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_10, NULL);
	}

IL_003e:
	{
		// currentRipple.transform.SetParent (parent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___1_parent;
		NullCheck(L_12);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_12, L_13, NULL);
		// currentRipple.GetComponent<RectTransform> ().localRotation = new Quaternion (0f, 0f, 0f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15;
		L_15 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_14, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_16), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_15, L_16, NULL);
		// currentRipple.GetComponent<RippleAnim> ().MakeRipple (size, 6f, 0.5f, 0.3f, color, new Vector3 (0, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_17);
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_18;
		L_18 = GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D(L_17, GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D_RuntimeMethod_var);
		int32_t L_19 = ___2_size;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___3_color;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		RippleAnim_MakeRipple_m40EEDF4CB5B03421F07036A1563DE4EEBC56F263(L_18, L_19, (6.0f), (0.5f), (0.300000012f), L_20, L_21, NULL);
		// return currentRipple;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		return L_22;
	}
}
// UnityEngine.GameObject MaterialUI.RippleControl::MakeRipple(UnityEngine.Vector3,UnityEngine.Transform,System.Int32,System.Single,System.Single,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RippleControl_MakeRipple_m489D70458E76126AACEA99C297DF960D933B475E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, int32_t ___2_size, float ___3_animSpeed, float ___4_startAlpha, float ___5_endAlpha, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___6_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentRipple = GameObject.Instantiate (ripplePrefab) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___ripplePrefab_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1), (void*)L_1);
		// Canvas parentCanvas = parent.GetComponentInParent<Canvas> ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___1_parent;
		NullCheck(L_2);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(L_2, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		// if (parentCanvas.renderMode == RenderMode.ScreenSpaceOverlay)
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_3, NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// currentRipple.GetComponent<RectTransform>().position = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_5, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_position;
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_7, NULL);
		goto IL_003e;
	}

IL_002e:
	{
		// currentRipple.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_position;
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_10, NULL);
	}

IL_003e:
	{
		// currentRipple.transform.SetParent (parent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___1_parent;
		NullCheck(L_12);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_12, L_13, NULL);
		// currentRipple.GetComponent<RectTransform> ().localRotation = new Quaternion (0f, 0f, 0f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15;
		L_15 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_14, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_16), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_15, L_16, NULL);
		// currentRipple.GetComponent<RippleAnim> ().MakeRipple (size, animSpeed, startAlpha, endAlpha, color, new Vector3 (0, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_17);
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_18;
		L_18 = GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D(L_17, GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D_RuntimeMethod_var);
		int32_t L_19 = ___2_size;
		float L_20 = ___3_animSpeed;
		float L_21 = ___4_startAlpha;
		float L_22 = ___5_endAlpha;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___6_color;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		RippleAnim_MakeRipple_m40EEDF4CB5B03421F07036A1563DE4EEBC56F263(L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		// return currentRipple;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		return L_25;
	}
}
// UnityEngine.GameObject MaterialUI.RippleControl::MakeRipple(UnityEngine.Vector3,UnityEngine.Transform,System.Int32,System.Single,System.Single,System.Single,UnityEngine.Color,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RippleControl_MakeRipple_m4083D244D0806FEDA3C433DDA78800869B5F94B5 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, int32_t ___2_size, float ___3_animSpeed, float ___4_startAlpha, float ___5_endAlpha, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___6_color, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_endPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentRipple = GameObject.Instantiate (ripplePrefab) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___ripplePrefab_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1), (void*)L_1);
		// Canvas parentCanvas = parent.GetComponentInParent<Canvas> ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___1_parent;
		NullCheck(L_2);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(L_2, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		// if (parentCanvas.renderMode == RenderMode.ScreenSpaceOverlay)
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_3, NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// currentRipple.GetComponent<RectTransform>().position = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_5, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_position;
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_7, NULL);
		goto IL_003e;
	}

IL_002e:
	{
		// currentRipple.transform.localPosition = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_position;
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_10, NULL);
	}

IL_003e:
	{
		// currentRipple.transform.SetParent (parent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___1_parent;
		NullCheck(L_12);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_12, L_13, NULL);
		// currentRipple.GetComponent<RectTransform> ().localRotation = new Quaternion (0f, 0f, 0f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15;
		L_15 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_14, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_16), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_15, L_16, NULL);
		// currentRipple.GetComponent<RippleAnim> ().MakeRipple (size, animSpeed, startAlpha, endAlpha, color, endPosition);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		NullCheck(L_17);
		RippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92* L_18;
		L_18 = GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D(L_17, GameObject_GetComponent_TisRippleAnim_tD06AFA68EB752C610C60997698E55B4D0131ED92_mAEB6766EC926EEDDBD82EE876FF6D24F3AD3165D_RuntimeMethod_var);
		int32_t L_19 = ___2_size;
		float L_20 = ___3_animSpeed;
		float L_21 = ___4_startAlpha;
		float L_22 = ___5_endAlpha;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___6_color;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___7_endPosition;
		NullCheck(L_18);
		RippleAnim_MakeRipple_m40EEDF4CB5B03421F07036A1563DE4EEBC56F263(L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		// return currentRipple;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = ((RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_StaticFields*)il2cpp_codegen_static_fields_for(RippleControl_t7BD70B42E6E3D91F59ACD6253C0A113E78588C37_il2cpp_TypeInfo_var))->___currentRipple_1;
		return L_25;
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
// System.Void MaterialUI.ScreenConfig::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenConfig_Awake_mA9D3E633D1C477024AE7D7F2E293E416B0D0A5EB (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theRectTransform = screenSpace.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___screenSpace_30;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___theRectTransform_23 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theRectTransform_23), (void*)L_1);
		// theCanvasGroup = screenSpace.GetComponent<CanvasGroup>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___screenSpace_30;
		NullCheck(L_2);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_3;
		L_3 = GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD(L_2, GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		__this->___theCanvasGroup_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theCanvasGroup_24), (void*)L_3);
		// screenDimensions = new Vector2(Screen.width, Screen.height);
		int32_t L_4;
		L_4 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)L_4), ((float)L_5), /*hidden argument*/NULL);
		__this->___screenDimensions_27 = L_6;
		// }
		return;
	}
}
// System.Void MaterialUI.ScreenConfig::ShowWithoutTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenConfig_ShowWithoutTransition_mE5E039798FA03CEDF6BAE12C9C21575717E7EACB (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* __this, const RuntimeMethod* method) 
{
	{
		// screenSpace.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___screenSpace_30;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.ScreenConfig::Show(MaterialUI.ScreenConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenConfig_Show_m05EA512A4DBA46CC878866CAE8626E2BE8712EBF (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* __this, ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* ___0_screenToHide, const RuntimeMethod* method) 
{
	{
		// hideScreen = screenToHide;
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_0 = ___0_screenToHide;
		__this->___hideScreen_35 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hideScreen_35), (void*)L_0);
		// Show();
		ScreenConfig_Show_mCF57507B642E8DF53BFFE75D8FED54EF2D7D83BA(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.ScreenConfig::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenConfig_Show_mCF57507B642E8DF53BFFE75D8FED54EF2D7D83BA (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (transitionInType == TransitionType.RippleMask)
		int32_t L_0 = __this->___transitionInType_5;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_00eb;
		}
	}
	{
		// currentRipple.position = Input.mousePosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___currentRipple_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// thisScreenSize = new Vector2(theRectTransform.rect.width, theRectTransform.rect.height);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___theRectTransform_23;
		NullCheck(L_3);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_3, NULL);
		V_0 = L_4;
		float L_5;
		L_5 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___theRectTransform_23;
		NullCheck(L_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_6, NULL);
		V_0 = L_7;
		float L_8;
		L_8 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), L_5, L_8, /*hidden argument*/NULL);
		__this->___thisScreenSize_34 = L_9;
		// theRectTransform.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_11, NULL);
		// theRectTransform.localScale = new Vector3(1f, 1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___theRectTransform_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_13, NULL);
		// theCanvasGroup.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_14 = __this->___theCanvasGroup_24;
		NullCheck(L_14);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_14, (1.0f), NULL);
		// screenSpacePosition = theRectTransform.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___theRectTransform_23;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_16, NULL);
		__this->___screenSpacePosition_32 = L_17;
		// theRectTransform.SetParent(currentRipple.transform);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->___theRectTransform_23;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = __this->___currentRipple_31;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_18);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_18, L_20, NULL);
		// theRectTransform.position = screenSpacePosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = __this->___screenSpacePosition_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_22, NULL);
		NullCheck(L_21);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_21, L_23, NULL);
		// rippleSize = screenDimensions.x + screenDimensions.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_24 = (&__this->___screenDimensions_27);
		float L_25 = L_24->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = (&__this->___screenDimensions_27);
		float L_27 = L_26->___y_1;
		__this->___rippleSize_33 = ((float)il2cpp_codegen_add(L_25, L_27));
	}

IL_00eb:
	{
		// if (slideIn == SlideDirection.None)
		int32_t L_28 = __this->___slideIn_7;
		if (L_28)
		{
			goto IL_010d;
		}
	}
	{
		// slideInDirectionPosition = new Vector2(0f, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_29), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___slideInDirectionPosition_25 = L_29;
		goto IL_01c0;
	}

IL_010d:
	{
		// else if (slideIn == SlideDirection.Top)
		int32_t L_30 = __this->___slideIn_7;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_013c;
		}
	}
	{
		// slideInDirectionPosition = new Vector2(0f, screenDimensions.y * 1.25f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&__this->___screenDimensions_27);
		float L_32 = L_31->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_33), (0.0f), ((float)il2cpp_codegen_multiply(L_32, (1.25f))), /*hidden argument*/NULL);
		__this->___slideInDirectionPosition_25 = L_33;
		goto IL_01c0;
	}

IL_013c:
	{
		// else if (slideIn == SlideDirection.Left)
		int32_t L_34 = __this->___slideIn_7;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_0169;
		}
	}
	{
		// slideInDirectionPosition = new Vector2(-screenDimensions.x * 1.25f, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = (&__this->___screenDimensions_27);
		float L_36 = L_35->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_37), ((float)il2cpp_codegen_multiply(((-L_36)), (1.25f))), (0.0f), /*hidden argument*/NULL);
		__this->___slideInDirectionPosition_25 = L_37;
		goto IL_01c0;
	}

IL_0169:
	{
		// else if (slideIn == SlideDirection.Bottom)
		int32_t L_38 = __this->___slideIn_7;
		if ((!(((uint32_t)L_38) == ((uint32_t)3))))
		{
			goto IL_0196;
		}
	}
	{
		// slideInDirectionPosition = new Vector2(0f, -screenDimensions.y * 1.25f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_39 = (&__this->___screenDimensions_27);
		float L_40 = L_39->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), (0.0f), ((float)il2cpp_codegen_multiply(((-L_40)), (1.25f))), /*hidden argument*/NULL);
		__this->___slideInDirectionPosition_25 = L_41;
		goto IL_01c0;
	}

IL_0196:
	{
		// else if (slideIn == SlideDirection.Right)
		int32_t L_42 = __this->___slideIn_7;
		if ((!(((uint32_t)L_42) == ((uint32_t)4))))
		{
			goto IL_01c0;
		}
	}
	{
		// slideInDirectionPosition = new Vector2(screenDimensions.x * 1.25f, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&__this->___screenDimensions_27);
		float L_44 = L_43->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_45), ((float)il2cpp_codegen_multiply(L_44, (1.25f))), (0.0f), /*hidden argument*/NULL);
		__this->___slideInDirectionPosition_25 = L_45;
	}

IL_01c0:
	{
		// screenSpace.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___screenSpace_30;
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)1, NULL);
		// animStartTime = Time.realtimeSinceStartup;
		float L_47;
		L_47 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_20 = L_47;
		// state = 1;
		__this->___state_19 = 1;
		// }
		return;
	}
}
// System.Void MaterialUI.ScreenConfig::HideWithoutTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenConfig_HideWithoutTransition_m2E716058A6C8B22B07E08AF9B91CB56F63337A13 (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* __this, const RuntimeMethod* method) 
{
	{
		// screenSpace.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___screenSpace_30;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.ScreenConfig::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenConfig_Hide_m956BD9B13BBF9E4897043AC7DE2DFAC67246B109 (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (transitionOutType == TransitionType.RippleMask)
		int32_t L_0 = __this->___transitionOutType_6;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_00cd;
		}
	}
	{
		// thisScreenSize = new Vector2(theRectTransform.rect.width, theRectTransform.rect.height);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___theRectTransform_23;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___theRectTransform_23;
		NullCheck(L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_4, NULL);
		V_0 = L_5;
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_3, L_6, /*hidden argument*/NULL);
		__this->___thisScreenSize_34 = L_7;
		// currentRipple.position = Input.mousePosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___currentRipple_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// rippleSize = screenDimensions.x + screenDimensions.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___screenDimensions_27);
		float L_11 = L_10->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___screenDimensions_27);
		float L_13 = L_12->___y_1;
		__this->___rippleSize_33 = ((float)il2cpp_codegen_add(L_11, L_13));
		// currentRipple.sizeDelta = new Vector2(rippleSize, rippleSize);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___currentRipple_31;
		float L_15 = __this->___rippleSize_33;
		float L_16 = __this->___rippleSize_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_14, L_17, NULL);
		// screenSpacePosition = theRectTransform.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->___theRectTransform_23;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_19, NULL);
		__this->___screenSpacePosition_32 = L_20;
		// theRectTransform.SetParent(currentRipple.transform);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = __this->___theRectTransform_23;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = __this->___currentRipple_31;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_21);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_21, L_23, NULL);
		// theRectTransform.position = screenSpacePosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = __this->___screenSpacePosition_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_25, NULL);
		NullCheck(L_24);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_26, NULL);
		goto IL_01a2;
	}

IL_00cd:
	{
		// if (slideOut == SlideDirection.None)
		int32_t L_27 = __this->___slideOut_13;
		if (L_27)
		{
			goto IL_00ef;
		}
	}
	{
		// slideOutDirectionPosition = new Vector2(0f, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___slideOutDirectionPosition_26 = L_28;
		goto IL_01a2;
	}

IL_00ef:
	{
		// else if (slideOut == SlideDirection.Top)
		int32_t L_29 = __this->___slideOut_13;
		if ((!(((uint32_t)L_29) == ((uint32_t)1))))
		{
			goto IL_011e;
		}
	}
	{
		// slideOutDirectionPosition = new Vector2(0f, screenDimensions.y*1.25f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = (&__this->___screenDimensions_27);
		float L_31 = L_30->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_32), (0.0f), ((float)il2cpp_codegen_multiply(L_31, (1.25f))), /*hidden argument*/NULL);
		__this->___slideOutDirectionPosition_26 = L_32;
		goto IL_01a2;
	}

IL_011e:
	{
		// else if (slideOut == SlideDirection.Left)
		int32_t L_33 = __this->___slideOut_13;
		if ((!(((uint32_t)L_33) == ((uint32_t)2))))
		{
			goto IL_014b;
		}
	}
	{
		// slideOutDirectionPosition = new Vector2(-screenDimensions.x*1.25f, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_34 = (&__this->___screenDimensions_27);
		float L_35 = L_34->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_36), ((float)il2cpp_codegen_multiply(((-L_35)), (1.25f))), (0.0f), /*hidden argument*/NULL);
		__this->___slideOutDirectionPosition_26 = L_36;
		goto IL_01a2;
	}

IL_014b:
	{
		// else if (slideOut == SlideDirection.Bottom)
		int32_t L_37 = __this->___slideOut_13;
		if ((!(((uint32_t)L_37) == ((uint32_t)3))))
		{
			goto IL_0178;
		}
	}
	{
		// slideOutDirectionPosition = new Vector2(0f, -screenDimensions.y*1.25f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_38 = (&__this->___screenDimensions_27);
		float L_39 = L_38->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), (0.0f), ((float)il2cpp_codegen_multiply(((-L_39)), (1.25f))), /*hidden argument*/NULL);
		__this->___slideOutDirectionPosition_26 = L_40;
		goto IL_01a2;
	}

IL_0178:
	{
		// else if (slideOut == SlideDirection.Right)
		int32_t L_41 = __this->___slideOut_13;
		if ((!(((uint32_t)L_41) == ((uint32_t)4))))
		{
			goto IL_01a2;
		}
	}
	{
		// slideOutDirectionPosition = new Vector2(screenDimensions.x*1.25f, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_42 = (&__this->___screenDimensions_27);
		float L_43 = L_42->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), ((float)il2cpp_codegen_multiply(L_43, (1.25f))), (0.0f), /*hidden argument*/NULL);
		__this->___slideOutDirectionPosition_26 = L_44;
	}

IL_01a2:
	{
		// animStartTime = Time.realtimeSinceStartup;
		float L_45;
		L_45 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_20 = L_45;
		// state = 2;
		__this->___state_19 = 2;
		// }
		return;
	}
}
// System.Void MaterialUI.ScreenConfig::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenConfig_Update_m57D014C7BD2073614C68D9FC6212EDF413F4BEB6 (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = __this->___animStartTime_20;
		__this->___animDeltaTime_21 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (state == 1)
		int32_t L_2 = __this->___state_19;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_02ec;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_3 = __this->___animDeltaTime_21;
		float L_4 = __this->___animationDuration_22;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_01f6;
		}
	}
	{
		// if (transitionInType == TransitionType.RippleMask)
		int32_t L_5 = __this->___transitionInType_5;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_00c9;
		}
	}
	{
		// tempVector2 = currentRipple.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___currentRipple_31;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_6, NULL);
		__this->___tempVector2_28 = L_7;
		// tempVector2.x = Anim.Quint.In(0f, rippleSize, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___tempVector2_28);
		float L_9 = __this->___rippleSize_33;
		float L_10 = __this->___animDeltaTime_21;
		float L_11 = __this->___animationDuration_22;
		float L_12;
		L_12 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460((0.0f), L_9, L_10, L_11, NULL);
		L_8->___x_0 = L_12;
		// tempVector2.y = tempVector2.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___tempVector2_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___tempVector2_28);
		float L_15 = L_14->___x_0;
		L_13->___y_1 = L_15;
		// currentRipple.sizeDelta = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___currentRipple_31;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = __this->___tempVector2_28;
		NullCheck(L_16);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_16, L_17, NULL);
		// theRectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, thisScreenSize.x);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&__this->___thisScreenSize_34);
		float L_20 = L_19->___x_0;
		NullCheck(L_18);
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_18, 0, L_20, NULL);
		// theRectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, thisScreenSize.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___thisScreenSize_34);
		float L_23 = L_22->___y_1;
		NullCheck(L_21);
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_21, 1, L_23, NULL);
		return;
	}

IL_00c9:
	{
		// if (slideIn != SlideDirection.None)
		int32_t L_24 = __this->___slideIn_7;
		if (!L_24)
		{
			goto IL_014b;
		}
	}
	{
		// tempVector2 = theRectTransform.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25 = __this->___theRectTransform_23;
		NullCheck(L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_25, NULL);
		__this->___tempVector2_28 = L_26;
		// tempVector2.x = Anim.Quint.Out(slideInDirectionPosition.x, 0f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_27 = (&__this->___tempVector2_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (&__this->___slideInDirectionPosition_25);
		float L_29 = L_28->___x_0;
		float L_30 = __this->___animDeltaTime_21;
		float L_31 = __this->___animationDuration_22;
		float L_32;
		L_32 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_29, (0.0f), L_30, L_31, NULL);
		L_27->___x_0 = L_32;
		// tempVector2.y = Anim.Quint.Out(slideInDirectionPosition.y, 0f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->___tempVector2_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_34 = (&__this->___slideInDirectionPosition_25);
		float L_35 = L_34->___y_1;
		float L_36 = __this->___animDeltaTime_21;
		float L_37 = __this->___animationDuration_22;
		float L_38;
		L_38 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_35, (0.0f), L_36, L_37, NULL);
		L_33->___y_1 = L_38;
		// theRectTransform.anchoredPosition = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_39 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = __this->___tempVector2_28;
		NullCheck(L_39);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_39, L_40, NULL);
	}

IL_014b:
	{
		// if (scaleIn)
		bool L_41 = __this->___scaleIn_9;
		if (!L_41)
		{
			goto IL_01c3;
		}
	}
	{
		// tempVector3 = theRectTransform.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42 = __this->___theRectTransform_23;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_42, NULL);
		__this->___tempVector3_29 = L_43;
		// tempVector3.x = Anim.Quint.Out(scaleInStartValue, 1f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (&__this->___tempVector3_29);
		float L_45 = __this->___scaleInStartValue_10;
		float L_46 = __this->___animDeltaTime_21;
		float L_47 = __this->___animationDuration_22;
		float L_48;
		L_48 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_45, (1.0f), L_46, L_47, NULL);
		L_44->___x_2 = L_48;
		// tempVector3.y = Anim.Quint.Out(scaleInStartValue, 1f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = (&__this->___tempVector3_29);
		float L_50 = __this->___scaleInStartValue_10;
		float L_51 = __this->___animDeltaTime_21;
		float L_52 = __this->___animationDuration_22;
		float L_53;
		L_53 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_50, (1.0f), L_51, L_52, NULL);
		L_49->___y_3 = L_53;
		// theRectTransform.localScale = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_54 = __this->___theRectTransform_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = __this->___tempVector3_29;
		NullCheck(L_54);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_54, L_55, NULL);
	}

IL_01c3:
	{
		// if (fadeIn)
		bool L_56 = __this->___fadeIn_11;
		if (!L_56)
		{
			goto IL_0507;
		}
	}
	{
		// theCanvasGroup.alpha = Anim.Quint.Out(fadeInStartValue, 1f, animDeltaTime, animationDuration);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_57 = __this->___theCanvasGroup_24;
		float L_58 = __this->___fadeInStartValue_12;
		float L_59 = __this->___animDeltaTime_21;
		float L_60 = __this->___animationDuration_22;
		float L_61;
		L_61 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_58, (1.0f), L_59, L_60, NULL);
		NullCheck(L_57);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_57, L_61, NULL);
		return;
	}

IL_01f6:
	{
		// if (transitionInType == TransitionType.RippleMask)
		int32_t L_62 = __this->___transitionInType_5;
		if ((!(((uint32_t)L_62) == ((uint32_t)1))))
		{
			goto IL_0256;
		}
	}
	{
		// theRectTransform.SetParent(transform);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_63 = __this->___theRectTransform_23;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_63);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_63, L_64, NULL);
		// theRectTransform.position = screenSpacePosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_65 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = __this->___screenSpacePosition_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_66, NULL);
		NullCheck(L_65);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_65, L_67, NULL);
		// theRectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, thisScreenSize.x);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_68 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_69 = (&__this->___thisScreenSize_34);
		float L_70 = L_69->___x_0;
		NullCheck(L_68);
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_68, 0, L_70, NULL);
		// theRectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, thisScreenSize.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_71 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_72 = (&__this->___thisScreenSize_34);
		float L_73 = L_72->___y_1;
		NullCheck(L_71);
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_71, 1, L_73, NULL);
		goto IL_02b7;
	}

IL_0256:
	{
		// if (slideIn != SlideDirection.None)
		int32_t L_74 = __this->___slideIn_7;
		if (!L_74)
		{
			goto IL_0278;
		}
	}
	{
		// theRectTransform.anchoredPosition = new Vector2(0f, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_75 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_76), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_75);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_75, L_76, NULL);
	}

IL_0278:
	{
		// if (scaleIn)
		bool L_77 = __this->___scaleIn_9;
		if (!L_77)
		{
			goto IL_029f;
		}
	}
	{
		// theRectTransform.localScale = new Vector3(1f, 1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_78 = __this->___theRectTransform_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_79), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_78);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_78, L_79, NULL);
	}

IL_029f:
	{
		// if (fadeIn)
		bool L_80 = __this->___fadeIn_11;
		if (!L_80)
		{
			goto IL_02b7;
		}
	}
	{
		// theCanvasGroup.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_81 = __this->___theCanvasGroup_24;
		NullCheck(L_81);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_81, (1.0f), NULL);
	}

IL_02b7:
	{
		// if (hideScreen && hideScreen != this)
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_82 = __this->___hideScreen_35;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_83;
		L_83 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_82, NULL);
		if (!L_83)
		{
			goto IL_02e4;
		}
	}
	{
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_84 = __this->___hideScreen_35;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_85;
		L_85 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_84, __this, NULL);
		if (!L_85)
		{
			goto IL_02e4;
		}
	}
	{
		// hideScreen.HideWithoutTransition();
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_86 = __this->___hideScreen_35;
		NullCheck(L_86);
		ScreenConfig_HideWithoutTransition_m2E716058A6C8B22B07E08AF9B91CB56F63337A13(L_86, NULL);
		// hideScreen = null;
		__this->___hideScreen_35 = (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hideScreen_35), (void*)(ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4*)NULL);
	}

IL_02e4:
	{
		// state = 0;
		__this->___state_19 = 0;
		return;
	}

IL_02ec:
	{
		// else if (state == 2)
		int32_t L_87 = __this->___state_19;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_0507;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_88 = __this->___animDeltaTime_21;
		float L_89 = __this->___animationDuration_22;
		if ((!(((float)L_88) <= ((float)L_89))))
		{
			goto IL_04cd;
		}
	}
	{
		// if (transitionInType == TransitionType.RippleMask)
		int32_t L_90 = __this->___transitionInType_5;
		if ((!(((uint32_t)L_90) == ((uint32_t)1))))
		{
			goto IL_03a3;
		}
	}
	{
		// tempVector2 = currentRipple.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_91 = __this->___currentRipple_31;
		NullCheck(L_91);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92;
		L_92 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_91, NULL);
		__this->___tempVector2_28 = L_92;
		// tempVector2.x = Anim.Quint.In(rippleSize, 0f, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_93 = (&__this->___tempVector2_28);
		float L_94 = __this->___rippleSize_33;
		float L_95 = __this->___animDeltaTime_21;
		float L_96 = __this->___animationDuration_22;
		float L_97;
		L_97 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_94, (0.0f), L_95, L_96, NULL);
		L_93->___x_0 = L_97;
		// tempVector2.y = tempVector2.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_98 = (&__this->___tempVector2_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_99 = (&__this->___tempVector2_28);
		float L_100 = L_99->___x_0;
		L_98->___y_1 = L_100;
		// currentRipple.sizeDelta = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_101 = __this->___currentRipple_31;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = __this->___tempVector2_28;
		NullCheck(L_101);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_101, L_102, NULL);
		// theRectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, thisScreenSize.x);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_103 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_104 = (&__this->___thisScreenSize_34);
		float L_105 = L_104->___x_0;
		NullCheck(L_103);
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_103, 0, L_105, NULL);
		// theRectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, thisScreenSize.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_106 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_107 = (&__this->___thisScreenSize_34);
		float L_108 = L_107->___y_1;
		NullCheck(L_106);
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_106, 1, L_108, NULL);
		return;
	}

IL_03a3:
	{
		// if (slideOut != SlideDirection.None)
		int32_t L_109 = __this->___slideOut_13;
		if (!L_109)
		{
			goto IL_0425;
		}
	}
	{
		// tempVector2 = theRectTransform.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_110 = __this->___theRectTransform_23;
		NullCheck(L_110);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_111;
		L_111 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_110, NULL);
		__this->___tempVector2_28 = L_111;
		// tempVector2.x = Anim.Quint.Out(0f, slideOutDirectionPosition.x, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_112 = (&__this->___tempVector2_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_113 = (&__this->___slideOutDirectionPosition_26);
		float L_114 = L_113->___x_0;
		float L_115 = __this->___animDeltaTime_21;
		float L_116 = __this->___animationDuration_22;
		float L_117;
		L_117 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((0.0f), L_114, L_115, L_116, NULL);
		L_112->___x_0 = L_117;
		// tempVector2.y = Anim.Quint.Out(0f, slideOutDirectionPosition.y, animDeltaTime, animationDuration);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_118 = (&__this->___tempVector2_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_119 = (&__this->___slideOutDirectionPosition_26);
		float L_120 = L_119->___y_1;
		float L_121 = __this->___animDeltaTime_21;
		float L_122 = __this->___animationDuration_22;
		float L_123;
		L_123 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((0.0f), L_120, L_121, L_122, NULL);
		L_118->___y_1 = L_123;
		// theRectTransform.anchoredPosition = tempVector2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_124 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_125 = __this->___tempVector2_28;
		NullCheck(L_124);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_124, L_125, NULL);
	}

IL_0425:
	{
		// if (scaleOut)
		bool L_126 = __this->___scaleOut_15;
		if (!L_126)
		{
			goto IL_049d;
		}
	}
	{
		// tempVector3 = theRectTransform.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_127 = __this->___theRectTransform_23;
		NullCheck(L_127);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_127, NULL);
		__this->___tempVector3_29 = L_128;
		// tempVector3.x = Anim.Quint.Out(1f, scaleOutEndValue, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_129 = (&__this->___tempVector3_29);
		float L_130 = __this->___scaleOutEndValue_16;
		float L_131 = __this->___animDeltaTime_21;
		float L_132 = __this->___animationDuration_22;
		float L_133;
		L_133 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((1.0f), L_130, L_131, L_132, NULL);
		L_129->___x_2 = L_133;
		// tempVector3.y = Anim.Quint.Out(1f, scaleOutEndValue, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_134 = (&__this->___tempVector3_29);
		float L_135 = __this->___scaleOutEndValue_16;
		float L_136 = __this->___animDeltaTime_21;
		float L_137 = __this->___animationDuration_22;
		float L_138;
		L_138 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((1.0f), L_135, L_136, L_137, NULL);
		L_134->___y_3 = L_138;
		// theRectTransform.localScale = tempVector3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_139 = __this->___theRectTransform_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140 = __this->___tempVector3_29;
		NullCheck(L_139);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_139, L_140, NULL);
	}

IL_049d:
	{
		// if (fadeOut)
		bool L_141 = __this->___fadeOut_17;
		if (!L_141)
		{
			goto IL_0507;
		}
	}
	{
		// theCanvasGroup.alpha = Anim.Quint.Out(1f, fadeOutEndValue, animDeltaTime, animationDuration);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_142 = __this->___theCanvasGroup_24;
		float L_143 = __this->___fadeOutEndValue_18;
		float L_144 = __this->___animDeltaTime_21;
		float L_145 = __this->___animationDuration_22;
		float L_146;
		L_146 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((1.0f), L_143, L_144, L_145, NULL);
		NullCheck(L_142);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_142, L_146, NULL);
		return;
	}

IL_04cd:
	{
		// theRectTransform.SetParent(transform);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_147 = __this->___theRectTransform_23;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_148;
		L_148 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_147);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_147, L_148, NULL);
		// theRectTransform.position = screenSpacePosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_149 = __this->___theRectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_150 = __this->___screenSpacePosition_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_150, NULL);
		NullCheck(L_149);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_149, L_151, NULL);
		// screenSpace.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_152 = __this->___screenSpace_30;
		NullCheck(L_152);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_152, (bool)0, NULL);
		// state = 0;
		__this->___state_19 = 0;
	}

IL_0507:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.ScreenConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenConfig__ctor_m8AF01C6BCD38DECDB8B088A49AF9799C2152B4D6 (ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* __this, const RuntimeMethod* method) 
{
	{
		// public SlideDirection slideIn = SlideDirection.Bottom;
		__this->___slideIn_7 = 3;
		// public float slideInPercent = 25f;
		__this->___slideInPercent_8 = (25.0f);
		// public bool scaleIn = true;
		__this->___scaleIn_9 = (bool)1;
		// public float scaleInStartValue = 0.75f;
		__this->___scaleInStartValue_10 = (0.75f);
		// public bool fadeIn = true;
		__this->___fadeIn_11 = (bool)1;
		// public SlideDirection slideOut = SlideDirection.Bottom;
		__this->___slideOut_13 = 3;
		// public float slideOutPercent = 25f;
		__this->___slideOutPercent_14 = (25.0f);
		// public bool scaleOut = true;
		__this->___scaleOut_15 = (bool)1;
		// public float scaleOutEndValue = 0.75f;
		__this->___scaleOutEndValue_16 = (0.75f);
		// public bool fadeOut = true;
		__this->___fadeOut_17 = (bool)1;
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
// System.Void MaterialUI.ScreenManager::Set(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenManager_Set_m4BDD53D07F550ED8BBB1800B6B6EEB0BB0D0A1CF (ScreenManager_t544AF9CFFA29D3188AE8C163B60758400B1A4EC7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// screens[index].transform.SetAsLastSibling();
		ScreenConfigU5BU5D_t9A87D4088C46E27940AA22DF56870EE6DFAD3FC2* L_0 = __this->___screens_4;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_4, NULL);
		// screens[index].Show(currentScreen);
		ScreenConfigU5BU5D_t9A87D4088C46E27940AA22DF56870EE6DFAD3FC2* L_5 = __this->___screens_4;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_9 = __this->___currentScreen_5;
		NullCheck(L_8);
		ScreenConfig_Show_m05EA512A4DBA46CC878866CAE8626E2BE8712EBF(L_8, L_9, NULL);
		// lastScreen = currentScreen;
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_10 = __this->___currentScreen_5;
		__this->___lastScreen_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastScreen_6), (void*)L_10);
		// currentScreen = screens[index];
		ScreenConfigU5BU5D_t9A87D4088C46E27940AA22DF56870EE6DFAD3FC2* L_11 = __this->___screens_4;
		int32_t L_12 = ___0_index;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		__this->___currentScreen_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentScreen_5), (void*)L_14);
		// }
		return;
	}
}
// System.Void MaterialUI.ScreenManager::Set(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenManager_Set_mBE8E7A6C86C88568DF2D647100561164EBCB86C7 (ScreenManager_t544AF9CFFA29D3188AE8C163B60758400B1A4EC7* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < screens.Length; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// if (screens[i].screenName == name)
		ScreenConfigU5BU5D_t9A87D4088C46E27940AA22DF56870EE6DFAD3FC2* L_0 = __this->___screens_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		String_t* L_4 = L_3->___screenName_4;
		String_t* L_5 = ___0_name;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		// Set(i);
		int32_t L_7 = V_0;
		ScreenManager_Set_m4BDD53D07F550ED8BBB1800B6B6EEB0BB0D0A1CF(__this, L_7, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// for (int i = 0; i < screens.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < screens.Length; i++)
		int32_t L_9 = V_0;
		ScreenConfigU5BU5D_t9A87D4088C46E27940AA22DF56870EE6DFAD3FC2* L_10 = __this->___screens_4;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MaterialUI.ScreenManager::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenManager_Back_m8BFF4E32C64704A90B43133139E726BD0A05720D (ScreenManager_t544AF9CFFA29D3188AE8C163B60758400B1A4EC7* __this, const RuntimeMethod* method) 
{
	ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* V_0 = NULL;
	{
		// lastScreen.ShowWithoutTransition();
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_0 = __this->___lastScreen_6;
		NullCheck(L_0);
		ScreenConfig_ShowWithoutTransition_mE5E039798FA03CEDF6BAE12C9C21575717E7EACB(L_0, NULL);
		// currentScreen.Hide();
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_1 = __this->___currentScreen_5;
		NullCheck(L_1);
		ScreenConfig_Hide_m956BD9B13BBF9E4897043AC7DE2DFAC67246B109(L_1, NULL);
		// ScreenConfig temp = currentScreen;
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_2 = __this->___currentScreen_5;
		V_0 = L_2;
		// currentScreen = lastScreen;
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_3 = __this->___lastScreen_6;
		__this->___currentScreen_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentScreen_5), (void*)L_3);
		// lastScreen = temp;
		ScreenConfig_t6C6972C1A227E4EABDAB3D743EB5937D873849B4* L_4 = V_0;
		__this->___lastScreen_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastScreen_6), (void*)L_4);
		// }
		return;
	}
}
// System.Void MaterialUI.ScreenManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenManager__ctor_m73E1AE9C43A4D13636F521F4B6ECFF4A797F12EC (ScreenManager_t544AF9CFFA29D3188AE8C163B60758400B1A4EC7* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.SelectionBoxConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxConfig_Start_m27AC4FAD03508335156BD79043CCA6465CA2E88F (SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A_mFF0B17F79C75B3DBC58A006081263B436C03965B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23A1CFA088EDBF9528EEE97D010A634CE87EA2AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisRect = gameObject.GetComponent<RectTransform> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___thisRect_46 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisRect_46), (void*)L_1);
		// thisImage = gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___thisImage_47 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisImage_47), (void*)L_3);
		// listCanvasGroup = listLayer.GetComponent<CanvasGroup> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___listLayer_28;
		NullCheck(L_4);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_5;
		L_5 = GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD(L_4, GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		__this->___listCanvasGroup_45 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listCanvasGroup_45), (void*)L_5);
		// scrollbarCanvasGroup = scrollbar.GetComponent<CanvasGroup> ();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___scrollbar_31;
		NullCheck(L_6);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_7;
		L_7 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(L_6, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->___scrollbarCanvasGroup_48 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scrollbarCanvasGroup_48), (void*)L_7);
		// shadowConfig = gameObject.GetComponent<ShadowConfig>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* L_9;
		L_9 = GameObject_GetComponent_TisShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A_mFF0B17F79C75B3DBC58A006081263B436C03965B(L_8, GameObject_GetComponent_TisShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A_mFF0B17F79C75B3DBC58A006081263B436C03965B_RuntimeMethod_var);
		__this->___shadowConfig_19 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shadowConfig_19), (void*)L_9);
		// listItemPrefab = Resources.Load ("SelectionListItem", typeof(GameObject)) as GameObject;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_12;
		L_12 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(_stringLiteral23A1CFA088EDBF9528EEE97D010A634CE87EA2AB, L_11, NULL);
		__this->___listItemPrefab_43 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_12, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listItemPrefab_43), (void*)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_12, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
		// Setup ();
		SelectionBoxConfig_Setup_mE4AFB4222721ACB807240234B36A917D1BCAFF9C(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.SelectionBoxConfig::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxConfig_Setup_mE4AFB4222721ACB807240234B36A917D1BCAFF9C (SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_m975EB99B90AB413CA715FFE07563605E0D4A215B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12_mC8DAF88588B8BC977DD61B4CF257C5B2B369F9BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* V_2 = NULL;
	{
		// contractedListColor = thisImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___thisImage_47;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		__this->___contractedListColor_16 = L_1;
		// normalColor = expandedListColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___expandedListColor_15;
		__this->___normalColor_55 = L_2;
		// contractedNormalShadow = shadowConfig.shadowNormalSize;
		ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* L_3 = __this->___shadowConfig_19;
		NullCheck(L_3);
		int32_t L_4 = L_3->___shadowNormalSize_5;
		__this->___contractedNormalShadow_20 = L_4;
		// contractedHoverShadow = shadowConfig.shadowActiveSize;
		ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* L_5 = __this->___shadowConfig_19;
		NullCheck(L_5);
		int32_t L_6 = L_5->___shadowActiveSize_6;
		__this->___contractedHoverShadow_21 = L_6;
		// if (textLine)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___textLine_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		// textLineAlpha = textLine.color.a;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___textLine_33;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_9);
		float L_11 = L_10.___a_3;
		__this->___textLineAlpha_34 = L_11;
	}

IL_0062:
	{
		// listItemObjects = new GameObject[listItems.Length];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = __this->___listItems_22;
		NullCheck(L_12);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)));
		__this->___listItemObjects_35 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listItemObjects_35), (void*)L_13);
		// for (int i = 0; i < listItems.Length; i++)
		V_1 = 0;
		goto IL_0263;
	}

IL_007c:
	{
		// listItem = Instantiate(listItemPrefab) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___listItemPrefab_43;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___listItem_44 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listItem_44), (void*)L_15);
		// listItemObjects[i] = listItem;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___listItemObjects_35;
		int32_t L_17 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___listItem_44;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_18);
		// listItem.transform.SetParent(listLayer.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___listItem_44;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___listLayer_28;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_20);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_20, L_22, NULL);
		// listItem.GetComponent<RectTransform>().localScale = new Vector3 (1f, 1f, 1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___listItem_44;
		NullCheck(L_23);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24;
		L_24 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_23, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_24, L_25, NULL);
		// listItem.transform.localPosition = new Vector3(listItem.transform.localPosition.x, listItem.transform.localPosition.y, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___listItem_44;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___listItem_44;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_29, NULL);
		float L_31 = L_30.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___listItem_44;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_33, NULL);
		float L_35 = L_34.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), L_31, L_35, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_27, L_36, NULL);
		// listItem.transform.localRotation = new Quaternion(0f, 0f, 0f, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___listItem_44;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_39), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_38, L_39, NULL);
		// listItem.GetComponentInChildren<Text>().text = listItems[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___listItem_44;
		NullCheck(L_40);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_41;
		L_41 = GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13(L_40, GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = __this->___listItems_22;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		String_t* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_41);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, L_45);
		// SelectionListItemConfig tempConfig = listItem.GetComponent<SelectionListItemConfig>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___listItem_44;
		NullCheck(L_46);
		SelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12* L_47;
		L_47 = GameObject_GetComponent_TisSelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12_mC8DAF88588B8BC977DD61B4CF257C5B2B369F9BC(L_46, GameObject_GetComponent_TisSelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12_mC8DAF88588B8BC977DD61B4CF257C5B2B369F9BC_RuntimeMethod_var);
		// tempConfig.listId = i;
		SelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12* L_48 = L_47;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		L_48->___listId_4 = L_49;
		// RippleConfig tempRippleConfig = tempConfig.GetComponent<RippleConfig>();
		NullCheck(L_48);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_50;
		L_50 = Component_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_m975EB99B90AB413CA715FFE07563605E0D4A215B(L_48, Component_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_m975EB99B90AB413CA715FFE07563605E0D4A215B_RuntimeMethod_var);
		V_2 = L_50;
		// if (rippleEnabled)
		bool L_51 = __this->___rippleEnabled_4;
		if (!L_51)
		{
			goto IL_01dc;
		}
	}
	{
		// tempRippleConfig.autoSize = false;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_52 = V_2;
		NullCheck(L_52);
		L_52->___autoSize_4 = (bool)0;
		// tempRippleConfig.rippleSize = rippleSize;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_53 = V_2;
		int32_t L_54 = __this->___rippleSize_5;
		NullCheck(L_53);
		L_53->___rippleSize_6 = L_54;
		// tempRippleConfig.rippleSpeed = rippleSpeed;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_55 = V_2;
		float L_56 = __this->___rippleSpeed_6;
		NullCheck(L_55);
		L_55->___rippleSpeed_7 = L_56;
		// tempRippleConfig.rippleColor = rippleColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_57 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58 = __this->___rippleColor_7;
		NullCheck(L_57);
		L_57->___rippleColor_8 = L_58;
		// tempRippleConfig.rippleStartAlpha = rippleStartAlpha;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_59 = V_2;
		float L_60 = __this->___rippleStartAlpha_8;
		NullCheck(L_59);
		L_59->___rippleStartAlpha_9 = L_60;
		// tempRippleConfig.rippleEndAlpha = rippleEndAlpha;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_61 = V_2;
		float L_62 = __this->___rippleEndAlpha_9;
		NullCheck(L_61);
		L_61->___rippleEndAlpha_10 = L_62;
		// tempRippleConfig.moveTowardCenter = moveTowardCenter;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_63 = V_2;
		bool L_64 = __this->___moveTowardCenter_11;
		NullCheck(L_63);
		L_63->___moveTowardCenter_14 = L_64;
		// tempRippleConfig.toggleMask = toggleMask;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_65 = V_2;
		bool L_66 = __this->___toggleMask_12;
		NullCheck(L_65);
		L_65->___toggleMask_15 = L_66;
		goto IL_0200;
	}

IL_01dc:
	{
		// tempRippleConfig.autoSize = false;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_67 = V_2;
		NullCheck(L_67);
		L_67->___autoSize_4 = (bool)0;
		// tempRippleConfig.rippleSize = 0;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_68 = V_2;
		NullCheck(L_68);
		L_68->___rippleSize_6 = 0;
		// tempRippleConfig.rippleStartAlpha = 0f;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_69 = V_2;
		NullCheck(L_69);
		L_69->___rippleStartAlpha_9 = (0.0f);
		// tempRippleConfig.rippleEndAlpha = 0f;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_70 = V_2;
		NullCheck(L_70);
		L_70->___rippleEndAlpha_10 = (0.0f);
	}

IL_0200:
	{
		// if (highlightWhen == HighlightActive.Never)
		int32_t L_71 = __this->___highlightWhen_10;
		if (L_71)
		{
			goto IL_0211;
		}
	}
	{
		// tempRippleConfig.highlightWhen = RippleConfig.HighlightActive.Never;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_72 = V_2;
		NullCheck(L_72);
		L_72->___highlightWhen_13 = 0;
		goto IL_0233;
	}

IL_0211:
	{
		// else if (highlightWhen == HighlightActive.Clicked)
		int32_t L_73 = __this->___highlightWhen_10;
		if ((!(((uint32_t)L_73) == ((uint32_t)2))))
		{
			goto IL_0223;
		}
	}
	{
		// tempRippleConfig.highlightWhen = RippleConfig.HighlightActive.Clicked;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_74 = V_2;
		NullCheck(L_74);
		L_74->___highlightWhen_13 = 2;
		goto IL_0233;
	}

IL_0223:
	{
		// else if (highlightWhen == HighlightActive.Hovered)
		int32_t L_75 = __this->___highlightWhen_10;
		if ((!(((uint32_t)L_75) == ((uint32_t)1))))
		{
			goto IL_0233;
		}
	}
	{
		// tempRippleConfig.highlightWhen = RippleConfig.HighlightActive.Hovered;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_76 = V_2;
		NullCheck(L_76);
		L_76->___highlightWhen_13 = 1;
	}

IL_0233:
	{
		// tempRippleConfig.Refresh();
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_77 = V_2;
		NullCheck(L_77);
		RippleConfig_Refresh_mC2281C7B12A553E8D9E774FFBF4DCF0F020A4AE5(L_77, NULL);
		// listItem.GetComponent<Image>().color = normalColor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = __this->___listItem_44;
		NullCheck(L_78);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_79;
		L_79 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_78, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_80 = __this->___normalColor_55;
		NullCheck(L_79);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_79, L_80);
		// listItem.GetComponent<SelectionListItemConfig>().Setup();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = __this->___listItem_44;
		NullCheck(L_81);
		SelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12* L_82;
		L_82 = GameObject_GetComponent_TisSelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12_mC8DAF88588B8BC977DD61B4CF257C5B2B369F9BC(L_81, GameObject_GetComponent_TisSelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12_mC8DAF88588B8BC977DD61B4CF257C5B2B369F9BC_RuntimeMethod_var);
		NullCheck(L_82);
		SelectionListItemConfig_Setup_m81E89F361586171F702ED14179CA34DBB6CF9C22(L_82, NULL);
		// for (int i = 0; i < listItems.Length; i++)
		int32_t L_83 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_0263:
	{
		// for (int i = 0; i < listItems.Length; i++)
		int32_t L_84 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = __this->___listItems_22;
		NullCheck(L_85);
		if ((((int32_t)L_84) < ((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)))))
		{
			goto IL_007c;
		}
	}
	{
		// highlightColor = rippleColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_86 = __this->___rippleColor_7;
		__this->___highlightColor_56 = L_86;
		// HSBColor highlightColorHSB = HSBColor.FromColor (highlightColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_87 = __this->___highlightColor_56;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_88;
		L_88 = HSBColor_FromColor_m70EF18BA22C46F43BD47ACC0D7976862A291D05A(L_87, NULL);
		V_0 = L_88;
		// if (highlightColorHSB.s <= 0.05f)
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_89 = V_0;
		float L_90 = L_89.___s_1;
		if ((!(((float)L_90) <= ((float)(0.0500000007f)))))
		{
			goto IL_02b0;
		}
	}
	{
		// highlightColorHSB.s = 0f;
		(&V_0)->___s_1 = (0.0f);
		// highlightColorHSB.b = 0.9f;
		(&V_0)->___b_2 = (0.899999976f);
		goto IL_02c8;
	}

IL_02b0:
	{
		// highlightColorHSB.s = 0.1f;
		(&V_0)->___s_1 = (0.100000001f);
		// highlightColorHSB.b = 1f;
		(&V_0)->___b_2 = (1.0f);
	}

IL_02c8:
	{
		// highlightColor = HSBColor.ToColor (highlightColorHSB);
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_91 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_92;
		L_92 = HSBColor_ToColor_mBF4D235881CF9E626E2DB5E2EE780798C4269607(L_91, NULL);
		__this->___highlightColor_56 = L_92;
		// highlightColor.a = 1f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_93 = (&__this->___highlightColor_56);
		L_93->___a_3 = (1.0f);
		// HSBColor normalColorHSB = HSBColor.FromColor (normalColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_94 = __this->___normalColor_55;
		HSBColor_tE2E487023A583D5F9828E547FE0D0273A751E06A L_95;
		L_95 = HSBColor_FromColor_m70EF18BA22C46F43BD47ACC0D7976862A291D05A(L_94, NULL);
		// if (normalColorHSB.b > 0.1f)
		float L_96 = L_95.___b_2;
		if ((!(((float)L_96) > ((float)(0.100000001f)))))
		{
			goto IL_0314;
		}
	}
	{
		// highlightColor *= normalColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_97 = __this->___highlightColor_56;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_98 = __this->___normalColor_55;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_99;
		L_99 = Color_op_Multiply_mD0296202733CB2D5342FB7C82B48AEDA63036758_inline(L_97, L_98, NULL);
		__this->___highlightColor_56 = L_99;
		goto IL_0324;
	}

IL_0314:
	{
		// highlightColor.a = 0.2f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_100 = (&__this->___highlightColor_56);
		L_100->___a_3 = (0.200000003f);
	}

IL_0324:
	{
		// originalHeight = thisRect.sizeDelta.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_101 = __this->___thisRect_46;
		NullCheck(L_101);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102;
		L_102 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_101, NULL);
		float L_103 = L_102.___y_1;
		__this->___originalHeight_49 = L_103;
		// originalPos = thisRect.anchoredPosition.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_104 = __this->___thisRect_46;
		NullCheck(L_104);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105;
		L_105 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_104, NULL);
		float L_106 = L_105.___y_1;
		__this->___originalPos_51 = L_106;
		// listLayer.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = __this->___listLayer_28;
		NullCheck(L_107);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_107, (bool)0, NULL);
		// listCanvasGroup.interactable = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_108 = __this->___listCanvasGroup_45;
		NullCheck(L_108);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_108, (bool)0, NULL);
		// listCanvasGroup.blocksRaycasts = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_109 = __this->___listCanvasGroup_45;
		NullCheck(L_109);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_109, (bool)0, NULL);
		// listCanvasGroup.alpha = 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_110 = __this->___listCanvasGroup_45;
		NullCheck(L_110);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_110, (0.0f), NULL);
		// listLayer.GetComponent<Image>().color = expandedListColor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111 = __this->___listLayer_28;
		NullCheck(L_111);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_112;
		L_112 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_111, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_113 = __this->___expandedListColor_15;
		NullCheck(L_112);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_112, L_113);
		// }
		return;
	}
}
// System.Void MaterialUI.SelectionBoxConfig::ExpandList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxConfig_ExpandList_mAFAFF3BFE234160F92EC69F255B7DF0FF2593283 (SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A_mFF0B17F79C75B3DBC58A006081263B436C03965B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// originalPos = thisRect.anchoredPosition.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___thisRect_46;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		float L_2 = L_1.___y_1;
		__this->___originalPos_51 = L_2;
		// if (gameObject.GetComponent<ShadowConfig>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* L_4;
		L_4 = GameObject_GetComponent_TisShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A_mFF0B17F79C75B3DBC58A006081263B436C03965B(L_3, GameObject_GetComponent_TisShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A_mFF0B17F79C75B3DBC58A006081263B436C03965B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// hasShadows = true;
		__this->___hasShadows_39 = (bool)1;
		// if (!shadowConfig)
		ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* L_6 = __this->___shadowConfig_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (L_7)
		{
			goto IL_0056;
		}
	}
	{
		// shadowConfig = gameObject.GetComponent<ShadowConfig>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* L_9;
		L_9 = GameObject_GetComponent_TisShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A_mFF0B17F79C75B3DBC58A006081263B436C03965B(L_8, GameObject_GetComponent_TisShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A_mFF0B17F79C75B3DBC58A006081263B436C03965B_RuntimeMethod_var);
		__this->___shadowConfig_19 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shadowConfig_19), (void*)L_9);
		goto IL_0056;
	}

IL_004f:
	{
		// hasShadows = false;
		__this->___hasShadows_39 = (bool)0;
	}

IL_0056:
	{
		// contractedShadowLevel = shadowConfig.shadowNormalSize;
		ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* L_10 = __this->___shadowConfig_19;
		NullCheck(L_10);
		int32_t L_11 = L_10->___shadowNormalSize_5;
		__this->___contractedShadowLevel_40 = L_11;
		// if (!rippleConfig)
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_12 = __this->___rippleConfig_41;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		if (L_13)
		{
			goto IL_0085;
		}
	}
	{
		// rippleConfig = gameObject.GetComponent<RippleConfig> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_15;
		L_15 = GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995(L_14, GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var);
		__this->___rippleConfig_41 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rippleConfig_41), (void*)L_15);
	}

IL_0085:
	{
		// if (!thisButton)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___thisButton_42;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_16, NULL);
		if (L_17)
		{
			goto IL_00a3;
		}
	}
	{
		// thisButton = gameObject.GetComponent<Button> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_18);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19;
		L_19 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_18, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___thisButton_42 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisButton_42), (void*)L_19);
	}

IL_00a3:
	{
		// shadowConfig.shadowNormalSize = expandedListShadowLevel;
		ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* L_20 = __this->___shadowConfig_19;
		int32_t L_21 = __this->___expandedListShadowLevel_18;
		NullCheck(L_20);
		L_20->___shadowNormalSize_5 = L_21;
		// shadowConfig.shadowActiveSize = expandedListShadowLevel;
		ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* L_22 = __this->___shadowConfig_19;
		int32_t L_23 = __this->___expandedListShadowLevel_18;
		NullCheck(L_22);
		L_22->___shadowActiveSize_6 = L_23;
		// rippleConfig.enabled = false;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_24 = __this->___rippleConfig_41;
		NullCheck(L_24);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_24, (bool)0, NULL);
		// thisButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_25 = __this->___thisButton_42;
		NullCheck(L_25);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_25, (bool)0, NULL);
		// icon.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___icon_32;
		NullCheck(L_26);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_26, (bool)0, NULL);
		// selectedText.enabled = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = __this->___selectedText_29;
		NullCheck(L_27);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_27, (bool)0, NULL);
		// currentColor = thisImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___thisImage_47;
		NullCheck(L_28);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		L_29 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_28);
		__this->___currentColor_17 = L_29;
		// if (autoMaxItemHeight)
		bool L_30 = __this->___autoMaxItemHeight_23;
		if (!L_30)
		{
			goto IL_0197;
		}
	}
	{
		// float tempFloat = (Screen.height / 100f * percentageOfScreenHeight / 36f);
		int32_t L_31;
		L_31 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		float L_32 = __this->___percentageOfScreenHeight_24;
		V_0 = ((float)(((float)il2cpp_codegen_multiply(((float)(((float)L_31)/(100.0f))), L_32))/(36.0f)));
		// if (tempFloat >= listItems.Length)
		float L_33 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = __this->___listItems_22;
		NullCheck(L_34);
		if ((!(((float)L_33) >= ((float)((float)((int32_t)(((RuntimeArray*)L_34)->max_length)))))))
		{
			goto IL_0157;
		}
	}
	{
		// listheight = (listItems.Length * 36f) + 16f;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = __this->___listItems_22;
		NullCheck(L_35);
		__this->___listheight_36 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)((int32_t)(((RuntimeArray*)L_35)->max_length))), (36.0f))), (16.0f)));
		goto IL_0201;
	}

IL_0157:
	{
		// listheight = (tempFloat * 36f) - 8f;
		float L_36 = V_0;
		__this->___listheight_36 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_36, (36.0f))), (8.0f)));
		// scrollbarEnabled = true;
		__this->___scrollbarEnabled_60 = (bool)1;
		// scrollbar.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = __this->___scrollbar_31;
		NullCheck(L_37);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_37, (bool)1, NULL);
		// scrollbarCanvasGroup.interactable = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_38 = __this->___scrollbarCanvasGroup_48;
		NullCheck(L_38);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_38, (bool)1, NULL);
		// scrollbarCanvasGroup.blocksRaycasts = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_39 = __this->___scrollbarCanvasGroup_48;
		NullCheck(L_39);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_39, (bool)1, NULL);
		goto IL_0201;
	}

IL_0197:
	{
		// else if (manualMaxItemHeight > 0)
		int32_t L_40 = __this->___manualMaxItemHeight_25;
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_01e6;
		}
	}
	{
		// listheight = (manualMaxItemHeight * 36f) - 8f;
		int32_t L_41 = __this->___manualMaxItemHeight_25;
		__this->___listheight_36 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)L_41), (36.0f))), (8.0f)));
		// scrollbarEnabled = true;
		__this->___scrollbarEnabled_60 = (bool)1;
		// scrollbar.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___scrollbar_31;
		NullCheck(L_42);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_42, (bool)1, NULL);
		// scrollbarCanvasGroup.interactable = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_43 = __this->___scrollbarCanvasGroup_48;
		NullCheck(L_43);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_43, (bool)1, NULL);
		// scrollbarCanvasGroup.blocksRaycasts = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_44 = __this->___scrollbarCanvasGroup_48;
		NullCheck(L_44);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_44, (bool)1, NULL);
		goto IL_0201;
	}

IL_01e6:
	{
		// listheight = (listItems.Length * 36f) + 16f;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = __this->___listItems_22;
		NullCheck(L_45);
		__this->___listheight_36 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)((int32_t)(((RuntimeArray*)L_45)->max_length))), (36.0f))), (16.0f)));
	}

IL_0201:
	{
		// listLayerHeight = (listItems.Length * 36f) + 16f;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = __this->___listItems_22;
		NullCheck(L_46);
		__this->___listLayerHeight_37 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)((int32_t)(((RuntimeArray*)L_46)->max_length))), (36.0f))), (16.0f)));
		// if (expandDirection == PopDirection.Popup)
		int32_t L_47 = __this->___expandDirection_27;
		if (L_47)
		{
			goto IL_0245;
		}
	}
	{
		// expandedPos = originalPos + (listheight / 2f) - 24f;
		float L_48 = __this->___originalPos_51;
		float L_49 = __this->___listheight_36;
		__this->___expandedPos_50 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_48, ((float)(L_49/(2.0f))))), (24.0f)));
		goto IL_027b;
	}

IL_0245:
	{
		// else if (expandDirection == PopDirection.Popdown)
		int32_t L_50 = __this->___expandDirection_27;
		if ((!(((uint32_t)L_50) == ((uint32_t)2))))
		{
			goto IL_026f;
		}
	}
	{
		// expandedPos = originalPos - (listheight / 2f) + 24f;
		float L_51 = __this->___originalPos_51;
		float L_52 = __this->___listheight_36;
		__this->___expandedPos_50 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_51, ((float)(L_52/(2.0f))))), (24.0f)));
		goto IL_027b;
	}

IL_026f:
	{
		// expandedPos = originalPos;
		float L_53 = __this->___originalPos_51;
		__this->___expandedPos_50 = L_53;
	}

IL_027b:
	{
		// listLayer.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___listLayer_28;
		NullCheck(L_54);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)1, NULL);
		// listCanvasGroup.interactable = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_55 = __this->___listCanvasGroup_45;
		NullCheck(L_55);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_55, (bool)1, NULL);
		// listCanvasGroup.blocksRaycasts = true;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_56 = __this->___listCanvasGroup_45;
		NullCheck(L_56);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_56, (bool)1, NULL);
		// cancelLayer.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_57 = __this->___cancelLayer_30;
		NullCheck(L_57);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_57, (bool)1, NULL);
		// icon.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_58 = __this->___icon_32;
		NullCheck(L_58);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_58, (bool)0, NULL);
		// selectedText.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_59 = __this->___selectedText_29;
		NullCheck(L_59);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_59, (bool)1, NULL);
		// listCanvasAlpha = listCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_60 = __this->___listCanvasGroup_45;
		NullCheck(L_60);
		float L_61;
		L_61 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_60, NULL);
		__this->___listCanvasAlpha_54 = L_61;
		// animStartTime = Time.realtimeSinceStartup;
		float L_62;
		L_62 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_57 = L_62;
		// state = 1;
		__this->___state_59 = 1;
		// }
		return;
	}
}
// System.Void MaterialUI.SelectionBoxConfig::ContractList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxConfig_ContractList_m13FEC5F2A4DC419129DD53B0B8E5680F9E2313D9 (SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* __this, const RuntimeMethod* method) 
{
	{
		// icon.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___icon_32;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// if (hasShadows)
		bool L_1 = __this->___hasShadows_39;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// shadowConfig.isEnabled = true;
		ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* L_2 = __this->___shadowConfig_19;
		NullCheck(L_2);
		L_2->___isEnabled_8 = (bool)1;
		// shadowConfig.SetShadows(contractedShadowLevel);
		ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* L_3 = __this->___shadowConfig_19;
		int32_t L_4 = __this->___contractedShadowLevel_40;
		NullCheck(L_3);
		ShadowConfig_SetShadows_m14702C338A4E17AD2406E5AC5A56D901851A43E6(L_3, L_4, NULL);
	}

IL_0031:
	{
		// currentColor = thisImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___thisImage_47;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		__this->___currentColor_17 = L_6;
		// rippleConfig.enabled = true;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_7 = __this->___rippleConfig_41;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)1, NULL);
		// thisButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___thisButton_42;
		NullCheck(L_8);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_8, (bool)1, NULL);
		// shadowConfig.shadowNormalSize = contractedNormalShadow;
		ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* L_9 = __this->___shadowConfig_19;
		int32_t L_10 = __this->___contractedNormalShadow_20;
		NullCheck(L_9);
		L_9->___shadowNormalSize_5 = L_10;
		// shadowConfig.shadowActiveSize = contractedHoverShadow;
		ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* L_11 = __this->___shadowConfig_19;
		int32_t L_12 = __this->___contractedHoverShadow_21;
		NullCheck(L_11);
		L_11->___shadowActiveSize_6 = L_12;
		// listCanvasGroup.interactable = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_13 = __this->___listCanvasGroup_45;
		NullCheck(L_13);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_13, (bool)0, NULL);
		// listCanvasGroup.blocksRaycasts = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_14 = __this->___listCanvasGroup_45;
		NullCheck(L_14);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_14, (bool)0, NULL);
		// scrollbar.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___scrollbar_31;
		NullCheck(L_15);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_15, (bool)0, NULL);
		// scrollbarCanvasGroup.interactable = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_16 = __this->___scrollbarCanvasGroup_48;
		NullCheck(L_16);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_16, (bool)0, NULL);
		// scrollbarCanvasGroup.blocksRaycasts = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_17 = __this->___scrollbarCanvasGroup_48;
		NullCheck(L_17);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_17, (bool)0, NULL);
		// cancelLayer.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___cancelLayer_30;
		NullCheck(L_18);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_18, (bool)0, NULL);
		// listheight = thisRect.sizeDelta.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = __this->___thisRect_46;
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_19, NULL);
		float L_21 = L_20.___y_1;
		__this->___listheight_36 = L_21;
		// listCanvasAlpha = listCanvasGroup.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_22 = __this->___listCanvasGroup_45;
		NullCheck(L_22);
		float L_23;
		L_23 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_22, NULL);
		__this->___listCanvasAlpha_54 = L_23;
		// animStartTime = Time.realtimeSinceStartup;
		float L_24;
		L_24 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_57 = L_24;
		// state = 2;
		__this->___state_59 = 2;
		// }
		return;
	}
}
// System.Void MaterialUI.SelectionBoxConfig::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxConfig_Update_mFC9399ED6ADF903A09CF0473D550353C9CADBD08 (SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = __this->___animStartTime_57;
		__this->___animDeltaTime_58 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (state == 1)
		int32_t L_2 = __this->___state_59;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0273;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_3 = __this->___animDeltaTime_58;
		float L_4 = __this->___animationDuration_14;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_026b;
		}
	}
	{
		// Color tempColor = selectedText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___selectedText_29;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		V_0 = L_6;
		// tempColor.a = Anim.Quint.Out (1f, 0f, animDeltaTime, animationDuration * 0.6f);
		float L_7 = __this->___animDeltaTime_58;
		float L_8 = __this->___animationDuration_14;
		float L_9;
		L_9 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((1.0f), (0.0f), L_7, ((float)il2cpp_codegen_multiply(L_8, (0.600000024f))), NULL);
		(&V_0)->___a_3 = L_9;
		// selectedText.color = tempColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___selectedText_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_0;
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// tempColor = icon.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___icon_32;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		V_0 = L_13;
		// tempColor.a = Anim.Quint.Out (0.5f, 0f, animDeltaTime, animationDuration * 0.6f);
		float L_14 = __this->___animDeltaTime_58;
		float L_15 = __this->___animationDuration_14;
		float L_16;
		L_16 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((0.5f), (0.0f), L_14, ((float)il2cpp_codegen_multiply(L_15, (0.600000024f))), NULL);
		(&V_0)->___a_3 = L_16;
		// icon.color = tempColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___icon_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = V_0;
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// Vector2 tempVec2 = thisRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = __this->___thisRect_46;
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_19, NULL);
		V_1 = L_20;
		// tempVec2.y = Anim.Quint.Out(originalHeight, listheight, animDeltaTime, animationDuration);
		float L_21 = __this->___originalHeight_49;
		float L_22 = __this->___listheight_36;
		float L_23 = __this->___animDeltaTime_58;
		float L_24 = __this->___animationDuration_14;
		float L_25;
		L_25 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_21, L_22, L_23, L_24, NULL);
		(&V_1)->___y_1 = L_25;
		// thisRect.sizeDelta = tempVec2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = __this->___thisRect_46;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_1;
		NullCheck(L_26);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_26, L_27, NULL);
		// tempVec2 = listLayer.GetComponent<RectTransform>().sizeDelta;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___listLayer_28;
		NullCheck(L_28);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_29;
		L_29 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_28, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_29);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_29, NULL);
		V_1 = L_30;
		// tempVec2.y = Anim.Quint.Out(originalHeight, listLayerHeight, animDeltaTime, animationDuration);
		float L_31 = __this->___originalHeight_49;
		float L_32 = __this->___listLayerHeight_37;
		float L_33 = __this->___animDeltaTime_58;
		float L_34 = __this->___animationDuration_14;
		float L_35;
		L_35 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_31, L_32, L_33, L_34, NULL);
		(&V_1)->___y_1 = L_35;
		// listLayer.GetComponent<RectTransform>().sizeDelta = tempVec2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___listLayer_28;
		NullCheck(L_36);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37;
		L_37 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_36, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_1;
		NullCheck(L_37);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_37, L_38, NULL);
		// Vector3 tempVec3 = thisRect.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_39 = __this->___thisRect_46;
		NullCheck(L_39);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_40, NULL);
		V_2 = L_41;
		// tempVec3.y = Anim.Quint.Out(originalPos, expandedPos, animDeltaTime, animationDuration);
		float L_42 = __this->___originalPos_51;
		float L_43 = __this->___expandedPos_50;
		float L_44 = __this->___animDeltaTime_58;
		float L_45 = __this->___animationDuration_14;
		float L_46;
		L_46 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_42, L_43, L_44, L_45, NULL);
		(&V_2)->___y_3 = L_46;
		// thisRect.anchoredPosition = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_47 = __this->___thisRect_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		L_49 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_48, NULL);
		NullCheck(L_47);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_47, L_49, NULL);
		// thisImage.color = Anim.Quint.Out(currentColor, expandedListColor, animDeltaTime, animationDuration);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_50 = __this->___thisImage_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_51 = __this->___currentColor_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = __this->___expandedListColor_15;
		float L_53 = __this->___animDeltaTime_58;
		float L_54 = __this->___animationDuration_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55;
		L_55 = Quint_Out_mDC1C9CCF37FC9B50A6895773873B7917B03AA27F(L_51, L_52, L_53, L_54, NULL);
		NullCheck(L_50);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_50, L_55);
		// listCanvasGroup.alpha = Anim.Quint.In (listCanvasAlpha, 1f, animDeltaTime, animationDuration);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_56 = __this->___listCanvasGroup_45;
		float L_57 = __this->___listCanvasAlpha_54;
		float L_58 = __this->___animDeltaTime_58;
		float L_59 = __this->___animationDuration_14;
		float L_60;
		L_60 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460(L_57, (1.0f), L_58, L_59, NULL);
		NullCheck(L_56);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_56, L_60, NULL);
		// if (scrollbarEnabled)
		bool L_61 = __this->___scrollbarEnabled_60;
		if (!L_61)
		{
			goto IL_020a;
		}
	}
	{
		// tempColor = scrollbar.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_62 = __this->___scrollbar_31;
		NullCheck(L_62);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_62);
		V_0 = L_63;
		// tempColor.a = Anim.Quint.In (0f, 0.1f, animDeltaTime, animationDuration);
		float L_64 = __this->___animDeltaTime_58;
		float L_65 = __this->___animationDuration_14;
		float L_66;
		L_66 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460((0.0f), (0.100000001f), L_64, L_65, NULL);
		(&V_0)->___a_3 = L_66;
		// scrollbar.color = tempColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_67 = __this->___scrollbar_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_68 = V_0;
		NullCheck(L_67);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_67, L_68);
		goto IL_021a;
	}

IL_020a:
	{
		// scrollbar.color = Color.clear;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_69 = __this->___scrollbar_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_70;
		L_70 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		NullCheck(L_69);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_69, L_70);
	}

IL_021a:
	{
		// if (textLine)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_71 = __this->___textLine_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_71, NULL);
		if (!L_72)
		{
			goto IL_052c;
		}
	}
	{
		// tempColor = textLine.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_73 = __this->___textLine_33;
		NullCheck(L_73);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74;
		L_74 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_73);
		V_0 = L_74;
		// tempColor.a = Anim.Quint.Out(1f, 0f, animDeltaTime, animationDuration / 2f);
		float L_75 = __this->___animDeltaTime_58;
		float L_76 = __this->___animationDuration_14;
		float L_77;
		L_77 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((1.0f), (0.0f), L_75, ((float)(L_76/(2.0f))), NULL);
		(&V_0)->___a_3 = L_77;
		// textLine.color = tempColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_78 = __this->___textLine_33;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79 = V_0;
		NullCheck(L_78);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_78, L_79);
		return;
	}

IL_026b:
	{
		// state = 0;
		__this->___state_59 = 0;
		return;
	}

IL_0273:
	{
		// else if (state == 2)
		int32_t L_80 = __this->___state_59;
		if ((!(((uint32_t)L_80) == ((uint32_t)2))))
		{
			goto IL_052c;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_81 = __this->___animDeltaTime_58;
		float L_82 = __this->___animationDuration_14;
		if ((!(((float)L_81) <= ((float)L_82))))
		{
			goto IL_04cd;
		}
	}
	{
		// Color tempColor = selectedText.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_83 = __this->___selectedText_29;
		NullCheck(L_83);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84;
		L_84 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_83);
		V_3 = L_84;
		// tempColor.a = Anim.Quint.In (0f, 1f, animDeltaTime, animationDuration);
		float L_85 = __this->___animDeltaTime_58;
		float L_86 = __this->___animationDuration_14;
		float L_87;
		L_87 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460((0.0f), (1.0f), L_85, L_86, NULL);
		(&V_3)->___a_3 = L_87;
		// selectedText.color = tempColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_88 = __this->___selectedText_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_89 = V_3;
		NullCheck(L_88);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_88, L_89);
		// tempColor = icon.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_90 = __this->___icon_32;
		NullCheck(L_90);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_91;
		L_91 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_90);
		V_3 = L_91;
		// tempColor.a = Anim.Quint.In (0f, 0.5f, animDeltaTime, animationDuration);
		float L_92 = __this->___animDeltaTime_58;
		float L_93 = __this->___animationDuration_14;
		float L_94;
		L_94 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460((0.0f), (0.5f), L_92, L_93, NULL);
		(&V_3)->___a_3 = L_94;
		// icon.color = tempColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_95 = __this->___icon_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_96 = V_3;
		NullCheck(L_95);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_95, L_96);
		// Vector2 tempVec2 = thisRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_97 = __this->___thisRect_46;
		NullCheck(L_97);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98;
		L_98 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_97, NULL);
		V_4 = L_98;
		// tempVec2.y = Anim.Quint.InOut(listheight, originalHeight, animDeltaTime, animationDuration);
		float L_99 = __this->___listheight_36;
		float L_100 = __this->___originalHeight_49;
		float L_101 = __this->___animDeltaTime_58;
		float L_102 = __this->___animationDuration_14;
		float L_103;
		L_103 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_99, L_100, L_101, L_102, NULL);
		(&V_4)->___y_1 = L_103;
		// thisRect.sizeDelta = tempVec2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_104 = __this->___thisRect_46;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105 = V_4;
		NullCheck(L_104);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_104, L_105, NULL);
		// tempVec2 = listLayer.GetComponent<RectTransform>().sizeDelta;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106 = __this->___listLayer_28;
		NullCheck(L_106);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_107;
		L_107 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_106, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_107);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108;
		L_108 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_107, NULL);
		V_4 = L_108;
		// tempVec2.y = Anim.Quint.InOut(listLayerHeight, originalHeight, animDeltaTime, animationDuration);
		float L_109 = __this->___listLayerHeight_37;
		float L_110 = __this->___originalHeight_49;
		float L_111 = __this->___animDeltaTime_58;
		float L_112 = __this->___animationDuration_14;
		float L_113;
		L_113 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_109, L_110, L_111, L_112, NULL);
		(&V_4)->___y_1 = L_113;
		// listLayer.GetComponent<RectTransform>().sizeDelta = tempVec2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_114 = __this->___listLayer_28;
		NullCheck(L_114);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_115;
		L_115 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_114, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_116 = V_4;
		NullCheck(L_115);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_115, L_116, NULL);
		// Vector3 tempVec3 = thisRect.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_117 = __this->___thisRect_46;
		NullCheck(L_117);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118;
		L_118 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_117, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_118, NULL);
		V_5 = L_119;
		// tempVec3.y = Anim.Quint.InOut(expandedPos, originalPos, animDeltaTime, animationDuration);
		float L_120 = __this->___expandedPos_50;
		float L_121 = __this->___originalPos_51;
		float L_122 = __this->___animDeltaTime_58;
		float L_123 = __this->___animationDuration_14;
		float L_124;
		L_124 = Quint_InOut_m95A863A473B4A9AA3A5F31B7BD74E4C3E983DE8E(L_120, L_121, L_122, L_123, NULL);
		(&V_5)->___y_3 = L_124;
		// thisRect.anchoredPosition = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_125 = __this->___thisRect_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_127;
		L_127 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_126, NULL);
		NullCheck(L_125);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_125, L_127, NULL);
		// thisImage.color = Anim.Quint.In(currentColor, contractedListColor, animDeltaTime, animationDuration);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_128 = __this->___thisImage_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_129 = __this->___currentColor_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_130 = __this->___contractedListColor_16;
		float L_131 = __this->___animDeltaTime_58;
		float L_132 = __this->___animationDuration_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_133;
		L_133 = Quint_In_m907D9D8D1DED580C17D263181DABC9D3912F58C1(L_129, L_130, L_131, L_132, NULL);
		NullCheck(L_128);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_128, L_133);
		// listCanvasGroup.alpha = Anim.Quint.Out(listCanvasAlpha, 0f, animDeltaTime, animationDuration * 0.6f);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_134 = __this->___listCanvasGroup_45;
		float L_135 = __this->___listCanvasAlpha_54;
		float L_136 = __this->___animDeltaTime_58;
		float L_137 = __this->___animationDuration_14;
		float L_138;
		L_138 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_135, (0.0f), L_136, ((float)il2cpp_codegen_multiply(L_137, (0.600000024f))), NULL);
		NullCheck(L_134);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_134, L_138, NULL);
		// if (scrollbarEnabled)
		bool L_139 = __this->___scrollbarEnabled_60;
		if (!L_139)
		{
			goto IL_0471;
		}
	}
	{
		// tempColor = scrollbar.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_140 = __this->___scrollbar_31;
		NullCheck(L_140);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_141;
		L_141 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_140);
		V_3 = L_141;
		// tempColor.a = Anim.Quint.Out (0.1f, 0f, animDeltaTime, animationDuration * 0.6f);
		float L_142 = __this->___animDeltaTime_58;
		float L_143 = __this->___animationDuration_14;
		float L_144;
		L_144 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((0.100000001f), (0.0f), L_142, ((float)il2cpp_codegen_multiply(L_143, (0.600000024f))), NULL);
		(&V_3)->___a_3 = L_144;
		// scrollbar.color = tempColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_145 = __this->___scrollbar_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_146 = V_3;
		NullCheck(L_145);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_145, L_146);
		goto IL_0481;
	}

IL_0471:
	{
		// scrollbar.color = Color.clear;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = __this->___scrollbar_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_148;
		L_148 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		NullCheck(L_147);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_147, L_148);
	}

IL_0481:
	{
		// if (textLine)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_149 = __this->___textLine_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_150;
		L_150 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_149, NULL);
		if (!L_150)
		{
			goto IL_052c;
		}
	}
	{
		// tempColor = textLine.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_151 = __this->___textLine_33;
		NullCheck(L_151);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_152;
		L_152 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_151);
		V_3 = L_152;
		// tempColor.a = Anim.Quint.In(0f, textLineAlpha, animDeltaTime, animationDuration);
		float L_153 = __this->___textLineAlpha_34;
		float L_154 = __this->___animDeltaTime_58;
		float L_155 = __this->___animationDuration_14;
		float L_156;
		L_156 = Quint_In_mAC6A72EA628BB98F1D400750739839387AD96460((0.0f), L_153, L_154, L_155, NULL);
		(&V_3)->___a_3 = L_156;
		// textLine.color = tempColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_157 = __this->___textLine_33;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_158 = V_3;
		NullCheck(L_157);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_157, L_158);
		return;
	}

IL_04cd:
	{
		// listLayer.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_159 = __this->___listLayer_28;
		NullCheck(L_159);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_159, (bool)0, NULL);
		// listCanvasGroup.alpha = 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_160 = __this->___listCanvasGroup_45;
		NullCheck(L_160);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_160, (0.0f), NULL);
		// listCanvasGroup.interactable = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_161 = __this->___listCanvasGroup_45;
		NullCheck(L_161);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_161, (bool)0, NULL);
		// listCanvasGroup.blocksRaycasts = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_162 = __this->___listCanvasGroup_45;
		NullCheck(L_162);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_162, (bool)0, NULL);
		// scrollbar.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_163 = __this->___scrollbar_31;
		NullCheck(L_163);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_163, (bool)0, NULL);
		// scrollbarCanvasGroup.interactable = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_164 = __this->___scrollbarCanvasGroup_48;
		NullCheck(L_164);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_164, (bool)0, NULL);
		// scrollbarCanvasGroup.blocksRaycasts = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_165 = __this->___scrollbarCanvasGroup_48;
		NullCheck(L_165);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_165, (bool)0, NULL);
		// state = 0;
		__this->___state_59 = 0;
	}

IL_052c:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.SelectionBoxConfig::Select(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxConfig_Select_mB4C8EBCFE5C9DF58D56B52776819524EB05FDBCC (SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* __this, int32_t ___0_selectionId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentSelection >= 0)
		int32_t L_0 = __this->___currentSelection_26;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		// listItemObjects[currentSelection].GetComponent<Image>().color = normalColor;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___listItemObjects_35;
		int32_t L_2 = __this->___currentSelection_26;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___normalColor_55;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
	}

IL_0026:
	{
		// currentSelection = selectionId;
		int32_t L_7 = ___0_selectionId;
		__this->___currentSelection_26 = L_7;
		// selectedText.text = listItems[selectionId];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___selectedText_29;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = __this->___listItems_22;
		int32_t L_10 = ___0_selectionId;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_12);
		// ContractList ();
		SelectionBoxConfig_ContractList_m13FEC5F2A4DC419129DD53B0B8E5680F9E2313D9(__this, NULL);
		// if (ItemPicked != null)
		PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* L_13 = __this->___ItemPicked_61;
		if (!L_13)
		{
			goto IL_005a;
		}
	}
	{
		// ItemPicked (selectionId);
		PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* L_14 = __this->___ItemPicked_61;
		int32_t L_15 = ___0_selectionId;
		NullCheck(L_14);
		PickItem_Invoke_mD3F22F8AE04006B6DDEA1E911514886E2762E028_inline(L_14, L_15, NULL);
	}

IL_005a:
	{
		// if (highlightLastSelected)
		bool L_16 = __this->___highlightLastSelected_13;
		if (!L_16)
		{
			goto IL_007a;
		}
	}
	{
		// listItemObjects[selectionId].GetComponent<Image>().color = highlightColor;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = __this->___listItemObjects_35;
		int32_t L_18 = ___0_selectionId;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21;
		L_21 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_20, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = __this->___highlightColor_56;
		NullCheck(L_21);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.SelectionBoxConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxConfig__ctor_m70510A113C2365A0BD42E9856245D214FBE1AA43 (SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* __this, const RuntimeMethod* method) 
{
	{
		// public bool rippleEnabled = true;
		__this->___rippleEnabled_4 = (bool)1;
		// public float rippleSpeed = 8f;
		__this->___rippleSpeed_6 = (8.0f);
		// public Color rippleColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___rippleColor_7 = L_0;
		// public float rippleStartAlpha = 0.5f;
		__this->___rippleStartAlpha_8 = (0.5f);
		// public float rippleEndAlpha = 0.3f;
		__this->___rippleEndAlpha_9 = (0.300000012f);
		// public HighlightActive highlightWhen = HighlightActive.Clicked;
		__this->___highlightWhen_10 = 2;
		// public bool toggleMask = true;
		__this->___toggleMask_12 = (bool)1;
		// public bool highlightLastSelected = true;
		__this->___highlightLastSelected_13 = (bool)1;
		// public float animationDuration = 0.75f;
		__this->___animationDuration_14 = (0.75f);
		// public Color expandedListColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___expandedListColor_15 = L_1;
		// public int expandedListShadowLevel = 2;
		__this->___expandedListShadowLevel_18 = 2;
		// public float percentageOfScreenHeight = 50f;
		__this->___percentageOfScreenHeight_24 = (50.0f);
		// public int currentSelection = -1;
		__this->___currentSelection_26 = (-1);
		// public PopDirection expandDirection = PopDirection.Center;
		__this->___expandDirection_27 = 1;
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
void PickItem_Invoke_mD3F22F8AE04006B6DDEA1E911514886E2762E028_Multicast(PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* __this, int32_t ___0_itemId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* currentDelegate = reinterpret_cast<PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_itemId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PickItem_Invoke_mD3F22F8AE04006B6DDEA1E911514886E2762E028_OpenInst(PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* __this, int32_t ___0_itemId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_itemId, method);
}
void PickItem_Invoke_mD3F22F8AE04006B6DDEA1E911514886E2762E028_OpenStatic(PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* __this, int32_t ___0_itemId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_itemId, method);
}
void PickItem_Invoke_mD3F22F8AE04006B6DDEA1E911514886E2762E028_OpenStaticInvoker(PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* __this, int32_t ___0_itemId, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_itemId);
}
void PickItem_Invoke_mD3F22F8AE04006B6DDEA1E911514886E2762E028_ClosedStaticInvoker(PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* __this, int32_t ___0_itemId, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_itemId);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2 (PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* __this, int32_t ___0_itemId, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_itemId);

}
// System.Void MaterialUI.SelectionBoxConfig/PickItem::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickItem__ctor_m624913CB2E6D55AF6836F0F6C701DA36E4FDC061 (PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PickItem_Invoke_mD3F22F8AE04006B6DDEA1E911514886E2762E028_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PickItem_Invoke_mD3F22F8AE04006B6DDEA1E911514886E2762E028_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PickItem_Invoke_mD3F22F8AE04006B6DDEA1E911514886E2762E028_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PickItem_Invoke_mD3F22F8AE04006B6DDEA1E911514886E2762E028_Multicast;
}
// System.Void MaterialUI.SelectionBoxConfig/PickItem::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickItem_Invoke_mD3F22F8AE04006B6DDEA1E911514886E2762E028 (PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* __this, int32_t ___0_itemId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_itemId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MaterialUI.SelectionBoxConfig/PickItem::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PickItem_BeginInvoke_m97FAB104F27FEEAA70DB749EFFC7064C0DFF900E (PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* __this, int32_t ___0_itemId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_itemId);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void MaterialUI.SelectionBoxConfig/PickItem::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PickItem_EndInvoke_m9D2BB2DB7B418698EE6552D2D0AA72D4D6FBCB1A (PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MaterialUI.SelectionBoxSubscriber::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxSubscriber_OnEnable_mB1118D7264127BA931392276CEB5D27E33F073E0 (SelectionBoxSubscriber_tF01796386C8D81F4D4729E45759DC7898140235B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A_m37DD9E8A4AFA0A3CD719ED84DD1F287B790AC477_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectionBoxSubscriber_DoThing_mFB0A3D3360E020B361AEF9DE8345272651B38397_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// config = gameObject.GetComponent<SelectionBoxConfig> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* L_1;
		L_1 = GameObject_GetComponent_TisSelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A_m37DD9E8A4AFA0A3CD719ED84DD1F287B790AC477(L_0, GameObject_GetComponent_TisSelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A_m37DD9E8A4AFA0A3CD719ED84DD1F287B790AC477_RuntimeMethod_var);
		__this->___config_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___config_4), (void*)L_1);
		// config.ItemPicked += DoThing;
		SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* L_2 = __this->___config_4;
		SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* L_3 = L_2;
		NullCheck(L_3);
		PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* L_4 = L_3->___ItemPicked_61;
		PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* L_5 = (PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2*)il2cpp_codegen_object_new(PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PickItem__ctor_m624913CB2E6D55AF6836F0F6C701DA36E4FDC061(L_5, __this, (intptr_t)((void*)SelectionBoxSubscriber_DoThing_mFB0A3D3360E020B361AEF9DE8345272651B38397_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___ItemPicked_61 = ((PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2*)CastclassSealed((RuntimeObject*)L_6, PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___ItemPicked_61), (void*)((PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2*)CastclassSealed((RuntimeObject*)L_6, PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void MaterialUI.SelectionBoxSubscriber::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxSubscriber_OnDisable_m1269EF1DE448AF7E9357E92F290C15FAA96D9A1B (SelectionBoxSubscriber_tF01796386C8D81F4D4729E45759DC7898140235B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectionBoxSubscriber_DoThing_mFB0A3D3360E020B361AEF9DE8345272651B38397_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// config.ItemPicked -= DoThing;
		SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* L_0 = __this->___config_4;
		SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* L_1 = L_0;
		NullCheck(L_1);
		PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* L_2 = L_1->___ItemPicked_61;
		PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* L_3 = (PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2*)il2cpp_codegen_object_new(PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PickItem__ctor_m624913CB2E6D55AF6836F0F6C701DA36E4FDC061(L_3, __this, (intptr_t)((void*)SelectionBoxSubscriber_DoThing_mFB0A3D3360E020B361AEF9DE8345272651B38397_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		NullCheck(L_1);
		L_1->___ItemPicked_61 = ((PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2*)CastclassSealed((RuntimeObject*)L_4, PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___ItemPicked_61), (void*)((PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2*)CastclassSealed((RuntimeObject*)L_4, PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void MaterialUI.SelectionBoxSubscriber::DoThing(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxSubscriber_DoThing_mFB0A3D3360E020B361AEF9DE8345272651B38397 (SelectionBoxSubscriber_tF01796386C8D81F4D4729E45759DC7898140235B* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D78BEBDA86E4A1F4EE1AB4159FE6CF35CD5885A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log ("'" + config.listItems[id] + "' picked, ID: " + id);
		SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* L_0 = __this->___config_4;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0->___listItems_22;
		int32_t L_2 = ___0_id;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_id), NULL);
		String_t* L_6;
		L_6 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, L_4, _stringLiteral5D78BEBDA86E4A1F4EE1AB4159FE6CF35CD5885A, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.SelectionBoxSubscriber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionBoxSubscriber__ctor_mBEA09F331C395C8D9233EAAD782BB6DC242EDF2B (SelectionBoxSubscriber_tF01796386C8D81F4D4729E45759DC7898140235B* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.SelectionListItemConfig::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionListItemConfig_Setup_m81E89F361586171F702ED14179CA34DBB6CF9C22 (SelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisSelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A_m4D83D1A949477F95D4729B6A66535E0FB2280E6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectionBoxConfig = gameObject.GetComponentInParent<SelectionBoxConfig> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* L_1;
		L_1 = GameObject_GetComponentInParent_TisSelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A_m4D83D1A949477F95D4729B6A66535E0FB2280E6C(L_0, GameObject_GetComponentInParent_TisSelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A_m4D83D1A949477F95D4729B6A66535E0FB2280E6C_RuntimeMethod_var);
		__this->___selectionBoxConfig_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectionBoxConfig_5), (void*)L_1);
		// gameObject.GetComponent<RippleConfig>().highlightWhen = RippleConfig.HighlightActive.Never;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_3;
		L_3 = GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995(L_2, GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___highlightWhen_13 = 0;
		// }
		return;
	}
}
// System.Void MaterialUI.SelectionListItemConfig::SelectMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionListItemConfig_SelectMe_m60D309D72D53BA6F0529F3514FB89D0E937FDD54 (SelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12* __this, const RuntimeMethod* method) 
{
	{
		// selectionBoxConfig.Select (listId);
		SelectionBoxConfig_t391422173A5F7E9BEFFD57D4F55C4B311CFCCC9A* L_0 = __this->___selectionBoxConfig_5;
		int32_t L_1 = __this->___listId_4;
		NullCheck(L_0);
		SelectionBoxConfig_Select_mB4C8EBCFE5C9DF58D56B52776819524EB05FDBCC(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.SelectionListItemConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionListItemConfig__ctor_mE1DEAFB75A73BDD3D5B35B9261243E323E263F46 (SelectionListItemConfig_t8B9B44560F61041B138FAC1C0403A4D041F2FF12* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.ShadowAnim::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowAnim_Awake_m7A5F1CDF0E9958ECA16639B0DABA8A9F9F4B5310 (ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC8B5ACBEEF3B80C0B0FB6B10286C4524EB9FADEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisGroup = gameObject.GetComponent<CanvasGroup> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1;
		L_1 = GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD(L_0, GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		__this->___thisGroup_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisGroup_6), (void*)L_1);
		// shadows = gameObject.GetComponentsInChildren<Image> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_3;
		L_3 = GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC8B5ACBEEF3B80C0B0FB6B10286C4524EB9FADEA(L_2, GameObject_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mC8B5ACBEEF3B80C0B0FB6B10286C4524EB9FADEA_RuntimeMethod_var);
		__this->___shadows_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shadows_7), (void*)L_3);
		// }
		return;
	}
}
// System.Void MaterialUI.ShadowAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowAnim_Update_mBE9B81346C42810B3FF9F73799553E3676512B5D (ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F* __this, const RuntimeMethod* method) 
{
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (anim)
		bool L_0 = __this->___anim_5;
		if (!L_0)
		{
			goto IL_00dc;
		}
	}
	{
		// if (isOn)
		bool L_1 = __this->___isOn_4;
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		// if (thisGroup.alpha < 1f)
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = __this->___thisGroup_6;
		NullCheck(L_2);
		float L_3;
		L_3 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_2, NULL);
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		// thisGroup.alpha = Mathf.Lerp(thisGroup.alpha, 1.1f, Time.deltaTime * 6);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_4 = __this->___thisGroup_6;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_5 = __this->___thisGroup_6;
		NullCheck(L_5);
		float L_6;
		L_6 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_5, NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_8;
		L_8 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_6, (1.10000002f), ((float)il2cpp_codegen_multiply(L_7, (6.0f))), NULL);
		NullCheck(L_4);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_4, L_8, NULL);
		return;
	}

IL_0051:
	{
		// thisGroup.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_9 = __this->___thisGroup_6;
		NullCheck(L_9);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_9, (1.0f), NULL);
		// anim = false;
		__this->___anim_5 = (bool)0;
		return;
	}

IL_0069:
	{
		// if (thisGroup.alpha > 0f)
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_10 = __this->___thisGroup_6;
		NullCheck(L_10);
		float L_11;
		L_11 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_10, NULL);
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_00a7;
		}
	}
	{
		// thisGroup.alpha = Mathf.Lerp(thisGroup.alpha, -0.1f, Time.deltaTime * 6);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_12 = __this->___thisGroup_6;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_13 = __this->___thisGroup_6;
		NullCheck(L_13);
		float L_14;
		L_14 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_13, NULL);
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_16;
		L_16 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_14, (-0.100000001f), ((float)il2cpp_codegen_multiply(L_15, (6.0f))), NULL);
		NullCheck(L_12);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_12, L_16, NULL);
		return;
	}

IL_00a7:
	{
		// thisGroup.alpha = 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_17 = __this->___thisGroup_6;
		NullCheck(L_17);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_17, (0.0f), NULL);
		// anim = false;
		__this->___anim_5 = (bool)0;
		// foreach (Image shadow in shadows)
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_18 = __this->___shadows_7;
		V_0 = L_18;
		V_1 = 0;
		goto IL_00d6;
	}

IL_00c9:
	{
		// foreach (Image shadow in shadows)
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		// shadow.enabled = false;
		NullCheck(L_22);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_22, (bool)0, NULL);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00d6:
	{
		// foreach (Image shadow in shadows)
		int32_t L_24 = V_1;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_25 = V_0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_00c9;
		}
	}

IL_00dc:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.ShadowAnim::SetShadow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowAnim_SetShadow_m2CB32244A312F8454B77A1E382116A0AC60C3915 (ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F* __this, bool ___0_set, const RuntimeMethod* method) 
{
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// isOn = set;
		bool L_0 = ___0_set;
		__this->___isOn_4 = L_0;
		// anim = true;
		__this->___anim_5 = (bool)1;
		// foreach (Image shadow in shadows)
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_1 = __this->___shadows_7;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0026;
	}

IL_0019:
	{
		// foreach (Image shadow in shadows)
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// shadow.enabled = true;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0026:
	{
		// foreach (Image shadow in shadows)
		int32_t L_7 = V_1;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MaterialUI.ShadowAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowAnim__ctor_mA03C192D61B12AEBBBFEC03C45212370BE693DB5 (ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.ShadowConfig::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowConfig_OnPointerDown_mD24B3B92A23C6D12461B6BC5F0354C5526362495 (ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// if (shadowsActiveWhen == ShadowsActive.Clicked)
		int32_t L_0 = __this->___shadowsActiveWhen_7;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// SetShadows(shadowActiveSize);
		int32_t L_1 = __this->___shadowActiveSize_6;
		ShadowConfig_SetShadows_m14702C338A4E17AD2406E5AC5A56D901851A43E6(__this, L_1, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.ShadowConfig::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowConfig_OnPointerUp_m50130F93B3717DEEF671178C4C47CA79704975CB (ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// if (shadowsActiveWhen == ShadowsActive.Clicked)
		int32_t L_0 = __this->___shadowsActiveWhen_7;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// SetShadows(shadowNormalSize);
		int32_t L_1 = __this->___shadowNormalSize_5;
		ShadowConfig_SetShadows_m14702C338A4E17AD2406E5AC5A56D901851A43E6(__this, L_1, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.ShadowConfig::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowConfig_OnPointerEnter_m41363B14BCC059F67EE5624A33937AF6977CA47C (ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// if (shadowsActiveWhen == ShadowsActive.Hovered)
		int32_t L_0 = __this->___shadowsActiveWhen_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// SetShadows(shadowActiveSize);
		int32_t L_1 = __this->___shadowActiveSize_6;
		ShadowConfig_SetShadows_m14702C338A4E17AD2406E5AC5A56D901851A43E6(__this, L_1, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.ShadowConfig::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowConfig_OnPointerExit_mAEE9A3AF44D4CDC87298D8D7352F5A9C8ABCF0F5 (ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// SetShadows(shadowNormalSize);
		int32_t L_0 = __this->___shadowNormalSize_5;
		ShadowConfig_SetShadows_m14702C338A4E17AD2406E5AC5A56D901851A43E6(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.ShadowConfig::SetShadows(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowConfig_SetShadows_m14702C338A4E17AD2406E5AC5A56D901851A43E6 (ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* __this, int32_t ___0_shadowOn, const RuntimeMethod* method) 
{
	ShadowAnimU5BU5D_t5E9BFBF1BA0EE29A02BE2F8CAD1A01AEB2EDE473* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (isEnabled)
		bool L_0 = __this->___isEnabled_8;
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		// foreach (ShadowAnim shadow in shadows)
		ShadowAnimU5BU5D_t5E9BFBF1BA0EE29A02BE2F8CAD1A01AEB2EDE473* L_1 = __this->___shadows_4;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0020;
	}

IL_0013:
	{
		// foreach (ShadowAnim shadow in shadows)
		ShadowAnimU5BU5D_t5E9BFBF1BA0EE29A02BE2F8CAD1A01AEB2EDE473* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// shadow.SetShadow(false);
		NullCheck(L_5);
		ShadowAnim_SetShadow_m2CB32244A312F8454B77A1E382116A0AC60C3915(L_5, (bool)0, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0020:
	{
		// foreach (ShadowAnim shadow in shadows)
		int32_t L_7 = V_1;
		ShadowAnimU5BU5D_t5E9BFBF1BA0EE29A02BE2F8CAD1A01AEB2EDE473* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// if (shadowOn - 1 >= 0)
		int32_t L_9 = ___0_shadowOn;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, 1))) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// shadows [shadowOn - 1].SetShadow (true);
		ShadowAnimU5BU5D_t5E9BFBF1BA0EE29A02BE2F8CAD1A01AEB2EDE473* L_10 = __this->___shadows_4;
		int32_t L_11 = ___0_shadowOn;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		ShadowAnim_t96D4AE13A5E860E1C4885806B1CD4BF5DCEC5D1F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		ShadowAnim_SetShadow_m2CB32244A312F8454B77A1E382116A0AC60C3915(L_13, (bool)1, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.ShadowConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowConfig__ctor_mF48B5C5F3E4422FD1E6678E0C0C1C5436CFB89F6 (ShadowConfig_tD6518C4B87502E0B6EF1BB69968F9970ECB01A8A* __this, const RuntimeMethod* method) 
{
	{
		// public int shadowNormalSize = 1;
		__this->___shadowNormalSize_5 = 1;
		// public int shadowActiveSize = 2;
		__this->___shadowActiveSize_6 = 2;
		// public bool isEnabled = true;
		__this->___isEnabled_8 = (bool)1;
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
// System.Void MaterialUI.ShadowSnap::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowSnap_Start_m289EE48B60D2D6530A9EEF236B78CB389244B5F0 (ShadowSnap_t5EEE8216C2931F9E095772CB74FE2D7561280757* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!thisRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___thisRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// thisRect = gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_2, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___thisRect_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisRect_5), (void*)L_3);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.ShadowSnap::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowSnap_LateUpdate_mBE9A273458EC9FD1E1825587F58546F7138D978E (ShadowSnap_t5EEE8216C2931F9E095772CB74FE2D7561280757* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (targetRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___targetRect_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_00c8;
		}
	}
	{
		// if (!thisRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___thisRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// thisRect = gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_4, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___thisRect_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisRect_5), (void*)L_5);
	}

IL_002e:
	{
		// if (percentage)
		bool L_6 = __this->___percentage_8;
		if (!L_6)
		{
			goto IL_0080;
		}
	}
	{
		// tempVect2.x = targetRect.sizeDelta.x*xPercent * 0.01f;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___targetRect_4;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		float L_9 = L_8.___x_0;
		float L_10 = __this->___xPercent_9;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_9, L_10)), (0.00999999978f)));
		// tempVect2.y = targetRect.sizeDelta.y*yPercent * 0.01f;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___targetRect_4;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_11, NULL);
		float L_13 = L_12.___y_1;
		float L_14 = __this->___yPercent_10;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_14)), (0.00999999978f)));
		goto IL_00bc;
	}

IL_0080:
	{
		// tempVect2.x = targetRect.sizeDelta.x + xPadding;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___targetRect_4;
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_15, NULL);
		float L_17 = L_16.___x_0;
		float L_18 = __this->___xPadding_6;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_add(L_17, L_18));
		// tempVect2.y = targetRect.sizeDelta.y + yPadding;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = __this->___targetRect_4;
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_19, NULL);
		float L_21 = L_20.___y_1;
		float L_22 = __this->___yPadding_7;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_add(L_21, L_22));
	}

IL_00bc:
	{
		// thisRect.sizeDelta = tempVect2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = __this->___thisRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		NullCheck(L_23);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_23, L_24, NULL);
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.ShadowSnap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShadowSnap__ctor_m9915EAA4CE7F592559F3E8A8690914CEED1341DE (ShadowSnap_t5EEE8216C2931F9E095772CB74FE2D7561280757* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.SliderConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderConfig_Start_m3493B8D814413E537869853B77D8C84CBE11F964 (SliderConfig_t90B4137C2A268DEDC9DF818E5074F3F4D067A7A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = gameObject.GetComponent<Slider> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1;
		L_1 = GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA(L_0, GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		__this->___slider_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_10), (void*)L_1);
		// popup.gameObject.GetComponent<Image> ().color = handle.gameObject.GetComponent<Image> ().color;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___popup_8;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___handle_7;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_6, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_8);
		// UpdateText ();
		SliderConfig_UpdateText_mB5769457E4EC95E8C10BD62C5EFC64680D9EF983(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.SliderConfig::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderConfig_Update_mB209F1E621C38C2B7A9D124E0D21AC3C30D62B40 (SliderConfig_t90B4137C2A268DEDC9DF818E5074F3F4D067A7A3* __this, const RuntimeMethod* method) 
{
	{
		// if (state == 1)
		int32_t L_0 = __this->___state_15;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0176;
		}
	}
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_2 = __this->___animStartTime_16;
		__this->___animDeltaTime_17 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (animDeltaTime <= animationDuration)
		float L_3 = __this->___animDeltaTime_17;
		float L_4 = __this->___animationDuration_6;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_016e;
		}
	}
	{
		// tempVec3 = handle.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___handle_7;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		__this->___tempVec3_18 = L_6;
		// tempVec3.x = Anim.Quint.Out(currentHandleScale, 1f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___tempVec3_18);
		float L_8 = __this->___currentHandleScale_12;
		float L_9 = __this->___animDeltaTime_17;
		float L_10 = __this->___animationDuration_6;
		float L_11;
		L_11 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_8, (1.0f), L_9, L_10, NULL);
		L_7->___x_2 = L_11;
		// tempVec3.y = tempVec3.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___tempVec3_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___tempVec3_18);
		float L_14 = L_13->___x_2;
		L_12->___y_3 = L_14;
		// tempVec3.z = tempVec3.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___tempVec3_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___tempVec3_18);
		float L_17 = L_16->___x_2;
		L_15->___z_4 = L_17;
		// handle.localScale = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->___handle_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___tempVec3_18;
		NullCheck(L_18);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_18, L_19, NULL);
		// if (hasPopup)
		bool L_20 = __this->___hasPopup_5;
		if (!L_20)
		{
			goto IL_02eb;
		}
	}
	{
		// tempVec3 = popup.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = __this->___popup_8;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_21, NULL);
		__this->___tempVec3_18 = L_22;
		// tempVec3.x = Anim.Quint.Out(currentPopupScale, 1f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___tempVec3_18);
		float L_24 = __this->___currentPopupScale_11;
		float L_25 = __this->___animDeltaTime_17;
		float L_26 = __this->___animationDuration_6;
		float L_27;
		L_27 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_24, (1.0f), L_25, L_26, NULL);
		L_23->___x_2 = L_27;
		// tempVec3.y = tempVec3.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___tempVec3_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&__this->___tempVec3_18);
		float L_30 = L_29->___x_2;
		L_28->___y_3 = L_30;
		// tempVec3.z = tempVec3.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&__this->___tempVec3_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&__this->___tempVec3_18);
		float L_33 = L_32->___x_2;
		L_31->___z_4 = L_33;
		// popup.localScale = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_34 = __this->___popup_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___tempVec3_18;
		NullCheck(L_34);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_34, L_35, NULL);
		// tempVec3 = popup.localPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_36 = __this->___popup_8;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_36, NULL);
		__this->___tempVec3_18 = L_37;
		// tempVec3.y = Anim.Quint.Out(currentPos, 16f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (&__this->___tempVec3_18);
		float L_39 = __this->___currentPos_13;
		float L_40 = __this->___animDeltaTime_17;
		float L_41 = __this->___animationDuration_6;
		float L_42;
		L_42 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_39, (16.0f), L_40, L_41, NULL);
		L_38->___y_3 = L_42;
		// popup.localPosition = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_43 = __this->___popup_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = __this->___tempVec3_18;
		NullCheck(L_43);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_43, L_44, NULL);
		return;
	}

IL_016e:
	{
		// state = 0;
		__this->___state_15 = 0;
		return;
	}

IL_0176:
	{
		// else if (state == 2)
		int32_t L_45 = __this->___state_15;
		if ((!(((uint32_t)L_45) == ((uint32_t)2))))
		{
			goto IL_02eb;
		}
	}
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_46;
		L_46 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_47 = __this->___animStartTime_16;
		__this->___animDeltaTime_17 = ((float)il2cpp_codegen_subtract(L_46, L_47));
		// if (animDeltaTime <= animationDuration)
		float L_48 = __this->___animDeltaTime_17;
		float L_49 = __this->___animationDuration_6;
		if ((!(((float)L_48) <= ((float)L_49))))
		{
			goto IL_02e4;
		}
	}
	{
		// tempVec3 = handle.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50 = __this->___handle_7;
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_50, NULL);
		__this->___tempVec3_18 = L_51;
		// tempVec3.x = Anim.Quint.Out(currentHandleScale, 0.6f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_52 = (&__this->___tempVec3_18);
		float L_53 = __this->___currentHandleScale_12;
		float L_54 = __this->___animDeltaTime_17;
		float L_55 = __this->___animationDuration_6;
		float L_56;
		L_56 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_53, (0.600000024f), L_54, L_55, NULL);
		L_52->___x_2 = L_56;
		// tempVec3.y = tempVec3.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_57 = (&__this->___tempVec3_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_58 = (&__this->___tempVec3_18);
		float L_59 = L_58->___x_2;
		L_57->___y_3 = L_59;
		// tempVec3.z = tempVec3.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_60 = (&__this->___tempVec3_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_61 = (&__this->___tempVec3_18);
		float L_62 = L_61->___x_2;
		L_60->___z_4 = L_62;
		// handle.localScale = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_63 = __this->___handle_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = __this->___tempVec3_18;
		NullCheck(L_63);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_63, L_64, NULL);
		// if (hasPopup)
		bool L_65 = __this->___hasPopup_5;
		if (!L_65)
		{
			goto IL_02eb;
		}
	}
	{
		// tempVec3 = popup.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_66 = __this->___popup_8;
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_66, NULL);
		__this->___tempVec3_18 = L_67;
		// tempVec3.x = Anim.Quint.Out(currentPopupScale, 0f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_68 = (&__this->___tempVec3_18);
		float L_69 = __this->___currentPopupScale_11;
		float L_70 = __this->___animDeltaTime_17;
		float L_71 = __this->___animationDuration_6;
		float L_72;
		L_72 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_69, (0.0f), L_70, L_71, NULL);
		L_68->___x_2 = L_72;
		// tempVec3.y = tempVec3.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_73 = (&__this->___tempVec3_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_74 = (&__this->___tempVec3_18);
		float L_75 = L_74->___x_2;
		L_73->___y_3 = L_75;
		// tempVec3.z = tempVec3.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_76 = (&__this->___tempVec3_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_77 = (&__this->___tempVec3_18);
		float L_78 = L_77->___x_2;
		L_76->___z_4 = L_78;
		// popup.localScale = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_79 = __this->___popup_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = __this->___tempVec3_18;
		NullCheck(L_79);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_79, L_80, NULL);
		// tempVec3 = popup.localPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_81 = __this->___popup_8;
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_81, NULL);
		__this->___tempVec3_18 = L_82;
		// tempVec3.y = Anim.Quint.Out(currentPos, 0f, animDeltaTime, animationDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_83 = (&__this->___tempVec3_18);
		float L_84 = __this->___currentPos_13;
		float L_85 = __this->___animDeltaTime_17;
		float L_86 = __this->___animationDuration_6;
		float L_87;
		L_87 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_84, (0.0f), L_85, L_86, NULL);
		L_83->___y_3 = L_87;
		// popup.localPosition = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_88 = __this->___popup_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = __this->___tempVec3_18;
		NullCheck(L_88);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_88, L_89, NULL);
		return;
	}

IL_02e4:
	{
		// state = 0;
		__this->___state_15 = 0;
	}

IL_02eb:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.SliderConfig::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderConfig_UpdateText_mB5769457E4EC95E8C10BD62C5EFC64680D9EF983 (SliderConfig_t90B4137C2A268DEDC9DF818E5074F3F4D067A7A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC008E503687BA2A627379D4E257787AEA3506830);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (textHasDecimal)
		bool L_0 = __this->___textHasDecimal_4;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// popupText.text = slider.value.ToString("0.0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___popupText_9;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___slider_10;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteralC008E503687BA2A627379D4E257787AEA3506830, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		return;
	}

IL_002c:
	{
		// popupText.text = slider.value.ToString("0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___popupText_9;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___slider_10;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// }
		return;
	}
}
// System.Void MaterialUI.SliderConfig::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderConfig_OnPointerDown_mE27121AF9CE82B751DCF604D95E565B73ACCC53B (SliderConfig_t90B4137C2A268DEDC9DF818E5074F3F4D067A7A3* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// currentHandleScale = handle.localScale.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handle_7;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___currentHandleScale_12 = L_2;
		// currentPopupScale = popup.localScale.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___popup_8;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_3, NULL);
		float L_5 = L_4.___x_2;
		__this->___currentPopupScale_11 = L_5;
		// currentPos = popup.localPosition.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___popup_8;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_6, NULL);
		float L_8 = L_7.___y_3;
		__this->___currentPos_13 = L_8;
		// animStartTime = Time.realtimeSinceStartup;
		float L_9;
		L_9 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_16 = L_9;
		// isSelected = true;
		__this->___isSelected_14 = (bool)1;
		// state = 1;
		__this->___state_15 = 1;
		// }
		return;
	}
}
// System.Void MaterialUI.SliderConfig::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderConfig_OnPointerUp_m23CEE57798F17C8A23622A7A87F505036772F017 (SliderConfig_t90B4137C2A268DEDC9DF818E5074F3F4D067A7A3* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// if (isSelected)
		bool L_0 = __this->___isSelected_14;
		if (!L_0)
		{
			goto IL_0063;
		}
	}
	{
		// currentHandleScale = handle.localScale.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handle_7;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		__this->___currentHandleScale_12 = L_3;
		// currentPopupScale = popup.localScale.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___popup_8;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		float L_6 = L_5.___x_2;
		__this->___currentPopupScale_11 = L_6;
		// currentPos = popup.localPosition.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___popup_8;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_7, NULL);
		float L_9 = L_8.___y_3;
		__this->___currentPos_13 = L_9;
		// animStartTime = Time.realtimeSinceStartup;
		float L_10;
		L_10 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_16 = L_10;
		// isSelected = false;
		__this->___isSelected_14 = (bool)0;
		// state = 2;
		__this->___state_15 = 2;
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.SliderConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderConfig__ctor_mA50390821DDB3434E34475098E8A7352D8F23FCE (SliderConfig_t90B4137C2A268DEDC9DF818E5074F3F4D067A7A3* __this, const RuntimeMethod* method) 
{
	{
		// public bool hasPopup = true;
		__this->___hasPopup_5 = (bool)1;
		// public float animationDuration = 0.5f;
		__this->___animationDuration_6 = (0.5f);
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
// System.Void MaterialUI.SnapButtonToText::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapButtonToText_OnEnable_m769E5CFD4FAA4AC50F0938CB0CBCC85D0867FD2C (SnapButtonToText_tD080412F7AC57AE0CF215BD7BE22CA3018A2A5E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisRectTransform = gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___thisRectTransform_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisRectTransform_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void MaterialUI.SnapButtonToText::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapButtonToText_Update_mEC210786FDC264A35638F6E408A4A0F4C437CC24 (SnapButtonToText_tD080412F7AC57AE0CF215BD7BE22CA3018A2A5E8* __this, const RuntimeMethod* method) 
{
	{
		// if (!snapEveryFrame) return;
		bool L_0 = __this->___snapEveryFrame_5;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!snapEveryFrame) return;
		return;
	}

IL_0009:
	{
		// if (thisRectTransform.sizeDelta != textSize)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___thisRectTransform_6;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___textSize_7;
		bool L_4;
		L_4 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// textSize = thisRectTransform.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___thisRectTransform_6;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_5, NULL);
		__this->___textSize_7 = L_6;
		// Snap();
		SnapButtonToText_Snap_m58579E4CDE87DDA58C5A82BE4DAE710670BEB0E0(__this, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.SnapButtonToText::Snap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapButtonToText_Snap_m58579E4CDE87DDA58C5A82BE4DAE710670BEB0E0 (SnapButtonToText_tD080412F7AC57AE0CF215BD7BE22CA3018A2A5E8* __this, const RuntimeMethod* method) 
{
	{
		// buttonSize = textSize + basePadding;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___textSize_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___basePadding_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_0, L_1, NULL);
		__this->___buttonSize_9 = L_2;
		// finalSize = buttonSize + buttonPadding;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___buttonSize_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___buttonPadding_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_3, L_4, NULL);
		__this->___finalSize_11 = L_5;
		// if (finalSize.x < 96f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___finalSize_11);
		float L_7 = L_6->___x_0;
		if ((!(((float)L_7) < ((float)(96.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		// finalSize.x = 96f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___finalSize_11);
		L_8->___x_0 = (96.0f);
	}

IL_0050:
	{
		// buttonRectTransform.sizeDelta = finalSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___buttonRectTransform_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___finalSize_11;
		NullCheck(L_9);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.SnapButtonToText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapButtonToText__ctor_mD857BC7271E00C2CC56325AEF77A948400D500F8 (SnapButtonToText_tD080412F7AC57AE0CF215BD7BE22CA3018A2A5E8* __this, const RuntimeMethod* method) 
{
	{
		// public bool snapEveryFrame = true;
		__this->___snapEveryFrame_5 = (bool)1;
		// [SerializeField] private Vector2 basePadding = new Vector2(30f, 18f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (30.0f), (18.0f), /*hidden argument*/NULL);
		__this->___basePadding_8 = L_0;
		// [SerializeField] private Vector2 buttonPadding = new Vector2(32f, 32f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (32.0f), (32.0f), /*hidden argument*/NULL);
		__this->___buttonPadding_10 = L_1;
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
// System.Void MaterialUI.SpriteSwapper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteSwapper_Update_mF8EC5805270F032E8E4DFAEB3EAC1E29150767C8 (SpriteSwapper_t8C76CD448BEC3E3B78B1F4D7E2309716AB6B4998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F_mCF62027827508AE4F7C975A097137808332ABE72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!thisImage)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___thisImage_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// thisImage = gameObject.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___thisImage_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisImage_8), (void*)L_3);
	}

IL_001e:
	{
		// if (!scaler)
		MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* L_4 = __this->___scaler_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		// scaler = gameObject.GetComponentInParent<Canvas>().GetComponent<MaterialUIScaler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7;
		L_7 = GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991(L_6, GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991_RuntimeMethod_var);
		NullCheck(L_7);
		MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* L_8;
		L_8 = Component_GetComponent_TisMaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F_mCF62027827508AE4F7C975A097137808332ABE72(L_7, Component_GetComponent_TisMaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F_mCF62027827508AE4F7C975A097137808332ABE72_RuntimeMethod_var);
		__this->___scaler_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scaler_9), (void*)L_8);
		return;
	}

IL_0042:
	{
		// if (scaleFactor != scaler.scaleFactor)
		float L_9 = __this->___scaleFactor_7;
		MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* L_10 = __this->___scaler_9;
		NullCheck(L_10);
		float L_11;
		L_11 = MaterialUIScaler_get_scaleFactor_m853F366519FCBD659D04D6BFA0C3AE48D17319C0_inline(L_10, NULL);
		if ((((float)L_9) == ((float)L_11)))
		{
			goto IL_00cf;
		}
	}
	{
		// scaleFactor = scaler.scaleFactor;
		MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* L_12 = __this->___scaler_9;
		NullCheck(L_12);
		float L_13;
		L_13 = MaterialUIScaler_get_scaleFactor_m853F366519FCBD659D04D6BFA0C3AE48D17319C0_inline(L_12, NULL);
		__this->___scaleFactor_7 = L_13;
		// if (scaleFactor > 2f && sprite4x)
		float L_14 = __this->___scaleFactor_7;
		if ((!(((float)L_14) > ((float)(2.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15 = __this->___sprite4x_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0092;
		}
	}
	{
		// thisImage.sprite = sprite4x;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___thisImage_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = __this->___sprite4x_6;
		NullCheck(L_17);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_17, L_18, NULL);
		return;
	}

IL_0092:
	{
		// else if (scaleFactor > 1f && sprite2x)
		float L_19 = __this->___scaleFactor_7;
		if ((!(((float)L_19) > ((float)(1.0f)))))
		{
			goto IL_00be;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20 = __this->___sprite2x_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_20, NULL);
		if (!L_21)
		{
			goto IL_00be;
		}
	}
	{
		// thisImage.sprite = sprite2x;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___thisImage_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_23 = __this->___sprite2x_5;
		NullCheck(L_22);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_22, L_23, NULL);
		return;
	}

IL_00be:
	{
		// thisImage.sprite = sprite1x;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___thisImage_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_25 = __this->___sprite1x_4;
		NullCheck(L_24);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_24, L_25, NULL);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.SpriteSwapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteSwapper__ctor_mAA5B1076FBDAC5A478156A6471B14CD21D10018B (SpriteSwapper_t8C76CD448BEC3E3B78B1F4D7E2309716AB6B4998* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.SwitchConfig::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_OnEnable_m67AD990968D33D7F7ACFD31460C99A2483A6C1CC (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle = gameObject.GetComponent<Toggle>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1;
		L_1 = GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17(L_0, GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		__this->___toggle_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_20), (void*)L_1);
		// switchRectTransform = switchImage.GetComponent<RectTransform>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___switchImage_14;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_2, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___switchRectTransform_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___switchRectTransform_17), (void*)L_3);
		// checkBoxToggler = text.GetComponent<CheckBoxToggler>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___text_16;
		NullCheck(L_4);
		CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* L_5;
		L_5 = Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5(L_4, Component_GetComponent_TisCheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626_mBE878887E9BF9F00C27A20FF02A6C3B7AF6771C5_RuntimeMethod_var);
		__this->___checkBoxToggler_18 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checkBoxToggler_18), (void*)L_5);
		// rippleConfig = gameObject.GetComponent<RippleConfig>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_7;
		L_7 = GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995(L_6, GameObject_GetComponent_TisRippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749_mAF86FA7A52967950ADE328479911821324681995_RuntimeMethod_var);
		__this->___rippleConfig_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rippleConfig_19), (void*)L_7);
		// }
		return;
	}
}
// System.Void MaterialUI.SwitchConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_Start_m6F2496BC6BFC59F98E732AC5020DC6579DBB7669 (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) 
{
	{
		// lastToggleInteractableState = toggle.interactable;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_20;
		NullCheck(L_0);
		bool L_1;
		L_1 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_0, NULL);
		__this->___lastToggleInteractableState_21 = L_1;
		// if (lastToggleInteractableState)
		bool L_2 = __this->___lastToggleInteractableState_21;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// if (lastToggleState != toggle.isOn)
		bool L_3 = __this->___lastToggleState_22;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = __this->___toggle_20;
		NullCheck(L_4);
		bool L_5;
		L_5 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_4, NULL);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0053;
		}
	}
	{
		// lastToggleState = toggle.isOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_6 = __this->___toggle_20;
		NullCheck(L_6);
		bool L_7;
		L_7 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_6, NULL);
		__this->___lastToggleState_22 = L_7;
		// if (lastToggleState)
		bool L_8 = __this->___lastToggleState_22;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// TurnOnSilent();
		SwitchConfig_TurnOnSilent_m03C45F12CBECEDA6E390120D3A83E33016B68738(__this, NULL);
		goto IL_0053;
	}

IL_004d:
	{
		// TurnOffSilent();
		SwitchConfig_TurnOffSilent_mE447C10C219609AA75D0B41D5DD2CB7E914F1206(__this, NULL);
	}

IL_0053:
	{
		// if (changeRippleColor)
		bool L_9 = __this->___changeRippleColor_13;
		if (!L_9)
		{
			goto IL_0071;
		}
	}
	{
		// rippleConfig.rippleColor = backImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_10 = __this->___rippleConfig_19;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___backImage_15;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_11);
		NullCheck(L_10);
		L_10->___rippleColor_8 = L_12;
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.SwitchConfig::ToggleSwitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_ToggleSwitch_mDC8F590C567A5B1633341243B9A46E74D84EF20E (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) 
{
	{
		// if (toggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_20;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// TurnOn ();
		SwitchConfig_TurnOn_m7E2F1BD63785D4FD7B797E886F042452DEE7B3CE(__this, NULL);
		return;
	}

IL_0014:
	{
		// TurnOff ();
		SwitchConfig_TurnOff_m33E49D5AED45CA74F6A7BF6184C056284995E69E(__this, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.SwitchConfig::TurnOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_TurnOn_m7E2F1BD63785D4FD7B797E886F042452DEE7B3CE (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) 
{
	{
		// currentSwitchPosition = switchRectTransform.anchoredPosition.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___switchRectTransform_17;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		float L_2 = L_1.___x_0;
		__this->___currentSwitchPosition_23 = L_2;
		// currentColor = switchImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___switchImage_14;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		__this->___currentColor_24 = L_4;
		// currentBackColor = backImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___backImage_15;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		__this->___currentBackColor_25 = L_6;
		// currentTextColor = text.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___text_16;
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		__this->___currentTextColor_26 = L_8;
		// animStartTime = Time.realtimeSinceStartup;
		float L_9;
		L_9 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_28 = L_9;
		// state = 1;
		__this->___state_27 = 1;
		// }
		return;
	}
}
// System.Void MaterialUI.SwitchConfig::TurnOnSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_TurnOnSilent_m03C45F12CBECEDA6E390120D3A83E33016B68738 (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) 
{
	{
		// if (switchRectTransform.anchoredPosition != new Vector2(8f, 0f))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___switchRectTransform_17;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (8.0f), (0.0f), /*hidden argument*/NULL);
		bool L_3;
		L_3 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// switchRectTransform.anchoredPosition = new Vector2(8f, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___switchRectTransform_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (8.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_4, L_5, NULL);
	}

IL_003b:
	{
		// if (lastToggleInteractableState)
		bool L_6 = __this->___lastToggleInteractableState_21;
		if (!L_6)
		{
			goto IL_0097;
		}
	}
	{
		// switchImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___switchImage_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___onColor_5;
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// backImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___backImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___onColor_5;
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// if (changeTextColor)
		bool L_11 = __this->___changeTextColor_10;
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		// text.color = onColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___text_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___onColor_5;
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
	}

IL_007e:
	{
		// if (changeRippleColor)
		bool L_14 = __this->___changeRippleColor_13;
		if (!L_14)
		{
			goto IL_0097;
		}
	}
	{
		// rippleConfig.rippleColor = onColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_15 = __this->___rippleConfig_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = __this->___onColor_5;
		NullCheck(L_15);
		L_15->___rippleColor_8 = L_16;
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.SwitchConfig::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_TurnOff_m33E49D5AED45CA74F6A7BF6184C056284995E69E (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) 
{
	{
		// currentSwitchPosition = switchRectTransform.anchoredPosition.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___switchRectTransform_17;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		float L_2 = L_1.___x_0;
		__this->___currentSwitchPosition_23 = L_2;
		// currentColor = switchImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___switchImage_14;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		__this->___currentColor_24 = L_4;
		// currentBackColor = backImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___backImage_15;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		__this->___currentBackColor_25 = L_6;
		// currentTextColor = text.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___text_16;
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		__this->___currentTextColor_26 = L_8;
		// animStartTime = Time.realtimeSinceStartup;
		float L_9;
		L_9 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_28 = L_9;
		// state = 2;
		__this->___state_27 = 2;
		// }
		return;
	}
}
// System.Void MaterialUI.SwitchConfig::TurnOffSilent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_TurnOffSilent_mE447C10C219609AA75D0B41D5DD2CB7E914F1206 (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) 
{
	{
		// backImage.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___backImage_15;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		// if (switchRectTransform.anchoredPosition != new Vector2(-8f, 0f))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___switchRectTransform_17;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (-8.0f), (0.0f), /*hidden argument*/NULL);
		bool L_4;
		L_4 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// switchRectTransform.anchoredPosition = new Vector2(-8f, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___switchRectTransform_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (-8.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_5, L_6, NULL);
	}

IL_0047:
	{
		// if (lastToggleInteractableState)
		bool L_7 = __this->___lastToggleInteractableState_21;
		if (!L_7)
		{
			goto IL_00a3;
		}
	}
	{
		// switchImage.color = offColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___switchImage_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___offColor_6;
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// backImage.color = backOffColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___backImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = __this->___backOffColor_8;
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// if (changeTextColor)
		bool L_12 = __this->___changeTextColor_10;
		if (!L_12)
		{
			goto IL_008a;
		}
	}
	{
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___text_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___textNormalColor_11;
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
	}

IL_008a:
	{
		// if (changeRippleColor)
		bool L_15 = __this->___changeRippleColor_13;
		if (!L_15)
		{
			goto IL_00a3;
		}
	}
	{
		// rippleConfig.rippleColor = backOffColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_16 = __this->___rippleConfig_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = __this->___backOffColor_8;
		NullCheck(L_16);
		L_16->___rippleColor_8 = L_17;
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.SwitchConfig::EnableSwitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_EnableSwitch_m02FCAC29BF986987F17928C6445BB339EF402DD1 (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) 
{
	{
		// if (toggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_20;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// switchImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___switchImage_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___onColor_5;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// backImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___backImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___onColor_5;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// if (changeTextColor)
		bool L_6 = __this->___changeTextColor_10;
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// text.color = onColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___text_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___onColor_5;
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		goto IL_0090;
	}

IL_004a:
	{
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___text_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___textNormalColor_11;
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		goto IL_0090;
	}

IL_005d:
	{
		// switchImage.color = offColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___switchImage_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___offColor_6;
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// backImage.color = backOffColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___backImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___backOffColor_8;
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___text_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = __this->___textNormalColor_11;
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
	}

IL_0090:
	{
		// checkBoxToggler.enabled = true;
		CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* L_17 = __this->___checkBoxToggler_18;
		NullCheck(L_17);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)1, NULL);
		// rippleConfig.enabled = true;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_18 = __this->___rippleConfig_19;
		NullCheck(L_18);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_18, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.SwitchConfig::DisableSwitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_DisableSwitch_mCE89920D03C7DEA8048DB1D35C88DDD90F096EEA (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) 
{
	{
		// switchImage.color = disabledColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___switchImage_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___disabledColor_7;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// backImage.color = backDisabledColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___backImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___backDisabledColor_9;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// text.color = disabledColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___text_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___disabledColor_7;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// checkBoxToggler.enabled = false;
		CheckBoxToggler_tC13CBC3B56429E96065576BCEA8052EFF23EC626* L_6 = __this->___checkBoxToggler_18;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// rippleConfig.enabled = false;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_7 = __this->___rippleConfig_19;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.SwitchConfig::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig_Update_m92091134BEF03DFA69C73D6C30E532B045A6A930 (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) 
{
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = __this->___animStartTime_28;
		__this->___animDeltaTime_29 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (state == 1)
		int32_t L_2 = __this->___state_27;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_018a;
		}
	}
	{
		// if (animDeltaTime <= animationDuration)
		float L_3 = __this->___animDeltaTime_29;
		float L_4 = __this->___animationDuration_4;
		if ((!(((float)L_3) <= ((float)L_4))))
		{
			goto IL_0110;
		}
	}
	{
		// switchRectTransform.anchoredPosition = Anim.Quint.SoftOut(new Vector2(currentSwitchPosition, 0f), new Vector2(8f, 0f), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___switchRectTransform_17;
		float L_6 = __this->___currentSwitchPosition_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_6, (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), (8.0f), (0.0f), /*hidden argument*/NULL);
		float L_9 = __this->___animDeltaTime_29;
		float L_10 = __this->___animationDuration_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Quint_SoftOut_mE8D976284483F0B8ABEA315245D50293CFC89352(L_7, L_8, L_9, L_10, NULL);
		NullCheck(L_5);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_5, L_11, NULL);
		// switchImage.color = Anim.Quint.SoftOut(currentColor, onColor, animDeltaTime, animationDuration);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___switchImage_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___currentColor_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___onColor_5;
		float L_15 = __this->___animDeltaTime_29;
		float L_16 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2(L_13, L_14, L_15, L_16, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_17);
		// backImage.color = Anim.Quint.SoftOut(currentBackColor, onColor, animDeltaTime, animationDuration);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___backImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = __this->___currentBackColor_25;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = __this->___onColor_5;
		float L_21 = __this->___animDeltaTime_29;
		float L_22 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2(L_19, L_20, L_21, L_22, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_23);
		// if (changeTextColor)
		bool L_24 = __this->___changeTextColor_10;
		if (!L_24)
		{
			goto IL_00ea;
		}
	}
	{
		// text.color = Anim.Quint.SoftOut(currentTextColor, onColor, animDeltaTime, animationDuration);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___text_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = __this->___currentTextColor_26;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = __this->___onColor_5;
		float L_28 = __this->___animDeltaTime_29;
		float L_29 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2(L_26, L_27, L_28, L_29, NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_30);
	}

IL_00ea:
	{
		// if (changeRippleColor)
		bool L_31 = __this->___changeRippleColor_13;
		if (!L_31)
		{
			goto IL_0312;
		}
	}
	{
		// rippleConfig.rippleColor = switchImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_32 = __this->___rippleConfig_19;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = __this->___switchImage_14;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_33);
		NullCheck(L_32);
		L_32->___rippleColor_8 = L_34;
		goto IL_0312;
	}

IL_0110:
	{
		// switchRectTransform.anchoredPosition = new Vector2(8f, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_35 = __this->___switchRectTransform_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_36), (8.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_35, L_36, NULL);
		// switchImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = __this->___switchImage_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = __this->___onColor_5;
		NullCheck(L_37);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_37, L_38);
		// backImage.color = onColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39 = __this->___backImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40 = __this->___onColor_5;
		NullCheck(L_39);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_39, L_40);
		// if (changeTextColor)
		bool L_41 = __this->___changeTextColor_10;
		if (!L_41)
		{
			goto IL_0165;
		}
	}
	{
		// text.color = onColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_42 = __this->___text_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = __this->___onColor_5;
		NullCheck(L_42);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_42, L_43);
	}

IL_0165:
	{
		// if (changeRippleColor)
		bool L_44 = __this->___changeRippleColor_13;
		if (!L_44)
		{
			goto IL_017e;
		}
	}
	{
		// rippleConfig.rippleColor = onColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_45 = __this->___rippleConfig_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46 = __this->___onColor_5;
		NullCheck(L_45);
		L_45->___rippleColor_8 = L_46;
	}

IL_017e:
	{
		// state = 0;
		__this->___state_27 = 0;
		goto IL_0312;
	}

IL_018a:
	{
		// else if (state == 2)
		int32_t L_47 = __this->___state_27;
		if ((!(((uint32_t)L_47) == ((uint32_t)2))))
		{
			goto IL_0312;
		}
	}
	{
		// if (animDeltaTime <= animationDuration * 0.75f)
		float L_48 = __this->___animDeltaTime_29;
		float L_49 = __this->___animationDuration_4;
		if ((!(((float)L_48) <= ((float)((float)il2cpp_codegen_multiply(L_49, (0.75f)))))))
		{
			goto IL_029d;
		}
	}
	{
		// switchRectTransform.anchoredPosition = Anim.Quint.SoftOut(new Vector2(currentSwitchPosition, 0f), new Vector2(-8f, 0f), animDeltaTime, animationDuration);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50 = __this->___switchRectTransform_17;
		float L_51 = __this->___currentSwitchPosition_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), L_51, (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_53), (-8.0f), (0.0f), /*hidden argument*/NULL);
		float L_54 = __this->___animDeltaTime_29;
		float L_55 = __this->___animationDuration_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		L_56 = Quint_SoftOut_mE8D976284483F0B8ABEA315245D50293CFC89352(L_52, L_53, L_54, L_55, NULL);
		NullCheck(L_50);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_50, L_56, NULL);
		// switchImage.color = Anim.Sept.InOut(currentColor, offColor, animDeltaTime, animationDuration * 0.75f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_57 = __this->___switchImage_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58 = __this->___currentColor_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59 = __this->___offColor_6;
		float L_60 = __this->___animDeltaTime_29;
		float L_61 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_62;
		L_62 = Sept_InOut_m446BE1F1757BF0591F1F052F9C0031165BB5812D(L_58, L_59, L_60, ((float)il2cpp_codegen_multiply(L_61, (0.75f))), NULL);
		NullCheck(L_57);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_57, L_62);
		// backImage.color = Anim.Sept.InOut(currentBackColor, backOffColor, animDeltaTime, animationDuration * 0.75f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_63 = __this->___backImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_64 = __this->___currentBackColor_25;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_65 = __this->___backOffColor_8;
		float L_66 = __this->___animDeltaTime_29;
		float L_67 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_68;
		L_68 = Sept_InOut_m446BE1F1757BF0591F1F052F9C0031165BB5812D(L_64, L_65, L_66, ((float)il2cpp_codegen_multiply(L_67, (0.75f))), NULL);
		NullCheck(L_63);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_63, L_68);
		// if (changeTextColor)
		bool L_69 = __this->___changeTextColor_10;
		if (!L_69)
		{
			goto IL_027a;
		}
	}
	{
		// text.color = Anim.Quint.SoftOut(currentTextColor, textNormalColor, animDeltaTime, animationDuration * 0.75f);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_70 = __this->___text_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_71 = __this->___currentTextColor_26;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_72 = __this->___textNormalColor_11;
		float L_73 = __this->___animDeltaTime_29;
		float L_74 = __this->___animationDuration_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_75;
		L_75 = Quint_SoftOut_mFA60F3D6B397954DA5904EFEDC0EEC8758CABAA2(L_71, L_72, L_73, ((float)il2cpp_codegen_multiply(L_74, (0.75f))), NULL);
		NullCheck(L_70);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_70, L_75);
	}

IL_027a:
	{
		// if (changeRippleColor)
		bool L_76 = __this->___changeRippleColor_13;
		if (!L_76)
		{
			goto IL_0312;
		}
	}
	{
		// rippleConfig.rippleColor = switchImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_77 = __this->___rippleConfig_19;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_78 = __this->___switchImage_14;
		NullCheck(L_78);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79;
		L_79 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_78);
		NullCheck(L_77);
		L_77->___rippleColor_8 = L_79;
		goto IL_0312;
	}

IL_029d:
	{
		// switchRectTransform.anchoredPosition = new Vector2(-8f, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_80 = __this->___switchRectTransform_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_81), (-8.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_80);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_80, L_81, NULL);
		// switchImage.color = offColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_82 = __this->___switchImage_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_83 = __this->___offColor_6;
		NullCheck(L_82);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_82, L_83);
		// backImage.color = backOffColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_84 = __this->___backImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_85 = __this->___backOffColor_8;
		NullCheck(L_84);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_84, L_85);
		// if (changeTextColor)
		bool L_86 = __this->___changeTextColor_10;
		if (!L_86)
		{
			goto IL_02f2;
		}
	}
	{
		// text.color = textNormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_87 = __this->___text_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_88 = __this->___textNormalColor_11;
		NullCheck(L_87);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_87, L_88);
	}

IL_02f2:
	{
		// if (changeRippleColor)
		bool L_89 = __this->___changeRippleColor_13;
		if (!L_89)
		{
			goto IL_030b;
		}
	}
	{
		// rippleConfig.rippleColor = backOffColor;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_90 = __this->___rippleConfig_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_91 = __this->___backOffColor_8;
		NullCheck(L_90);
		L_90->___rippleColor_8 = L_91;
	}

IL_030b:
	{
		// state = 0;
		__this->___state_27 = 0;
	}

IL_0312:
	{
		// if (lastToggleInteractableState != toggle.interactable)
		bool L_92 = __this->___lastToggleInteractableState_21;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_93 = __this->___toggle_20;
		NullCheck(L_93);
		bool L_94;
		L_94 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_93, NULL);
		if ((((int32_t)L_92) == ((int32_t)L_94)))
		{
			goto IL_034c;
		}
	}
	{
		// lastToggleInteractableState = toggle.interactable;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_95 = __this->___toggle_20;
		NullCheck(L_95);
		bool L_96;
		L_96 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_95, NULL);
		__this->___lastToggleInteractableState_21 = L_96;
		// if (lastToggleInteractableState)
		bool L_97 = __this->___lastToggleInteractableState_21;
		if (!L_97)
		{
			goto IL_0346;
		}
	}
	{
		// EnableSwitch();
		SwitchConfig_EnableSwitch_m02FCAC29BF986987F17928C6445BB339EF402DD1(__this, NULL);
		goto IL_034c;
	}

IL_0346:
	{
		// DisableSwitch();
		SwitchConfig_DisableSwitch_mCE89920D03C7DEA8048DB1D35C88DDD90F096EEA(__this, NULL);
	}

IL_034c:
	{
		// if (!Application.isPlaying)
		bool L_98;
		L_98 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_98)
		{
			goto IL_03ab;
		}
	}
	{
		// if (lastToggleState != toggle.isOn)
		bool L_99 = __this->___lastToggleState_22;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_100 = __this->___toggle_20;
		NullCheck(L_100);
		bool L_101;
		L_101 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_100, NULL);
		if ((((int32_t)L_99) == ((int32_t)L_101)))
		{
			goto IL_038d;
		}
	}
	{
		// lastToggleState = toggle.isOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_102 = __this->___toggle_20;
		NullCheck(L_102);
		bool L_103;
		L_103 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_102, NULL);
		__this->___lastToggleState_22 = L_103;
		// if (lastToggleState)
		bool L_104 = __this->___lastToggleState_22;
		if (!L_104)
		{
			goto IL_0387;
		}
	}
	{
		// TurnOnSilent();
		SwitchConfig_TurnOnSilent_m03C45F12CBECEDA6E390120D3A83E33016B68738(__this, NULL);
		goto IL_038d;
	}

IL_0387:
	{
		// TurnOffSilent();
		SwitchConfig_TurnOffSilent_mE447C10C219609AA75D0B41D5DD2CB7E914F1206(__this, NULL);
	}

IL_038d:
	{
		// if (changeRippleColor)
		bool L_105 = __this->___changeRippleColor_13;
		if (!L_105)
		{
			goto IL_03ab;
		}
	}
	{
		// rippleConfig.rippleColor = switchImage.color;
		RippleConfig_tEE6D26063F29AA82E2BDBB335291503F3F9C3749* L_106 = __this->___rippleConfig_19;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_107 = __this->___switchImage_14;
		NullCheck(L_107);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_108;
		L_108 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_107);
		NullCheck(L_106);
		L_106->___rippleColor_8 = L_108;
	}

IL_03ab:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.SwitchConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchConfig__ctor_m23A47109F1902C2DB5A836E029C94CA1FACDF81F (SwitchConfig_tBA230960A7A487406A040573DDFCFA97B91464C6* __this, const RuntimeMethod* method) 
{
	{
		// public float animationDuration = 0.5f;
		__this->___animationDuration_4 = (0.5f);
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
// System.Void MaterialUI.TextInputLine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInputLine_Start_m5051068E25634689611B16111478D934DDF897C7 (TextInputLine_t212804154FD57E38FF5ABAFABD027E8F44CCDF58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisRect = gameObject.GetComponent<RectTransform> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___thisRect_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisRect_5), (void*)L_1);
		// thisIm = gameObject.GetComponent<Image> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___thisIm_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisIm_6), (void*)L_3);
		// thisRect.sizeDelta = new Vector2 (textInputRect.sizeDelta.x, 3f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___thisRect_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___textInputRect_8;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_5, NULL);
		float L_7 = L_6.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_7, (3.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_4, L_8, NULL);
		// thisRect.localScale = new Vector3 (0f, 1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___thisRect_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.TextInputLine::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInputLine_Activate_m979D96A9B458DB5A99469676702DA62D96388BEE (TextInputLine_t212804154FD57E38FF5ABAFABD027E8F44CCDF58* __this, const RuntimeMethod* method) 
{
	{
		// thisRect.position = Input.mousePosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___thisRect_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// thisRect.anchoredPosition = new Vector2 (thisRect.anchoredPosition.x, -1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___thisRect_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___thisRect_5;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_3, NULL);
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_5, (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_6, NULL);
		// thisIm.color = lineColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___thisIm_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___lineColor_4;
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// thisRect.localScale = new Vector3 (0f, 1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___thisRect_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// animPosX = thisRect.anchoredPosition.x;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___thisRect_5;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_11, NULL);
		float L_13 = L_12.___x_0;
		__this->___animPosX_11 = L_13;
		// animStartTime = Time.realtimeSinceStartup;
		float L_14;
		L_14 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_9 = L_14;
		// mode = 1;
		__this->___mode_12 = 1;
		// }
		return;
	}
}
// System.Void MaterialUI.TextInputLine::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInputLine_Deactivate_m771E697E616E8D08B0E24519F586FC201116F65A (TextInputLine_t212804154FD57E38FF5ABAFABD027E8F44CCDF58* __this, const RuntimeMethod* method) 
{
	{
		// animStartTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___animStartTime_9 = L_0;
		// mode = 2;
		__this->___mode_12 = 2;
		// }
		return;
	}
}
// System.Void MaterialUI.TextInputLine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInputLine_Update_mAE47DCBD430DD217558F8273BC9B8ED031238081 (TextInputLine_t212804154FD57E38FF5ABAFABD027E8F44CCDF58* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// animDeltaTime = Time.realtimeSinceStartup - animStartTime;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = __this->___animStartTime_9;
		__this->___animDeltaTime_10 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (mode == 1)
		int32_t L_2 = __this->___mode_12;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_00e5;
		}
	}
	{
		// if (animDeltaTime <= 1f)
		float L_3 = __this->___animDeltaTime_10;
		if ((!(((float)L_3) <= ((float)(1.0f)))))
		{
			goto IL_00dd;
		}
	}
	{
		// tempVec2 = thisRect.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___thisRect_5;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_4, NULL);
		V_0 = L_5;
		// tempVec2.x = Anim.Quint.Out (animPosX, 0f, animDeltaTime, 0.5f);
		float L_6 = __this->___animPosX_11;
		float L_7 = __this->___animDeltaTime_10;
		float L_8;
		L_8 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7(L_6, (0.0f), L_7, (0.5f), NULL);
		(&V_0)->___x_0 = L_8;
		// thisRect.anchoredPosition = tempVec2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___thisRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_9, L_10, NULL);
		// tempVec3 = thisRect.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___thisRect_5;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_11, NULL);
		V_1 = L_12;
		// tempVec3.x = Anim.Quint.Out (0f, 1f, animDeltaTime, 0.5f);
		float L_13 = __this->___animDeltaTime_10;
		float L_14;
		L_14 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((0.0f), (1.0f), L_13, (0.5f), NULL);
		(&V_1)->___x_2 = L_14;
		// thisRect.localScale = tempVec3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___thisRect_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		NullCheck(L_15);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_15, L_16, NULL);
		// placeholderText.color = Color.Lerp( new Color (0f, 0f, 0f, 0.3764f), lineColor, animDeltaTime * 2f);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___placeholderText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_18), (0.0f), (0.0f), (0.0f), (0.376399994f), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = __this->___lineColor_4;
		float L_20 = __this->___animDeltaTime_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_18, L_19, ((float)il2cpp_codegen_multiply(L_20, (2.0f))), NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_21);
		return;
	}

IL_00dd:
	{
		// mode = 0;
		__this->___mode_12 = 0;
		return;
	}

IL_00e5:
	{
		// else if (mode == 2)
		int32_t L_22 = __this->___mode_12;
		if ((!(((uint32_t)L_22) == ((uint32_t)2))))
		{
			goto IL_017a;
		}
	}
	{
		// if (animDeltaTime <= 1f)
		float L_23 = __this->___animDeltaTime_10;
		if ((!(((float)L_23) <= ((float)(1.0f)))))
		{
			goto IL_0173;
		}
	}
	{
		// tempCol = thisIm.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___thisIm_6;
		NullCheck(L_24);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_24);
		V_2 = L_25;
		// tempCol.a = Anim.Quint.Out (1f, 0f, animDeltaTime, 0.5f);
		float L_26 = __this->___animDeltaTime_10;
		float L_27;
		L_27 = Quint_Out_mE8827B70140CD3A0196798F2881ECD38C7DA97A7((1.0f), (0.0f), L_26, (0.5f), NULL);
		(&V_2)->___a_3 = L_27;
		// thisIm.color = tempCol;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___thisIm_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_2;
		NullCheck(L_28);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_28, L_29);
		// placeholderText.color = Color.Lerp(lineColor, new Color (0f, 0f, 0f, 0.3764f), animDeltaTime * 2f);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___placeholderText_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = __this->___lineColor_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		memset((&L_32), 0, sizeof(L_32));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_32), (0.0f), (0.0f), (0.0f), (0.376399994f), /*hidden argument*/NULL);
		float L_33 = __this->___animDeltaTime_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_31, L_32, ((float)il2cpp_codegen_multiply(L_33, (2.0f))), NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_30, L_34);
		return;
	}

IL_0173:
	{
		// mode = 0;
		__this->___mode_12 = 0;
	}

IL_017a:
	{
		// }
		return;
	}
}
// System.Void MaterialUI.TextInputLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInputLine__ctor_m71704690FBE5768C19172E07A005E65CF989EE22 (TextInputLine_t212804154FD57E38FF5ABAFABD027E8F44CCDF58* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.ToastAnim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastAnim_Start_mD1D4CFE0AA39B69E7AB499CAA17CD49CA5CC48CC (ToastAnim_t6E91644F45C4CBCFB16840A94A43BBE4D66F979B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onPos = new Vector2 (Screen.width / 2, (Screen.height / 8));
		int32_t L_0;
		L_0 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), ((float)((int32_t)(L_0/2))), ((float)((int32_t)(L_1/8))), /*hidden argument*/NULL);
		__this->___onPos_5 = L_2;
		// offPos = new Vector2 (Screen.width / 2, Screen.height / 10);
		int32_t L_3;
		L_3 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_4;
		L_4 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), ((float)((int32_t)(L_3/2))), ((float)((int32_t)(L_4/((int32_t)10)))), /*hidden argument*/NULL);
		__this->___offPos_6 = L_5;
		// thisRect.position = offPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___thisRect_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___offPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_7, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_8, NULL);
		// timeToWait = ToastControl.toastDuration;
		float L_9 = ((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___toastDuration_2;
		__this->___timeToWait_15 = L_9;
		// text.text = ToastControl.toastText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___text_7;
		String_t* L_11 = ((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___toastText_1;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		// panelImage.color = ToastControl.toastPanelColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___panelImage_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___toastPanelColor_3;
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		// text.color = ToastControl.toastTextColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___text_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___toastTextColor_4;
		NullCheck(L_14);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_15);
		// text.fontSize = ToastControl.toastFontSize;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___text_7;
		int32_t L_17 = ((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___toastFontSize_5;
		NullCheck(L_16);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_16, L_17, NULL);
		// transform.SetParent(ToastControl.parentCanvas.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_19 = ((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___parentCanvas_6;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_18);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_18, L_20, NULL);
		// transform.localScale = new Vector3 (1, 1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_21, L_22, NULL);
		// canvasGroup.alpha = 0;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_23 = __this->___canvasGroup_11;
		NullCheck(L_23);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_23, (0.0f), NULL);
		// state = 1;
		__this->___state_4 = 1;
		// }
		return;
	}
}
// System.Void MaterialUI.ToastAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastAnim_Update_m6A3DD7AB687A6A5FB6D4CDE08E7086FFE92FFB6C (ToastAnim_t6E91644F45C4CBCFB16840A94A43BBE4D66F979B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (state == 1)
		int32_t L_0 = __this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_00e1;
		}
	}
	{
		// if (thisRect.position.y < onPos.y)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___thisRect_8;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___onPos_5);
		float L_5 = L_4->___y_1;
		if ((!(((float)L_3) < ((float)L_5))))
		{
			goto IL_00bd;
		}
	}
	{
		// tempVec2 = thisRect.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___thisRect_8;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_7, NULL);
		__this->___tempVec2_13 = L_8;
		// tempVec2.y = Mathf.Lerp(tempVec2.y, onPos.y * 1.01f, Time.deltaTime * animSpeed);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = (&__this->___tempVec2_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___tempVec2_13);
		float L_11 = L_10->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___onPos_5);
		float L_13 = L_12->___y_1;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_15 = __this->___animSpeed_16;
		float L_16;
		L_16 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_11, ((float)il2cpp_codegen_multiply(L_13, (1.00999999f))), ((float)il2cpp_codegen_multiply(L_14, L_15)), NULL);
		L_9->___y_1 = L_16;
		// thisRect.position = tempVec2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->___thisRect_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = __this->___tempVec2_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_18, NULL);
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_19, NULL);
		// canvasGroup.alpha = Mathf.Lerp (canvasGroup.alpha, 1.01f, Time.deltaTime * animSpeed);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_20 = __this->___canvasGroup_11;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_21 = __this->___canvasGroup_11;
		NullCheck(L_21);
		float L_22;
		L_22 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_21, NULL);
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_24 = __this->___animSpeed_16;
		float L_25;
		L_25 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_22, (1.00999999f), ((float)il2cpp_codegen_multiply(L_23, L_24)), NULL);
		NullCheck(L_20);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_20, L_25, NULL);
		return;
	}

IL_00bd:
	{
		// thisRect.position = onPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = __this->___thisRect_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->___onPos_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_27, NULL);
		NullCheck(L_26);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_28, NULL);
		// StartCoroutine(WaitTime());
		RuntimeObject* L_29;
		L_29 = ToastAnim_WaitTime_mCDE1A229501919FA64E8514D1896DFF631122A75(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_30;
		L_30 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_29, NULL);
		return;
	}

IL_00e1:
	{
		// else if (state == 2)
		int32_t L_31 = __this->___state_4;
		if ((!(((uint32_t)L_31) == ((uint32_t)2))))
		{
			goto IL_01a9;
		}
	}
	{
		// if (thisRect.position.y > offPos.y)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32 = __this->___thisRect_8;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		float L_34 = L_33.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = (&__this->___offPos_6);
		float L_36 = L_35->___y_1;
		if ((!(((float)L_34) > ((float)L_36))))
		{
			goto IL_019e;
		}
	}
	{
		// tempVec2 = thisRect.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37 = __this->___thisRect_8;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_38, NULL);
		__this->___tempVec2_13 = L_39;
		// tempVec2.y = Mathf.Lerp(tempVec2.y, offPos.y * 0.99f, Time.deltaTime * animSpeed);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = (&__this->___tempVec2_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_41 = (&__this->___tempVec2_13);
		float L_42 = L_41->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&__this->___offPos_6);
		float L_44 = L_43->___y_1;
		float L_45;
		L_45 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_46 = __this->___animSpeed_16;
		float L_47;
		L_47 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_42, ((float)il2cpp_codegen_multiply(L_44, (0.99000001f))), ((float)il2cpp_codegen_multiply(L_45, L_46)), NULL);
		L_40->___y_1 = L_47;
		// thisRect.position = tempVec2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_48 = __this->___thisRect_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = __this->___tempVec2_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_49, NULL);
		NullCheck(L_48);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_48, L_50, NULL);
		// canvasGroup.alpha = Mathf.Lerp (canvasGroup.alpha, -0.01f, Time.deltaTime * animSpeed);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_51 = __this->___canvasGroup_11;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_52 = __this->___canvasGroup_11;
		NullCheck(L_52);
		float L_53;
		L_53 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_52, NULL);
		float L_54;
		L_54 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_55 = __this->___animSpeed_16;
		float L_56;
		L_56 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_53, (-0.00999999978f), ((float)il2cpp_codegen_multiply(L_54, L_55)), NULL);
		NullCheck(L_51);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_51, L_56, NULL);
		return;
	}

IL_019e:
	{
		// Destroy (gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_57, NULL);
	}

IL_01a9:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MaterialUI.ToastAnim::WaitTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToastAnim_WaitTime_mCDE1A229501919FA64E8514D1896DFF631122A75 (ToastAnim_t6E91644F45C4CBCFB16840A94A43BBE4D66F979B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B* L_0 = (U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B*)il2cpp_codegen_object_new(U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitTimeU3Ed__15__ctor_m5F623D85B46D1132AAB05BEA3A536C2573F43FF0(L_0, 0, NULL);
		U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MaterialUI.ToastAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastAnim__ctor_mDB4B696402117AA248994850F49CF2F9D46F9665 (ToastAnim_t6E91644F45C4CBCFB16840A94A43BBE4D66F979B* __this, const RuntimeMethod* method) 
{
	{
		// float animSpeed = 6f;
		__this->___animSpeed_16 = (6.0f);
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
// System.Void MaterialUI.ToastAnim/<WaitTime>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitTimeU3Ed__15__ctor_m5F623D85B46D1132AAB05BEA3A536C2573F43FF0 (U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MaterialUI.ToastAnim/<WaitTime>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitTimeU3Ed__15_System_IDisposable_Dispose_mC433ACC777FB94A4AE98D23E38B6B1E19DD44839 (U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MaterialUI.ToastAnim/<WaitTime>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitTimeU3Ed__15_MoveNext_m802FFFB27D7E7ED2BDD26BD20972A22DB482E9CC (U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ToastAnim_t6E91644F45C4CBCFB16840A94A43BBE4D66F979B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ToastAnim_t6E91644F45C4CBCFB16840A94A43BBE4D66F979B* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(timeToWait);
		ToastAnim_t6E91644F45C4CBCFB16840A94A43BBE4D66F979B* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___timeToWait_15;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// state = 2;
		ToastAnim_t6E91644F45C4CBCFB16840A94A43BBE4D66F979B* L_7 = V_1;
		NullCheck(L_7);
		L_7->___state_4 = 2;
		// }
		return (bool)0;
	}
}
// System.Object MaterialUI.ToastAnim/<WaitTime>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitTimeU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD11FF8D28D18180E0A8FE4D1A9E8DB74264E3E9C (U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MaterialUI.ToastAnim/<WaitTime>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitTimeU3Ed__15_System_Collections_IEnumerator_Reset_m4E8D598D87563D009C21BE09C314CD01FCA2FD29 (U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitTimeU3Ed__15_System_Collections_IEnumerator_Reset_m4E8D598D87563D009C21BE09C314CD01FCA2FD29_RuntimeMethod_var)));
	}
}
// System.Object MaterialUI.ToastAnim/<WaitTime>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitTimeU3Ed__15_System_Collections_IEnumerator_get_Current_mD3E79826BAB43202ED29061263F82AE387BCF74C (U3CWaitTimeU3Ed__15_tB89D6F60EC7EDC8D0446DCEB9099C0DE49EACF0B* __this, const RuntimeMethod* method) 
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
// System.Void MaterialUI.ToastControl::InitToastSystem(UnityEngine.Canvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastControl_InitToastSystem_mA65233BEB8C72DDDE7D3E5DAA7FE60C16DC2294E (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___0_theCanvas, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB22F96B242BE73256217C026D1F667896032FDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theToast = Resources.Load ("Toast", typeof(GameObject)) as GameObject;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(_stringLiteralCB22F96B242BE73256217C026D1F667896032FDA, L_1, NULL);
		((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___theToast_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___theToast_0), (void*)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
		// parentCanvas = theCanvas;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = ___0_theCanvas;
		((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___parentCanvas_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___parentCanvas_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void MaterialUI.ToastControl::MakeToast(System.String,System.Single,UnityEngine.Color,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToastControl_MakeToast_m93BD3413DEB9436B91E945E668AD58E025B28E19 (String_t* ___0_content, float ___1_duration, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_panelColor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_textColor, int32_t ___4_fontSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toastText = content;
		String_t* L_0 = ___0_content;
		((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___toastText_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___toastText_1), (void*)L_0);
		// toastDuration = duration;
		float L_1 = ___1_duration;
		((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___toastDuration_2 = L_1;
		// toastPanelColor = panelColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___2_panelColor;
		((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___toastPanelColor_3 = L_2;
		// toastTextColor = textColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___3_textColor;
		((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___toastTextColor_4 = L_3;
		// toastFontSize = fontSize;
		int32_t L_4 = ___4_fontSize;
		((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___toastFontSize_5 = L_4;
		// GameObject.Instantiate (theToast);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_StaticFields*)il2cpp_codegen_static_fields_for(ToastControl_t73316ECDA8859C1336FE182E2C64721D954E0551_il2cpp_TypeInfo_var))->___theToast_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// }
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
// System.Void MaterialUI.Toaster::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toaster_Start_mB32B03FC4CD2182F2EC5DCE6CCE208BE9A8B7EDE (Toaster_t67BA5E50D59D9D7582E30E3AFEB4DC2EC5574439* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ToastControl.InitToastSystem (gameObject.GetComponentInParent<Canvas>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1;
		L_1 = GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991(L_0, GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991_RuntimeMethod_var);
		ToastControl_InitToastSystem_mA65233BEB8C72DDDE7D3E5DAA7FE60C16DC2294E(L_1, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.Toaster::PopupToast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toaster_PopupToast_m129211F64F33F3D34665A72E6B2E809BBF13E59A (Toaster_t67BA5E50D59D9D7582E30E3AFEB4DC2EC5574439* __this, const RuntimeMethod* method) 
{
	{
		// ToastControl.MakeToast (text, duration, panelColor, textColor, fontSize);
		String_t* L_0 = __this->___text_4;
		float L_1 = __this->___duration_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___panelColor_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___textColor_7;
		int32_t L_4 = __this->___fontSize_8;
		ToastControl_MakeToast_m93BD3413DEB9436B91E945E668AD58E025B28E19(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.Toaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toaster__ctor_m8CFA77028522A7A669C3756CB9186D1879E5E8A3 (Toaster_t67BA5E50D59D9D7582E30E3AFEB4DC2EC5574439* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral800CA8F02BAF81AD4EE3B052BFFA745ADA0E00CB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string text = "This is a toast";
		__this->___text_4 = _stringLiteral800CA8F02BAF81AD4EE3B052BFFA745ADA0E00CB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_4), (void*)_stringLiteral800CA8F02BAF81AD4EE3B052BFFA745ADA0E00CB);
		// public float duration = 1.5f;
		__this->___duration_5 = (1.5f);
		// public Color panelColor = new Color (1f, 1f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_0), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___panelColor_6 = L_0;
		// public Color textColor = new Color (0.15f, 0.15f, 0.15f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (0.150000006f), (0.150000006f), (0.150000006f), /*hidden argument*/NULL);
		__this->___textColor_7 = L_1;
		// public int fontSize = 16;
		__this->___fontSize_8 = ((int32_t)16);
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
// System.Void MaterialUI.ToggleConfig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleConfig_Start_m7F111B83594E4C1B617A8D85AC914DE995ED00ED (ToggleConfig_tE30AB181A736B6C13168B34FA7B1C4F85324A18D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m5B183CEC40C6D124CD6B9AB842C1E9E8CA972E4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theSlider = gameObject.GetComponentInChildren<Slider> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1;
		L_1 = GameObject_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m5B183CEC40C6D124CD6B9AB842C1E9E8CA972E4B(L_0, GameObject_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m5B183CEC40C6D124CD6B9AB842C1E9E8CA972E4B_RuntimeMethod_var);
		__this->___theSlider_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theSlider_4), (void*)L_1);
		// theToggle = gameObject.GetComponent<Toggle> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3;
		L_3 = GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17(L_2, GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		__this->___theToggle_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theToggle_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void MaterialUI.ToggleConfig::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleConfig_OnPointerUp_m58C13BD4D922237A6511DF46F1F2BA2508B85697 (ToggleConfig_tE30AB181A736B6C13168B34FA7B1C4F85324A18D* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_data, const RuntimeMethod* method) 
{
	{
		// if (theSlider.value > 0.5f)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___theSlider_4;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		if ((!(((float)L_1) > ((float)(0.5f)))))
		{
			goto IL_001f;
		}
	}
	{
		// theToggle.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = __this->___theToggle_5;
		NullCheck(L_2);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_2, (bool)1, NULL);
		return;
	}

IL_001f:
	{
		// theToggle.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___theToggle_5;
		NullCheck(L_3);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MaterialUI.ToggleConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleConfig__ctor_m3C1FB3DD62C714660F067478E58951C9A129A40B (ToggleConfig_tE30AB181A736B6C13168B34FA7B1C4F85324A18D* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CanvasScaler_get_uiScaleMode_m8E92609E011796E8CC23B1739F95CE7BE2631525_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) 
{
	{
		// public ScaleMode uiScaleMode { get { return m_UiScaleMode; } set { m_UiScaleMode = value; } }
		int32_t L_0 = __this->___m_UiScaleMode_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CanvasScaler_get_referenceResolution_m79C03DD8CE6759B045928C5339A3C5E6220276B5_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) 
{
	{
		// return m_ReferenceResolution;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_ReferenceResolution_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MaterialUIScaler_set_scaleFactor_mBF1565B38029BD9B57F1E14247410963043C30DD_inline (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float scaleFactor { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CscaleFactorU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CanvasScaler_get_scaleFactor_mB2BFA22B99AEC96F09886F490DA9EE2F825D3431_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) 
{
	{
		// public float scaleFactor { get { return m_ScaleFactor; } set { m_ScaleFactor = Mathf.Max(0.01f, value); } }
		float L_0 = __this->___m_ScaleFactor_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 delta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CdeltaU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Interactable; }
		bool L_0 = __this->___m_Interactable_12;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MaterialUIScaler_get_scaleFactor_m853F366519FCBD659D04D6BFA0C3AE48D17319C0_inline (MaterialUIScaler_tFFEF9ECD82C37824347729B3C03A3F128BBAD93F* __this, const RuntimeMethod* method) 
{
	{
		// public float scaleFactor { get; private set; }
		float L_0 = __this->___U3CscaleFactorU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
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
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_mD0296202733CB2D5342FB7C82B48AEDA63036758_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_b;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_a;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___1_b;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_a;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_b;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_a;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___1_b;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PickItem_Invoke_mD3F22F8AE04006B6DDEA1E911514886E2762E028_inline (PickItem_t4C461E66CD17D6BFB78012D6739A8E4C84B27EE2* __this, int32_t ___0_itemId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_itemId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_a;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_b;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___r_0;
		float L_8 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___1_b;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_a;
		float L_14 = L_13.___g_1;
		float L_15 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___0_a;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___1_b;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___0_a;
		float L_21 = L_20.___b_2;
		float L_22 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___0_a;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___1_b;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___0_a;
		float L_28 = L_27.___a_3;
		float L_29 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
