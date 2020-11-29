#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Pathfinding.Connection[]
struct ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679;
// Pathfinding.GraphNode
struct GraphNode_t73CF0508F65800B2AA5FEEC4833B012A8EC79BC8;
// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_tF76FA858B119856992465E0C43E0AC1DA6AE4F39;
// Pathfinding.GraphUpdateProcessor/GUOSingle[]
struct GUOSingleU5BU5D_tE4141A46A423610509D84978B9302FDA023F60F6;
// Pathfinding.IUpdatableGraph
struct IUpdatableGraph_t5477925ABBB42C3E674E0B87727AA0D68322DC99;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action[]
struct ActionU5BU5D_t3A8459FA8B62CBF2720A27FCE8B9896BBE353EF6;
// System.Action`1<UnityEngine.Experimental.Input.InputAction/CallbackContext>
struct Action_1_t5E9BD83383A888E9B2A62020905FD9E8A2BA8E62;
// System.Action`1<UnityEngine.Experimental.Input.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t566951EEAFCC73617D79F304CB50B41C5A2DCBE4;
// System.Action`1<UnityEngine.Experimental.Input.InputActionRebindingExtensions/RebindingOperation>
struct Action_1_t28B7D26FFB0BA741BD353A09E30DDE21AED38A90;
// System.Action`1<UnityEngine.Experimental.Input.InputUpdateType>
struct Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493;
// System.Action`1<UnityEngine.Experimental.Input.InputUpdateType>[]
struct Action_1U5BU5D_t3A58FD51D199969C91D2B5F953F112D10DEEF572;
// System.Action`1<UnityEngine.Experimental.Input.LowLevel.InputEventPtr>
struct Action_1_t014CAD603D2936A5A39ABFC7B751B47D97A670C0;
// System.Action`1<UnityEngine.Experimental.Input.LowLevel.InputEventPtr>[]
struct Action_1U5BU5D_tBEB1973F9D4685C87A67EF0ACAF6090C14B169E3;
// System.Action`2<System.Object,UnityEngine.Experimental.Input.InputActionChange>
struct Action_2_t7AC5E3A9D056820D73AB374FB2F522C7FB45CC57;
// System.Action`2<System.Object,UnityEngine.Experimental.Input.InputActionChange>[]
struct Action_2U5BU5D_t9361E1C3D856E937C1707DFA9B6444AC4AE41FCA;
// System.Action`2<System.String,UnityEngine.Experimental.Input.InputControlLayoutChange>
struct Action_2_tB5151B594707FC3F5138870F9DD723646199BEA6;
// System.Action`2<System.String,UnityEngine.Experimental.Input.InputControlLayoutChange>[]
struct Action_2U5BU5D_t6CD0D0193FEFB1627CD603C902FD441221195FF5;
// System.Action`2<UnityEngine.Experimental.Input.InputActionRebindingExtensions/RebindingOperation,System.String>
struct Action_2_tE747A1B601F87BC1C731691C8828D29DC07A321B;
// System.Action`2<UnityEngine.Experimental.Input.InputDevice,UnityEngine.Experimental.Input.InputDeviceChange>
struct Action_2_tB36BD9270900153A40B2D660E70C444A3C439CD7;
// System.Action`2<UnityEngine.Experimental.Input.InputDevice,UnityEngine.Experimental.Input.InputDeviceChange>[]
struct Action_2U5BU5D_t734A51E52D273D99880B4EBAAF6A51F8C2A5D05C;
// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t94294D297455C1B4C4B6ACA47BC2B4019ECE97CB;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.Input.InputDevice>
struct Dictionary_2_t302AB232AC65614C4E2D24980423B53878260F70;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_t58C9CA6651216CBA1E51B3DE5F86E81AB30077B1;
// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.Input.Utilities.InternedString,System.String>
struct Dictionary_2_t69FBBA7D44D9638F971F2C3C9DFFB6F339457476;
// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.Input.Utilities.InternedString,System.Type>
struct Dictionary_2_tF7F7F109EA1B683BC5E1AE8C46064DF990B52AEF;
// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.Input.Utilities.InternedString,UnityEngine.Experimental.Input.Layouts.InputControlLayout/BuilderInfo>
struct Dictionary_2_t51B4E6576678D27B0F3BBFABC04D9E74BB0310B0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.Input.Utilities.InternedString,UnityEngine.Experimental.Input.Layouts.InputControlLayout>
struct Dictionary_2_tBF0DA36363FDBD62AE6B480EB5EC931A2EAABC95;
// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.Input.Utilities.InternedString,UnityEngine.Experimental.Input.Utilities.InternedString>
struct Dictionary_2_t168CC4064F94DB63AAFD0502A38440D603C0B691;
// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.Input.Utilities.InternedString,UnityEngine.Experimental.Input.Utilities.InternedString[]>
struct Dictionary_2_t6152DE741B65068ADF0AEFDBAAC65D4F933F44C3;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_t121E17B1B8EA085B72ACE0C1AAB08EF16D87BD5D;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_tD431CA53D2DA04D533C85B6F283DF4535D06B9FC;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t6CC82F01278D7AA7C3DC2939506F0C54E06AAADE;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t31692ECA0BBD35CF2962A40DAB6172CE7922AD2E;
// System.Collections.Generic.IReadOnlyList`1<System.Object>
struct IReadOnlyList_1_tE81E1489F9663A3FFB16117EBB97C07D91EA7557;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.Input.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tC074DD4EE7D444BFB08A9400903210B5F08358AF;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.Input.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_t913DEBD551E5ED00489C065E69C6E01292F9B29B;
// System.Collections.Generic.List`1<Pathfinding.Connection>
struct List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Input.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_t205F71757A795FA7538589A769F3D571070A8651;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_t803BD2FB729584A0A796EBF33774257912427B4E;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_tBE0C2267D3E6C51CE882E2B6B95F8E67011B1376;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Comparison`1<UnityEngine.Timeline.TimelineClip>
struct Comparison_1_t7614A1867A1D09C766E3C9AECCEC0C38CFDDCFB8;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<UnityEngine.Experimental.Input.InputControl,System.String>
struct Func_2_tC523240A804D0111705B2A9FD10D43CE9AFEFB81;
// System.Func`3<UnityEngine.Experimental.Input.InputControl,UnityEngine.Experimental.Input.LowLevel.InputEventPtr,System.Single>
struct Func_3_tA49B99D7DAF4AE7806F63ADC90535BE47CDA50B5;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Object[][]
struct ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.InteropServices.GCHandle[]
struct GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E;
// System.UInt64[]
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AnimationClip
struct AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t7521247C87411935E8A2CA38683533083459473F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173;
// UnityEngine.Experimental.Input.IInputInteraction[]
struct IInputInteractionU5BU5D_tB362A76376601F9972D81679AE58316D1E1C9771;
// UnityEngine.Experimental.Input.InputAction
struct InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550;
// UnityEngine.Experimental.Input.InputActionAsset
struct InputActionAsset_t66D04822895BDEFCEFC13C1DCD932C3587352F8B;
// UnityEngine.Experimental.Input.InputActionMap
struct InputActionMap_t12E0A74F13DAEBDBE20D07D97A7D67628CB6E151;
// UnityEngine.Experimental.Input.InputActionMap[]
struct InputActionMapU5BU5D_tB25F529B93EFF8CCDE6AA190DD888FA731C87212;
// UnityEngine.Experimental.Input.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117;
// UnityEngine.Experimental.Input.InputActionState
struct InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC;
// UnityEngine.Experimental.Input.InputActionState/ActionMapIndices
struct ActionMapIndices_t5535C8048443DDD41A571223D16ECF43A9F27404;
// UnityEngine.Experimental.Input.InputActionState/BindingState
struct BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36;
// UnityEngine.Experimental.Input.InputActionState/InteractionState
struct InteractionState_tF3C11E8DBB46E694157F64464C3C3E2EC2993202;
// UnityEngine.Experimental.Input.InputActionState/TriggerState
struct TriggerState_t926B20439BECB7E033ED40D116B62EFEAD040A4B;
// UnityEngine.Experimental.Input.InputBindingComposite
struct InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276;
// UnityEngine.Experimental.Input.InputBindingComposite[]
struct InputBindingCompositeU5BU5D_t7F618BF16D930F068FFC44D869E3F6D415D3C379;
// UnityEngine.Experimental.Input.InputBinding[]
struct InputBindingU5BU5D_t56C7F4DD49EB13137D6C67DF64A8DEFA837F0078;
// UnityEngine.Experimental.Input.InputControl
struct InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780;
// UnityEngine.Experimental.Input.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066;
// UnityEngine.Experimental.Input.InputControl[]
struct InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68;
// UnityEngine.Experimental.Input.InputDevice
struct InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984;
// UnityEngine.Experimental.Input.InputDevice[]
struct InputDeviceU5BU5D_tFDDE97A092210B2CE33F6515B6C54BA86230E36E;
// UnityEngine.Experimental.Input.InputManager
struct InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9;
// UnityEngine.Experimental.Input.InputManager/AvailableDevice[]
struct AvailableDeviceU5BU5D_t1FFD962F198838FFD363ADA987254FEDDE1E417C;
// UnityEngine.Experimental.Input.InputManager/StateChangeMonitorTimeout[]
struct StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E;
// UnityEngine.Experimental.Input.InputManager/StateChangeMonitorsForDevice[]
struct StateChangeMonitorsForDeviceU5BU5D_t85D53130FCCDD1E1032EF49D9CFD5E3B8E33C806;
// UnityEngine.Experimental.Input.InputProcessor
struct InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78;
// UnityEngine.Experimental.Input.InputProcessor[]
struct InputProcessorU5BU5D_tA009D497963975CA0D2F4B3A401266CA77E3CE7D;
// UnityEngine.Experimental.Input.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tB61E701E2E12A1C56FA4780AF9D482A639B70D3F;
// UnityEngine.Experimental.Input.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t4F221B8864D9A3B455553F821ADE7C81BE154CE5;
// UnityEngine.Experimental.Input.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_tEC0E3B32C1173731BEB9A00F5AEDD9E5562568B5;
// UnityEngine.Experimental.Input.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_tBC441533878C345F2F1BE655227CE0BDF15183BA;
// UnityEngine.Experimental.Input.InputRemoting
struct InputRemoting_t00AF0158FDAF35807C3E315F313B80B10C95CFC1;
// UnityEngine.Experimental.Input.InputSettings
struct InputSettings_t22F91F89800F7C30239F970977E3714CC83F2325;
// UnityEngine.Experimental.Input.Layouts.InputControlLayout
struct InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0;
// UnityEngine.Experimental.Input.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t765CC6EFE64EE45E8CE5874203FA82F920D63D58;
// UnityEngine.Experimental.Input.Layouts.InputDeviceFindControlLayoutDelegate
struct InputDeviceFindControlLayoutDelegate_t92D39AE3A901BB306F0E73C56ABCCAD7D20B8294;
// UnityEngine.Experimental.Input.Layouts.InputDeviceFindControlLayoutDelegate[]
struct InputDeviceFindControlLayoutDelegateU5BU5D_tECAC4F2FFBBC1261903D2E5738EE0392AAD65551;
// UnityEngine.Experimental.Input.LowLevel.IInputRuntime
struct IInputRuntime_t9C3B1E85CE9EFAEEAC462FC2D98D13A982DCDF39;
// UnityEngine.Experimental.Input.LowLevel.IInputStateChangeMonitor
struct IInputStateChangeMonitor_tCF196BBCE0EEC4B2696AB4AC2A757218120FF1DF;
// UnityEngine.Experimental.Input.LowLevel.InputDeviceCommandDelegate
struct InputDeviceCommandDelegate_tB65D207D54D4C0291A4F955D2D2003A1C0393EFE;
// UnityEngine.Experimental.Input.LowLevel.InputDeviceCommandDelegate[]
struct InputDeviceCommandDelegateU5BU5D_t666CD5BE4B7D7A77C95BA3A9D6BFB99E84BB572A;
// UnityEngine.Experimental.Input.LowLevel.InputEvent
struct InputEvent_tF5864CEDF7DE06DB7774CF79E516F3C9CE5E51A8;
// UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl
struct OnScreenControl_tA4D87D6DD8F06D6200C5909DE619A341FD5773F0;
// UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl/OnScreenDeviceInfo[]
struct OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB;
// UnityEngine.Experimental.Input.Plugins.PlayerInput.InputValue
struct InputValue_tC2638DF7FDAB22F6AB1A1FC08F85DA4380B698A5;
// UnityEngine.Experimental.Input.Plugins.Users.InputUser/OngoingAccountSelection[]
struct OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152;
// UnityEngine.Experimental.Input.Utilities.ArrayHelpers/<>c__DisplayClass27_0`1<System.Object>
struct U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77;
// UnityEngine.Experimental.Input.Utilities.InternedString[]
struct InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD;
// UnityEngine.Timeline.TimelineClip
struct TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_t54DF64E1454792297ECC9A75D1E33DB9293334A3;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_tC31A3552CA774F0CE3BE5E6678D1AAB7B3E2845E;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_tA46EC5C3029914B5C6BC43C2337CBB8067BB19FC;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

extern RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
extern RuntimeClass* ICloneable_tB0EF2757D90DF969033D641822566814815EB134_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_tE08B2D84A1D0685F449EDB3D57FC60C06EFF01E7_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyList_1_tE95739A7507E8A0FABC49BE31A173D8B7EA873DE_il2cpp_TypeInfo_var;
extern RuntimeClass* InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78_il2cpp_TypeInfo_var;
extern RuntimeClass* InputSystem_t9EEE2BD461CED1A911C169F864BF6AE8933D92EA_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25;
extern String_t* _stringLiteral1CF92493FFFB39A56C9294A9A50E0BC302612024;
extern String_t* _stringLiteral50EACB889AE369682E4402F94C992271F0458871;
extern String_t* _stringLiteral7CB639FED5C0F2FC979463FA355E473AD2CCCDAE;
extern String_t* _stringLiteral9FA2A91B7D120B60A8043F12A2BB1D5C64E7C4EF;
extern String_t* _stringLiteralA7DEDE1DFA2C8D0BA470F38631FDF2CA68EE9A45;
extern String_t* _stringLiteralD5938A9EA685DE9CA7FEEA9D049765F466CE18DA;
extern String_t* _stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA;
extern const RuntimeMethod* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var;
extern const RuntimeMethod* BindingSyntax_WithInteraction_TisRuntimeObject_m26E2CB1AC600331B016AD40386F6D82AEF5038F2_RuntimeMethod_var;
extern const RuntimeMethod* BindingSyntax_WithProcessor_TisRuntimeObject_m540ACF13EF811CC374ABE606077C07C1EAA06DD4_RuntimeMethod_var;
extern const RuntimeMethod* InputActionState_ReadValue_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m29552BBCA6F9F9474E4F4F6EAB91590E9F7A87B7_RuntimeMethod_var;
extern const RuntimeMethod* InputActionState_ReadValue_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m3C98011C69BA3821A768C727C5FABA29A59577D5_RuntimeMethod_var;
extern const RuntimeMethod* InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549_RuntimeMethod_var;
extern const RuntimeMethod* InputControlList_1_Contains_mBC1E0A16C2E3150BDEA258FF139A6E858C0C99C7_RuntimeMethod_var;
extern const RuntimeMethod* InputControlList_1_Dispose_mAB171168B9A995BA5B7340FBED941AC0F5CC3293_RuntimeMethod_var;
extern const RuntimeMethod* InputControlList_1__ctor_m618E0D787CA05BA1B8B397A93DEB04B1EA05DA99_RuntimeMethod_var;
extern const RuntimeMethod* InputControlScheme_PickDevicesFrom_TisInputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E_mBDC41FA33EB583512F7918977F184283BE3D0227_RuntimeMethod_var;
extern const RuntimeMethod* InputControlScheme_PickDevicesFrom_TisRuntimeObject_m65FB475400BF9ED59B1E316789C9A2297565036B_RuntimeMethod_var;
extern const RuntimeMethod* InputValue_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m43D519B432C16E54E8050FFB0ED3BF7467FC8F9D_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m471F36A6A3ED6629C9AAD3F28A85AF68CD1B5B98_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_mF740A466EBC8CEA9A335149B81C91C9E04D553A9_RuntimeMethod_var;
extern const uint32_t ArrayHelpers_Clone_TisRuntimeObject_m5B35A203B82B86A055093B50946359F063ABF884_MetadataUsageId;
extern const uint32_t Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId;
extern const uint32_t BindingSyntax_WithInteraction_TisRuntimeObject_m26E2CB1AC600331B016AD40386F6D82AEF5038F2_MetadataUsageId;
extern const uint32_t BindingSyntax_WithProcessor_TisRuntimeObject_m540ACF13EF811CC374ABE606077C07C1EAA06DD4_MetadataUsageId;
extern const uint32_t Builder_WithType_TisRuntimeObject_m09CF7026975C3EF9FA236BBEB34171E73BED6B1C_MetadataUsageId;
extern const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m00DF495FDAFA66A78A4B175A094C644FB5D901D5_MetadataUsageId;
extern const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m254A7FA10E4BFC952CF3E997AF14092C337943B6_MetadataUsageId;
extern const uint32_t GameObject_GetComponentsInChildren_TisRuntimeObject_mF8264046D64101403390F97A2EAC7D36EA15D502_MetadataUsageId;
extern const uint32_t GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_MetadataUsageId;
extern const uint32_t InputActionState_ReadValue_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m29552BBCA6F9F9474E4F4F6EAB91590E9F7A87B7_MetadataUsageId;
extern const uint32_t InputActionState_ReadValue_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m3C98011C69BA3821A768C727C5FABA29A59577D5_MetadataUsageId;
extern const uint32_t InputControlListExtensions_ToControlList_TisRuntimeObject_mE90C151068F9EC906EEA28DEC3853A9C7FD3119F_MetadataUsageId;
extern const uint32_t InputControlListExtensions_ToControlList_TisRuntimeObject_mF3227CEE11BB6D65253E82DFB196B2B5F04510E6_MetadataUsageId;
extern const uint32_t InputControlScheme_PickDevicesFrom_TisInputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E_mBDC41FA33EB583512F7918977F184283BE3D0227_MetadataUsageId;
extern const uint32_t InputControlScheme_PickDevicesFrom_TisRuntimeObject_m65FB475400BF9ED59B1E316789C9A2297565036B_MetadataUsageId;
extern const uint32_t InputSystem_FindControls_TisRuntimeObject_m10FBC3D3BD9D5DAB9A03600889B4D7776DCD14E1_MetadataUsageId;
extern const uint32_t InputSystem_TryLoadLayout_TisRuntimeObject_m0B8C5A26A72E3D26D4FBD09A35D5A48C2BE01B33_MetadataUsageId;
extern const uint32_t InputValue_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m43D519B432C16E54E8050FFB0ED3BF7467FC8F9D_MetadataUsageId;
extern const uint32_t Memory_ShrinkArray_TisRuntimeObject_m34D2B33E456E3CE3EAC855603B47DDC6A0301FB4_MetadataUsageId;
extern const uint32_t Object_FindObjectsOfType_TisRuntimeObject_mE570B614F68E0A19BD5F65061CDA9BEE6EDBD159_MetadataUsageId;
extern const uint32_t RebindingOperation_WithExpectedControlType_TisRuntimeObject_mC8A2945650DAE5B60AFB382696FB00961305A446_MetadataUsageId;
extern const uint32_t TrackAsset_CreateClip_TisRuntimeObject_m8E81C806E0B226CB7342AC3ED18DA6FAB47FFC25_MetadataUsageId;
struct ControlItem_tE2B12A98134DBF22E2E255777F24A2BE10FA237E_marshaled_com;
struct ControlItem_tE2B12A98134DBF22E2E255777F24A2BE10FA237E_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshaled_com;
struct DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679;
struct GUOSingleU5BU5D_tE4141A46A423610509D84978B9302FDA023F60F6;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
struct GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct InputBindingCompositeU5BU5D_t7F618BF16D930F068FFC44D869E3F6D415D3C379;
struct DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066;
struct InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68;
struct StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E;
struct InputProcessorU5BU5D_tA009D497963975CA0D2F4B3A401266CA77E3CE7D;
struct OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB;
struct OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152;
struct InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384;
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef LISTEXTENSIONS_T44CEA0C941A9D4D742FF2135D60C5F52AEE45FAC_H
#define LISTEXTENSIONS_T44CEA0C941A9D4D742FF2135D60C5F52AEE45FAC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Util.ListExtensions
struct  ListExtensions_t44CEA0C941A9D4D742FF2135D60C5F52AEE45FAC  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTEXTENSIONS_T44CEA0C941A9D4D742FF2135D60C5F52AEE45FAC_H
#ifndef MEMORY_T88EC1C1D689DCE0A14464A6A288414CC6138F944_H
#define MEMORY_T88EC1C1D689DCE0A14464A6A288414CC6138F944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Util.Memory
struct  Memory_t88EC1C1D689DCE0A14464A6A288414CC6138F944  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORY_T88EC1C1D689DCE0A14464A6A288414CC6138F944_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ENUMERABLEHELPERS_T91DA7E2949102CFE16D0A151F7C355F72753F1FD_H
#define ENUMERABLEHELPERS_T91DA7E2949102CFE16D0A151F7C355F72753F1FD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EnumerableHelpers
struct  EnumerableHelpers_t91DA7E2949102CFE16D0A151F7C355F72753F1FD  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLEHELPERS_T91DA7E2949102CFE16D0A151F7C355F72753F1FD_H
#ifndef LIST_1_T7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3_H
#define LIST_1_T7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Pathfinding.Connection>
struct  List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3, ____items_1)); }
	inline ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679* get__items_1() const { return ____items_1; }
	inline ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3_StaticFields, ____emptyArray_5)); }
	inline ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3_H
#ifndef LIST_1_T05CC3C859AB5E6024394EF9A42E3E696628CA02D_H
#define LIST_1_T05CC3C859AB5E6024394EF9A42E3E696628CA02D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T05CC3C859AB5E6024394EF9A42E3E696628CA02D_H
#ifndef LIST_1_T82FE44828FE0E756353252A5BD7380719CCE154D_H
#define LIST_1_T82FE44828FE0E756353252A5BD7380719CCE154D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Experimental.Input.Utilities.InternedString>
struct  List_1_t82FE44828FE0E756353252A5BD7380719CCE154D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t82FE44828FE0E756353252A5BD7380719CCE154D, ____items_1)); }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* get__items_1() const { return ____items_1; }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t82FE44828FE0E756353252A5BD7380719CCE154D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t82FE44828FE0E756353252A5BD7380719CCE154D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t82FE44828FE0E756353252A5BD7380719CCE154D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t82FE44828FE0E756353252A5BD7380719CCE154D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t82FE44828FE0E756353252A5BD7380719CCE154D_StaticFields, ____emptyArray_5)); }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T82FE44828FE0E756353252A5BD7380719CCE154D_H
#ifndef LIST_1_T1863EF4EE1FDEED14D460C85AF61BE0850892F6D_H
#define LIST_1_T1863EF4EE1FDEED14D460C85AF61BE0850892F6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____items_1)); }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t3EB9781D1A1DE2674F0632C956A66AA423343139* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1863EF4EE1FDEED14D460C85AF61BE0850892F6D_H
#ifndef COLLECTIONEXTENSIONS_T04790A89E5724082B570A72C66DCBD3BA4458F41_H
#define COLLECTIONEXTENSIONS_T04790A89E5724082B570A72C66DCBD3BA4458F41_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Dynamic.Utils.CollectionExtensions
struct  CollectionExtensions_t04790A89E5724082B570A72C66DCBD3BA4458F41  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONEXTENSIONS_T04790A89E5724082B570A72C66DCBD3BA4458F41_H
#ifndef EMPTYARRAY_1_TE2F2D2C2589B4F671AFF48ACE7A711E90D08C957_H
#define EMPTYARRAY_1_TE2F2D2C2589B4F671AFF48ACE7A711E90D08C957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<Pathfinding.GraphUpdateProcessor_GUOSingle>
struct  EmptyArray_1_tE2F2D2C2589B4F671AFF48ACE7A711E90D08C957  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tE2F2D2C2589B4F671AFF48ACE7A711E90D08C957_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	GUOSingleU5BU5D_tE4141A46A423610509D84978B9302FDA023F60F6* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tE2F2D2C2589B4F671AFF48ACE7A711E90D08C957_StaticFields, ___Value_0)); }
	inline GUOSingleU5BU5D_tE4141A46A423610509D84978B9302FDA023F60F6* get_Value_0() const { return ___Value_0; }
	inline GUOSingleU5BU5D_tE4141A46A423610509D84978B9302FDA023F60F6** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(GUOSingleU5BU5D_tE4141A46A423610509D84978B9302FDA023F60F6* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_TE2F2D2C2589B4F671AFF48ACE7A711E90D08C957_H
#ifndef EMPTYARRAY_1_T40AF87279AA6E3AEEABB0CBA1425F6720C40961A_H
#define EMPTYARRAY_1_T40AF87279AA6E3AEEABB0CBA1425F6720C40961A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Char>
struct  EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields, ___Value_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_Value_0() const { return ___Value_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_T40AF87279AA6E3AEEABB0CBA1425F6720C40961A_H
#ifndef EMPTYARRAY_1_T0CF75D058B9309A45D99E4F49D7BA4B2C9331D0C_H
#define EMPTYARRAY_1_T0CF75D058B9309A45D99E4F49D7BA4B2C9331D0C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Int32>
struct  EmptyArray_1_t0CF75D058B9309A45D99E4F49D7BA4B2C9331D0C  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t0CF75D058B9309A45D99E4F49D7BA4B2C9331D0C_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t0CF75D058B9309A45D99E4F49D7BA4B2C9331D0C_StaticFields, ___Value_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_Value_0() const { return ___Value_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_T0CF75D058B9309A45D99E4F49D7BA4B2C9331D0C_H
#ifndef EMPTYARRAY_1_TCF137C88A5824F413EFB5A2F31664D8207E61D26_H
#define EMPTYARRAY_1_TCF137C88A5824F413EFB5A2F31664D8207E61D26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYARRAY_1_TCF137C88A5824F413EFB5A2F31664D8207E61D26_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef CUSTOMATTRIBUTEDATA_T2CD9D78F97B6517D5DEE35DEE97159B02C078F88_H
#define CUSTOMATTRIBUTEDATA_T2CD9D78F97B6517D5DEE35DEE97159B02C078F88_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData_LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * ___lazyData_3;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorInfo_0)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}

	inline static int32_t get_offset_of_lazyData_3() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___lazyData_3)); }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * get_lazyData_3() const { return ___lazyData_3; }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 ** get_address_of_lazyData_3() { return &___lazyData_3; }
	inline void set_lazyData_3(LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * value)
	{
		___lazyData_3 = value;
		Il2CppCodeGenWriteBarrier((&___lazyData_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T2CD9D78F97B6517D5DEE35DEE97159B02C078F88_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef NATIVEARRAYUNSAFEUTILITY_T2B01CE90013CE5874AC6E98925C55FA6C1F5F4BA_H
#define NATIVEARRAYUNSAFEUTILITY_T2B01CE90013CE5874AC6E98925C55FA6C1F5F4BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct  NativeArrayUnsafeUtility_t2B01CE90013CE5874AC6E98925C55FA6C1F5F4BA  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEARRAYUNSAFEUTILITY_T2B01CE90013CE5874AC6E98925C55FA6C1F5F4BA_H
#ifndef ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#define ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifndef EXECUTEEVENTS_T622B95FF46A568C8205B76C1D4111049FC265985_H
#define EXECUTEEVENTS_T622B95FF46A568C8205B76C1D4111049FC265985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_tA46EC5C3029914B5C6BC43C2337CBB8067BB19FC * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * ___s_InternalTransformList_18;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache0
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___U3CU3Ef__mgU24cache0_19;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache1
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___U3CU3Ef__mgU24cache1_20;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache2
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___U3CU3Ef__mgU24cache2_21;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache3
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___U3CU3Ef__mgU24cache3_22;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache4
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___U3CU3Ef__mgU24cache4_23;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache5
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___U3CU3Ef__mgU24cache5_24;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache6
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___U3CU3Ef__mgU24cache6_25;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache7
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___U3CU3Ef__mgU24cache7_26;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache8
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___U3CU3Ef__mgU24cache8_27;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache9
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___U3CU3Ef__mgU24cache9_28;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cacheA
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___U3CU3Ef__mgU24cacheA_29;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cacheB
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___U3CU3Ef__mgU24cacheB_30;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cacheC
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___U3CU3Ef__mgU24cacheC_31;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cacheD
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___U3CU3Ef__mgU24cacheD_32;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cacheE
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___U3CU3Ef__mgU24cacheE_33;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cacheF
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___U3CU3Ef__mgU24cacheF_34;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mgU24cache10
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___U3CU3Ef__mgU24cache10_35;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerEnterHandler_0), value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerExitHandler_1), value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerDownHandler_2), value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerUpHandler_3), value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerClickHandler_4), value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_InitializePotentialDragHandler_5), value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_BeginDragHandler_6), value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_DragHandler_7), value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_EndDragHandler_8), value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_DropHandler_9), value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollHandler_10), value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_UpdateSelectedHandler_11), value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_SelectHandler_12), value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_DeselectHandler_13), value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_MoveHandler_14), value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubmitHandler_15), value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_CancelHandler_16), value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_tA46EC5C3029914B5C6BC43C2337CBB8067BB19FC * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_tA46EC5C3029914B5C6BC43C2337CBB8067BB19FC ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_tA46EC5C3029914B5C6BC43C2337CBB8067BB19FC * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_HandlerListPool_17), value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalTransformList_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_19() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache0_19)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_U3CU3Ef__mgU24cache0_19() const { return ___U3CU3Ef__mgU24cache0_19; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_U3CU3Ef__mgU24cache0_19() { return &___U3CU3Ef__mgU24cache0_19; }
	inline void set_U3CU3Ef__mgU24cache0_19(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___U3CU3Ef__mgU24cache0_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_20() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache1_20)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_U3CU3Ef__mgU24cache1_20() const { return ___U3CU3Ef__mgU24cache1_20; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_U3CU3Ef__mgU24cache1_20() { return &___U3CU3Ef__mgU24cache1_20; }
	inline void set_U3CU3Ef__mgU24cache1_20(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___U3CU3Ef__mgU24cache1_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_21() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache2_21)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_U3CU3Ef__mgU24cache2_21() const { return ___U3CU3Ef__mgU24cache2_21; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_U3CU3Ef__mgU24cache2_21() { return &___U3CU3Ef__mgU24cache2_21; }
	inline void set_U3CU3Ef__mgU24cache2_21(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___U3CU3Ef__mgU24cache2_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_22() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache3_22)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_U3CU3Ef__mgU24cache3_22() const { return ___U3CU3Ef__mgU24cache3_22; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_U3CU3Ef__mgU24cache3_22() { return &___U3CU3Ef__mgU24cache3_22; }
	inline void set_U3CU3Ef__mgU24cache3_22(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___U3CU3Ef__mgU24cache3_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_23() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache4_23)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_U3CU3Ef__mgU24cache4_23() const { return ___U3CU3Ef__mgU24cache4_23; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_U3CU3Ef__mgU24cache4_23() { return &___U3CU3Ef__mgU24cache4_23; }
	inline void set_U3CU3Ef__mgU24cache4_23(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___U3CU3Ef__mgU24cache4_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_24() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache5_24)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_U3CU3Ef__mgU24cache5_24() const { return ___U3CU3Ef__mgU24cache5_24; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_U3CU3Ef__mgU24cache5_24() { return &___U3CU3Ef__mgU24cache5_24; }
	inline void set_U3CU3Ef__mgU24cache5_24(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___U3CU3Ef__mgU24cache5_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_25() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache6_25)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_U3CU3Ef__mgU24cache6_25() const { return ___U3CU3Ef__mgU24cache6_25; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_U3CU3Ef__mgU24cache6_25() { return &___U3CU3Ef__mgU24cache6_25; }
	inline void set_U3CU3Ef__mgU24cache6_25(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___U3CU3Ef__mgU24cache6_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_26() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache7_26)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_U3CU3Ef__mgU24cache7_26() const { return ___U3CU3Ef__mgU24cache7_26; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_U3CU3Ef__mgU24cache7_26() { return &___U3CU3Ef__mgU24cache7_26; }
	inline void set_U3CU3Ef__mgU24cache7_26(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___U3CU3Ef__mgU24cache7_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_27() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache8_27)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_U3CU3Ef__mgU24cache8_27() const { return ___U3CU3Ef__mgU24cache8_27; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_U3CU3Ef__mgU24cache8_27() { return &___U3CU3Ef__mgU24cache8_27; }
	inline void set_U3CU3Ef__mgU24cache8_27(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___U3CU3Ef__mgU24cache8_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_28() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache9_28)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_U3CU3Ef__mgU24cache9_28() const { return ___U3CU3Ef__mgU24cache9_28; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_U3CU3Ef__mgU24cache9_28() { return &___U3CU3Ef__mgU24cache9_28; }
	inline void set_U3CU3Ef__mgU24cache9_28(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___U3CU3Ef__mgU24cache9_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_29() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cacheA_29)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_U3CU3Ef__mgU24cacheA_29() const { return ___U3CU3Ef__mgU24cacheA_29; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_U3CU3Ef__mgU24cacheA_29() { return &___U3CU3Ef__mgU24cacheA_29; }
	inline void set_U3CU3Ef__mgU24cacheA_29(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___U3CU3Ef__mgU24cacheA_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_30() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cacheB_30)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_U3CU3Ef__mgU24cacheB_30() const { return ___U3CU3Ef__mgU24cacheB_30; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_U3CU3Ef__mgU24cacheB_30() { return &___U3CU3Ef__mgU24cacheB_30; }
	inline void set_U3CU3Ef__mgU24cacheB_30(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___U3CU3Ef__mgU24cacheB_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_31() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cacheC_31)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_U3CU3Ef__mgU24cacheC_31() const { return ___U3CU3Ef__mgU24cacheC_31; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_U3CU3Ef__mgU24cacheC_31() { return &___U3CU3Ef__mgU24cacheC_31; }
	inline void set_U3CU3Ef__mgU24cacheC_31(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___U3CU3Ef__mgU24cacheC_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_32() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cacheD_32)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_U3CU3Ef__mgU24cacheD_32() const { return ___U3CU3Ef__mgU24cacheD_32; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_U3CU3Ef__mgU24cacheD_32() { return &___U3CU3Ef__mgU24cacheD_32; }
	inline void set_U3CU3Ef__mgU24cacheD_32(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___U3CU3Ef__mgU24cacheD_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_33() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cacheE_33)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_U3CU3Ef__mgU24cacheE_33() const { return ___U3CU3Ef__mgU24cacheE_33; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_U3CU3Ef__mgU24cacheE_33() { return &___U3CU3Ef__mgU24cacheE_33; }
	inline void set_U3CU3Ef__mgU24cacheE_33(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___U3CU3Ef__mgU24cacheE_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_34() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cacheF_34)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_U3CU3Ef__mgU24cacheF_34() const { return ___U3CU3Ef__mgU24cacheF_34; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_U3CU3Ef__mgU24cacheF_34() { return &___U3CU3Ef__mgU24cacheF_34; }
	inline void set_U3CU3Ef__mgU24cacheF_34(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___U3CU3Ef__mgU24cacheF_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_35() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___U3CU3Ef__mgU24cache10_35)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_U3CU3Ef__mgU24cache10_35() const { return ___U3CU3Ef__mgU24cache10_35; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_U3CU3Ef__mgU24cache10_35() { return &___U3CU3Ef__mgU24cache10_35; }
	inline void set_U3CU3Ef__mgU24cache10_35(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___U3CU3Ef__mgU24cache10_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEEVENTS_T622B95FF46A568C8205B76C1D4111049FC265985_H
#ifndef INPUTCONTROLLISTEXTENSIONS_TE13F5A06BDC8886C8493BAF3239B953EC2DA50E2_H
#define INPUTCONTROLLISTEXTENSIONS_TE13F5A06BDC8886C8493BAF3239B953EC2DA50E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputControlListExtensions
struct  InputControlListExtensions_tE13F5A06BDC8886C8493BAF3239B953EC2DA50E2  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTCONTROLLISTEXTENSIONS_TE13F5A06BDC8886C8493BAF3239B953EC2DA50E2_H
#ifndef INPUTSYSTEM_T9EEE2BD461CED1A911C169F864BF6AE8933D92EA_H
#define INPUTSYSTEM_T9EEE2BD461CED1A911C169F864BF6AE8933D92EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputSystem
struct  InputSystem_t9EEE2BD461CED1A911C169F864BF6AE8933D92EA  : public RuntimeObject
{
public:

public:
};

struct InputSystem_t9EEE2BD461CED1A911C169F864BF6AE8933D92EA_StaticFields
{
public:
	// UnityEngine.Experimental.Input.InputManager UnityEngine.Experimental.Input.InputSystem::s_Manager
	InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9 * ___s_Manager_0;
	// UnityEngine.Experimental.Input.InputRemoting UnityEngine.Experimental.Input.InputSystem::s_Remote
	InputRemoting_t00AF0158FDAF35807C3E315F313B80B10C95CFC1 * ___s_Remote_1;

public:
	inline static int32_t get_offset_of_s_Manager_0() { return static_cast<int32_t>(offsetof(InputSystem_t9EEE2BD461CED1A911C169F864BF6AE8933D92EA_StaticFields, ___s_Manager_0)); }
	inline InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9 * get_s_Manager_0() const { return ___s_Manager_0; }
	inline InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9 ** get_address_of_s_Manager_0() { return &___s_Manager_0; }
	inline void set_s_Manager_0(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9 * value)
	{
		___s_Manager_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Manager_0), value);
	}

	inline static int32_t get_offset_of_s_Remote_1() { return static_cast<int32_t>(offsetof(InputSystem_t9EEE2BD461CED1A911C169F864BF6AE8933D92EA_StaticFields, ___s_Remote_1)); }
	inline InputRemoting_t00AF0158FDAF35807C3E315F313B80B10C95CFC1 * get_s_Remote_1() const { return ___s_Remote_1; }
	inline InputRemoting_t00AF0158FDAF35807C3E315F313B80B10C95CFC1 ** get_address_of_s_Remote_1() { return &___s_Remote_1; }
	inline void set_s_Remote_1(InputRemoting_t00AF0158FDAF35807C3E315F313B80B10C95CFC1 * value)
	{
		___s_Remote_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Remote_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSYSTEM_T9EEE2BD461CED1A911C169F864BF6AE8933D92EA_H
#ifndef ARRAYHELPERS_T63F191EE6DC2C5988B63A0C8947F258C3C06B2BD_H
#define ARRAYHELPERS_T63F191EE6DC2C5988B63A0C8947F258C3C06B2BD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.ArrayHelpers
struct  ArrayHelpers_t63F191EE6DC2C5988B63A0C8947F258C3C06B2BD  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYHELPERS_T63F191EE6DC2C5988B63A0C8947F258C3C06B2BD_H
#ifndef U3CU3EC__DISPLAYCLASS26_0_1_T46A34562CE0AAEF22893264746E8601066376919_H
#define U3CU3EC__DISPLAYCLASS26_0_1_T46A34562CE0AAEF22893264746E8601066376919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.ArrayHelpers_<>c__DisplayClass26_0`1<System.Object>
struct  U3CU3Ec__DisplayClass26_0_1_t46A34562CE0AAEF22893264746E8601066376919  : public RuntimeObject
{
public:
	// TValue UnityEngine.Experimental.Input.Utilities.ArrayHelpers_<>c__DisplayClass26_0`1::secondValue
	RuntimeObject * ___secondValue_0;

public:
	inline static int32_t get_offset_of_secondValue_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_1_t46A34562CE0AAEF22893264746E8601066376919, ___secondValue_0)); }
	inline RuntimeObject * get_secondValue_0() const { return ___secondValue_0; }
	inline RuntimeObject ** get_address_of_secondValue_0() { return &___secondValue_0; }
	inline void set_secondValue_0(RuntimeObject * value)
	{
		___secondValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___secondValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS26_0_1_T46A34562CE0AAEF22893264746E8601066376919_H
#ifndef U3CU3EC__DISPLAYCLASS27_0_1_T000DBFAA8B59BB6D759E147F13020966DE57CF77_H
#define U3CU3EC__DISPLAYCLASS27_0_1_T000DBFAA8B59BB6D759E147F13020966DE57CF77_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.ArrayHelpers_<>c__DisplayClass27_0`1<System.Object>
struct  U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEqualityComparer`1<TValue> UnityEngine.Experimental.Input.Utilities.ArrayHelpers_<>c__DisplayClass27_0`1::comparer
	RuntimeObject* ___comparer_0;

public:
	inline static int32_t get_offset_of_comparer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77, ___comparer_0)); }
	inline RuntimeObject* get_comparer_0() const { return ___comparer_0; }
	inline RuntimeObject** get_address_of_comparer_0() { return &___comparer_0; }
	inline void set_comparer_0(RuntimeObject* value)
	{
		___comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS27_0_1_T000DBFAA8B59BB6D759E147F13020966DE57CF77_H
#ifndef U3CU3EC__DISPLAYCLASS27_1_1_TDB47225E1DCC72375D50800BC28E520C1481ABD5_H
#define U3CU3EC__DISPLAYCLASS27_1_1_TDB47225E1DCC72375D50800BC28E520C1481ABD5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.ArrayHelpers_<>c__DisplayClass27_1`1<System.Object>
struct  U3CU3Ec__DisplayClass27_1_1_tDB47225E1DCC72375D50800BC28E520C1481ABD5  : public RuntimeObject
{
public:
	// TValue UnityEngine.Experimental.Input.Utilities.ArrayHelpers_<>c__DisplayClass27_1`1::secondValue
	RuntimeObject * ___secondValue_0;
	// UnityEngine.Experimental.Input.Utilities.ArrayHelpers_<>c__DisplayClass27_0`1<TValue> UnityEngine.Experimental.Input.Utilities.ArrayHelpers_<>c__DisplayClass27_1`1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_secondValue_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_1_1_tDB47225E1DCC72375D50800BC28E520C1481ABD5, ___secondValue_0)); }
	inline RuntimeObject * get_secondValue_0() const { return ___secondValue_0; }
	inline RuntimeObject ** get_address_of_secondValue_0() { return &___secondValue_0; }
	inline void set_secondValue_0(RuntimeObject * value)
	{
		___secondValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___secondValue_0), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_1_1_tDB47225E1DCC72375D50800BC28E520C1481ABD5, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E8__locals1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS27_1_1_TDB47225E1DCC72375D50800BC28E520C1481ABD5_H
#ifndef PLAYABLEEXTENSIONS_T1C5F617FAB0FB28821DAD04A9A9ED25EA200FB97_H
#define PLAYABLEEXTENSIONS_T1C5F617FAB0FB28821DAD04A9A9ED25EA200FB97_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableExtensions
struct  PlayableExtensions_t1C5F617FAB0FB28821DAD04A9A9ED25EA200FB97  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEEXTENSIONS_T1C5F617FAB0FB28821DAD04A9A9ED25EA200FB97_H
#ifndef PLAYABLEOUTPUTEXTENSIONS_T4BD7A3CB823837BB82DB35731F3292C6412C9B19_H
#define PLAYABLEOUTPUTEXTENSIONS_T4BD7A3CB823837BB82DB35731F3292C6412C9B19_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputExtensions
struct  PlayableOutputExtensions_t4BD7A3CB823837BB82DB35731F3292C6412C9B19  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTEXTENSIONS_T4BD7A3CB823837BB82DB35731F3292C6412C9B19_H
#ifndef RESOURCES_T516CB639AA1F373695D285E3F9274C65A70D3935_H
#define RESOURCES_T516CB639AA1F373695D285E3F9274C65A70D3935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t516CB639AA1F373695D285E3F9274C65A70D3935  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T516CB639AA1F373695D285E3F9274C65A70D3935_H
#ifndef CONNECTION_T33DB6C9EBA87CDE8956B691108AFD4164C732F7B_H
#define CONNECTION_T33DB6C9EBA87CDE8956B691108AFD4164C732F7B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Connection
struct  Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B 
{
public:
	// Pathfinding.GraphNode Pathfinding.Connection::node
	GraphNode_t73CF0508F65800B2AA5FEEC4833B012A8EC79BC8 * ___node_0;
	// System.UInt32 Pathfinding.Connection::cost
	uint32_t ___cost_1;
	// System.Byte Pathfinding.Connection::shapeEdge
	uint8_t ___shapeEdge_2;

public:
	inline static int32_t get_offset_of_node_0() { return static_cast<int32_t>(offsetof(Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B, ___node_0)); }
	inline GraphNode_t73CF0508F65800B2AA5FEEC4833B012A8EC79BC8 * get_node_0() const { return ___node_0; }
	inline GraphNode_t73CF0508F65800B2AA5FEEC4833B012A8EC79BC8 ** get_address_of_node_0() { return &___node_0; }
	inline void set_node_0(GraphNode_t73CF0508F65800B2AA5FEEC4833B012A8EC79BC8 * value)
	{
		___node_0 = value;
		Il2CppCodeGenWriteBarrier((&___node_0), value);
	}

	inline static int32_t get_offset_of_cost_1() { return static_cast<int32_t>(offsetof(Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B, ___cost_1)); }
	inline uint32_t get_cost_1() const { return ___cost_1; }
	inline uint32_t* get_address_of_cost_1() { return &___cost_1; }
	inline void set_cost_1(uint32_t value)
	{
		___cost_1 = value;
	}

	inline static int32_t get_offset_of_shapeEdge_2() { return static_cast<int32_t>(offsetof(Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B, ___shapeEdge_2)); }
	inline uint8_t get_shapeEdge_2() const { return ___shapeEdge_2; }
	inline uint8_t* get_address_of_shapeEdge_2() { return &___shapeEdge_2; }
	inline void set_shapeEdge_2(uint8_t value)
	{
		___shapeEdge_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Pathfinding.Connection
struct Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshaled_pinvoke
{
	GraphNode_t73CF0508F65800B2AA5FEEC4833B012A8EC79BC8 * ___node_0;
	uint32_t ___cost_1;
	uint8_t ___shapeEdge_2;
};
// Native definition for COM marshalling of Pathfinding.Connection
struct Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshaled_com
{
	GraphNode_t73CF0508F65800B2AA5FEEC4833B012A8EC79BC8 * ___node_0;
	uint32_t ___cost_1;
	uint8_t ___shapeEdge_2;
};
#endif // CONNECTION_T33DB6C9EBA87CDE8956B691108AFD4164C732F7B_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef ARRAYBUILDER_1_T1E6F2012183FAF071D71CDE9A25424FC01D95CEF_H
#define ARRAYBUILDER_1_T1E6F2012183FAF071D71CDE9A25424FC01D95CEF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ArrayBuilder`1<System.Object[]>
struct  ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF 
{
public:
	// T[] System.Collections.Generic.ArrayBuilder`1::_array
	ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F* ____array_0;
	// System.Int32 System.Collections.Generic.ArrayBuilder`1::_count
	int32_t ____count_1;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF, ____array_0)); }
	inline ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYBUILDER_1_T1E6F2012183FAF071D71CDE9A25424FC01D95CEF_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
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

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef NULLABLE_1_T9E6A67BECE376F0623B5C857F5674A0311C41793_H
#define NULLABLE_1_T9E6A67BECE376F0623B5C857F5674A0311C41793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T9E6A67BECE376F0623B5C857F5674A0311C41793_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T238ACCB3A438CB5EDE4A924C637B288CCEC958E8_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T238ACCB3A438CB5EDE4A924C637B288CCEC958E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T238ACCB3A438CB5EDE4A924C637B288CCEC958E8_H
#ifndef GCHANDLE_T39FAEE3EA592432C93B574A31DD83B87F1847DE3_H
#define GCHANDLE_T39FAEE3EA592432C93B574A31DD83B87F1847DE3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T39FAEE3EA592432C93B574A31DD83B87F1847DE3_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#define UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#define COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifndef BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#define BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifndef CALLBACKCONTEXT_TB2C08ACB0E6D89F4022E4445202D49E88F5F34C2_H
#define CALLBACKCONTEXT_TB2C08ACB0E6D89F4022E4445202D49E88F5F34C2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputAction_CallbackContext
struct  CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2 
{
public:
	// UnityEngine.Experimental.Input.InputActionState UnityEngine.Experimental.Input.InputAction_CallbackContext::m_State
	InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * ___m_State_0;
	// System.Int32 UnityEngine.Experimental.Input.InputAction_CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2, ___m_State_0)); }
	inline InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_State_0), value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.InputAction/CallbackContext
struct CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2_marshaled_pinvoke
{
	InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.InputAction/CallbackContext
struct CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2_marshaled_com
{
	InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
#endif // CALLBACKCONTEXT_TB2C08ACB0E6D89F4022E4445202D49E88F5F34C2_H
#ifndef BINDINGSYNTAX_TE1201B89368856DA18195A2F3D198BE08E680C51_H
#define BINDINGSYNTAX_TE1201B89368856DA18195A2F3D198BE08E680C51_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputActionSetupExtensions_BindingSyntax
struct  BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 
{
public:
	// UnityEngine.Experimental.Input.InputActionMap UnityEngine.Experimental.Input.InputActionSetupExtensions_BindingSyntax::m_ActionMap
	InputActionMap_t12E0A74F13DAEBDBE20D07D97A7D67628CB6E151 * ___m_ActionMap_0;
	// UnityEngine.Experimental.Input.InputAction UnityEngine.Experimental.Input.InputActionSetupExtensions_BindingSyntax::m_Action
	InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * ___m_Action_1;
	// System.Int32 UnityEngine.Experimental.Input.InputActionSetupExtensions_BindingSyntax::m_BindingIndex
	int32_t ___m_BindingIndex_2;

public:
	inline static int32_t get_offset_of_m_ActionMap_0() { return static_cast<int32_t>(offsetof(BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51, ___m_ActionMap_0)); }
	inline InputActionMap_t12E0A74F13DAEBDBE20D07D97A7D67628CB6E151 * get_m_ActionMap_0() const { return ___m_ActionMap_0; }
	inline InputActionMap_t12E0A74F13DAEBDBE20D07D97A7D67628CB6E151 ** get_address_of_m_ActionMap_0() { return &___m_ActionMap_0; }
	inline void set_m_ActionMap_0(InputActionMap_t12E0A74F13DAEBDBE20D07D97A7D67628CB6E151 * value)
	{
		___m_ActionMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionMap_0), value);
	}

	inline static int32_t get_offset_of_m_Action_1() { return static_cast<int32_t>(offsetof(BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51, ___m_Action_1)); }
	inline InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * get_m_Action_1() const { return ___m_Action_1; }
	inline InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 ** get_address_of_m_Action_1() { return &___m_Action_1; }
	inline void set_m_Action_1(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * value)
	{
		___m_Action_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Action_1), value);
	}

	inline static int32_t get_offset_of_m_BindingIndex_2() { return static_cast<int32_t>(offsetof(BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51, ___m_BindingIndex_2)); }
	inline int32_t get_m_BindingIndex_2() const { return ___m_BindingIndex_2; }
	inline int32_t* get_address_of_m_BindingIndex_2() { return &___m_BindingIndex_2; }
	inline void set_m_BindingIndex_2(int32_t value)
	{
		___m_BindingIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51_marshaled_pinvoke
{
	InputActionMap_t12E0A74F13DAEBDBE20D07D97A7D67628CB6E151 * ___m_ActionMap_0;
	InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * ___m_Action_1;
	int32_t ___m_BindingIndex_2;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51_marshaled_com
{
	InputActionMap_t12E0A74F13DAEBDBE20D07D97A7D67628CB6E151 * ___m_ActionMap_0;
	InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * ___m_Action_1;
	int32_t ___m_BindingIndex_2;
};
#endif // BINDINGSYNTAX_TE1201B89368856DA18195A2F3D198BE08E680C51_H
#ifndef BINDINGSTATE_T9AE5998441CE8D1578D440EA76F42B3D779CDD36_H
#define BINDINGSTATE_T9AE5998441CE8D1578D440EA76F42B3D779CDD36_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputActionState_BindingState
struct  BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Byte UnityEngine.Experimental.Input.InputActionState_BindingState::m_ControlCount
					uint8_t ___m_ControlCount_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___m_ControlCount_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_InteractionCount_1_OffsetPadding[1];
					// System.Byte UnityEngine.Experimental.Input.InputActionState_BindingState::m_InteractionCount
					uint8_t ___m_InteractionCount_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_InteractionCount_1_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___m_InteractionCount_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ProcessorCount_2_OffsetPadding[2];
					// System.Byte UnityEngine.Experimental.Input.InputActionState_BindingState::m_ProcessorCount
					uint8_t ___m_ProcessorCount_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ProcessorCount_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___m_ProcessorCount_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_MapIndex_3_OffsetPadding[3];
					// System.Byte UnityEngine.Experimental.Input.InputActionState_BindingState::m_MapIndex
					uint8_t ___m_MapIndex_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_MapIndex_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___m_MapIndex_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Flags_4_OffsetPadding[4];
					// System.Byte UnityEngine.Experimental.Input.InputActionState_BindingState::m_Flags
					uint8_t ___m_Flags_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Flags_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___m_Flags_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_PartIndex_5_OffsetPadding[5];
					// System.Byte UnityEngine.Experimental.Input.InputActionState_BindingState::m_PartIndex
					uint8_t ___m_PartIndex_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_PartIndex_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___m_PartIndex_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ActionIndex_6_OffsetPadding[6];
					// System.UInt16 UnityEngine.Experimental.Input.InputActionState_BindingState::m_ActionIndex
					uint16_t ___m_ActionIndex_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ActionIndex_6_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___m_ActionIndex_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_CompositeOrCompositeBindingIndex_7_OffsetPadding[8];
					// System.UInt16 UnityEngine.Experimental.Input.InputActionState_BindingState::m_CompositeOrCompositeBindingIndex
					uint16_t ___m_CompositeOrCompositeBindingIndex_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_CompositeOrCompositeBindingIndex_7_OffsetPadding_forAlignmentOnly[8];
					uint16_t ___m_CompositeOrCompositeBindingIndex_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ProcessorStartIndex_8_OffsetPadding[10];
					// System.UInt16 UnityEngine.Experimental.Input.InputActionState_BindingState::m_ProcessorStartIndex
					uint16_t ___m_ProcessorStartIndex_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ProcessorStartIndex_8_OffsetPadding_forAlignmentOnly[10];
					uint16_t ___m_ProcessorStartIndex_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_InteractionStartIndex_9_OffsetPadding[12];
					// System.UInt16 UnityEngine.Experimental.Input.InputActionState_BindingState::m_InteractionStartIndex
					uint16_t ___m_InteractionStartIndex_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_InteractionStartIndex_9_OffsetPadding_forAlignmentOnly[12];
					uint16_t ___m_InteractionStartIndex_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ControlStartIndex_10_OffsetPadding[14];
					// System.UInt16 UnityEngine.Experimental.Input.InputActionState_BindingState::m_ControlStartIndex
					uint16_t ___m_ControlStartIndex_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ControlStartIndex_10_OffsetPadding_forAlignmentOnly[14];
					uint16_t ___m_ControlStartIndex_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_TriggerEventIdForComposite_11_OffsetPadding[16];
					// System.Int32 UnityEngine.Experimental.Input.InputActionState_BindingState::m_TriggerEventIdForComposite
					int32_t ___m_TriggerEventIdForComposite_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_TriggerEventIdForComposite_11_OffsetPadding_forAlignmentOnly[16];
					int32_t ___m_TriggerEventIdForComposite_11_forAlignmentOnly;
				};
			};
		};
		uint8_t BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36__padding[20];
	};

public:
	inline static int32_t get_offset_of_m_ControlCount_0() { return static_cast<int32_t>(offsetof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36, ___m_ControlCount_0)); }
	inline uint8_t get_m_ControlCount_0() const { return ___m_ControlCount_0; }
	inline uint8_t* get_address_of_m_ControlCount_0() { return &___m_ControlCount_0; }
	inline void set_m_ControlCount_0(uint8_t value)
	{
		___m_ControlCount_0 = value;
	}

	inline static int32_t get_offset_of_m_InteractionCount_1() { return static_cast<int32_t>(offsetof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36, ___m_InteractionCount_1)); }
	inline uint8_t get_m_InteractionCount_1() const { return ___m_InteractionCount_1; }
	inline uint8_t* get_address_of_m_InteractionCount_1() { return &___m_InteractionCount_1; }
	inline void set_m_InteractionCount_1(uint8_t value)
	{
		___m_InteractionCount_1 = value;
	}

	inline static int32_t get_offset_of_m_ProcessorCount_2() { return static_cast<int32_t>(offsetof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36, ___m_ProcessorCount_2)); }
	inline uint8_t get_m_ProcessorCount_2() const { return ___m_ProcessorCount_2; }
	inline uint8_t* get_address_of_m_ProcessorCount_2() { return &___m_ProcessorCount_2; }
	inline void set_m_ProcessorCount_2(uint8_t value)
	{
		___m_ProcessorCount_2 = value;
	}

	inline static int32_t get_offset_of_m_MapIndex_3() { return static_cast<int32_t>(offsetof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36, ___m_MapIndex_3)); }
	inline uint8_t get_m_MapIndex_3() const { return ___m_MapIndex_3; }
	inline uint8_t* get_address_of_m_MapIndex_3() { return &___m_MapIndex_3; }
	inline void set_m_MapIndex_3(uint8_t value)
	{
		___m_MapIndex_3 = value;
	}

	inline static int32_t get_offset_of_m_Flags_4() { return static_cast<int32_t>(offsetof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36, ___m_Flags_4)); }
	inline uint8_t get_m_Flags_4() const { return ___m_Flags_4; }
	inline uint8_t* get_address_of_m_Flags_4() { return &___m_Flags_4; }
	inline void set_m_Flags_4(uint8_t value)
	{
		___m_Flags_4 = value;
	}

	inline static int32_t get_offset_of_m_PartIndex_5() { return static_cast<int32_t>(offsetof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36, ___m_PartIndex_5)); }
	inline uint8_t get_m_PartIndex_5() const { return ___m_PartIndex_5; }
	inline uint8_t* get_address_of_m_PartIndex_5() { return &___m_PartIndex_5; }
	inline void set_m_PartIndex_5(uint8_t value)
	{
		___m_PartIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndex_6() { return static_cast<int32_t>(offsetof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36, ___m_ActionIndex_6)); }
	inline uint16_t get_m_ActionIndex_6() const { return ___m_ActionIndex_6; }
	inline uint16_t* get_address_of_m_ActionIndex_6() { return &___m_ActionIndex_6; }
	inline void set_m_ActionIndex_6(uint16_t value)
	{
		___m_ActionIndex_6 = value;
	}

	inline static int32_t get_offset_of_m_CompositeOrCompositeBindingIndex_7() { return static_cast<int32_t>(offsetof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36, ___m_CompositeOrCompositeBindingIndex_7)); }
	inline uint16_t get_m_CompositeOrCompositeBindingIndex_7() const { return ___m_CompositeOrCompositeBindingIndex_7; }
	inline uint16_t* get_address_of_m_CompositeOrCompositeBindingIndex_7() { return &___m_CompositeOrCompositeBindingIndex_7; }
	inline void set_m_CompositeOrCompositeBindingIndex_7(uint16_t value)
	{
		___m_CompositeOrCompositeBindingIndex_7 = value;
	}

	inline static int32_t get_offset_of_m_ProcessorStartIndex_8() { return static_cast<int32_t>(offsetof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36, ___m_ProcessorStartIndex_8)); }
	inline uint16_t get_m_ProcessorStartIndex_8() const { return ___m_ProcessorStartIndex_8; }
	inline uint16_t* get_address_of_m_ProcessorStartIndex_8() { return &___m_ProcessorStartIndex_8; }
	inline void set_m_ProcessorStartIndex_8(uint16_t value)
	{
		___m_ProcessorStartIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_InteractionStartIndex_9() { return static_cast<int32_t>(offsetof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36, ___m_InteractionStartIndex_9)); }
	inline uint16_t get_m_InteractionStartIndex_9() const { return ___m_InteractionStartIndex_9; }
	inline uint16_t* get_address_of_m_InteractionStartIndex_9() { return &___m_InteractionStartIndex_9; }
	inline void set_m_InteractionStartIndex_9(uint16_t value)
	{
		___m_InteractionStartIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_10() { return static_cast<int32_t>(offsetof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36, ___m_ControlStartIndex_10)); }
	inline uint16_t get_m_ControlStartIndex_10() const { return ___m_ControlStartIndex_10; }
	inline uint16_t* get_address_of_m_ControlStartIndex_10() { return &___m_ControlStartIndex_10; }
	inline void set_m_ControlStartIndex_10(uint16_t value)
	{
		___m_ControlStartIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_TriggerEventIdForComposite_11() { return static_cast<int32_t>(offsetof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36, ___m_TriggerEventIdForComposite_11)); }
	inline int32_t get_m_TriggerEventIdForComposite_11() const { return ___m_TriggerEventIdForComposite_11; }
	inline int32_t* get_address_of_m_TriggerEventIdForComposite_11() { return &___m_TriggerEventIdForComposite_11; }
	inline void set_m_TriggerEventIdForComposite_11(int32_t value)
	{
		___m_TriggerEventIdForComposite_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGSTATE_T9AE5998441CE8D1578D440EA76F42B3D779CDD36_H
#ifndef UNMANAGEDMEMORY_T0CCA4BE9804FA7E28678880324AD58F6BEFC749B_H
#define UNMANAGEDMEMORY_T0CCA4BE9804FA7E28678880324AD58F6BEFC749B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory
struct  UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B 
{
public:
	// System.Void* UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::basePtr
	void* ___basePtr_0;
	// System.Int32 UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::mapCount
	int32_t ___mapCount_1;
	// System.Int32 UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::actionCount
	int32_t ___actionCount_2;
	// System.Int32 UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::interactionCount
	int32_t ___interactionCount_3;
	// System.Int32 UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::bindingCount
	int32_t ___bindingCount_4;
	// System.Int32 UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::controlCount
	int32_t ___controlCount_5;
	// System.Int32 UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::compositeCount
	int32_t ___compositeCount_6;
	// UnityEngine.Experimental.Input.InputActionState_TriggerState* UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::actionStates
	TriggerState_t926B20439BECB7E033ED40D116B62EFEAD040A4B * ___actionStates_7;
	// UnityEngine.Experimental.Input.InputActionState_BindingState* UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::bindingStates
	BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * ___bindingStates_8;
	// UnityEngine.Experimental.Input.InputActionState_InteractionState* UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::interactionStates
	InteractionState_tF3C11E8DBB46E694157F64464C3C3E2EC2993202 * ___interactionStates_9;
	// System.Single* UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::controlMagnitudes
	float* ___controlMagnitudes_10;
	// System.Single* UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::compositeMagnitudes
	float* ___compositeMagnitudes_11;
	// System.UInt16* UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::actionBindingIndicesAndCounts
	uint16_t* ___actionBindingIndicesAndCounts_12;
	// System.UInt16* UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::actionBindingIndices
	uint16_t* ___actionBindingIndices_13;
	// System.Int32* UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::controlIndexToBindingIndex
	int32_t* ___controlIndexToBindingIndex_14;
	// UnityEngine.Experimental.Input.InputActionState_ActionMapIndices* UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory::mapIndices
	ActionMapIndices_t5535C8048443DDD41A571223D16ECF43A9F27404 * ___mapIndices_15;

public:
	inline static int32_t get_offset_of_basePtr_0() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___basePtr_0)); }
	inline void* get_basePtr_0() const { return ___basePtr_0; }
	inline void** get_address_of_basePtr_0() { return &___basePtr_0; }
	inline void set_basePtr_0(void* value)
	{
		___basePtr_0 = value;
	}

	inline static int32_t get_offset_of_mapCount_1() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___mapCount_1)); }
	inline int32_t get_mapCount_1() const { return ___mapCount_1; }
	inline int32_t* get_address_of_mapCount_1() { return &___mapCount_1; }
	inline void set_mapCount_1(int32_t value)
	{
		___mapCount_1 = value;
	}

	inline static int32_t get_offset_of_actionCount_2() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___actionCount_2)); }
	inline int32_t get_actionCount_2() const { return ___actionCount_2; }
	inline int32_t* get_address_of_actionCount_2() { return &___actionCount_2; }
	inline void set_actionCount_2(int32_t value)
	{
		___actionCount_2 = value;
	}

	inline static int32_t get_offset_of_interactionCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___interactionCount_3)); }
	inline int32_t get_interactionCount_3() const { return ___interactionCount_3; }
	inline int32_t* get_address_of_interactionCount_3() { return &___interactionCount_3; }
	inline void set_interactionCount_3(int32_t value)
	{
		___interactionCount_3 = value;
	}

	inline static int32_t get_offset_of_bindingCount_4() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___bindingCount_4)); }
	inline int32_t get_bindingCount_4() const { return ___bindingCount_4; }
	inline int32_t* get_address_of_bindingCount_4() { return &___bindingCount_4; }
	inline void set_bindingCount_4(int32_t value)
	{
		___bindingCount_4 = value;
	}

	inline static int32_t get_offset_of_controlCount_5() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___controlCount_5)); }
	inline int32_t get_controlCount_5() const { return ___controlCount_5; }
	inline int32_t* get_address_of_controlCount_5() { return &___controlCount_5; }
	inline void set_controlCount_5(int32_t value)
	{
		___controlCount_5 = value;
	}

	inline static int32_t get_offset_of_compositeCount_6() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___compositeCount_6)); }
	inline int32_t get_compositeCount_6() const { return ___compositeCount_6; }
	inline int32_t* get_address_of_compositeCount_6() { return &___compositeCount_6; }
	inline void set_compositeCount_6(int32_t value)
	{
		___compositeCount_6 = value;
	}

	inline static int32_t get_offset_of_actionStates_7() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___actionStates_7)); }
	inline TriggerState_t926B20439BECB7E033ED40D116B62EFEAD040A4B * get_actionStates_7() const { return ___actionStates_7; }
	inline TriggerState_t926B20439BECB7E033ED40D116B62EFEAD040A4B ** get_address_of_actionStates_7() { return &___actionStates_7; }
	inline void set_actionStates_7(TriggerState_t926B20439BECB7E033ED40D116B62EFEAD040A4B * value)
	{
		___actionStates_7 = value;
	}

	inline static int32_t get_offset_of_bindingStates_8() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___bindingStates_8)); }
	inline BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * get_bindingStates_8() const { return ___bindingStates_8; }
	inline BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 ** get_address_of_bindingStates_8() { return &___bindingStates_8; }
	inline void set_bindingStates_8(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * value)
	{
		___bindingStates_8 = value;
	}

	inline static int32_t get_offset_of_interactionStates_9() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___interactionStates_9)); }
	inline InteractionState_tF3C11E8DBB46E694157F64464C3C3E2EC2993202 * get_interactionStates_9() const { return ___interactionStates_9; }
	inline InteractionState_tF3C11E8DBB46E694157F64464C3C3E2EC2993202 ** get_address_of_interactionStates_9() { return &___interactionStates_9; }
	inline void set_interactionStates_9(InteractionState_tF3C11E8DBB46E694157F64464C3C3E2EC2993202 * value)
	{
		___interactionStates_9 = value;
	}

	inline static int32_t get_offset_of_controlMagnitudes_10() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___controlMagnitudes_10)); }
	inline float* get_controlMagnitudes_10() const { return ___controlMagnitudes_10; }
	inline float** get_address_of_controlMagnitudes_10() { return &___controlMagnitudes_10; }
	inline void set_controlMagnitudes_10(float* value)
	{
		___controlMagnitudes_10 = value;
	}

	inline static int32_t get_offset_of_compositeMagnitudes_11() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___compositeMagnitudes_11)); }
	inline float* get_compositeMagnitudes_11() const { return ___compositeMagnitudes_11; }
	inline float** get_address_of_compositeMagnitudes_11() { return &___compositeMagnitudes_11; }
	inline void set_compositeMagnitudes_11(float* value)
	{
		___compositeMagnitudes_11 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndicesAndCounts_12() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___actionBindingIndicesAndCounts_12)); }
	inline uint16_t* get_actionBindingIndicesAndCounts_12() const { return ___actionBindingIndicesAndCounts_12; }
	inline uint16_t** get_address_of_actionBindingIndicesAndCounts_12() { return &___actionBindingIndicesAndCounts_12; }
	inline void set_actionBindingIndicesAndCounts_12(uint16_t* value)
	{
		___actionBindingIndicesAndCounts_12 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndices_13() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___actionBindingIndices_13)); }
	inline uint16_t* get_actionBindingIndices_13() const { return ___actionBindingIndices_13; }
	inline uint16_t** get_address_of_actionBindingIndices_13() { return &___actionBindingIndices_13; }
	inline void set_actionBindingIndices_13(uint16_t* value)
	{
		___actionBindingIndices_13 = value;
	}

	inline static int32_t get_offset_of_controlIndexToBindingIndex_14() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___controlIndexToBindingIndex_14)); }
	inline int32_t* get_controlIndexToBindingIndex_14() const { return ___controlIndexToBindingIndex_14; }
	inline int32_t** get_address_of_controlIndexToBindingIndex_14() { return &___controlIndexToBindingIndex_14; }
	inline void set_controlIndexToBindingIndex_14(int32_t* value)
	{
		___controlIndexToBindingIndex_14 = value;
	}

	inline static int32_t get_offset_of_mapIndices_15() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B, ___mapIndices_15)); }
	inline ActionMapIndices_t5535C8048443DDD41A571223D16ECF43A9F27404 * get_mapIndices_15() const { return ___mapIndices_15; }
	inline ActionMapIndices_t5535C8048443DDD41A571223D16ECF43A9F27404 ** get_address_of_mapIndices_15() { return &___mapIndices_15; }
	inline void set_mapIndices_15(ActionMapIndices_t5535C8048443DDD41A571223D16ECF43A9F27404 * value)
	{
		___mapIndices_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMEMORY_T0CCA4BE9804FA7E28678880324AD58F6BEFC749B_H
#ifndef INPUTBINDINGCOMPOSITECONTEXT_TD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385_H
#define INPUTBINDINGCOMPOSITECONTEXT_TD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputBindingCompositeContext
struct  InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 
{
public:
	// UnityEngine.Experimental.Input.InputActionState UnityEngine.Experimental.Input.InputBindingCompositeContext::m_State
	InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * ___m_State_0;
	// System.Int32 UnityEngine.Experimental.Input.InputBindingCompositeContext::m_BindingIndex
	int32_t ___m_BindingIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385, ___m_State_0)); }
	inline InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_State_0), value);
	}

	inline static int32_t get_offset_of_m_BindingIndex_1() { return static_cast<int32_t>(offsetof(InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385, ___m_BindingIndex_1)); }
	inline int32_t get_m_BindingIndex_1() const { return ___m_BindingIndex_1; }
	inline int32_t* get_address_of_m_BindingIndex_1() { return &___m_BindingIndex_1; }
	inline void set_m_BindingIndex_1(int32_t value)
	{
		___m_BindingIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.InputBindingCompositeContext
struct InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385_marshaled_pinvoke
{
	InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * ___m_State_0;
	int32_t ___m_BindingIndex_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.InputBindingCompositeContext
struct InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385_marshaled_com
{
	InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * ___m_State_0;
	int32_t ___m_BindingIndex_1;
};
#endif // INPUTBINDINGCOMPOSITECONTEXT_TD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385_H
#ifndef INPUTCONTROLSCHEME_T60AA02D5BE21179206A533E0BA5DD1E85E446BA3_H
#define INPUTCONTROLSCHEME_T60AA02D5BE21179206A533E0BA5DD1E85E446BA3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputControlScheme
struct  InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 
{
public:
	// System.String UnityEngine.Experimental.Input.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.Experimental.Input.InputControlScheme::m_BaseSchemeName
	String_t* ___m_BaseSchemeName_1;
	// System.String UnityEngine.Experimental.Input.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_2;
	// UnityEngine.Experimental.Input.InputControlScheme_DeviceRequirement[] UnityEngine.Experimental.Input.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* ___m_DeviceRequirements_3;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_BaseSchemeName_1() { return static_cast<int32_t>(offsetof(InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3, ___m_BaseSchemeName_1)); }
	inline String_t* get_m_BaseSchemeName_1() const { return ___m_BaseSchemeName_1; }
	inline String_t** get_address_of_m_BaseSchemeName_1() { return &___m_BaseSchemeName_1; }
	inline void set_m_BaseSchemeName_1(String_t* value)
	{
		___m_BaseSchemeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_BaseSchemeName_1), value);
	}

	inline static int32_t get_offset_of_m_BindingGroup_2() { return static_cast<int32_t>(offsetof(InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3, ___m_BindingGroup_2)); }
	inline String_t* get_m_BindingGroup_2() const { return ___m_BindingGroup_2; }
	inline String_t** get_address_of_m_BindingGroup_2() { return &___m_BindingGroup_2; }
	inline void set_m_BindingGroup_2(String_t* value)
	{
		___m_BindingGroup_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_BindingGroup_2), value);
	}

	inline static int32_t get_offset_of_m_DeviceRequirements_3() { return static_cast<int32_t>(offsetof(InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3, ___m_DeviceRequirements_3)); }
	inline DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* get_m_DeviceRequirements_3() const { return ___m_DeviceRequirements_3; }
	inline DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066** get_address_of_m_DeviceRequirements_3() { return &___m_DeviceRequirements_3; }
	inline void set_m_DeviceRequirements_3(DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* value)
	{
		___m_DeviceRequirements_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_DeviceRequirements_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.InputControlScheme
struct InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BaseSchemeName_1;
	char* ___m_BindingGroup_2;
	DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshaled_pinvoke* ___m_DeviceRequirements_3;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.InputControlScheme
struct InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BaseSchemeName_1;
	Il2CppChar* ___m_BindingGroup_2;
	DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshaled_com* ___m_DeviceRequirements_3;
};
#endif // INPUTCONTROLSCHEME_T60AA02D5BE21179206A533E0BA5DD1E85E446BA3_H
#ifndef STATECHANGEMONITORTIMEOUT_T6CAEB053F8AC6CCFE709A5116005493966F9C9B2_H
#define STATECHANGEMONITORTIMEOUT_T6CAEB053F8AC6CCFE709A5116005493966F9C9B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputManager_StateChangeMonitorTimeout
struct  StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2 
{
public:
	// UnityEngine.Experimental.Input.InputControl UnityEngine.Experimental.Input.InputManager_StateChangeMonitorTimeout::control
	InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * ___control_0;
	// System.Double UnityEngine.Experimental.Input.InputManager_StateChangeMonitorTimeout::time
	double ___time_1;
	// UnityEngine.Experimental.Input.LowLevel.IInputStateChangeMonitor UnityEngine.Experimental.Input.InputManager_StateChangeMonitorTimeout::monitor
	RuntimeObject* ___monitor_2;
	// System.Int64 UnityEngine.Experimental.Input.InputManager_StateChangeMonitorTimeout::monitorIndex
	int64_t ___monitorIndex_3;
	// System.Int32 UnityEngine.Experimental.Input.InputManager_StateChangeMonitorTimeout::timerIndex
	int32_t ___timerIndex_4;

public:
	inline static int32_t get_offset_of_control_0() { return static_cast<int32_t>(offsetof(StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2, ___control_0)); }
	inline InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * get_control_0() const { return ___control_0; }
	inline InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 ** get_address_of_control_0() { return &___control_0; }
	inline void set_control_0(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * value)
	{
		___control_0 = value;
		Il2CppCodeGenWriteBarrier((&___control_0), value);
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2, ___time_1)); }
	inline double get_time_1() const { return ___time_1; }
	inline double* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(double value)
	{
		___time_1 = value;
	}

	inline static int32_t get_offset_of_monitor_2() { return static_cast<int32_t>(offsetof(StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2, ___monitor_2)); }
	inline RuntimeObject* get_monitor_2() const { return ___monitor_2; }
	inline RuntimeObject** get_address_of_monitor_2() { return &___monitor_2; }
	inline void set_monitor_2(RuntimeObject* value)
	{
		___monitor_2 = value;
		Il2CppCodeGenWriteBarrier((&___monitor_2), value);
	}

	inline static int32_t get_offset_of_monitorIndex_3() { return static_cast<int32_t>(offsetof(StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2, ___monitorIndex_3)); }
	inline int64_t get_monitorIndex_3() const { return ___monitorIndex_3; }
	inline int64_t* get_address_of_monitorIndex_3() { return &___monitorIndex_3; }
	inline void set_monitorIndex_3(int64_t value)
	{
		___monitorIndex_3 = value;
	}

	inline static int32_t get_offset_of_timerIndex_4() { return static_cast<int32_t>(offsetof(StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2, ___timerIndex_4)); }
	inline int32_t get_timerIndex_4() const { return ___timerIndex_4; }
	inline int32_t* get_address_of_timerIndex_4() { return &___timerIndex_4; }
	inline void set_timerIndex_4(int32_t value)
	{
		___timerIndex_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.InputManager/StateChangeMonitorTimeout
struct StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2_marshaled_pinvoke
{
	InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * ___control_0;
	double ___time_1;
	RuntimeObject* ___monitor_2;
	int64_t ___monitorIndex_3;
	int32_t ___timerIndex_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.InputManager/StateChangeMonitorTimeout
struct StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2_marshaled_com
{
	InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * ___control_0;
	double ___time_1;
	RuntimeObject* ___monitor_2;
	int64_t ___monitorIndex_3;
	int32_t ___timerIndex_4;
};
#endif // STATECHANGEMONITORTIMEOUT_T6CAEB053F8AC6CCFE709A5116005493966F9C9B2_H
#ifndef INPUTMETRICS_TE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B_H
#define INPUTMETRICS_TE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputMetrics
struct  InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.InputMetrics::maxNumDevices
	int32_t ___maxNumDevices_0;
	// System.Int32 UnityEngine.Experimental.Input.InputMetrics::currentNumDevices
	int32_t ___currentNumDevices_1;
	// System.Int32 UnityEngine.Experimental.Input.InputMetrics::maxStateSizeInBytes
	int32_t ___maxStateSizeInBytes_2;
	// System.Int32 UnityEngine.Experimental.Input.InputMetrics::currentStateSizeInBytes
	int32_t ___currentStateSizeInBytes_3;
	// System.Int32 UnityEngine.Experimental.Input.InputMetrics::currentControlCount
	int32_t ___currentControlCount_4;
	// System.Int32 UnityEngine.Experimental.Input.InputMetrics::currentLayoutCount
	int32_t ___currentLayoutCount_5;
	// System.Int32 UnityEngine.Experimental.Input.InputMetrics::totalEventBytes
	int32_t ___totalEventBytes_6;
	// System.Int32 UnityEngine.Experimental.Input.InputMetrics::totalEventCount
	int32_t ___totalEventCount_7;
	// System.Int32 UnityEngine.Experimental.Input.InputMetrics::totalFrameCount
	int32_t ___totalFrameCount_8;
	// System.Double UnityEngine.Experimental.Input.InputMetrics::totalEventProcessingTime
	double ___totalEventProcessingTime_9;
	// System.Double UnityEngine.Experimental.Input.InputMetrics::totalEventLagTime
	double ___totalEventLagTime_10;

public:
	inline static int32_t get_offset_of_maxNumDevices_0() { return static_cast<int32_t>(offsetof(InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B, ___maxNumDevices_0)); }
	inline int32_t get_maxNumDevices_0() const { return ___maxNumDevices_0; }
	inline int32_t* get_address_of_maxNumDevices_0() { return &___maxNumDevices_0; }
	inline void set_maxNumDevices_0(int32_t value)
	{
		___maxNumDevices_0 = value;
	}

	inline static int32_t get_offset_of_currentNumDevices_1() { return static_cast<int32_t>(offsetof(InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B, ___currentNumDevices_1)); }
	inline int32_t get_currentNumDevices_1() const { return ___currentNumDevices_1; }
	inline int32_t* get_address_of_currentNumDevices_1() { return &___currentNumDevices_1; }
	inline void set_currentNumDevices_1(int32_t value)
	{
		___currentNumDevices_1 = value;
	}

	inline static int32_t get_offset_of_maxStateSizeInBytes_2() { return static_cast<int32_t>(offsetof(InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B, ___maxStateSizeInBytes_2)); }
	inline int32_t get_maxStateSizeInBytes_2() const { return ___maxStateSizeInBytes_2; }
	inline int32_t* get_address_of_maxStateSizeInBytes_2() { return &___maxStateSizeInBytes_2; }
	inline void set_maxStateSizeInBytes_2(int32_t value)
	{
		___maxStateSizeInBytes_2 = value;
	}

	inline static int32_t get_offset_of_currentStateSizeInBytes_3() { return static_cast<int32_t>(offsetof(InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B, ___currentStateSizeInBytes_3)); }
	inline int32_t get_currentStateSizeInBytes_3() const { return ___currentStateSizeInBytes_3; }
	inline int32_t* get_address_of_currentStateSizeInBytes_3() { return &___currentStateSizeInBytes_3; }
	inline void set_currentStateSizeInBytes_3(int32_t value)
	{
		___currentStateSizeInBytes_3 = value;
	}

	inline static int32_t get_offset_of_currentControlCount_4() { return static_cast<int32_t>(offsetof(InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B, ___currentControlCount_4)); }
	inline int32_t get_currentControlCount_4() const { return ___currentControlCount_4; }
	inline int32_t* get_address_of_currentControlCount_4() { return &___currentControlCount_4; }
	inline void set_currentControlCount_4(int32_t value)
	{
		___currentControlCount_4 = value;
	}

	inline static int32_t get_offset_of_currentLayoutCount_5() { return static_cast<int32_t>(offsetof(InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B, ___currentLayoutCount_5)); }
	inline int32_t get_currentLayoutCount_5() const { return ___currentLayoutCount_5; }
	inline int32_t* get_address_of_currentLayoutCount_5() { return &___currentLayoutCount_5; }
	inline void set_currentLayoutCount_5(int32_t value)
	{
		___currentLayoutCount_5 = value;
	}

	inline static int32_t get_offset_of_totalEventBytes_6() { return static_cast<int32_t>(offsetof(InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B, ___totalEventBytes_6)); }
	inline int32_t get_totalEventBytes_6() const { return ___totalEventBytes_6; }
	inline int32_t* get_address_of_totalEventBytes_6() { return &___totalEventBytes_6; }
	inline void set_totalEventBytes_6(int32_t value)
	{
		___totalEventBytes_6 = value;
	}

	inline static int32_t get_offset_of_totalEventCount_7() { return static_cast<int32_t>(offsetof(InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B, ___totalEventCount_7)); }
	inline int32_t get_totalEventCount_7() const { return ___totalEventCount_7; }
	inline int32_t* get_address_of_totalEventCount_7() { return &___totalEventCount_7; }
	inline void set_totalEventCount_7(int32_t value)
	{
		___totalEventCount_7 = value;
	}

	inline static int32_t get_offset_of_totalFrameCount_8() { return static_cast<int32_t>(offsetof(InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B, ___totalFrameCount_8)); }
	inline int32_t get_totalFrameCount_8() const { return ___totalFrameCount_8; }
	inline int32_t* get_address_of_totalFrameCount_8() { return &___totalFrameCount_8; }
	inline void set_totalFrameCount_8(int32_t value)
	{
		___totalFrameCount_8 = value;
	}

	inline static int32_t get_offset_of_totalEventProcessingTime_9() { return static_cast<int32_t>(offsetof(InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B, ___totalEventProcessingTime_9)); }
	inline double get_totalEventProcessingTime_9() const { return ___totalEventProcessingTime_9; }
	inline double* get_address_of_totalEventProcessingTime_9() { return &___totalEventProcessingTime_9; }
	inline void set_totalEventProcessingTime_9(double value)
	{
		___totalEventProcessingTime_9 = value;
	}

	inline static int32_t get_offset_of_totalEventLagTime_10() { return static_cast<int32_t>(offsetof(InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B, ___totalEventLagTime_10)); }
	inline double get_totalEventLagTime_10() const { return ___totalEventLagTime_10; }
	inline double* get_address_of_totalEventLagTime_10() { return &___totalEventLagTime_10; }
	inline void set_totalEventLagTime_10(double value)
	{
		___totalEventLagTime_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTMETRICS_TE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B_H
#ifndef CACHE_T8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE_H
#define CACHE_T8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Layouts.InputControlLayout_Cache
struct  Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.Input.Utilities.InternedString,UnityEngine.Experimental.Input.Layouts.InputControlLayout> UnityEngine.Experimental.Input.Layouts.InputControlLayout_Cache::table
	Dictionary_2_tBF0DA36363FDBD62AE6B480EB5EC931A2EAABC95 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE, ___table_0)); }
	inline Dictionary_2_tBF0DA36363FDBD62AE6B480EB5EC931A2EAABC95 * get_table_0() const { return ___table_0; }
	inline Dictionary_2_tBF0DA36363FDBD62AE6B480EB5EC931A2EAABC95 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_tBF0DA36363FDBD62AE6B480EB5EC931A2EAABC95 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.Layouts.InputControlLayout/Cache
struct Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE_marshaled_pinvoke
{
	Dictionary_2_tBF0DA36363FDBD62AE6B480EB5EC931A2EAABC95 * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.Layouts.InputControlLayout/Cache
struct Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE_marshaled_com
{
	Dictionary_2_tBF0DA36363FDBD62AE6B480EB5EC931A2EAABC95 * ___table_0;
};
#endif // CACHE_T8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE_H
#ifndef COLLECTION_T38AD76A66F195D44806ACF41FFD4BFE28F0EE035_H
#define COLLECTION_T38AD76A66F195D44806ACF41FFD4BFE28F0EE035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Layouts.InputControlLayout_Collection
struct  Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.Input.Utilities.InternedString,System.Type> UnityEngine.Experimental.Input.Layouts.InputControlLayout_Collection::layoutTypes
	Dictionary_2_tF7F7F109EA1B683BC5E1AE8C46064DF990B52AEF * ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.Input.Utilities.InternedString,System.String> UnityEngine.Experimental.Input.Layouts.InputControlLayout_Collection::layoutStrings
	Dictionary_2_t69FBBA7D44D9638F971F2C3C9DFFB6F339457476 * ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.Input.Utilities.InternedString,UnityEngine.Experimental.Input.Layouts.InputControlLayout_BuilderInfo> UnityEngine.Experimental.Input.Layouts.InputControlLayout_Collection::layoutBuilders
	Dictionary_2_t51B4E6576678D27B0F3BBFABC04D9E74BB0310B0 * ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.Input.Utilities.InternedString,UnityEngine.Experimental.Input.Utilities.InternedString> UnityEngine.Experimental.Input.Layouts.InputControlLayout_Collection::baseLayoutTable
	Dictionary_2_t168CC4064F94DB63AAFD0502A38440D603C0B691 * ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.Input.Utilities.InternedString,UnityEngine.Experimental.Input.Utilities.InternedString[]> UnityEngine.Experimental.Input.Layouts.InputControlLayout_Collection::layoutOverrides
	Dictionary_2_t6152DE741B65068ADF0AEFDBAAC65D4F933F44C3 * ___layoutOverrides_5;
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Input.Layouts.InputControlLayout_Collection_LayoutMatcher> UnityEngine.Experimental.Input.Layouts.InputControlLayout_Collection::layoutMatchers
	List_1_t205F71757A795FA7538589A769F3D571070A8651 * ___layoutMatchers_6;

public:
	inline static int32_t get_offset_of_layoutTypes_1() { return static_cast<int32_t>(offsetof(Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035, ___layoutTypes_1)); }
	inline Dictionary_2_tF7F7F109EA1B683BC5E1AE8C46064DF990B52AEF * get_layoutTypes_1() const { return ___layoutTypes_1; }
	inline Dictionary_2_tF7F7F109EA1B683BC5E1AE8C46064DF990B52AEF ** get_address_of_layoutTypes_1() { return &___layoutTypes_1; }
	inline void set_layoutTypes_1(Dictionary_2_tF7F7F109EA1B683BC5E1AE8C46064DF990B52AEF * value)
	{
		___layoutTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___layoutTypes_1), value);
	}

	inline static int32_t get_offset_of_layoutStrings_2() { return static_cast<int32_t>(offsetof(Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035, ___layoutStrings_2)); }
	inline Dictionary_2_t69FBBA7D44D9638F971F2C3C9DFFB6F339457476 * get_layoutStrings_2() const { return ___layoutStrings_2; }
	inline Dictionary_2_t69FBBA7D44D9638F971F2C3C9DFFB6F339457476 ** get_address_of_layoutStrings_2() { return &___layoutStrings_2; }
	inline void set_layoutStrings_2(Dictionary_2_t69FBBA7D44D9638F971F2C3C9DFFB6F339457476 * value)
	{
		___layoutStrings_2 = value;
		Il2CppCodeGenWriteBarrier((&___layoutStrings_2), value);
	}

	inline static int32_t get_offset_of_layoutBuilders_3() { return static_cast<int32_t>(offsetof(Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035, ___layoutBuilders_3)); }
	inline Dictionary_2_t51B4E6576678D27B0F3BBFABC04D9E74BB0310B0 * get_layoutBuilders_3() const { return ___layoutBuilders_3; }
	inline Dictionary_2_t51B4E6576678D27B0F3BBFABC04D9E74BB0310B0 ** get_address_of_layoutBuilders_3() { return &___layoutBuilders_3; }
	inline void set_layoutBuilders_3(Dictionary_2_t51B4E6576678D27B0F3BBFABC04D9E74BB0310B0 * value)
	{
		___layoutBuilders_3 = value;
		Il2CppCodeGenWriteBarrier((&___layoutBuilders_3), value);
	}

	inline static int32_t get_offset_of_baseLayoutTable_4() { return static_cast<int32_t>(offsetof(Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035, ___baseLayoutTable_4)); }
	inline Dictionary_2_t168CC4064F94DB63AAFD0502A38440D603C0B691 * get_baseLayoutTable_4() const { return ___baseLayoutTable_4; }
	inline Dictionary_2_t168CC4064F94DB63AAFD0502A38440D603C0B691 ** get_address_of_baseLayoutTable_4() { return &___baseLayoutTable_4; }
	inline void set_baseLayoutTable_4(Dictionary_2_t168CC4064F94DB63AAFD0502A38440D603C0B691 * value)
	{
		___baseLayoutTable_4 = value;
		Il2CppCodeGenWriteBarrier((&___baseLayoutTable_4), value);
	}

	inline static int32_t get_offset_of_layoutOverrides_5() { return static_cast<int32_t>(offsetof(Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035, ___layoutOverrides_5)); }
	inline Dictionary_2_t6152DE741B65068ADF0AEFDBAAC65D4F933F44C3 * get_layoutOverrides_5() const { return ___layoutOverrides_5; }
	inline Dictionary_2_t6152DE741B65068ADF0AEFDBAAC65D4F933F44C3 ** get_address_of_layoutOverrides_5() { return &___layoutOverrides_5; }
	inline void set_layoutOverrides_5(Dictionary_2_t6152DE741B65068ADF0AEFDBAAC65D4F933F44C3 * value)
	{
		___layoutOverrides_5 = value;
		Il2CppCodeGenWriteBarrier((&___layoutOverrides_5), value);
	}

	inline static int32_t get_offset_of_layoutMatchers_6() { return static_cast<int32_t>(offsetof(Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035, ___layoutMatchers_6)); }
	inline List_1_t205F71757A795FA7538589A769F3D571070A8651 * get_layoutMatchers_6() const { return ___layoutMatchers_6; }
	inline List_1_t205F71757A795FA7538589A769F3D571070A8651 ** get_address_of_layoutMatchers_6() { return &___layoutMatchers_6; }
	inline void set_layoutMatchers_6(List_1_t205F71757A795FA7538589A769F3D571070A8651 * value)
	{
		___layoutMatchers_6 = value;
		Il2CppCodeGenWriteBarrier((&___layoutMatchers_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.Layouts.InputControlLayout/Collection
struct Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035_marshaled_pinvoke
{
	Dictionary_2_tF7F7F109EA1B683BC5E1AE8C46064DF990B52AEF * ___layoutTypes_1;
	Dictionary_2_t69FBBA7D44D9638F971F2C3C9DFFB6F339457476 * ___layoutStrings_2;
	Dictionary_2_t51B4E6576678D27B0F3BBFABC04D9E74BB0310B0 * ___layoutBuilders_3;
	Dictionary_2_t168CC4064F94DB63AAFD0502A38440D603C0B691 * ___baseLayoutTable_4;
	Dictionary_2_t6152DE741B65068ADF0AEFDBAAC65D4F933F44C3 * ___layoutOverrides_5;
	List_1_t205F71757A795FA7538589A769F3D571070A8651 * ___layoutMatchers_6;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.Layouts.InputControlLayout/Collection
struct Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035_marshaled_com
{
	Dictionary_2_tF7F7F109EA1B683BC5E1AE8C46064DF990B52AEF * ___layoutTypes_1;
	Dictionary_2_t69FBBA7D44D9638F971F2C3C9DFFB6F339457476 * ___layoutStrings_2;
	Dictionary_2_t51B4E6576678D27B0F3BBFABC04D9E74BB0310B0 * ___layoutBuilders_3;
	Dictionary_2_t168CC4064F94DB63AAFD0502A38440D603C0B691 * ___baseLayoutTable_4;
	Dictionary_2_t6152DE741B65068ADF0AEFDBAAC65D4F933F44C3 * ___layoutOverrides_5;
	List_1_t205F71757A795FA7538589A769F3D571070A8651 * ___layoutMatchers_6;
};
#endif // COLLECTION_T38AD76A66F195D44806ACF41FFD4BFE28F0EE035_H
#ifndef INPUTDEVICEDESCRIPTION_TF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4_H
#define INPUTDEVICEDESCRIPTION_TF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Layouts.InputDeviceDescription
struct  InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4 
{
public:
	// System.String UnityEngine.Experimental.Input.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.Experimental.Input.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.Experimental.Input.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.Experimental.Input.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.Experimental.Input.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.Experimental.Input.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.Experimental.Input.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_InterfaceName_0), value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DeviceClass_1), value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Manufacturer_2), value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Product_3), value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Serial_4), value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Version_5), value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Capabilities_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.Layouts.InputDeviceDescription
struct InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.Layouts.InputDeviceDescription
struct InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};
#endif // INPUTDEVICEDESCRIPTION_TF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4_H
#ifndef INPUTEVENTPTR_TDB779E9C62F0376238944401D979912F849DB2AB_H
#define INPUTEVENTPTR_TDB779E9C62F0376238944401D979912F849DB2AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.LowLevel.InputEventPtr
struct  InputEventPtr_tDB779E9C62F0376238944401D979912F849DB2AB 
{
public:
	// UnityEngine.Experimental.Input.LowLevel.InputEvent* UnityEngine.Experimental.Input.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_tF5864CEDF7DE06DB7774CF79E516F3C9CE5E51A8 * ___m_EventPtr_0;

public:
	inline static int32_t get_offset_of_m_EventPtr_0() { return static_cast<int32_t>(offsetof(InputEventPtr_tDB779E9C62F0376238944401D979912F849DB2AB, ___m_EventPtr_0)); }
	inline InputEvent_tF5864CEDF7DE06DB7774CF79E516F3C9CE5E51A8 * get_m_EventPtr_0() const { return ___m_EventPtr_0; }
	inline InputEvent_tF5864CEDF7DE06DB7774CF79E516F3C9CE5E51A8 ** get_address_of_m_EventPtr_0() { return &___m_EventPtr_0; }
	inline void set_m_EventPtr_0(InputEvent_tF5864CEDF7DE06DB7774CF79E516F3C9CE5E51A8 * value)
	{
		___m_EventPtr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTEVENTPTR_TDB779E9C62F0376238944401D979912F849DB2AB_H
#ifndef DOUBLEBUFFERS_T05CD53A8055F7EA8AA8F489AE5B061B46039510E_H
#define DOUBLEBUFFERS_T05CD53A8055F7EA8AA8F489AE5B061B46039510E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.LowLevel.InputStateBuffers_DoubleBuffers
struct  DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E 
{
public:
	// System.Void** UnityEngine.Experimental.Input.LowLevel.InputStateBuffers_DoubleBuffers::deviceToBufferMapping
	void** ___deviceToBufferMapping_0;

public:
	inline static int32_t get_offset_of_deviceToBufferMapping_0() { return static_cast<int32_t>(offsetof(DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E, ___deviceToBufferMapping_0)); }
	inline void** get_deviceToBufferMapping_0() const { return ___deviceToBufferMapping_0; }
	inline void*** get_address_of_deviceToBufferMapping_0() { return &___deviceToBufferMapping_0; }
	inline void set_deviceToBufferMapping_0(void** value)
	{
		___deviceToBufferMapping_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLEBUFFERS_T05CD53A8055F7EA8AA8F489AE5B061B46039510E_H
#ifndef ONGOINGACCOUNTSELECTION_TBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_H
#define ONGOINGACCOUNTSELECTION_TBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Plugins.Users.InputUser_OngoingAccountSelection
struct  OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53 
{
public:
	// UnityEngine.Experimental.Input.InputDevice UnityEngine.Experimental.Input.Plugins.Users.InputUser_OngoingAccountSelection::device
	InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * ___device_0;
	// System.UInt32 UnityEngine.Experimental.Input.Plugins.Users.InputUser_OngoingAccountSelection::userId
	uint32_t ___userId_1;

public:
	inline static int32_t get_offset_of_device_0() { return static_cast<int32_t>(offsetof(OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53, ___device_0)); }
	inline InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * get_device_0() const { return ___device_0; }
	inline InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 ** get_address_of_device_0() { return &___device_0; }
	inline void set_device_0(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * value)
	{
		___device_0 = value;
		Il2CppCodeGenWriteBarrier((&___device_0), value);
	}

	inline static int32_t get_offset_of_userId_1() { return static_cast<int32_t>(offsetof(OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53, ___userId_1)); }
	inline uint32_t get_userId_1() const { return ___userId_1; }
	inline uint32_t* get_address_of_userId_1() { return &___userId_1; }
	inline void set_userId_1(uint32_t value)
	{
		___userId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.Plugins.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_marshaled_pinvoke
{
	InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * ___device_0;
	uint32_t ___userId_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.Plugins.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_marshaled_com
{
	InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * ___device_0;
	uint32_t ___userId_1;
};
#endif // ONGOINGACCOUNTSELECTION_TBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_H
#ifndef FOURCC_TBF6981976DB609111A3A17EB36644122B8AC3D5E_H
#define FOURCC_TBF6981976DB609111A3A17EB36644122B8AC3D5E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.FourCC
struct  FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOURCC_TBF6981976DB609111A3A17EB36644122B8AC3D5E_H
#ifndef INLINEDARRAY_1_T350E3F706B813C0855CE8B5ECDB37A47A4F1B892_H
#define INLINEDARRAY_1_T350E3F706B813C0855CE8B5ECDB37A47A4F1B892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action>
struct  InlinedArray_1_t350E3F706B813C0855CE8B5ECDB37A47A4F1B892 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	ActionU5BU5D_t3A8459FA8B62CBF2720A27FCE8B9896BBE353EF6* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t350E3F706B813C0855CE8B5ECDB37A47A4F1B892, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t350E3F706B813C0855CE8B5ECDB37A47A4F1B892, ___firstValue_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstValue_1), value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t350E3F706B813C0855CE8B5ECDB37A47A4F1B892, ___additionalValues_2)); }
	inline ActionU5BU5D_t3A8459FA8B62CBF2720A27FCE8B9896BBE353EF6* get_additionalValues_2() const { return ___additionalValues_2; }
	inline ActionU5BU5D_t3A8459FA8B62CBF2720A27FCE8B9896BBE353EF6** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(ActionU5BU5D_t3A8459FA8B62CBF2720A27FCE8B9896BBE353EF6* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_T350E3F706B813C0855CE8B5ECDB37A47A4F1B892_H
#ifndef INLINEDARRAY_1_TBC0ED76F87136F89F0CBD07F817940D51F3F7D6A_H
#define INLINEDARRAY_1_TBC0ED76F87136F89F0CBD07F817940D51F3F7D6A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`1<UnityEngine.Experimental.Input.InputAction_CallbackContext>>
struct  InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	Action_1_t5E9BD83383A888E9B2A62020905FD9E8A2BA8E62 * ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t566951EEAFCC73617D79F304CB50B41C5A2DCBE4* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A, ___firstValue_1)); }
	inline Action_1_t5E9BD83383A888E9B2A62020905FD9E8A2BA8E62 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t5E9BD83383A888E9B2A62020905FD9E8A2BA8E62 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t5E9BD83383A888E9B2A62020905FD9E8A2BA8E62 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstValue_1), value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A, ___additionalValues_2)); }
	inline Action_1U5BU5D_t566951EEAFCC73617D79F304CB50B41C5A2DCBE4* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t566951EEAFCC73617D79F304CB50B41C5A2DCBE4** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t566951EEAFCC73617D79F304CB50B41C5A2DCBE4* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_TBC0ED76F87136F89F0CBD07F817940D51F3F7D6A_H
#ifndef INLINEDARRAY_1_T7F2BE9896B63C412C7AB021068D6BF6C520E06F1_H
#define INLINEDARRAY_1_T7F2BE9896B63C412C7AB021068D6BF6C520E06F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`1<UnityEngine.Experimental.Input.InputUpdateType>>
struct  InlinedArray_1_t7F2BE9896B63C412C7AB021068D6BF6C520E06F1 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 * ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t3A58FD51D199969C91D2B5F953F112D10DEEF572* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t7F2BE9896B63C412C7AB021068D6BF6C520E06F1, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t7F2BE9896B63C412C7AB021068D6BF6C520E06F1, ___firstValue_1)); }
	inline Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstValue_1), value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t7F2BE9896B63C412C7AB021068D6BF6C520E06F1, ___additionalValues_2)); }
	inline Action_1U5BU5D_t3A58FD51D199969C91D2B5F953F112D10DEEF572* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t3A58FD51D199969C91D2B5F953F112D10DEEF572** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t3A58FD51D199969C91D2B5F953F112D10DEEF572* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_T7F2BE9896B63C412C7AB021068D6BF6C520E06F1_H
#ifndef INLINEDARRAY_1_T285621A094E2903B480BF36786337FDF2ECC25E8_H
#define INLINEDARRAY_1_T285621A094E2903B480BF36786337FDF2ECC25E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`1<UnityEngine.Experimental.Input.LowLevel.InputEventPtr>>
struct  InlinedArray_1_t285621A094E2903B480BF36786337FDF2ECC25E8 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	Action_1_t014CAD603D2936A5A39ABFC7B751B47D97A670C0 * ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tBEB1973F9D4685C87A67EF0ACAF6090C14B169E3* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t285621A094E2903B480BF36786337FDF2ECC25E8, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t285621A094E2903B480BF36786337FDF2ECC25E8, ___firstValue_1)); }
	inline Action_1_t014CAD603D2936A5A39ABFC7B751B47D97A670C0 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t014CAD603D2936A5A39ABFC7B751B47D97A670C0 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t014CAD603D2936A5A39ABFC7B751B47D97A670C0 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstValue_1), value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t285621A094E2903B480BF36786337FDF2ECC25E8, ___additionalValues_2)); }
	inline Action_1U5BU5D_tBEB1973F9D4685C87A67EF0ACAF6090C14B169E3* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_tBEB1973F9D4685C87A67EF0ACAF6090C14B169E3** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_tBEB1973F9D4685C87A67EF0ACAF6090C14B169E3* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_T285621A094E2903B480BF36786337FDF2ECC25E8_H
#ifndef INLINEDARRAY_1_T295885B6CEC0F78807804BE35D1BC5814F843683_H
#define INLINEDARRAY_1_T295885B6CEC0F78807804BE35D1BC5814F843683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.Experimental.Input.InputActionChange>>
struct  InlinedArray_1_t295885B6CEC0F78807804BE35D1BC5814F843683 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	Action_2_t7AC5E3A9D056820D73AB374FB2F522C7FB45CC57 * ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_t9361E1C3D856E937C1707DFA9B6444AC4AE41FCA* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t295885B6CEC0F78807804BE35D1BC5814F843683, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t295885B6CEC0F78807804BE35D1BC5814F843683, ___firstValue_1)); }
	inline Action_2_t7AC5E3A9D056820D73AB374FB2F522C7FB45CC57 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_2_t7AC5E3A9D056820D73AB374FB2F522C7FB45CC57 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_2_t7AC5E3A9D056820D73AB374FB2F522C7FB45CC57 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstValue_1), value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t295885B6CEC0F78807804BE35D1BC5814F843683, ___additionalValues_2)); }
	inline Action_2U5BU5D_t9361E1C3D856E937C1707DFA9B6444AC4AE41FCA* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_2U5BU5D_t9361E1C3D856E937C1707DFA9B6444AC4AE41FCA** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_2U5BU5D_t9361E1C3D856E937C1707DFA9B6444AC4AE41FCA* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_T295885B6CEC0F78807804BE35D1BC5814F843683_H
#ifndef INLINEDARRAY_1_T0EAEAFB82754BB0FA5B4F8D5CA520087315F12F7_H
#define INLINEDARRAY_1_T0EAEAFB82754BB0FA5B4F8D5CA520087315F12F7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`2<System.String,UnityEngine.Experimental.Input.InputControlLayoutChange>>
struct  InlinedArray_1_t0EAEAFB82754BB0FA5B4F8D5CA520087315F12F7 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	Action_2_tB5151B594707FC3F5138870F9DD723646199BEA6 * ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_t6CD0D0193FEFB1627CD603C902FD441221195FF5* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t0EAEAFB82754BB0FA5B4F8D5CA520087315F12F7, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t0EAEAFB82754BB0FA5B4F8D5CA520087315F12F7, ___firstValue_1)); }
	inline Action_2_tB5151B594707FC3F5138870F9DD723646199BEA6 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_2_tB5151B594707FC3F5138870F9DD723646199BEA6 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_2_tB5151B594707FC3F5138870F9DD723646199BEA6 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstValue_1), value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t0EAEAFB82754BB0FA5B4F8D5CA520087315F12F7, ___additionalValues_2)); }
	inline Action_2U5BU5D_t6CD0D0193FEFB1627CD603C902FD441221195FF5* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_2U5BU5D_t6CD0D0193FEFB1627CD603C902FD441221195FF5** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_2U5BU5D_t6CD0D0193FEFB1627CD603C902FD441221195FF5* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_T0EAEAFB82754BB0FA5B4F8D5CA520087315F12F7_H
#ifndef INLINEDARRAY_1_T31DF448A4AD82B0C374B5DAE94C343CCA6607F8A_H
#define INLINEDARRAY_1_T31DF448A4AD82B0C374B5DAE94C343CCA6607F8A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`2<UnityEngine.Experimental.Input.InputDevice,UnityEngine.Experimental.Input.InputDeviceChange>>
struct  InlinedArray_1_t31DF448A4AD82B0C374B5DAE94C343CCA6607F8A 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	Action_2_tB36BD9270900153A40B2D660E70C444A3C439CD7 * ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_t734A51E52D273D99880B4EBAAF6A51F8C2A5D05C* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t31DF448A4AD82B0C374B5DAE94C343CCA6607F8A, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t31DF448A4AD82B0C374B5DAE94C343CCA6607F8A, ___firstValue_1)); }
	inline Action_2_tB36BD9270900153A40B2D660E70C444A3C439CD7 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_2_tB36BD9270900153A40B2D660E70C444A3C439CD7 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_2_tB36BD9270900153A40B2D660E70C444A3C439CD7 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstValue_1), value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t31DF448A4AD82B0C374B5DAE94C343CCA6607F8A, ___additionalValues_2)); }
	inline Action_2U5BU5D_t734A51E52D273D99880B4EBAAF6A51F8C2A5D05C* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_2U5BU5D_t734A51E52D273D99880B4EBAAF6A51F8C2A5D05C** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_2U5BU5D_t734A51E52D273D99880B4EBAAF6A51F8C2A5D05C* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_T31DF448A4AD82B0C374B5DAE94C343CCA6607F8A_H
#ifndef INLINEDARRAY_1_T4A42D2682F6EF8C8E9557124D07F705781915466_H
#define INLINEDARRAY_1_T4A42D2682F6EF8C8E9557124D07F705781915466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<UnityEngine.Experimental.Input.InputProcessor`1<UnityEngine.Vector2>>
struct  InlinedArray_1_t4A42D2682F6EF8C8E9557124D07F705781915466 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tB61E701E2E12A1C56FA4780AF9D482A639B70D3F * ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t4F221B8864D9A3B455553F821ADE7C81BE154CE5* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t4A42D2682F6EF8C8E9557124D07F705781915466, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t4A42D2682F6EF8C8E9557124D07F705781915466, ___firstValue_1)); }
	inline InputProcessor_1_tB61E701E2E12A1C56FA4780AF9D482A639B70D3F * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tB61E701E2E12A1C56FA4780AF9D482A639B70D3F ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tB61E701E2E12A1C56FA4780AF9D482A639B70D3F * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstValue_1), value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t4A42D2682F6EF8C8E9557124D07F705781915466, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t4F221B8864D9A3B455553F821ADE7C81BE154CE5* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t4F221B8864D9A3B455553F821ADE7C81BE154CE5** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t4F221B8864D9A3B455553F821ADE7C81BE154CE5* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_T4A42D2682F6EF8C8E9557124D07F705781915466_H
#ifndef INLINEDARRAY_1_T6979F0181F311AA1DB1D13C511A1DDA8CA4AE257_H
#define INLINEDARRAY_1_T6979F0181F311AA1DB1D13C511A1DDA8CA4AE257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<UnityEngine.Experimental.Input.InputProcessor`1<UnityEngine.Vector3>>
struct  InlinedArray_1_t6979F0181F311AA1DB1D13C511A1DDA8CA4AE257 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tEC0E3B32C1173731BEB9A00F5AEDD9E5562568B5 * ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tBC441533878C345F2F1BE655227CE0BDF15183BA* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6979F0181F311AA1DB1D13C511A1DDA8CA4AE257, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6979F0181F311AA1DB1D13C511A1DDA8CA4AE257, ___firstValue_1)); }
	inline InputProcessor_1_tEC0E3B32C1173731BEB9A00F5AEDD9E5562568B5 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tEC0E3B32C1173731BEB9A00F5AEDD9E5562568B5 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tEC0E3B32C1173731BEB9A00F5AEDD9E5562568B5 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstValue_1), value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6979F0181F311AA1DB1D13C511A1DDA8CA4AE257, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tBC441533878C345F2F1BE655227CE0BDF15183BA* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tBC441533878C345F2F1BE655227CE0BDF15183BA** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tBC441533878C345F2F1BE655227CE0BDF15183BA* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_T6979F0181F311AA1DB1D13C511A1DDA8CA4AE257_H
#ifndef INLINEDARRAY_1_T9FBD058C65FFCA8154926BB8871028FECFE979BB_H
#define INLINEDARRAY_1_T9FBD058C65FFCA8154926BB8871028FECFE979BB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<UnityEngine.Experimental.Input.Layouts.InputDeviceFindControlLayoutDelegate>
struct  InlinedArray_1_t9FBD058C65FFCA8154926BB8871028FECFE979BB 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	InputDeviceFindControlLayoutDelegate_t92D39AE3A901BB306F0E73C56ABCCAD7D20B8294 * ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	InputDeviceFindControlLayoutDelegateU5BU5D_tECAC4F2FFBBC1261903D2E5738EE0392AAD65551* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t9FBD058C65FFCA8154926BB8871028FECFE979BB, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t9FBD058C65FFCA8154926BB8871028FECFE979BB, ___firstValue_1)); }
	inline InputDeviceFindControlLayoutDelegate_t92D39AE3A901BB306F0E73C56ABCCAD7D20B8294 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputDeviceFindControlLayoutDelegate_t92D39AE3A901BB306F0E73C56ABCCAD7D20B8294 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputDeviceFindControlLayoutDelegate_t92D39AE3A901BB306F0E73C56ABCCAD7D20B8294 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstValue_1), value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t9FBD058C65FFCA8154926BB8871028FECFE979BB, ___additionalValues_2)); }
	inline InputDeviceFindControlLayoutDelegateU5BU5D_tECAC4F2FFBBC1261903D2E5738EE0392AAD65551* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputDeviceFindControlLayoutDelegateU5BU5D_tECAC4F2FFBBC1261903D2E5738EE0392AAD65551** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputDeviceFindControlLayoutDelegateU5BU5D_tECAC4F2FFBBC1261903D2E5738EE0392AAD65551* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_T9FBD058C65FFCA8154926BB8871028FECFE979BB_H
#ifndef INLINEDARRAY_1_T41FE2BFCCAE708E4E05E85B456B3C36EFAD68055_H
#define INLINEDARRAY_1_T41FE2BFCCAE708E4E05E85B456B3C36EFAD68055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<UnityEngine.Experimental.Input.LowLevel.InputDeviceCommandDelegate>
struct  InlinedArray_1_t41FE2BFCCAE708E4E05E85B456B3C36EFAD68055 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	InputDeviceCommandDelegate_tB65D207D54D4C0291A4F955D2D2003A1C0393EFE * ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	InputDeviceCommandDelegateU5BU5D_t666CD5BE4B7D7A77C95BA3A9D6BFB99E84BB572A* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t41FE2BFCCAE708E4E05E85B456B3C36EFAD68055, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t41FE2BFCCAE708E4E05E85B456B3C36EFAD68055, ___firstValue_1)); }
	inline InputDeviceCommandDelegate_tB65D207D54D4C0291A4F955D2D2003A1C0393EFE * get_firstValue_1() const { return ___firstValue_1; }
	inline InputDeviceCommandDelegate_tB65D207D54D4C0291A4F955D2D2003A1C0393EFE ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputDeviceCommandDelegate_tB65D207D54D4C0291A4F955D2D2003A1C0393EFE * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___firstValue_1), value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t41FE2BFCCAE708E4E05E85B456B3C36EFAD68055, ___additionalValues_2)); }
	inline InputDeviceCommandDelegateU5BU5D_t666CD5BE4B7D7A77C95BA3A9D6BFB99E84BB572A* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputDeviceCommandDelegateU5BU5D_t666CD5BE4B7D7A77C95BA3A9D6BFB99E84BB572A** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputDeviceCommandDelegateU5BU5D_t666CD5BE4B7D7A77C95BA3A9D6BFB99E84BB572A* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_T41FE2BFCCAE708E4E05E85B456B3C36EFAD68055_H
#ifndef INTERNEDSTRING_TEDC512014F6AE11F22AE6364A787277595C4AEDE_H
#define INTERNEDSTRING_TEDC512014F6AE11F22AE6364A787277595C4AEDE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InternedString
struct  InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE 
{
public:
	// System.String UnityEngine.Experimental.Input.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.Experimental.Input.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringOriginalCase_0), value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringLowerCase_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.Utilities.InternedString
struct InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.Utilities.InternedString
struct InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};
#endif // INTERNEDSTRING_TEDC512014F6AE11F22AE6364A787277595C4AEDE_H
#ifndef READONLYARRAY_1_T8AF991F13C72FB52FE5D7F981B80045A9F1EA2B8_H
#define READONLYARRAY_1_T8AF991F13C72FB52FE5D7F981B80045A9F1EA2B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.ReadOnlyArray`1<UnityEngine.Experimental.Input.InputControl>
struct  ReadOnlyArray_1_t8AF991F13C72FB52FE5D7F981B80045A9F1EA2B8 
{
public:
	// TValue[] UnityEngine.Experimental.Input.Utilities.ReadOnlyArray`1::m_Array
	InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* ___m_Array_0;
	// System.Int32 UnityEngine.Experimental.Input.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.Experimental.Input.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8AF991F13C72FB52FE5D7F981B80045A9F1EA2B8, ___m_Array_0)); }
	inline InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* get_m_Array_0() const { return ___m_Array_0; }
	inline InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Array_0), value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8AF991F13C72FB52FE5D7F981B80045A9F1EA2B8, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8AF991F13C72FB52FE5D7F981B80045A9F1EA2B8, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYARRAY_1_T8AF991F13C72FB52FE5D7F981B80045A9F1EA2B8_H
#ifndef READONLYARRAY_1_T0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671_H
#define READONLYARRAY_1_T0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.ReadOnlyArray`1<UnityEngine.Experimental.Input.Utilities.InternedString>
struct  ReadOnlyArray_1_t0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671 
{
public:
	// TValue[] UnityEngine.Experimental.Input.Utilities.ReadOnlyArray`1::m_Array
	InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ___m_Array_0;
	// System.Int32 UnityEngine.Experimental.Input.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.Experimental.Input.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671, ___m_Array_0)); }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* get_m_Array_0() const { return ___m_Array_0; }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Array_0), value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYARRAY_1_T0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671_H
#ifndef TYPETABLE_T5606B8BE60C7FBD680E4EC7867D8FC22D88A1688_H
#define TYPETABLE_T5606B8BE60C7FBD680E4EC7867D8FC22D88A1688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.TypeTable
struct  TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.Input.Utilities.InternedString,System.Type> UnityEngine.Experimental.Input.Utilities.TypeTable::table
	Dictionary_2_tF7F7F109EA1B683BC5E1AE8C46064DF990B52AEF * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688, ___table_0)); }
	inline Dictionary_2_tF7F7F109EA1B683BC5E1AE8C46064DF990B52AEF * get_table_0() const { return ___table_0; }
	inline Dictionary_2_tF7F7F109EA1B683BC5E1AE8C46064DF990B52AEF ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_tF7F7F109EA1B683BC5E1AE8C46064DF990B52AEF * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.Utilities.TypeTable
struct TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688_marshaled_pinvoke
{
	Dictionary_2_tF7F7F109EA1B683BC5E1AE8C46064DF990B52AEF * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.Utilities.TypeTable
struct TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688_marshaled_com
{
	Dictionary_2_tF7F7F109EA1B683BC5E1AE8C46064DF990B52AEF * ___table_0;
};
#endif // TYPETABLE_T5606B8BE60C7FBD680E4EC7867D8FC22D88A1688_H
#ifndef DISCRETETIME_T046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC_H
#define DISCRETETIME_T046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Timeline.DiscreteTime
struct  DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC 
{
public:
	// System.Int64 UnityEngine.Timeline.DiscreteTime::m_DiscreteTime
	int64_t ___m_DiscreteTime_2;

public:
	inline static int32_t get_offset_of_m_DiscreteTime_2() { return static_cast<int32_t>(offsetof(DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC, ___m_DiscreteTime_2)); }
	inline int64_t get_m_DiscreteTime_2() const { return ___m_DiscreteTime_2; }
	inline int64_t* get_address_of_m_DiscreteTime_2() { return &___m_DiscreteTime_2; }
	inline void set_m_DiscreteTime_2(int64_t value)
	{
		___m_DiscreteTime_2 = value;
	}
};

struct DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC_StaticFields
{
public:
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.DiscreteTime::kMaxTime
	DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC  ___kMaxTime_1;

public:
	inline static int32_t get_offset_of_kMaxTime_1() { return static_cast<int32_t>(offsetof(DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC_StaticFields, ___kMaxTime_1)); }
	inline DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC  get_kMaxTime_1() const { return ___kMaxTime_1; }
	inline DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC * get_address_of_kMaxTime_1() { return &___kMaxTime_1; }
	inline void set_kMaxTime_1(DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC  value)
	{
		___kMaxTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISCRETETIME_T046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#define VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifndef GRAPHUPDATEORDER_T02D31C7EDCB63F20B8357CEC6EA16E14F1B001CF_H
#define GRAPHUPDATEORDER_T02D31C7EDCB63F20B8357CEC6EA16E14F1B001CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphUpdateProcessor_GraphUpdateOrder
struct  GraphUpdateOrder_t02D31C7EDCB63F20B8357CEC6EA16E14F1B001CF 
{
public:
	// System.Int32 Pathfinding.GraphUpdateProcessor_GraphUpdateOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphUpdateOrder_t02D31C7EDCB63F20B8357CEC6EA16E14F1B001CF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHUPDATEORDER_T02D31C7EDCB63F20B8357CEC6EA16E14F1B001CF_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef LARGEARRAYBUILDER_1_TC9659C9765BA8524EF7A1E6C55A7571A490F519B_H
#define LARGEARRAYBUILDER_1_TC9659C9765BA8524EF7A1E6C55A7571A490F519B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.LargeArrayBuilder`1<System.Object>
struct  LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B 
{
public:
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_maxCapacity
	int32_t ____maxCapacity_0;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_first
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____first_1;
	// System.Collections.Generic.ArrayBuilder`1<T[]> System.Collections.Generic.LargeArrayBuilder`1::_buffers
	ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF  ____buffers_2;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_current
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____current_3;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_index
	int32_t ____index_4;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_count
	int32_t ____count_5;

public:
	inline static int32_t get_offset_of__maxCapacity_0() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____maxCapacity_0)); }
	inline int32_t get__maxCapacity_0() const { return ____maxCapacity_0; }
	inline int32_t* get_address_of__maxCapacity_0() { return &____maxCapacity_0; }
	inline void set__maxCapacity_0(int32_t value)
	{
		____maxCapacity_0 = value;
	}

	inline static int32_t get_offset_of__first_1() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____first_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__first_1() const { return ____first_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__first_1() { return &____first_1; }
	inline void set__first_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____first_1 = value;
		Il2CppCodeGenWriteBarrier((&____first_1), value);
	}

	inline static int32_t get_offset_of__buffers_2() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____buffers_2)); }
	inline ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF  get__buffers_2() const { return ____buffers_2; }
	inline ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF * get_address_of__buffers_2() { return &____buffers_2; }
	inline void set__buffers_2(ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF  value)
	{
		____buffers_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____current_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__current_3() const { return ____current_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((&____current_3), value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____index_4)); }
	inline int32_t get__index_4() const { return ____index_4; }
	inline int32_t* get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(int32_t value)
	{
		____index_4 = value;
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____count_5)); }
	inline int32_t get__count_5() const { return ____count_5; }
	inline int32_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int32_t value)
	{
		____count_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LARGEARRAYBUILDER_1_TC9659C9765BA8524EF7A1E6C55A7571A490F519B_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#define INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifndef NULLABLE_1_T4027756F992C11A9BB61104B56AAC18EDD15CE79_H
#define NULLABLE_1_T4027756F992C11A9BB61104B56AAC18EDD15CE79_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.Experimental.Input.InputAction_CallbackContext>
struct  Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 
{
public:
	// T System.Nullable`1::value
	CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79, ___value_0)); }
	inline CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2  get_value_0() const { return ___value_0; }
	inline CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T4027756F992C11A9BB61104B56AAC18EDD15CE79_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T08BA731A94FD7F173551DF3098384CB9B3056E9E_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T08BA731A94FD7F173551DF3098384CB9B3056E9E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_com
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T08BA731A94FD7F173551DF3098384CB9B3056E9E_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef ALLOCATOR_T62A091275262E7067EAAD565B67764FA877D58D6_H
#define ALLOCATOR_T62A091275262E7067EAAD565B67764FA877D58D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOCATOR_T62A091275262E7067EAAD565B67764FA877D58D6_H
#ifndef ACTIONFLAGS_TE9B79A649C854E4411D5ADB16A16324472C2F619_H
#define ACTIONFLAGS_TE9B79A649C854E4411D5ADB16A16324472C2F619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputAction_ActionFlags
struct  ActionFlags_tE9B79A649C854E4411D5ADB16A16324472C2F619 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.InputAction_ActionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActionFlags_tE9B79A649C854E4411D5ADB16A16324472C2F619, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIONFLAGS_TE9B79A649C854E4411D5ADB16A16324472C2F619_H
#ifndef FLAGS_TFF644E43A6948CFFD52940281BD8626A7D56FB1B_H
#define FLAGS_TFF644E43A6948CFFD52940281BD8626A7D56FB1B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation_Flags
struct  Flags_tFF644E43A6948CFFD52940281BD8626A7D56FB1B 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation_Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tFF644E43A6948CFFD52940281BD8626A7D56FB1B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_TFF644E43A6948CFFD52940281BD8626A7D56FB1B_H
#ifndef CONTROLSCHEMESYNTAX_TB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998_H
#define CONTROLSCHEMESYNTAX_TB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputActionSetupExtensions_ControlSchemeSyntax
struct  ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 
{
public:
	// UnityEngine.Experimental.Input.InputActionAsset UnityEngine.Experimental.Input.InputActionSetupExtensions_ControlSchemeSyntax::m_Asset
	InputActionAsset_t66D04822895BDEFCEFC13C1DCD932C3587352F8B * ___m_Asset_0;
	// System.Int32 UnityEngine.Experimental.Input.InputActionSetupExtensions_ControlSchemeSyntax::m_ControlSchemeIndex
	int32_t ___m_ControlSchemeIndex_1;
	// UnityEngine.Experimental.Input.InputControlScheme UnityEngine.Experimental.Input.InputActionSetupExtensions_ControlSchemeSyntax::m_ControlScheme
	InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3  ___m_ControlScheme_2;

public:
	inline static int32_t get_offset_of_m_Asset_0() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998, ___m_Asset_0)); }
	inline InputActionAsset_t66D04822895BDEFCEFC13C1DCD932C3587352F8B * get_m_Asset_0() const { return ___m_Asset_0; }
	inline InputActionAsset_t66D04822895BDEFCEFC13C1DCD932C3587352F8B ** get_address_of_m_Asset_0() { return &___m_Asset_0; }
	inline void set_m_Asset_0(InputActionAsset_t66D04822895BDEFCEFC13C1DCD932C3587352F8B * value)
	{
		___m_Asset_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Asset_0), value);
	}

	inline static int32_t get_offset_of_m_ControlSchemeIndex_1() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998, ___m_ControlSchemeIndex_1)); }
	inline int32_t get_m_ControlSchemeIndex_1() const { return ___m_ControlSchemeIndex_1; }
	inline int32_t* get_address_of_m_ControlSchemeIndex_1() { return &___m_ControlSchemeIndex_1; }
	inline void set_m_ControlSchemeIndex_1(int32_t value)
	{
		___m_ControlSchemeIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_ControlScheme_2() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998, ___m_ControlScheme_2)); }
	inline InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3  get_m_ControlScheme_2() const { return ___m_ControlScheme_2; }
	inline InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 * get_address_of_m_ControlScheme_2() { return &___m_ControlScheme_2; }
	inline void set_m_ControlScheme_2(InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3  value)
	{
		___m_ControlScheme_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998_marshaled_pinvoke
{
	InputActionAsset_t66D04822895BDEFCEFC13C1DCD932C3587352F8B * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3_marshaled_pinvoke ___m_ControlScheme_2;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998_marshaled_com
{
	InputActionAsset_t66D04822895BDEFCEFC13C1DCD932C3587352F8B * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3_marshaled_com ___m_ControlScheme_2;
};
#endif // CONTROLSCHEMESYNTAX_TB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998_H
#ifndef FLAGS_T8236C9DA3E14B5150423DD50E76A021632AD95F4_H
#define FLAGS_T8236C9DA3E14B5150423DD50E76A021632AD95F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputBinding_Flags
struct  Flags_t8236C9DA3E14B5150423DD50E76A021632AD95F4 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.InputBinding_Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t8236C9DA3E14B5150423DD50E76A021632AD95F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T8236C9DA3E14B5150423DD50E76A021632AD95F4_H
#ifndef INPUTBINDINGCOMPOSITE_TCFE4ACFDBFADAF3282B1E2A908021D007FB27276_H
#define INPUTBINDINGCOMPOSITE_TCFE4ACFDBFADAF3282B1E2A908021D007FB27276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputBindingComposite
struct  InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276  : public RuntimeObject
{
public:

public:
};

struct InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276_StaticFields
{
public:
	// UnityEngine.Experimental.Input.Utilities.TypeTable UnityEngine.Experimental.Input.InputBindingComposite::s_Composites
	TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  ___s_Composites_0;

public:
	inline static int32_t get_offset_of_s_Composites_0() { return static_cast<int32_t>(offsetof(InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276_StaticFields, ___s_Composites_0)); }
	inline TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  get_s_Composites_0() const { return ___s_Composites_0; }
	inline TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688 * get_address_of_s_Composites_0() { return &___s_Composites_0; }
	inline void set_s_Composites_0(TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  value)
	{
		___s_Composites_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTBINDINGCOMPOSITE_TCFE4ACFDBFADAF3282B1E2A908021D007FB27276_H
#ifndef CONTROLFLAGS_TDADC1C0465A8D2B06160F4CCFACA01C877B10483_H
#define CONTROLFLAGS_TDADC1C0465A8D2B06160F4CCFACA01C877B10483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputControl_ControlFlags
struct  ControlFlags_tDADC1C0465A8D2B06160F4CCFACA01C877B10483 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.InputControl_ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_tDADC1C0465A8D2B06160F4CCFACA01C877B10483, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLFLAGS_TDADC1C0465A8D2B06160F4CCFACA01C877B10483_H
#ifndef FLAGS_T8EFF32E22BFC5BAEFE6AF9043D7E3D2E62730153_H
#define FLAGS_T8EFF32E22BFC5BAEFE6AF9043D7E3D2E62730153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputControlScheme_DeviceRequirement_Flags
struct  Flags_t8EFF32E22BFC5BAEFE6AF9043D7E3D2E62730153 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.InputControlScheme_DeviceRequirement_Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t8EFF32E22BFC5BAEFE6AF9043D7E3D2E62730153, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T8EFF32E22BFC5BAEFE6AF9043D7E3D2E62730153_H
#ifndef RESULT_T0B22E5D3DB83D4C4250A64587A8A42406D960269_H
#define RESULT_T0B22E5D3DB83D4C4250A64587A8A42406D960269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputControlScheme_MatchResult_Result
struct  Result_t0B22E5D3DB83D4C4250A64587A8A42406D960269 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.InputControlScheme_MatchResult_Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t0B22E5D3DB83D4C4250A64587A8A42406D960269, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULT_T0B22E5D3DB83D4C4250A64587A8A42406D960269_H
#ifndef DEVICEFLAGS_TD65DEC7C3A1B8553940C8395407351A97B7646D7_H
#define DEVICEFLAGS_TD65DEC7C3A1B8553940C8395407351A97B7646D7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputDevice_DeviceFlags
struct  DeviceFlags_tD65DEC7C3A1B8553940C8395407351A97B7646D7 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.InputDevice_DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_tD65DEC7C3A1B8553940C8395407351A97B7646D7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICEFLAGS_TD65DEC7C3A1B8553940C8395407351A97B7646D7_H
#ifndef INPUTPROCESSOR_T4A15B04D6A59FC3BC2DF0ECBA275273A57046B78_H
#define INPUTPROCESSOR_T4A15B04D6A59FC3BC2DF0ECBA275273A57046B78_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputProcessor
struct  InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78  : public RuntimeObject
{
public:

public:
};

struct InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78_StaticFields
{
public:
	// UnityEngine.Experimental.Input.Utilities.TypeTable UnityEngine.Experimental.Input.InputProcessor::s_Processors
	TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  ___s_Processors_0;

public:
	inline static int32_t get_offset_of_s_Processors_0() { return static_cast<int32_t>(offsetof(InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78_StaticFields, ___s_Processors_0)); }
	inline TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  get_s_Processors_0() const { return ___s_Processors_0; }
	inline TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688 * get_address_of_s_Processors_0() { return &___s_Processors_0; }
	inline void set_s_Processors_0(TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  value)
	{
		___s_Processors_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTPROCESSOR_T4A15B04D6A59FC3BC2DF0ECBA275273A57046B78_H
#ifndef INPUTUPDATETYPE_T77B2226D295A7FF29D2E9412295A1A66558BFF1C_H
#define INPUTUPDATETYPE_T77B2226D295A7FF29D2E9412295A1A66558BFF1C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputUpdateType
struct  InputUpdateType_t77B2226D295A7FF29D2E9412295A1A66558BFF1C 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.InputUpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputUpdateType_t77B2226D295A7FF29D2E9412295A1A66558BFF1C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTUPDATETYPE_T77B2226D295A7FF29D2E9412295A1A66558BFF1C_H
#ifndef BUILDER_T2549C7EDAC67237F97015821103155122BF1797D_H
#define BUILDER_T2549C7EDAC67237F97015821103155122BF1797D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Layouts.InputControlLayout_Builder
struct  Builder_t2549C7EDAC67237F97015821103155122BF1797D 
{
public:
	// System.String UnityEngine.Experimental.Input.Layouts.InputControlLayout_Builder::name
	String_t* ___name_0;
	// System.Type UnityEngine.Experimental.Input.Layouts.InputControlLayout_Builder::type
	Type_t * ___type_1;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.Layouts.InputControlLayout_Builder::stateFormat
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___stateFormat_2;
	// System.String UnityEngine.Experimental.Input.Layouts.InputControlLayout_Builder::extendsLayout
	String_t* ___extendsLayout_3;
	// System.Nullable`1<System.Boolean> UnityEngine.Experimental.Input.Layouts.InputControlLayout_Builder::updateBeforeRender
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___updateBeforeRender_4;
	// System.Int32 UnityEngine.Experimental.Input.Layouts.InputControlLayout_Builder::m_ControlCount
	int32_t ___m_ControlCount_5;
	// UnityEngine.Experimental.Input.Layouts.InputControlLayout_ControlItem[] UnityEngine.Experimental.Input.Layouts.InputControlLayout_Builder::m_Controls
	ControlItemU5BU5D_t765CC6EFE64EE45E8CE5874203FA82F920D63D58* ___m_Controls_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Builder_t2549C7EDAC67237F97015821103155122BF1797D, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Builder_t2549C7EDAC67237F97015821103155122BF1797D, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}

	inline static int32_t get_offset_of_stateFormat_2() { return static_cast<int32_t>(offsetof(Builder_t2549C7EDAC67237F97015821103155122BF1797D, ___stateFormat_2)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_stateFormat_2() const { return ___stateFormat_2; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_stateFormat_2() { return &___stateFormat_2; }
	inline void set_stateFormat_2(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___stateFormat_2 = value;
	}

	inline static int32_t get_offset_of_extendsLayout_3() { return static_cast<int32_t>(offsetof(Builder_t2549C7EDAC67237F97015821103155122BF1797D, ___extendsLayout_3)); }
	inline String_t* get_extendsLayout_3() const { return ___extendsLayout_3; }
	inline String_t** get_address_of_extendsLayout_3() { return &___extendsLayout_3; }
	inline void set_extendsLayout_3(String_t* value)
	{
		___extendsLayout_3 = value;
		Il2CppCodeGenWriteBarrier((&___extendsLayout_3), value);
	}

	inline static int32_t get_offset_of_updateBeforeRender_4() { return static_cast<int32_t>(offsetof(Builder_t2549C7EDAC67237F97015821103155122BF1797D, ___updateBeforeRender_4)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_updateBeforeRender_4() const { return ___updateBeforeRender_4; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_updateBeforeRender_4() { return &___updateBeforeRender_4; }
	inline void set_updateBeforeRender_4(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___updateBeforeRender_4 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_5() { return static_cast<int32_t>(offsetof(Builder_t2549C7EDAC67237F97015821103155122BF1797D, ___m_ControlCount_5)); }
	inline int32_t get_m_ControlCount_5() const { return ___m_ControlCount_5; }
	inline int32_t* get_address_of_m_ControlCount_5() { return &___m_ControlCount_5; }
	inline void set_m_ControlCount_5(int32_t value)
	{
		___m_ControlCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Controls_6() { return static_cast<int32_t>(offsetof(Builder_t2549C7EDAC67237F97015821103155122BF1797D, ___m_Controls_6)); }
	inline ControlItemU5BU5D_t765CC6EFE64EE45E8CE5874203FA82F920D63D58* get_m_Controls_6() const { return ___m_Controls_6; }
	inline ControlItemU5BU5D_t765CC6EFE64EE45E8CE5874203FA82F920D63D58** get_address_of_m_Controls_6() { return &___m_Controls_6; }
	inline void set_m_Controls_6(ControlItemU5BU5D_t765CC6EFE64EE45E8CE5874203FA82F920D63D58* value)
	{
		___m_Controls_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controls_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.Layouts.InputControlLayout/Builder
struct Builder_t2549C7EDAC67237F97015821103155122BF1797D_marshaled_pinvoke
{
	char* ___name_0;
	Type_t * ___type_1;
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___stateFormat_2;
	char* ___extendsLayout_3;
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___updateBeforeRender_4;
	int32_t ___m_ControlCount_5;
	ControlItem_tE2B12A98134DBF22E2E255777F24A2BE10FA237E_marshaled_pinvoke* ___m_Controls_6;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.Layouts.InputControlLayout/Builder
struct Builder_t2549C7EDAC67237F97015821103155122BF1797D_marshaled_com
{
	Il2CppChar* ___name_0;
	Type_t * ___type_1;
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___stateFormat_2;
	Il2CppChar* ___extendsLayout_3;
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___updateBeforeRender_4;
	int32_t ___m_ControlCount_5;
	ControlItem_tE2B12A98134DBF22E2E255777F24A2BE10FA237E_marshaled_com* ___m_Controls_6;
};
#endif // BUILDER_T2549C7EDAC67237F97015821103155122BF1797D_H
#ifndef INPUTDEVICEMATCHER_T200D4994B61798DB11C9D10D54588010328B047C_H
#define INPUTDEVICEMATCHER_T200D4994B61798DB11C9D10D54588010328B047C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher
struct  InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C 
{
public:
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.Input.Utilities.InternedString,System.Object>[] UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_t913DEBD551E5ED00489C065E69C6E01292F9B29B* ___m_Patterns_0;

public:
	inline static int32_t get_offset_of_m_Patterns_0() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C, ___m_Patterns_0)); }
	inline KeyValuePair_2U5BU5D_t913DEBD551E5ED00489C065E69C6E01292F9B29B* get_m_Patterns_0() const { return ___m_Patterns_0; }
	inline KeyValuePair_2U5BU5D_t913DEBD551E5ED00489C065E69C6E01292F9B29B** get_address_of_m_Patterns_0() { return &___m_Patterns_0; }
	inline void set_m_Patterns_0(KeyValuePair_2U5BU5D_t913DEBD551E5ED00489C065E69C6E01292F9B29B* value)
	{
		___m_Patterns_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Patterns_0), value);
	}
};

struct InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_StaticFields
{
public:
	// UnityEngine.Experimental.Input.Utilities.InternedString UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___kInterfaceKey_1;
	// UnityEngine.Experimental.Input.Utilities.InternedString UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___kDeviceClassKey_2;
	// UnityEngine.Experimental.Input.Utilities.InternedString UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___kManufacturerKey_3;
	// UnityEngine.Experimental.Input.Utilities.InternedString UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher::kProductKey
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___kProductKey_4;
	// UnityEngine.Experimental.Input.Utilities.InternedString UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___kVersionKey_5;

public:
	inline static int32_t get_offset_of_kInterfaceKey_1() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_StaticFields, ___kInterfaceKey_1)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_kInterfaceKey_1() const { return ___kInterfaceKey_1; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_kInterfaceKey_1() { return &___kInterfaceKey_1; }
	inline void set_kInterfaceKey_1(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___kInterfaceKey_1 = value;
	}

	inline static int32_t get_offset_of_kDeviceClassKey_2() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_StaticFields, ___kDeviceClassKey_2)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_kDeviceClassKey_2() const { return ___kDeviceClassKey_2; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_kDeviceClassKey_2() { return &___kDeviceClassKey_2; }
	inline void set_kDeviceClassKey_2(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___kDeviceClassKey_2 = value;
	}

	inline static int32_t get_offset_of_kManufacturerKey_3() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_StaticFields, ___kManufacturerKey_3)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_kManufacturerKey_3() const { return ___kManufacturerKey_3; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_kManufacturerKey_3() { return &___kManufacturerKey_3; }
	inline void set_kManufacturerKey_3(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___kManufacturerKey_3 = value;
	}

	inline static int32_t get_offset_of_kProductKey_4() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_StaticFields, ___kProductKey_4)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_kProductKey_4() const { return ___kProductKey_4; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_kProductKey_4() { return &___kProductKey_4; }
	inline void set_kProductKey_4(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___kProductKey_4 = value;
	}

	inline static int32_t get_offset_of_kVersionKey_5() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_StaticFields, ___kVersionKey_5)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_kVersionKey_5() const { return ___kVersionKey_5; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_kVersionKey_5() { return &___kVersionKey_5; }
	inline void set_kVersionKey_5(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___kVersionKey_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_marshaled_pinvoke
{
	KeyValuePair_2_tC074DD4EE7D444BFB08A9400903210B5F08358AF * ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C_marshaled_com
{
	KeyValuePair_2_tC074DD4EE7D444BFB08A9400903210B5F08358AF * ___m_Patterns_0;
};
#endif // INPUTDEVICEMATCHER_T200D4994B61798DB11C9D10D54588010328B047C_H
#ifndef INPUTSTATEBLOCK_TD5C726451DE25905C4E2274FD6871D02F73D2186_H
#define INPUTSTATEBLOCK_TD5C726451DE25905C4E2274FD6871D02F73D2186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.LowLevel.InputStateBlock
struct  InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186 
{
public:
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::format
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___format_21;
	// System.UInt32 UnityEngine.Experimental.Input.LowLevel.InputStateBlock::byteOffset
	uint32_t ___byteOffset_22;
	// System.UInt32 UnityEngine.Experimental.Input.LowLevel.InputStateBlock::bitOffset
	uint32_t ___bitOffset_23;
	// System.UInt32 UnityEngine.Experimental.Input.LowLevel.InputStateBlock::sizeInBits
	uint32_t ___sizeInBits_24;

public:
	inline static int32_t get_offset_of_format_21() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186, ___format_21)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_format_21() const { return ___format_21; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_format_21() { return &___format_21; }
	inline void set_format_21(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___format_21 = value;
	}

	inline static int32_t get_offset_of_byteOffset_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186, ___byteOffset_22)); }
	inline uint32_t get_byteOffset_22() const { return ___byteOffset_22; }
	inline uint32_t* get_address_of_byteOffset_22() { return &___byteOffset_22; }
	inline void set_byteOffset_22(uint32_t value)
	{
		___byteOffset_22 = value;
	}

	inline static int32_t get_offset_of_bitOffset_23() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186, ___bitOffset_23)); }
	inline uint32_t get_bitOffset_23() const { return ___bitOffset_23; }
	inline uint32_t* get_address_of_bitOffset_23() { return &___bitOffset_23; }
	inline void set_bitOffset_23(uint32_t value)
	{
		___bitOffset_23 = value;
	}

	inline static int32_t get_offset_of_sizeInBits_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186, ___sizeInBits_24)); }
	inline uint32_t get_sizeInBits_24() const { return ___sizeInBits_24; }
	inline uint32_t* get_address_of_sizeInBits_24() { return &___sizeInBits_24; }
	inline void set_sizeInBits_24(uint32_t value)
	{
		___sizeInBits_24 = value;
	}
};

struct InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields
{
public:
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeBit
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeBit_2;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeSBit
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeSBit_3;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeInt
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeInt_4;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeUInt
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeUInt_5;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeShort
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeShort_6;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeUShort
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeUShort_7;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeByte
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeByte_8;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeSByte
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeSByte_9;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeLong
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeLong_10;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeULong
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeULong_11;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeFloat
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeFloat_12;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeDouble
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeDouble_13;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeVector2
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeVector2_14;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeVector3
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeVector3_15;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeQuaternion
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeQuaternion_16;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeVector2Short
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeVector2Short_17;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeVector3Short
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeVector3Short_18;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeVector2Byte
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeVector2Byte_19;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.LowLevel.InputStateBlock::kTypeVector3Byte
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___kTypeVector3Byte_20;

public:
	inline static int32_t get_offset_of_kTypeBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeBit_2)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeBit_2() const { return ___kTypeBit_2; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeBit_2() { return &___kTypeBit_2; }
	inline void set_kTypeBit_2(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeBit_2 = value;
	}

	inline static int32_t get_offset_of_kTypeSBit_3() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeSBit_3)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeSBit_3() const { return ___kTypeSBit_3; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeSBit_3() { return &___kTypeSBit_3; }
	inline void set_kTypeSBit_3(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeSBit_3 = value;
	}

	inline static int32_t get_offset_of_kTypeInt_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeInt_4)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeInt_4() const { return ___kTypeInt_4; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeInt_4() { return &___kTypeInt_4; }
	inline void set_kTypeInt_4(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeInt_4 = value;
	}

	inline static int32_t get_offset_of_kTypeUInt_5() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeUInt_5)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeUInt_5() const { return ___kTypeUInt_5; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeUInt_5() { return &___kTypeUInt_5; }
	inline void set_kTypeUInt_5(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeUInt_5 = value;
	}

	inline static int32_t get_offset_of_kTypeShort_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeShort_6)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeShort_6() const { return ___kTypeShort_6; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeShort_6() { return &___kTypeShort_6; }
	inline void set_kTypeShort_6(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeShort_6 = value;
	}

	inline static int32_t get_offset_of_kTypeUShort_7() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeUShort_7)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeUShort_7() const { return ___kTypeUShort_7; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeUShort_7() { return &___kTypeUShort_7; }
	inline void set_kTypeUShort_7(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeUShort_7 = value;
	}

	inline static int32_t get_offset_of_kTypeByte_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeByte_8)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeByte_8() const { return ___kTypeByte_8; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeByte_8() { return &___kTypeByte_8; }
	inline void set_kTypeByte_8(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeByte_8 = value;
	}

	inline static int32_t get_offset_of_kTypeSByte_9() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeSByte_9)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeSByte_9() const { return ___kTypeSByte_9; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeSByte_9() { return &___kTypeSByte_9; }
	inline void set_kTypeSByte_9(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeSByte_9 = value;
	}

	inline static int32_t get_offset_of_kTypeLong_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeLong_10)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeLong_10() const { return ___kTypeLong_10; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeLong_10() { return &___kTypeLong_10; }
	inline void set_kTypeLong_10(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeLong_10 = value;
	}

	inline static int32_t get_offset_of_kTypeULong_11() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeULong_11)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeULong_11() const { return ___kTypeULong_11; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeULong_11() { return &___kTypeULong_11; }
	inline void set_kTypeULong_11(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeULong_11 = value;
	}

	inline static int32_t get_offset_of_kTypeFloat_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeFloat_12)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeFloat_12() const { return ___kTypeFloat_12; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeFloat_12() { return &___kTypeFloat_12; }
	inline void set_kTypeFloat_12(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeFloat_12 = value;
	}

	inline static int32_t get_offset_of_kTypeDouble_13() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeDouble_13)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeDouble_13() const { return ___kTypeDouble_13; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeDouble_13() { return &___kTypeDouble_13; }
	inline void set_kTypeDouble_13(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeDouble_13 = value;
	}

	inline static int32_t get_offset_of_kTypeVector2_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeVector2_14)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeVector2_14() const { return ___kTypeVector2_14; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeVector2_14() { return &___kTypeVector2_14; }
	inline void set_kTypeVector2_14(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeVector2_14 = value;
	}

	inline static int32_t get_offset_of_kTypeVector3_15() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeVector3_15)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeVector3_15() const { return ___kTypeVector3_15; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeVector3_15() { return &___kTypeVector3_15; }
	inline void set_kTypeVector3_15(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeVector3_15 = value;
	}

	inline static int32_t get_offset_of_kTypeQuaternion_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeQuaternion_16)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeQuaternion_16() const { return ___kTypeQuaternion_16; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeQuaternion_16() { return &___kTypeQuaternion_16; }
	inline void set_kTypeQuaternion_16(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeQuaternion_16 = value;
	}

	inline static int32_t get_offset_of_kTypeVector2Short_17() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeVector2Short_17)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeVector2Short_17() const { return ___kTypeVector2Short_17; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeVector2Short_17() { return &___kTypeVector2Short_17; }
	inline void set_kTypeVector2Short_17(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeVector2Short_17 = value;
	}

	inline static int32_t get_offset_of_kTypeVector3Short_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeVector3Short_18)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeVector3Short_18() const { return ___kTypeVector3Short_18; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeVector3Short_18() { return &___kTypeVector3Short_18; }
	inline void set_kTypeVector3Short_18(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeVector3Short_18 = value;
	}

	inline static int32_t get_offset_of_kTypeVector2Byte_19() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeVector2Byte_19)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeVector2Byte_19() const { return ___kTypeVector2Byte_19; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeVector2Byte_19() { return &___kTypeVector2Byte_19; }
	inline void set_kTypeVector2Byte_19(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeVector2Byte_19 = value;
	}

	inline static int32_t get_offset_of_kTypeVector3Byte_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186_StaticFields, ___kTypeVector3Byte_20)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_kTypeVector3Byte_20() const { return ___kTypeVector3Byte_20; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_kTypeVector3Byte_20() { return &___kTypeVector3Byte_20; }
	inline void set_kTypeVector3Byte_20(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___kTypeVector3Byte_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSTATEBLOCK_TD5C726451DE25905C4E2274FD6871D02F73D2186_H
#ifndef INPUTSTATEBUFFERS_T9DBF43D99DC53552980876E3D4A04A20DFF3B4AF_H
#define INPUTSTATEBUFFERS_T9DBF43D99DC53552980876E3D4A04A20DFF3B4AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.LowLevel.InputStateBuffers
struct  InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF 
{
public:
	// System.UInt32 UnityEngine.Experimental.Input.LowLevel.InputStateBuffers::sizePerBuffer
	uint32_t ___sizePerBuffer_0;
	// System.UInt32 UnityEngine.Experimental.Input.LowLevel.InputStateBuffers::totalSize
	uint32_t ___totalSize_1;
	// System.Void* UnityEngine.Experimental.Input.LowLevel.InputStateBuffers::defaultStateBuffer
	void* ___defaultStateBuffer_2;
	// System.Void* UnityEngine.Experimental.Input.LowLevel.InputStateBuffers::noiseMaskBuffer
	void* ___noiseMaskBuffer_3;
	// System.Void* UnityEngine.Experimental.Input.LowLevel.InputStateBuffers::m_AllBuffers
	void* ___m_AllBuffers_4;
	// UnityEngine.Experimental.Input.LowLevel.InputStateBuffers_DoubleBuffers UnityEngine.Experimental.Input.LowLevel.InputStateBuffers::m_DynamicUpdateBuffers
	DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E  ___m_DynamicUpdateBuffers_5;
	// UnityEngine.Experimental.Input.LowLevel.InputStateBuffers_DoubleBuffers UnityEngine.Experimental.Input.LowLevel.InputStateBuffers::m_FixedUpdateBuffers
	DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E  ___m_FixedUpdateBuffers_6;
	// UnityEngine.Experimental.Input.LowLevel.InputStateBuffers_DoubleBuffers UnityEngine.Experimental.Input.LowLevel.InputStateBuffers::m_ManualUpdateBuffers
	DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E  ___m_ManualUpdateBuffers_7;

public:
	inline static int32_t get_offset_of_sizePerBuffer_0() { return static_cast<int32_t>(offsetof(InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF, ___sizePerBuffer_0)); }
	inline uint32_t get_sizePerBuffer_0() const { return ___sizePerBuffer_0; }
	inline uint32_t* get_address_of_sizePerBuffer_0() { return &___sizePerBuffer_0; }
	inline void set_sizePerBuffer_0(uint32_t value)
	{
		___sizePerBuffer_0 = value;
	}

	inline static int32_t get_offset_of_totalSize_1() { return static_cast<int32_t>(offsetof(InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF, ___totalSize_1)); }
	inline uint32_t get_totalSize_1() const { return ___totalSize_1; }
	inline uint32_t* get_address_of_totalSize_1() { return &___totalSize_1; }
	inline void set_totalSize_1(uint32_t value)
	{
		___totalSize_1 = value;
	}

	inline static int32_t get_offset_of_defaultStateBuffer_2() { return static_cast<int32_t>(offsetof(InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF, ___defaultStateBuffer_2)); }
	inline void* get_defaultStateBuffer_2() const { return ___defaultStateBuffer_2; }
	inline void** get_address_of_defaultStateBuffer_2() { return &___defaultStateBuffer_2; }
	inline void set_defaultStateBuffer_2(void* value)
	{
		___defaultStateBuffer_2 = value;
	}

	inline static int32_t get_offset_of_noiseMaskBuffer_3() { return static_cast<int32_t>(offsetof(InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF, ___noiseMaskBuffer_3)); }
	inline void* get_noiseMaskBuffer_3() const { return ___noiseMaskBuffer_3; }
	inline void** get_address_of_noiseMaskBuffer_3() { return &___noiseMaskBuffer_3; }
	inline void set_noiseMaskBuffer_3(void* value)
	{
		___noiseMaskBuffer_3 = value;
	}

	inline static int32_t get_offset_of_m_AllBuffers_4() { return static_cast<int32_t>(offsetof(InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF, ___m_AllBuffers_4)); }
	inline void* get_m_AllBuffers_4() const { return ___m_AllBuffers_4; }
	inline void** get_address_of_m_AllBuffers_4() { return &___m_AllBuffers_4; }
	inline void set_m_AllBuffers_4(void* value)
	{
		___m_AllBuffers_4 = value;
	}

	inline static int32_t get_offset_of_m_DynamicUpdateBuffers_5() { return static_cast<int32_t>(offsetof(InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF, ___m_DynamicUpdateBuffers_5)); }
	inline DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E  get_m_DynamicUpdateBuffers_5() const { return ___m_DynamicUpdateBuffers_5; }
	inline DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E * get_address_of_m_DynamicUpdateBuffers_5() { return &___m_DynamicUpdateBuffers_5; }
	inline void set_m_DynamicUpdateBuffers_5(DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E  value)
	{
		___m_DynamicUpdateBuffers_5 = value;
	}

	inline static int32_t get_offset_of_m_FixedUpdateBuffers_6() { return static_cast<int32_t>(offsetof(InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF, ___m_FixedUpdateBuffers_6)); }
	inline DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E  get_m_FixedUpdateBuffers_6() const { return ___m_FixedUpdateBuffers_6; }
	inline DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E * get_address_of_m_FixedUpdateBuffers_6() { return &___m_FixedUpdateBuffers_6; }
	inline void set_m_FixedUpdateBuffers_6(DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E  value)
	{
		___m_FixedUpdateBuffers_6 = value;
	}

	inline static int32_t get_offset_of_m_ManualUpdateBuffers_7() { return static_cast<int32_t>(offsetof(InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF, ___m_ManualUpdateBuffers_7)); }
	inline DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E  get_m_ManualUpdateBuffers_7() const { return ___m_ManualUpdateBuffers_7; }
	inline DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E * get_address_of_m_ManualUpdateBuffers_7() { return &___m_ManualUpdateBuffers_7; }
	inline void set_m_ManualUpdateBuffers_7(DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E  value)
	{
		___m_ManualUpdateBuffers_7 = value;
	}
};

struct InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF_StaticFields
{
public:
	// System.Void* UnityEngine.Experimental.Input.LowLevel.InputStateBuffers::s_DefaultStateBuffer
	void* ___s_DefaultStateBuffer_8;
	// System.Void* UnityEngine.Experimental.Input.LowLevel.InputStateBuffers::s_NoiseMaskBuffer
	void* ___s_NoiseMaskBuffer_9;
	// UnityEngine.Experimental.Input.LowLevel.InputStateBuffers_DoubleBuffers UnityEngine.Experimental.Input.LowLevel.InputStateBuffers::s_CurrentBuffers
	DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E  ___s_CurrentBuffers_10;

public:
	inline static int32_t get_offset_of_s_DefaultStateBuffer_8() { return static_cast<int32_t>(offsetof(InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF_StaticFields, ___s_DefaultStateBuffer_8)); }
	inline void* get_s_DefaultStateBuffer_8() const { return ___s_DefaultStateBuffer_8; }
	inline void** get_address_of_s_DefaultStateBuffer_8() { return &___s_DefaultStateBuffer_8; }
	inline void set_s_DefaultStateBuffer_8(void* value)
	{
		___s_DefaultStateBuffer_8 = value;
	}

	inline static int32_t get_offset_of_s_NoiseMaskBuffer_9() { return static_cast<int32_t>(offsetof(InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF_StaticFields, ___s_NoiseMaskBuffer_9)); }
	inline void* get_s_NoiseMaskBuffer_9() const { return ___s_NoiseMaskBuffer_9; }
	inline void** get_address_of_s_NoiseMaskBuffer_9() { return &___s_NoiseMaskBuffer_9; }
	inline void set_s_NoiseMaskBuffer_9(void* value)
	{
		___s_NoiseMaskBuffer_9 = value;
	}

	inline static int32_t get_offset_of_s_CurrentBuffers_10() { return static_cast<int32_t>(offsetof(InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF_StaticFields, ___s_CurrentBuffers_10)); }
	inline DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E  get_s_CurrentBuffers_10() const { return ___s_CurrentBuffers_10; }
	inline DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E * get_address_of_s_CurrentBuffers_10() { return &___s_CurrentBuffers_10; }
	inline void set_s_CurrentBuffers_10(DoubleBuffers_t05CD53A8055F7EA8AA8F489AE5B061B46039510E  value)
	{
		___s_CurrentBuffers_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSTATEBUFFERS_T9DBF43D99DC53552980876E3D4A04A20DFF3B4AF_H
#ifndef U3CU3EC__DISPLAYCLASS26_0_1_TDC97F85D29580FDB40E7C733F6166804E895AEBF_H
#define U3CU3EC__DISPLAYCLASS26_0_1_TDC97F85D29580FDB40E7C733F6166804E895AEBF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.ArrayHelpers_<>c__DisplayClass26_0`1<UnityEngine.Experimental.Input.Utilities.InternedString>
struct  U3CU3Ec__DisplayClass26_0_1_tDC97F85D29580FDB40E7C733F6166804E895AEBF  : public RuntimeObject
{
public:
	// TValue UnityEngine.Experimental.Input.Utilities.ArrayHelpers_<>c__DisplayClass26_0`1::secondValue
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___secondValue_0;

public:
	inline static int32_t get_offset_of_secondValue_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_1_tDC97F85D29580FDB40E7C733F6166804E895AEBF, ___secondValue_0)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_secondValue_0() const { return ___secondValue_0; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_secondValue_0() { return &___secondValue_0; }
	inline void set_secondValue_0(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___secondValue_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS26_0_1_TDC97F85D29580FDB40E7C733F6166804E895AEBF_H
#ifndef INLINEDARRAY_1_T6FE987CBD7CE465959FC5E76B56E26D4D930E17B_H
#define INLINEDARRAY_1_T6FE987CBD7CE465959FC5E76B56E26D4D930E17B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle>
struct  InlinedArray_1_t6FE987CBD7CE465959FC5E76B56E26D4D930E17B 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6FE987CBD7CE465959FC5E76B56E26D4D930E17B, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6FE987CBD7CE465959FC5E76B56E26D4D930E17B, ___firstValue_1)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get_firstValue_1() const { return ___firstValue_1; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6FE987CBD7CE465959FC5E76B56E26D4D930E17B, ___additionalValues_2)); }
	inline GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* get_additionalValues_2() const { return ___additionalValues_2; }
	inline GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_T6FE987CBD7CE465959FC5E76B56E26D4D930E17B_H
#ifndef INLINEDARRAY_1_T4089DE953CDD4D8AC6B1DDC512D0E41D978F5592_H
#define INLINEDARRAY_1_T4089DE953CDD4D8AC6B1DDC512D0E41D978F5592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<UnityEngine.Experimental.Input.InputManager_StateChangeMonitorTimeout>
struct  InlinedArray_1_t4089DE953CDD4D8AC6B1DDC512D0E41D978F5592 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2  ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t4089DE953CDD4D8AC6B1DDC512D0E41D978F5592, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t4089DE953CDD4D8AC6B1DDC512D0E41D978F5592, ___firstValue_1)); }
	inline StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2  get_firstValue_1() const { return ___firstValue_1; }
	inline StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t4089DE953CDD4D8AC6B1DDC512D0E41D978F5592, ___additionalValues_2)); }
	inline StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* get_additionalValues_2() const { return ___additionalValues_2; }
	inline StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_T4089DE953CDD4D8AC6B1DDC512D0E41D978F5592_H
#ifndef INLINEDARRAY_1_T1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178_H
#define INLINEDARRAY_1_T1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<UnityEngine.Experimental.Input.Utilities.InternedString>
struct  InlinedArray_1_t1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.Experimental.Input.Utilities.InlinedArray`1::firstValue
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___firstValue_1;
	// TValue[] UnityEngine.Experimental.Input.Utilities.InlinedArray`1::additionalValues
	InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178, ___firstValue_1)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_firstValue_1() const { return ___firstValue_1; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178, ___additionalValues_2)); }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((&___additionalValues_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INLINEDARRAY_1_T1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178_H
#ifndef PRIMITIVEVALUETYPE_TA7D5B8903B1F62D3AFD4C59DB86C4B031EFDAAEB_H
#define PRIMITIVEVALUETYPE_TA7D5B8903B1F62D3AFD4C59DB86C4B031EFDAAEB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.PrimitiveValueType
struct  PrimitiveValueType_tA7D5B8903B1F62D3AFD4C59DB86C4B031EFDAAEB 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.Utilities.PrimitiveValueType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveValueType_tA7D5B8903B1F62D3AFD4C59DB86C4B031EFDAAEB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMITIVEVALUETYPE_TA7D5B8903B1F62D3AFD4C59DB86C4B031EFDAAEB_H
#ifndef INTERNALVERTEXCHANNELTYPE_T6E7BF24C2E6B97B01F96625DBAF6A2CF402CFF9D_H
#define INTERNALVERTEXCHANNELTYPE_T6E7BF24C2E6B97B01F96625DBAF6A2CF402CFF9D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh_InternalVertexChannelType
struct  InternalVertexChannelType_t6E7BF24C2E6B97B01F96625DBAF6A2CF402CFF9D 
{
public:
	// System.Int32 UnityEngine.Mesh_InternalVertexChannelType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t6E7BF24C2E6B97B01F96625DBAF6A2CF402CFF9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALVERTEXCHANNELTYPE_T6E7BF24C2E6B97B01F96625DBAF6A2CF402CFF9D_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef PLAYSTATE_TC3BC5843A80D4DEC4D5E79417CBBAD10BB0BEC91_H
#define PLAYSTATE_TC3BC5843A80D4DEC4D5E79417CBBAD10BB0BEC91_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayState
struct  PlayState_tC3BC5843A80D4DEC4D5E79417CBBAD10BB0BEC91 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayState_tC3BC5843A80D4DEC4D5E79417CBBAD10BB0BEC91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATE_TC3BC5843A80D4DEC4D5E79417CBBAD10BB0BEC91_H
#ifndef PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#define PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#ifndef PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#define PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifndef PLAYABLEOUTPUTHANDLE_T0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_H
#define PLAYABLEOUTPUTHANDLE_T0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_H
#ifndef VERTEXATTRIBUTE_T2D79DF64001C55DA72AC86CE8946098970E8194D_H
#define VERTEXATTRIBUTE_T2D79DF64001C55DA72AC86CE8946098970E8194D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.VertexAttribute
struct  VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXATTRIBUTE_T2D79DF64001C55DA72AC86CE8946098970E8194D_H
#ifndef CLIPCAPS_TB3FEBFA5CA7980C1E2E5676F27C92E77A769E971_H
#define CLIPCAPS_TB3FEBFA5CA7980C1E2E5676F27C92E77A769E971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Timeline.ClipCaps
struct  ClipCaps_tB3FEBFA5CA7980C1E2E5676F27C92E77A769E971 
{
public:
	// System.Int32 UnityEngine.Timeline.ClipCaps::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipCaps_tB3FEBFA5CA7980C1E2E5676F27C92E77A769E971, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIPCAPS_TB3FEBFA5CA7980C1E2E5676F27C92E77A769E971_H
#ifndef BLENDCURVEMODE_TFB15710CA3A221CD7B8B4FBE07DF8149E35D2F68_H
#define BLENDCURVEMODE_TFB15710CA3A221CD7B8B4FBE07DF8149E35D2F68_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Timeline.TimelineClip_BlendCurveMode
struct  BlendCurveMode_tFB15710CA3A221CD7B8B4FBE07DF8149E35D2F68 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip_BlendCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendCurveMode_tFB15710CA3A221CD7B8B4FBE07DF8149E35D2F68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLENDCURVEMODE_TFB15710CA3A221CD7B8B4FBE07DF8149E35D2F68_H
#ifndef CLIPEXTRAPOLATION_TB3EB49D54D1E1E18AE03A394041AE9EC5E325750_H
#define CLIPEXTRAPOLATION_TB3EB49D54D1E1E18AE03A394041AE9EC5E325750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Timeline.TimelineClip_ClipExtrapolation
struct  ClipExtrapolation_tB3EB49D54D1E1E18AE03A394041AE9EC5E325750 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip_ClipExtrapolation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipExtrapolation_tB3EB49D54D1E1E18AE03A394041AE9EC5E325750, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIPEXTRAPOLATION_TB3EB49D54D1E1E18AE03A394041AE9EC5E325750_H
#ifndef GUOSINGLE_T0A7A7B7DA7F30236F264E0CD633C9873D31082E9_H
#define GUOSINGLE_T0A7A7B7DA7F30236F264E0CD633C9873D31082E9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.GraphUpdateProcessor_GUOSingle
struct  GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9 
{
public:
	// Pathfinding.GraphUpdateProcessor_GraphUpdateOrder Pathfinding.GraphUpdateProcessor_GUOSingle::order
	int32_t ___order_0;
	// Pathfinding.IUpdatableGraph Pathfinding.GraphUpdateProcessor_GUOSingle::graph
	RuntimeObject* ___graph_1;
	// Pathfinding.GraphUpdateObject Pathfinding.GraphUpdateProcessor_GUOSingle::obj
	GraphUpdateObject_tF76FA858B119856992465E0C43E0AC1DA6AE4F39 * ___obj_2;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_graph_1() { return static_cast<int32_t>(offsetof(GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9, ___graph_1)); }
	inline RuntimeObject* get_graph_1() const { return ___graph_1; }
	inline RuntimeObject** get_address_of_graph_1() { return &___graph_1; }
	inline void set_graph_1(RuntimeObject* value)
	{
		___graph_1 = value;
		Il2CppCodeGenWriteBarrier((&___graph_1), value);
	}

	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9, ___obj_2)); }
	inline GraphUpdateObject_tF76FA858B119856992465E0C43E0AC1DA6AE4F39 * get_obj_2() const { return ___obj_2; }
	inline GraphUpdateObject_tF76FA858B119856992465E0C43E0AC1DA6AE4F39 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(GraphUpdateObject_tF76FA858B119856992465E0C43E0AC1DA6AE4F39 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Pathfinding.GraphUpdateProcessor/GUOSingle
struct GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshaled_pinvoke
{
	int32_t ___order_0;
	RuntimeObject* ___graph_1;
	GraphUpdateObject_tF76FA858B119856992465E0C43E0AC1DA6AE4F39 * ___obj_2;
};
// Native definition for COM marshalling of Pathfinding.GraphUpdateProcessor/GUOSingle
struct GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshaled_com
{
	int32_t ___order_0;
	RuntimeObject* ___graph_1;
	GraphUpdateObject_tF76FA858B119856992465E0C43E0AC1DA6AE4F39 * ___obj_2;
};
#endif // GUOSINGLE_T0A7A7B7DA7F30236F264E0CD633C9873D31082E9_H
#ifndef ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#define ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef NATIVEARRAY_1_TB6F81A87EBCD8958AF30E15FACF167CE524DEABE_H
#define NATIVEARRAY_1_TB6F81A87EBCD8958AF30E15FACF167CE524DEABE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
#endif // NATIVEARRAY_1_TB6F81A87EBCD8958AF30E15FACF167CE524DEABE_H
#ifndef NATIVEARRAY_1_T910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C_H
#define NATIVEARRAY_1_T910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArray`1<System.UInt64>
struct  NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
#endif // NATIVEARRAY_1_T910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C_H
#ifndef ANIMATIONLAYERMIXERPLAYABLE_T699CCDE32ABD6FC79BFC09064E473D785D9F9371_H
#define ANIMATIONLAYERMIXERPLAYABLE_T699CCDE32ABD6FC79BFC09064E473D785D9F9371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONLAYERMIXERPLAYABLE_T699CCDE32ABD6FC79BFC09064E473D785D9F9371_H
#ifndef ANIMATIONMIXERPLAYABLE_TA71C834654979CF92B034B537EE5A3DA9713030A_H
#define ANIMATIONMIXERPLAYABLE_TA71C834654979CF92B034B537EE5A3DA9713030A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::m_NullPlayable
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMIXERPLAYABLE_TA71C834654979CF92B034B537EE5A3DA9713030A_H
#ifndef ANIMATIONMOTIONXTODELTAPLAYABLE_TA5F0BE3BA966E1A6661311F185C1544F90302CDC_H
#define ANIMATIONMOTIONXTODELTAPLAYABLE_TA5F0BE3BA966E1A6661311F185C1544F90302CDC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct  AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_NullPlayable
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMOTIONXTODELTAPLAYABLE_TA5F0BE3BA966E1A6661311F185C1544F90302CDC_H
#ifndef ANIMATIONPLAYABLEOUTPUT_TA10178429D6528BDB4516F6788CE680E349553E6_H
#define ANIMATIONPLAYABLEOUTPUT_TA10178429D6528BDB4516F6788CE680E349553E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEOUTPUT_TA10178429D6528BDB4516F6788CE680E349553E6_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef INPUTACTIONSTATE_T5568F30275572A5CAE381EFF238EA399CA896EAC_H
#define INPUTACTIONSTATE_T5568F30275572A5CAE381EFF238EA399CA896EAC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputActionState
struct  InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Input.InputActionMap[] UnityEngine.Experimental.Input.InputActionState::maps
	InputActionMapU5BU5D_tB25F529B93EFF8CCDE6AA190DD888FA731C87212* ___maps_1;
	// UnityEngine.Experimental.Input.InputControl[] UnityEngine.Experimental.Input.InputActionState::controls
	InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* ___controls_2;
	// UnityEngine.Experimental.Input.IInputInteraction[] UnityEngine.Experimental.Input.InputActionState::interactions
	IInputInteractionU5BU5D_tB362A76376601F9972D81679AE58316D1E1C9771* ___interactions_3;
	// UnityEngine.Experimental.Input.InputProcessor[] UnityEngine.Experimental.Input.InputActionState::processors
	InputProcessorU5BU5D_tA009D497963975CA0D2F4B3A401266CA77E3CE7D* ___processors_4;
	// UnityEngine.Experimental.Input.InputBindingComposite[] UnityEngine.Experimental.Input.InputActionState::composites
	InputBindingCompositeU5BU5D_t7F618BF16D930F068FFC44D869E3F6D415D3C379* ___composites_5;
	// System.Int32 UnityEngine.Experimental.Input.InputActionState::totalProcessorCount
	int32_t ___totalProcessorCount_6;
	// UnityEngine.Experimental.Input.InputActionState_UnmanagedMemory UnityEngine.Experimental.Input.InputActionState::memory
	UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B  ___memory_7;
	// System.Action`1<UnityEngine.Experimental.Input.InputUpdateType> UnityEngine.Experimental.Input.InputActionState::m_OnBeforeUpdateDelegate
	Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 * ___m_OnBeforeUpdateDelegate_8;
	// System.Action`1<UnityEngine.Experimental.Input.InputUpdateType> UnityEngine.Experimental.Input.InputActionState::m_OnAfterUpdateDelegate
	Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 * ___m_OnAfterUpdateDelegate_9;
	// System.Boolean UnityEngine.Experimental.Input.InputActionState::m_OnBeforeUpdateHooked
	bool ___m_OnBeforeUpdateHooked_10;
	// System.Boolean UnityEngine.Experimental.Input.InputActionState::m_OnAfterUpdateHooked
	bool ___m_OnAfterUpdateHooked_11;
	// System.Int32 UnityEngine.Experimental.Input.InputActionState::m_ContinuousActionCount
	int32_t ___m_ContinuousActionCount_12;
	// System.Int32 UnityEngine.Experimental.Input.InputActionState::m_ContinuousActionCountFromPreviousUpdate
	int32_t ___m_ContinuousActionCountFromPreviousUpdate_13;
	// System.Int32[] UnityEngine.Experimental.Input.InputActionState::m_ContinuousActions
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_ContinuousActions_14;

public:
	inline static int32_t get_offset_of_maps_1() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___maps_1)); }
	inline InputActionMapU5BU5D_tB25F529B93EFF8CCDE6AA190DD888FA731C87212* get_maps_1() const { return ___maps_1; }
	inline InputActionMapU5BU5D_tB25F529B93EFF8CCDE6AA190DD888FA731C87212** get_address_of_maps_1() { return &___maps_1; }
	inline void set_maps_1(InputActionMapU5BU5D_tB25F529B93EFF8CCDE6AA190DD888FA731C87212* value)
	{
		___maps_1 = value;
		Il2CppCodeGenWriteBarrier((&___maps_1), value);
	}

	inline static int32_t get_offset_of_controls_2() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___controls_2)); }
	inline InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* get_controls_2() const { return ___controls_2; }
	inline InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68** get_address_of_controls_2() { return &___controls_2; }
	inline void set_controls_2(InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* value)
	{
		___controls_2 = value;
		Il2CppCodeGenWriteBarrier((&___controls_2), value);
	}

	inline static int32_t get_offset_of_interactions_3() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___interactions_3)); }
	inline IInputInteractionU5BU5D_tB362A76376601F9972D81679AE58316D1E1C9771* get_interactions_3() const { return ___interactions_3; }
	inline IInputInteractionU5BU5D_tB362A76376601F9972D81679AE58316D1E1C9771** get_address_of_interactions_3() { return &___interactions_3; }
	inline void set_interactions_3(IInputInteractionU5BU5D_tB362A76376601F9972D81679AE58316D1E1C9771* value)
	{
		___interactions_3 = value;
		Il2CppCodeGenWriteBarrier((&___interactions_3), value);
	}

	inline static int32_t get_offset_of_processors_4() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___processors_4)); }
	inline InputProcessorU5BU5D_tA009D497963975CA0D2F4B3A401266CA77E3CE7D* get_processors_4() const { return ___processors_4; }
	inline InputProcessorU5BU5D_tA009D497963975CA0D2F4B3A401266CA77E3CE7D** get_address_of_processors_4() { return &___processors_4; }
	inline void set_processors_4(InputProcessorU5BU5D_tA009D497963975CA0D2F4B3A401266CA77E3CE7D* value)
	{
		___processors_4 = value;
		Il2CppCodeGenWriteBarrier((&___processors_4), value);
	}

	inline static int32_t get_offset_of_composites_5() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___composites_5)); }
	inline InputBindingCompositeU5BU5D_t7F618BF16D930F068FFC44D869E3F6D415D3C379* get_composites_5() const { return ___composites_5; }
	inline InputBindingCompositeU5BU5D_t7F618BF16D930F068FFC44D869E3F6D415D3C379** get_address_of_composites_5() { return &___composites_5; }
	inline void set_composites_5(InputBindingCompositeU5BU5D_t7F618BF16D930F068FFC44D869E3F6D415D3C379* value)
	{
		___composites_5 = value;
		Il2CppCodeGenWriteBarrier((&___composites_5), value);
	}

	inline static int32_t get_offset_of_totalProcessorCount_6() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___totalProcessorCount_6)); }
	inline int32_t get_totalProcessorCount_6() const { return ___totalProcessorCount_6; }
	inline int32_t* get_address_of_totalProcessorCount_6() { return &___totalProcessorCount_6; }
	inline void set_totalProcessorCount_6(int32_t value)
	{
		___totalProcessorCount_6 = value;
	}

	inline static int32_t get_offset_of_memory_7() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___memory_7)); }
	inline UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B  get_memory_7() const { return ___memory_7; }
	inline UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B * get_address_of_memory_7() { return &___memory_7; }
	inline void set_memory_7(UnmanagedMemory_t0CCA4BE9804FA7E28678880324AD58F6BEFC749B  value)
	{
		___memory_7 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateDelegate_8() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___m_OnBeforeUpdateDelegate_8)); }
	inline Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 * get_m_OnBeforeUpdateDelegate_8() const { return ___m_OnBeforeUpdateDelegate_8; }
	inline Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 ** get_address_of_m_OnBeforeUpdateDelegate_8() { return &___m_OnBeforeUpdateDelegate_8; }
	inline void set_m_OnBeforeUpdateDelegate_8(Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 * value)
	{
		___m_OnBeforeUpdateDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnBeforeUpdateDelegate_8), value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_9() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___m_OnAfterUpdateDelegate_9)); }
	inline Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 * get_m_OnAfterUpdateDelegate_9() const { return ___m_OnAfterUpdateDelegate_9; }
	inline Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 ** get_address_of_m_OnAfterUpdateDelegate_9() { return &___m_OnAfterUpdateDelegate_9; }
	inline void set_m_OnAfterUpdateDelegate_9(Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 * value)
	{
		___m_OnAfterUpdateDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnAfterUpdateDelegate_9), value);
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateHooked_10() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___m_OnBeforeUpdateHooked_10)); }
	inline bool get_m_OnBeforeUpdateHooked_10() const { return ___m_OnBeforeUpdateHooked_10; }
	inline bool* get_address_of_m_OnBeforeUpdateHooked_10() { return &___m_OnBeforeUpdateHooked_10; }
	inline void set_m_OnBeforeUpdateHooked_10(bool value)
	{
		___m_OnBeforeUpdateHooked_10 = value;
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateHooked_11() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___m_OnAfterUpdateHooked_11)); }
	inline bool get_m_OnAfterUpdateHooked_11() const { return ___m_OnAfterUpdateHooked_11; }
	inline bool* get_address_of_m_OnAfterUpdateHooked_11() { return &___m_OnAfterUpdateHooked_11; }
	inline void set_m_OnAfterUpdateHooked_11(bool value)
	{
		___m_OnAfterUpdateHooked_11 = value;
	}

	inline static int32_t get_offset_of_m_ContinuousActionCount_12() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___m_ContinuousActionCount_12)); }
	inline int32_t get_m_ContinuousActionCount_12() const { return ___m_ContinuousActionCount_12; }
	inline int32_t* get_address_of_m_ContinuousActionCount_12() { return &___m_ContinuousActionCount_12; }
	inline void set_m_ContinuousActionCount_12(int32_t value)
	{
		___m_ContinuousActionCount_12 = value;
	}

	inline static int32_t get_offset_of_m_ContinuousActionCountFromPreviousUpdate_13() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___m_ContinuousActionCountFromPreviousUpdate_13)); }
	inline int32_t get_m_ContinuousActionCountFromPreviousUpdate_13() const { return ___m_ContinuousActionCountFromPreviousUpdate_13; }
	inline int32_t* get_address_of_m_ContinuousActionCountFromPreviousUpdate_13() { return &___m_ContinuousActionCountFromPreviousUpdate_13; }
	inline void set_m_ContinuousActionCountFromPreviousUpdate_13(int32_t value)
	{
		___m_ContinuousActionCountFromPreviousUpdate_13 = value;
	}

	inline static int32_t get_offset_of_m_ContinuousActions_14() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC, ___m_ContinuousActions_14)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_ContinuousActions_14() const { return ___m_ContinuousActions_14; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_ContinuousActions_14() { return &___m_ContinuousActions_14; }
	inline void set_m_ContinuousActions_14(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_ContinuousActions_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_ContinuousActions_14), value);
	}
};

struct InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC_StaticFields
{
public:
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle> UnityEngine.Experimental.Input.InputActionState::s_GlobalList
	InlinedArray_1_t6FE987CBD7CE465959FC5E76B56E26D4D930E17B  ___s_GlobalList_15;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.Experimental.Input.InputActionChange>> UnityEngine.Experimental.Input.InputActionState::s_OnActionChange
	InlinedArray_1_t295885B6CEC0F78807804BE35D1BC5814F843683  ___s_OnActionChange_16;

public:
	inline static int32_t get_offset_of_s_GlobalList_15() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC_StaticFields, ___s_GlobalList_15)); }
	inline InlinedArray_1_t6FE987CBD7CE465959FC5E76B56E26D4D930E17B  get_s_GlobalList_15() const { return ___s_GlobalList_15; }
	inline InlinedArray_1_t6FE987CBD7CE465959FC5E76B56E26D4D930E17B * get_address_of_s_GlobalList_15() { return &___s_GlobalList_15; }
	inline void set_s_GlobalList_15(InlinedArray_1_t6FE987CBD7CE465959FC5E76B56E26D4D930E17B  value)
	{
		___s_GlobalList_15 = value;
	}

	inline static int32_t get_offset_of_s_OnActionChange_16() { return static_cast<int32_t>(offsetof(InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC_StaticFields, ___s_OnActionChange_16)); }
	inline InlinedArray_1_t295885B6CEC0F78807804BE35D1BC5814F843683  get_s_OnActionChange_16() const { return ___s_OnActionChange_16; }
	inline InlinedArray_1_t295885B6CEC0F78807804BE35D1BC5814F843683 * get_address_of_s_OnActionChange_16() { return &___s_OnActionChange_16; }
	inline void set_s_OnActionChange_16(InlinedArray_1_t295885B6CEC0F78807804BE35D1BC5814F843683  value)
	{
		___s_OnActionChange_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTACTIONSTATE_T5568F30275572A5CAE381EFF238EA399CA896EAC_H
#ifndef INPUTBINDING_T79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE_H
#define INPUTBINDING_T79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputBinding
struct  InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE 
{
public:
	// System.String UnityEngine.Experimental.Input.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.Experimental.Input.InputBinding::m_Path
	String_t* ___m_Path_3;
	// System.String UnityEngine.Experimental.Input.InputBinding::m_Interactions
	String_t* ___m_Interactions_4;
	// System.String UnityEngine.Experimental.Input.InputBinding::m_Processors
	String_t* ___m_Processors_5;
	// System.String UnityEngine.Experimental.Input.InputBinding::m_Groups
	String_t* ___m_Groups_6;
	// System.String UnityEngine.Experimental.Input.InputBinding::m_Action
	String_t* ___m_Action_7;
	// UnityEngine.Experimental.Input.InputBinding_Flags UnityEngine.Experimental.Input.InputBinding::m_Flags
	int32_t ___m_Flags_8;
	// System.String UnityEngine.Experimental.Input.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_9;
	// System.String UnityEngine.Experimental.Input.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_10;
	// System.String UnityEngine.Experimental.Input.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_11;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_2), value);
	}

	inline static int32_t get_offset_of_m_Path_3() { return static_cast<int32_t>(offsetof(InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE, ___m_Path_3)); }
	inline String_t* get_m_Path_3() const { return ___m_Path_3; }
	inline String_t** get_address_of_m_Path_3() { return &___m_Path_3; }
	inline void set_m_Path_3(String_t* value)
	{
		___m_Path_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_3), value);
	}

	inline static int32_t get_offset_of_m_Interactions_4() { return static_cast<int32_t>(offsetof(InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE, ___m_Interactions_4)); }
	inline String_t* get_m_Interactions_4() const { return ___m_Interactions_4; }
	inline String_t** get_address_of_m_Interactions_4() { return &___m_Interactions_4; }
	inline void set_m_Interactions_4(String_t* value)
	{
		___m_Interactions_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Interactions_4), value);
	}

	inline static int32_t get_offset_of_m_Processors_5() { return static_cast<int32_t>(offsetof(InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE, ___m_Processors_5)); }
	inline String_t* get_m_Processors_5() const { return ___m_Processors_5; }
	inline String_t** get_address_of_m_Processors_5() { return &___m_Processors_5; }
	inline void set_m_Processors_5(String_t* value)
	{
		___m_Processors_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Processors_5), value);
	}

	inline static int32_t get_offset_of_m_Groups_6() { return static_cast<int32_t>(offsetof(InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE, ___m_Groups_6)); }
	inline String_t* get_m_Groups_6() const { return ___m_Groups_6; }
	inline String_t** get_address_of_m_Groups_6() { return &___m_Groups_6; }
	inline void set_m_Groups_6(String_t* value)
	{
		___m_Groups_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Groups_6), value);
	}

	inline static int32_t get_offset_of_m_Action_7() { return static_cast<int32_t>(offsetof(InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE, ___m_Action_7)); }
	inline String_t* get_m_Action_7() const { return ___m_Action_7; }
	inline String_t** get_address_of_m_Action_7() { return &___m_Action_7; }
	inline void set_m_Action_7(String_t* value)
	{
		___m_Action_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Action_7), value);
	}

	inline static int32_t get_offset_of_m_Flags_8() { return static_cast<int32_t>(offsetof(InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE, ___m_Flags_8)); }
	inline int32_t get_m_Flags_8() const { return ___m_Flags_8; }
	inline int32_t* get_address_of_m_Flags_8() { return &___m_Flags_8; }
	inline void set_m_Flags_8(int32_t value)
	{
		___m_Flags_8 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_9() { return static_cast<int32_t>(offsetof(InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE, ___m_OverridePath_9)); }
	inline String_t* get_m_OverridePath_9() const { return ___m_OverridePath_9; }
	inline String_t** get_address_of_m_OverridePath_9() { return &___m_OverridePath_9; }
	inline void set_m_OverridePath_9(String_t* value)
	{
		___m_OverridePath_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverridePath_9), value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_10() { return static_cast<int32_t>(offsetof(InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE, ___m_OverrideInteractions_10)); }
	inline String_t* get_m_OverrideInteractions_10() const { return ___m_OverrideInteractions_10; }
	inline String_t** get_address_of_m_OverrideInteractions_10() { return &___m_OverrideInteractions_10; }
	inline void set_m_OverrideInteractions_10(String_t* value)
	{
		___m_OverrideInteractions_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideInteractions_10), value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_11() { return static_cast<int32_t>(offsetof(InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE, ___m_OverrideProcessors_11)); }
	inline String_t* get_m_OverrideProcessors_11() const { return ___m_OverrideProcessors_11; }
	inline String_t** get_address_of_m_OverrideProcessors_11() { return &___m_OverrideProcessors_11; }
	inline void set_m_OverrideProcessors_11(String_t* value)
	{
		___m_OverrideProcessors_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideProcessors_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.InputBinding
struct InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Path_3;
	char* ___m_Interactions_4;
	char* ___m_Processors_5;
	char* ___m_Groups_6;
	char* ___m_Action_7;
	int32_t ___m_Flags_8;
	char* ___m_OverridePath_9;
	char* ___m_OverrideInteractions_10;
	char* ___m_OverrideProcessors_11;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.InputBinding
struct InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Path_3;
	Il2CppChar* ___m_Interactions_4;
	Il2CppChar* ___m_Processors_5;
	Il2CppChar* ___m_Groups_6;
	Il2CppChar* ___m_Action_7;
	int32_t ___m_Flags_8;
	Il2CppChar* ___m_OverridePath_9;
	Il2CppChar* ___m_OverrideInteractions_10;
	Il2CppChar* ___m_OverrideProcessors_11;
};
#endif // INPUTBINDING_T79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE_H
#ifndef INPUTBINDINGCOMPOSITE_1_T7119FA7CB3938542B98FF37C0FCF2C20F5C8F768_H
#define INPUTBINDINGCOMPOSITE_1_T7119FA7CB3938542B98FF37C0FCF2C20F5C8F768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputBindingComposite`1<UnityEngine.Vector2>
struct  InputBindingComposite_1_t7119FA7CB3938542B98FF37C0FCF2C20F5C8F768  : public InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTBINDINGCOMPOSITE_1_T7119FA7CB3938542B98FF37C0FCF2C20F5C8F768_H
#ifndef INPUTBINDINGCOMPOSITE_1_TF1DDF85677072866E46F8F60C0B814FA330129A4_H
#define INPUTBINDINGCOMPOSITE_1_TF1DDF85677072866E46F8F60C0B814FA330129A4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputBindingComposite`1<UnityEngine.Vector3>
struct  InputBindingComposite_1_tF1DDF85677072866E46F8F60C0B814FA330129A4  : public InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTBINDINGCOMPOSITE_1_TF1DDF85677072866E46F8F60C0B814FA330129A4_H
#ifndef DEVICEREQUIREMENT_TC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_H
#define DEVICEREQUIREMENT_TC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputControlScheme_DeviceRequirement
struct  DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E 
{
public:
	// System.String UnityEngine.Experimental.Input.InputControlScheme_DeviceRequirement::m_ControlPath
	String_t* ___m_ControlPath_0;
	// UnityEngine.Experimental.Input.InputControlScheme_DeviceRequirement_Flags UnityEngine.Experimental.Input.InputControlScheme_DeviceRequirement::m_Flags
	int32_t ___m_Flags_1;

public:
	inline static int32_t get_offset_of_m_ControlPath_0() { return static_cast<int32_t>(offsetof(DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E, ___m_ControlPath_0)); }
	inline String_t* get_m_ControlPath_0() const { return ___m_ControlPath_0; }
	inline String_t** get_address_of_m_ControlPath_0() { return &___m_ControlPath_0; }
	inline void set_m_ControlPath_0(String_t* value)
	{
		___m_ControlPath_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ControlPath_0), value);
	}

	inline static int32_t get_offset_of_m_Flags_1() { return static_cast<int32_t>(offsetof(DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E, ___m_Flags_1)); }
	inline int32_t get_m_Flags_1() const { return ___m_Flags_1; }
	inline int32_t* get_address_of_m_Flags_1() { return &___m_Flags_1; }
	inline void set_m_Flags_1(int32_t value)
	{
		___m_Flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.InputControlScheme/DeviceRequirement
struct DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshaled_pinvoke
{
	char* ___m_ControlPath_0;
	int32_t ___m_Flags_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.InputControlScheme/DeviceRequirement
struct DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshaled_com
{
	Il2CppChar* ___m_ControlPath_0;
	int32_t ___m_Flags_1;
};
#endif // DEVICEREQUIREMENT_TC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_H
#ifndef INPUTMANAGER_T3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9_H
#define INPUTMANAGER_T3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputManager
struct  InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Experimental.Input.InputManager::m_LayoutRegistrationVersion
	int32_t ___m_LayoutRegistrationVersion_0;
	// System.Int32 UnityEngine.Experimental.Input.InputManager::m_DeviceSetupVersion
	int32_t ___m_DeviceSetupVersion_1;
	// System.Single UnityEngine.Experimental.Input.InputManager::m_PollingFrequency
	float ___m_PollingFrequency_2;
	// UnityEngine.Experimental.Input.Layouts.InputControlLayout_Collection UnityEngine.Experimental.Input.InputManager::m_Layouts
	Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035  ___m_Layouts_3;
	// UnityEngine.Experimental.Input.Utilities.TypeTable UnityEngine.Experimental.Input.InputManager::m_Processors
	TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  ___m_Processors_4;
	// UnityEngine.Experimental.Input.Utilities.TypeTable UnityEngine.Experimental.Input.InputManager::m_Interactions
	TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  ___m_Interactions_5;
	// UnityEngine.Experimental.Input.Utilities.TypeTable UnityEngine.Experimental.Input.InputManager::m_Composites
	TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  ___m_Composites_6;
	// System.Int32 UnityEngine.Experimental.Input.InputManager::m_DevicesCount
	int32_t ___m_DevicesCount_7;
	// UnityEngine.Experimental.Input.InputDevice[] UnityEngine.Experimental.Input.InputManager::m_Devices
	InputDeviceU5BU5D_tFDDE97A092210B2CE33F6515B6C54BA86230E36E* ___m_Devices_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.Input.InputDevice> UnityEngine.Experimental.Input.InputManager::m_DevicesById
	Dictionary_2_t302AB232AC65614C4E2D24980423B53878260F70 * ___m_DevicesById_9;
	// System.Int32 UnityEngine.Experimental.Input.InputManager::m_AvailableDeviceCount
	int32_t ___m_AvailableDeviceCount_10;
	// UnityEngine.Experimental.Input.InputManager_AvailableDevice[] UnityEngine.Experimental.Input.InputManager::m_AvailableDevices
	AvailableDeviceU5BU5D_t1FFD962F198838FFD363ADA987254FEDDE1E417C* ___m_AvailableDevices_11;
	// System.Int32 UnityEngine.Experimental.Input.InputManager::m_DisconnectedDevicesCount
	int32_t ___m_DisconnectedDevicesCount_12;
	// UnityEngine.Experimental.Input.InputDevice[] UnityEngine.Experimental.Input.InputManager::m_DisconnectedDevices
	InputDeviceU5BU5D_tFDDE97A092210B2CE33F6515B6C54BA86230E36E* ___m_DisconnectedDevices_13;
	// UnityEngine.Experimental.Input.InputUpdateType UnityEngine.Experimental.Input.InputManager::m_UpdateMask
	int32_t ___m_UpdateMask_14;
	// UnityEngine.Experimental.Input.LowLevel.InputStateBuffers UnityEngine.Experimental.Input.InputManager::m_StateBuffers
	InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF  ___m_StateBuffers_15;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`2<UnityEngine.Experimental.Input.InputDevice,UnityEngine.Experimental.Input.InputDeviceChange>> UnityEngine.Experimental.Input.InputManager::m_DeviceChangeListeners
	InlinedArray_1_t31DF448A4AD82B0C374B5DAE94C343CCA6607F8A  ___m_DeviceChangeListeners_16;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<UnityEngine.Experimental.Input.Layouts.InputDeviceFindControlLayoutDelegate> UnityEngine.Experimental.Input.InputManager::m_DeviceFindLayoutCallbacks
	InlinedArray_1_t9FBD058C65FFCA8154926BB8871028FECFE979BB  ___m_DeviceFindLayoutCallbacks_17;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<UnityEngine.Experimental.Input.LowLevel.InputDeviceCommandDelegate> UnityEngine.Experimental.Input.InputManager::m_DeviceCommandCallbacks
	InlinedArray_1_t41FE2BFCCAE708E4E05E85B456B3C36EFAD68055  ___m_DeviceCommandCallbacks_18;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`2<System.String,UnityEngine.Experimental.Input.InputControlLayoutChange>> UnityEngine.Experimental.Input.InputManager::m_LayoutChangeListeners
	InlinedArray_1_t0EAEAFB82754BB0FA5B4F8D5CA520087315F12F7  ___m_LayoutChangeListeners_19;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`1<UnityEngine.Experimental.Input.LowLevel.InputEventPtr>> UnityEngine.Experimental.Input.InputManager::m_EventListeners
	InlinedArray_1_t285621A094E2903B480BF36786337FDF2ECC25E8  ___m_EventListeners_20;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`1<UnityEngine.Experimental.Input.InputUpdateType>> UnityEngine.Experimental.Input.InputManager::m_BeforeUpdateListeners
	InlinedArray_1_t7F2BE9896B63C412C7AB021068D6BF6C520E06F1  ___m_BeforeUpdateListeners_21;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`1<UnityEngine.Experimental.Input.InputUpdateType>> UnityEngine.Experimental.Input.InputManager::m_AfterUpdateListeners
	InlinedArray_1_t7F2BE9896B63C412C7AB021068D6BF6C520E06F1  ___m_AfterUpdateListeners_22;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action> UnityEngine.Experimental.Input.InputManager::m_SettingsChangedListeners
	InlinedArray_1_t350E3F706B813C0855CE8B5ECDB37A47A4F1B892  ___m_SettingsChangedListeners_23;
	// System.Boolean UnityEngine.Experimental.Input.InputManager::m_NativeBeforeUpdateHooked
	bool ___m_NativeBeforeUpdateHooked_24;
	// System.Boolean UnityEngine.Experimental.Input.InputManager::m_HaveDevicesWithStateCallbackReceivers
	bool ___m_HaveDevicesWithStateCallbackReceivers_25;
	// UnityEngine.Experimental.Input.LowLevel.IInputRuntime UnityEngine.Experimental.Input.InputManager::m_Runtime
	RuntimeObject* ___m_Runtime_26;
	// UnityEngine.Experimental.Input.InputMetrics UnityEngine.Experimental.Input.InputManager::m_Metrics
	InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B  ___m_Metrics_27;
	// UnityEngine.Experimental.Input.InputSettings UnityEngine.Experimental.Input.InputManager::m_Settings
	InputSettings_t22F91F89800F7C30239F970977E3714CC83F2325 * ___m_Settings_28;
	// UnityEngine.Experimental.Input.InputManager_StateChangeMonitorsForDevice[] UnityEngine.Experimental.Input.InputManager::m_StateChangeMonitors
	StateChangeMonitorsForDeviceU5BU5D_t85D53130FCCDD1E1032EF49D9CFD5E3B8E33C806* ___m_StateChangeMonitors_29;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<UnityEngine.Experimental.Input.InputManager_StateChangeMonitorTimeout> UnityEngine.Experimental.Input.InputManager::m_StateChangeMonitorTimeouts
	InlinedArray_1_t4089DE953CDD4D8AC6B1DDC512D0E41D978F5592  ___m_StateChangeMonitorTimeouts_30;

public:
	inline static int32_t get_offset_of_m_LayoutRegistrationVersion_0() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_LayoutRegistrationVersion_0)); }
	inline int32_t get_m_LayoutRegistrationVersion_0() const { return ___m_LayoutRegistrationVersion_0; }
	inline int32_t* get_address_of_m_LayoutRegistrationVersion_0() { return &___m_LayoutRegistrationVersion_0; }
	inline void set_m_LayoutRegistrationVersion_0(int32_t value)
	{
		___m_LayoutRegistrationVersion_0 = value;
	}

	inline static int32_t get_offset_of_m_DeviceSetupVersion_1() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_DeviceSetupVersion_1)); }
	inline int32_t get_m_DeviceSetupVersion_1() const { return ___m_DeviceSetupVersion_1; }
	inline int32_t* get_address_of_m_DeviceSetupVersion_1() { return &___m_DeviceSetupVersion_1; }
	inline void set_m_DeviceSetupVersion_1(int32_t value)
	{
		___m_DeviceSetupVersion_1 = value;
	}

	inline static int32_t get_offset_of_m_PollingFrequency_2() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_PollingFrequency_2)); }
	inline float get_m_PollingFrequency_2() const { return ___m_PollingFrequency_2; }
	inline float* get_address_of_m_PollingFrequency_2() { return &___m_PollingFrequency_2; }
	inline void set_m_PollingFrequency_2(float value)
	{
		___m_PollingFrequency_2 = value;
	}

	inline static int32_t get_offset_of_m_Layouts_3() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_Layouts_3)); }
	inline Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035  get_m_Layouts_3() const { return ___m_Layouts_3; }
	inline Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035 * get_address_of_m_Layouts_3() { return &___m_Layouts_3; }
	inline void set_m_Layouts_3(Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035  value)
	{
		___m_Layouts_3 = value;
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_Processors_4)); }
	inline TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  get_m_Processors_4() const { return ___m_Processors_4; }
	inline TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688 * get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  value)
	{
		___m_Processors_4 = value;
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_Interactions_5)); }
	inline TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688 * get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  value)
	{
		___m_Interactions_5 = value;
	}

	inline static int32_t get_offset_of_m_Composites_6() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_Composites_6)); }
	inline TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  get_m_Composites_6() const { return ___m_Composites_6; }
	inline TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688 * get_address_of_m_Composites_6() { return &___m_Composites_6; }
	inline void set_m_Composites_6(TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688  value)
	{
		___m_Composites_6 = value;
	}

	inline static int32_t get_offset_of_m_DevicesCount_7() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_DevicesCount_7)); }
	inline int32_t get_m_DevicesCount_7() const { return ___m_DevicesCount_7; }
	inline int32_t* get_address_of_m_DevicesCount_7() { return &___m_DevicesCount_7; }
	inline void set_m_DevicesCount_7(int32_t value)
	{
		___m_DevicesCount_7 = value;
	}

	inline static int32_t get_offset_of_m_Devices_8() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_Devices_8)); }
	inline InputDeviceU5BU5D_tFDDE97A092210B2CE33F6515B6C54BA86230E36E* get_m_Devices_8() const { return ___m_Devices_8; }
	inline InputDeviceU5BU5D_tFDDE97A092210B2CE33F6515B6C54BA86230E36E** get_address_of_m_Devices_8() { return &___m_Devices_8; }
	inline void set_m_Devices_8(InputDeviceU5BU5D_tFDDE97A092210B2CE33F6515B6C54BA86230E36E* value)
	{
		___m_Devices_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Devices_8), value);
	}

	inline static int32_t get_offset_of_m_DevicesById_9() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_DevicesById_9)); }
	inline Dictionary_2_t302AB232AC65614C4E2D24980423B53878260F70 * get_m_DevicesById_9() const { return ___m_DevicesById_9; }
	inline Dictionary_2_t302AB232AC65614C4E2D24980423B53878260F70 ** get_address_of_m_DevicesById_9() { return &___m_DevicesById_9; }
	inline void set_m_DevicesById_9(Dictionary_2_t302AB232AC65614C4E2D24980423B53878260F70 * value)
	{
		___m_DevicesById_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_DevicesById_9), value);
	}

	inline static int32_t get_offset_of_m_AvailableDeviceCount_10() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_AvailableDeviceCount_10)); }
	inline int32_t get_m_AvailableDeviceCount_10() const { return ___m_AvailableDeviceCount_10; }
	inline int32_t* get_address_of_m_AvailableDeviceCount_10() { return &___m_AvailableDeviceCount_10; }
	inline void set_m_AvailableDeviceCount_10(int32_t value)
	{
		___m_AvailableDeviceCount_10 = value;
	}

	inline static int32_t get_offset_of_m_AvailableDevices_11() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_AvailableDevices_11)); }
	inline AvailableDeviceU5BU5D_t1FFD962F198838FFD363ADA987254FEDDE1E417C* get_m_AvailableDevices_11() const { return ___m_AvailableDevices_11; }
	inline AvailableDeviceU5BU5D_t1FFD962F198838FFD363ADA987254FEDDE1E417C** get_address_of_m_AvailableDevices_11() { return &___m_AvailableDevices_11; }
	inline void set_m_AvailableDevices_11(AvailableDeviceU5BU5D_t1FFD962F198838FFD363ADA987254FEDDE1E417C* value)
	{
		___m_AvailableDevices_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_AvailableDevices_11), value);
	}

	inline static int32_t get_offset_of_m_DisconnectedDevicesCount_12() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_DisconnectedDevicesCount_12)); }
	inline int32_t get_m_DisconnectedDevicesCount_12() const { return ___m_DisconnectedDevicesCount_12; }
	inline int32_t* get_address_of_m_DisconnectedDevicesCount_12() { return &___m_DisconnectedDevicesCount_12; }
	inline void set_m_DisconnectedDevicesCount_12(int32_t value)
	{
		___m_DisconnectedDevicesCount_12 = value;
	}

	inline static int32_t get_offset_of_m_DisconnectedDevices_13() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_DisconnectedDevices_13)); }
	inline InputDeviceU5BU5D_tFDDE97A092210B2CE33F6515B6C54BA86230E36E* get_m_DisconnectedDevices_13() const { return ___m_DisconnectedDevices_13; }
	inline InputDeviceU5BU5D_tFDDE97A092210B2CE33F6515B6C54BA86230E36E** get_address_of_m_DisconnectedDevices_13() { return &___m_DisconnectedDevices_13; }
	inline void set_m_DisconnectedDevices_13(InputDeviceU5BU5D_tFDDE97A092210B2CE33F6515B6C54BA86230E36E* value)
	{
		___m_DisconnectedDevices_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisconnectedDevices_13), value);
	}

	inline static int32_t get_offset_of_m_UpdateMask_14() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_UpdateMask_14)); }
	inline int32_t get_m_UpdateMask_14() const { return ___m_UpdateMask_14; }
	inline int32_t* get_address_of_m_UpdateMask_14() { return &___m_UpdateMask_14; }
	inline void set_m_UpdateMask_14(int32_t value)
	{
		___m_UpdateMask_14 = value;
	}

	inline static int32_t get_offset_of_m_StateBuffers_15() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_StateBuffers_15)); }
	inline InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF  get_m_StateBuffers_15() const { return ___m_StateBuffers_15; }
	inline InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF * get_address_of_m_StateBuffers_15() { return &___m_StateBuffers_15; }
	inline void set_m_StateBuffers_15(InputStateBuffers_t9DBF43D99DC53552980876E3D4A04A20DFF3B4AF  value)
	{
		___m_StateBuffers_15 = value;
	}

	inline static int32_t get_offset_of_m_DeviceChangeListeners_16() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_DeviceChangeListeners_16)); }
	inline InlinedArray_1_t31DF448A4AD82B0C374B5DAE94C343CCA6607F8A  get_m_DeviceChangeListeners_16() const { return ___m_DeviceChangeListeners_16; }
	inline InlinedArray_1_t31DF448A4AD82B0C374B5DAE94C343CCA6607F8A * get_address_of_m_DeviceChangeListeners_16() { return &___m_DeviceChangeListeners_16; }
	inline void set_m_DeviceChangeListeners_16(InlinedArray_1_t31DF448A4AD82B0C374B5DAE94C343CCA6607F8A  value)
	{
		___m_DeviceChangeListeners_16 = value;
	}

	inline static int32_t get_offset_of_m_DeviceFindLayoutCallbacks_17() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_DeviceFindLayoutCallbacks_17)); }
	inline InlinedArray_1_t9FBD058C65FFCA8154926BB8871028FECFE979BB  get_m_DeviceFindLayoutCallbacks_17() const { return ___m_DeviceFindLayoutCallbacks_17; }
	inline InlinedArray_1_t9FBD058C65FFCA8154926BB8871028FECFE979BB * get_address_of_m_DeviceFindLayoutCallbacks_17() { return &___m_DeviceFindLayoutCallbacks_17; }
	inline void set_m_DeviceFindLayoutCallbacks_17(InlinedArray_1_t9FBD058C65FFCA8154926BB8871028FECFE979BB  value)
	{
		___m_DeviceFindLayoutCallbacks_17 = value;
	}

	inline static int32_t get_offset_of_m_DeviceCommandCallbacks_18() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_DeviceCommandCallbacks_18)); }
	inline InlinedArray_1_t41FE2BFCCAE708E4E05E85B456B3C36EFAD68055  get_m_DeviceCommandCallbacks_18() const { return ___m_DeviceCommandCallbacks_18; }
	inline InlinedArray_1_t41FE2BFCCAE708E4E05E85B456B3C36EFAD68055 * get_address_of_m_DeviceCommandCallbacks_18() { return &___m_DeviceCommandCallbacks_18; }
	inline void set_m_DeviceCommandCallbacks_18(InlinedArray_1_t41FE2BFCCAE708E4E05E85B456B3C36EFAD68055  value)
	{
		___m_DeviceCommandCallbacks_18 = value;
	}

	inline static int32_t get_offset_of_m_LayoutChangeListeners_19() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_LayoutChangeListeners_19)); }
	inline InlinedArray_1_t0EAEAFB82754BB0FA5B4F8D5CA520087315F12F7  get_m_LayoutChangeListeners_19() const { return ___m_LayoutChangeListeners_19; }
	inline InlinedArray_1_t0EAEAFB82754BB0FA5B4F8D5CA520087315F12F7 * get_address_of_m_LayoutChangeListeners_19() { return &___m_LayoutChangeListeners_19; }
	inline void set_m_LayoutChangeListeners_19(InlinedArray_1_t0EAEAFB82754BB0FA5B4F8D5CA520087315F12F7  value)
	{
		___m_LayoutChangeListeners_19 = value;
	}

	inline static int32_t get_offset_of_m_EventListeners_20() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_EventListeners_20)); }
	inline InlinedArray_1_t285621A094E2903B480BF36786337FDF2ECC25E8  get_m_EventListeners_20() const { return ___m_EventListeners_20; }
	inline InlinedArray_1_t285621A094E2903B480BF36786337FDF2ECC25E8 * get_address_of_m_EventListeners_20() { return &___m_EventListeners_20; }
	inline void set_m_EventListeners_20(InlinedArray_1_t285621A094E2903B480BF36786337FDF2ECC25E8  value)
	{
		___m_EventListeners_20 = value;
	}

	inline static int32_t get_offset_of_m_BeforeUpdateListeners_21() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_BeforeUpdateListeners_21)); }
	inline InlinedArray_1_t7F2BE9896B63C412C7AB021068D6BF6C520E06F1  get_m_BeforeUpdateListeners_21() const { return ___m_BeforeUpdateListeners_21; }
	inline InlinedArray_1_t7F2BE9896B63C412C7AB021068D6BF6C520E06F1 * get_address_of_m_BeforeUpdateListeners_21() { return &___m_BeforeUpdateListeners_21; }
	inline void set_m_BeforeUpdateListeners_21(InlinedArray_1_t7F2BE9896B63C412C7AB021068D6BF6C520E06F1  value)
	{
		___m_BeforeUpdateListeners_21 = value;
	}

	inline static int32_t get_offset_of_m_AfterUpdateListeners_22() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_AfterUpdateListeners_22)); }
	inline InlinedArray_1_t7F2BE9896B63C412C7AB021068D6BF6C520E06F1  get_m_AfterUpdateListeners_22() const { return ___m_AfterUpdateListeners_22; }
	inline InlinedArray_1_t7F2BE9896B63C412C7AB021068D6BF6C520E06F1 * get_address_of_m_AfterUpdateListeners_22() { return &___m_AfterUpdateListeners_22; }
	inline void set_m_AfterUpdateListeners_22(InlinedArray_1_t7F2BE9896B63C412C7AB021068D6BF6C520E06F1  value)
	{
		___m_AfterUpdateListeners_22 = value;
	}

	inline static int32_t get_offset_of_m_SettingsChangedListeners_23() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_SettingsChangedListeners_23)); }
	inline InlinedArray_1_t350E3F706B813C0855CE8B5ECDB37A47A4F1B892  get_m_SettingsChangedListeners_23() const { return ___m_SettingsChangedListeners_23; }
	inline InlinedArray_1_t350E3F706B813C0855CE8B5ECDB37A47A4F1B892 * get_address_of_m_SettingsChangedListeners_23() { return &___m_SettingsChangedListeners_23; }
	inline void set_m_SettingsChangedListeners_23(InlinedArray_1_t350E3F706B813C0855CE8B5ECDB37A47A4F1B892  value)
	{
		___m_SettingsChangedListeners_23 = value;
	}

	inline static int32_t get_offset_of_m_NativeBeforeUpdateHooked_24() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_NativeBeforeUpdateHooked_24)); }
	inline bool get_m_NativeBeforeUpdateHooked_24() const { return ___m_NativeBeforeUpdateHooked_24; }
	inline bool* get_address_of_m_NativeBeforeUpdateHooked_24() { return &___m_NativeBeforeUpdateHooked_24; }
	inline void set_m_NativeBeforeUpdateHooked_24(bool value)
	{
		___m_NativeBeforeUpdateHooked_24 = value;
	}

	inline static int32_t get_offset_of_m_HaveDevicesWithStateCallbackReceivers_25() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_HaveDevicesWithStateCallbackReceivers_25)); }
	inline bool get_m_HaveDevicesWithStateCallbackReceivers_25() const { return ___m_HaveDevicesWithStateCallbackReceivers_25; }
	inline bool* get_address_of_m_HaveDevicesWithStateCallbackReceivers_25() { return &___m_HaveDevicesWithStateCallbackReceivers_25; }
	inline void set_m_HaveDevicesWithStateCallbackReceivers_25(bool value)
	{
		___m_HaveDevicesWithStateCallbackReceivers_25 = value;
	}

	inline static int32_t get_offset_of_m_Runtime_26() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_Runtime_26)); }
	inline RuntimeObject* get_m_Runtime_26() const { return ___m_Runtime_26; }
	inline RuntimeObject** get_address_of_m_Runtime_26() { return &___m_Runtime_26; }
	inline void set_m_Runtime_26(RuntimeObject* value)
	{
		___m_Runtime_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Runtime_26), value);
	}

	inline static int32_t get_offset_of_m_Metrics_27() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_Metrics_27)); }
	inline InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B  get_m_Metrics_27() const { return ___m_Metrics_27; }
	inline InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B * get_address_of_m_Metrics_27() { return &___m_Metrics_27; }
	inline void set_m_Metrics_27(InputMetrics_tE2E2EA82AB280FC2CF83AF8E54FD4B301BE03D6B  value)
	{
		___m_Metrics_27 = value;
	}

	inline static int32_t get_offset_of_m_Settings_28() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_Settings_28)); }
	inline InputSettings_t22F91F89800F7C30239F970977E3714CC83F2325 * get_m_Settings_28() const { return ___m_Settings_28; }
	inline InputSettings_t22F91F89800F7C30239F970977E3714CC83F2325 ** get_address_of_m_Settings_28() { return &___m_Settings_28; }
	inline void set_m_Settings_28(InputSettings_t22F91F89800F7C30239F970977E3714CC83F2325 * value)
	{
		___m_Settings_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_Settings_28), value);
	}

	inline static int32_t get_offset_of_m_StateChangeMonitors_29() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_StateChangeMonitors_29)); }
	inline StateChangeMonitorsForDeviceU5BU5D_t85D53130FCCDD1E1032EF49D9CFD5E3B8E33C806* get_m_StateChangeMonitors_29() const { return ___m_StateChangeMonitors_29; }
	inline StateChangeMonitorsForDeviceU5BU5D_t85D53130FCCDD1E1032EF49D9CFD5E3B8E33C806** get_address_of_m_StateChangeMonitors_29() { return &___m_StateChangeMonitors_29; }
	inline void set_m_StateChangeMonitors_29(StateChangeMonitorsForDeviceU5BU5D_t85D53130FCCDD1E1032EF49D9CFD5E3B8E33C806* value)
	{
		___m_StateChangeMonitors_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_StateChangeMonitors_29), value);
	}

	inline static int32_t get_offset_of_m_StateChangeMonitorTimeouts_30() { return static_cast<int32_t>(offsetof(InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9, ___m_StateChangeMonitorTimeouts_30)); }
	inline InlinedArray_1_t4089DE953CDD4D8AC6B1DDC512D0E41D978F5592  get_m_StateChangeMonitorTimeouts_30() const { return ___m_StateChangeMonitorTimeouts_30; }
	inline InlinedArray_1_t4089DE953CDD4D8AC6B1DDC512D0E41D978F5592 * get_address_of_m_StateChangeMonitorTimeouts_30() { return &___m_StateChangeMonitorTimeouts_30; }
	inline void set_m_StateChangeMonitorTimeouts_30(InlinedArray_1_t4089DE953CDD4D8AC6B1DDC512D0E41D978F5592  value)
	{
		___m_StateChangeMonitorTimeouts_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTMANAGER_T3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9_H
#ifndef INPUTPROCESSOR_1_TB61E701E2E12A1C56FA4780AF9D482A639B70D3F_H
#define INPUTPROCESSOR_1_TB61E701E2E12A1C56FA4780AF9D482A639B70D3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputProcessor`1<UnityEngine.Vector2>
struct  InputProcessor_1_tB61E701E2E12A1C56FA4780AF9D482A639B70D3F  : public InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTPROCESSOR_1_TB61E701E2E12A1C56FA4780AF9D482A639B70D3F_H
#ifndef INPUTPROCESSOR_1_TEC0E3B32C1173731BEB9A00F5AEDD9E5562568B5_H
#define INPUTPROCESSOR_1_TEC0E3B32C1173731BEB9A00F5AEDD9E5562568B5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputProcessor`1<UnityEngine.Vector3>
struct  InputProcessor_1_tEC0E3B32C1173731BEB9A00F5AEDD9E5562568B5  : public InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTPROCESSOR_1_TEC0E3B32C1173731BEB9A00F5AEDD9E5562568B5_H
#ifndef INPUTCONTROLLAYOUT_TED5F3DB1F1FE43B9F8659022552DAFD9587765A0_H
#define INPUTCONTROLLAYOUT_TED5F3DB1F1FE43B9F8659022552DAFD9587765A0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Layouts.InputControlLayout
struct  InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Input.Utilities.InternedString UnityEngine.Experimental.Input.Layouts.InputControlLayout::m_Name
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___m_Name_5;
	// System.Type UnityEngine.Experimental.Input.Layouts.InputControlLayout::m_Type
	Type_t * ___m_Type_6;
	// UnityEngine.Experimental.Input.Utilities.InternedString UnityEngine.Experimental.Input.Layouts.InputControlLayout::m_Variants
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___m_Variants_7;
	// UnityEngine.Experimental.Input.Utilities.FourCC UnityEngine.Experimental.Input.Layouts.InputControlLayout::m_StateFormat
	FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  ___m_StateFormat_8;
	// System.Int32 UnityEngine.Experimental.Input.Layouts.InputControlLayout::m_StateSizeInBytes
	int32_t ___m_StateSizeInBytes_9;
	// System.Nullable`1<System.Boolean> UnityEngine.Experimental.Input.Layouts.InputControlLayout::m_UpdateBeforeRender
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___m_UpdateBeforeRender_10;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<UnityEngine.Experimental.Input.Utilities.InternedString> UnityEngine.Experimental.Input.Layouts.InputControlLayout::m_BaseLayouts
	InlinedArray_1_t1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178  ___m_BaseLayouts_11;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<UnityEngine.Experimental.Input.Utilities.InternedString> UnityEngine.Experimental.Input.Layouts.InputControlLayout::m_AppliedOverrides
	InlinedArray_1_t1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178  ___m_AppliedOverrides_12;
	// UnityEngine.Experimental.Input.Utilities.InternedString[] UnityEngine.Experimental.Input.Layouts.InputControlLayout::m_CommonUsages
	InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ___m_CommonUsages_13;
	// UnityEngine.Experimental.Input.Layouts.InputControlLayout_ControlItem[] UnityEngine.Experimental.Input.Layouts.InputControlLayout::m_Controls
	ControlItemU5BU5D_t765CC6EFE64EE45E8CE5874203FA82F920D63D58* ___m_Controls_14;
	// System.String UnityEngine.Experimental.Input.Layouts.InputControlLayout::m_DisplayName
	String_t* ___m_DisplayName_15;

public:
	inline static int32_t get_offset_of_m_Name_5() { return static_cast<int32_t>(offsetof(InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0, ___m_Name_5)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_m_Name_5() const { return ___m_Name_5; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_m_Name_5() { return &___m_Name_5; }
	inline void set_m_Name_5(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___m_Name_5 = value;
	}

	inline static int32_t get_offset_of_m_Type_6() { return static_cast<int32_t>(offsetof(InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0, ___m_Type_6)); }
	inline Type_t * get_m_Type_6() const { return ___m_Type_6; }
	inline Type_t ** get_address_of_m_Type_6() { return &___m_Type_6; }
	inline void set_m_Type_6(Type_t * value)
	{
		___m_Type_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_6), value);
	}

	inline static int32_t get_offset_of_m_Variants_7() { return static_cast<int32_t>(offsetof(InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0, ___m_Variants_7)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_m_Variants_7() const { return ___m_Variants_7; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_m_Variants_7() { return &___m_Variants_7; }
	inline void set_m_Variants_7(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___m_Variants_7 = value;
	}

	inline static int32_t get_offset_of_m_StateFormat_8() { return static_cast<int32_t>(offsetof(InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0, ___m_StateFormat_8)); }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  get_m_StateFormat_8() const { return ___m_StateFormat_8; }
	inline FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E * get_address_of_m_StateFormat_8() { return &___m_StateFormat_8; }
	inline void set_m_StateFormat_8(FourCC_tBF6981976DB609111A3A17EB36644122B8AC3D5E  value)
	{
		___m_StateFormat_8 = value;
	}

	inline static int32_t get_offset_of_m_StateSizeInBytes_9() { return static_cast<int32_t>(offsetof(InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0, ___m_StateSizeInBytes_9)); }
	inline int32_t get_m_StateSizeInBytes_9() const { return ___m_StateSizeInBytes_9; }
	inline int32_t* get_address_of_m_StateSizeInBytes_9() { return &___m_StateSizeInBytes_9; }
	inline void set_m_StateSizeInBytes_9(int32_t value)
	{
		___m_StateSizeInBytes_9 = value;
	}

	inline static int32_t get_offset_of_m_UpdateBeforeRender_10() { return static_cast<int32_t>(offsetof(InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0, ___m_UpdateBeforeRender_10)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_m_UpdateBeforeRender_10() const { return ___m_UpdateBeforeRender_10; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_m_UpdateBeforeRender_10() { return &___m_UpdateBeforeRender_10; }
	inline void set_m_UpdateBeforeRender_10(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___m_UpdateBeforeRender_10 = value;
	}

	inline static int32_t get_offset_of_m_BaseLayouts_11() { return static_cast<int32_t>(offsetof(InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0, ___m_BaseLayouts_11)); }
	inline InlinedArray_1_t1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178  get_m_BaseLayouts_11() const { return ___m_BaseLayouts_11; }
	inline InlinedArray_1_t1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178 * get_address_of_m_BaseLayouts_11() { return &___m_BaseLayouts_11; }
	inline void set_m_BaseLayouts_11(InlinedArray_1_t1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178  value)
	{
		___m_BaseLayouts_11 = value;
	}

	inline static int32_t get_offset_of_m_AppliedOverrides_12() { return static_cast<int32_t>(offsetof(InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0, ___m_AppliedOverrides_12)); }
	inline InlinedArray_1_t1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178  get_m_AppliedOverrides_12() const { return ___m_AppliedOverrides_12; }
	inline InlinedArray_1_t1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178 * get_address_of_m_AppliedOverrides_12() { return &___m_AppliedOverrides_12; }
	inline void set_m_AppliedOverrides_12(InlinedArray_1_t1DDFD3732FE6B7A7AAE2820FAF8F8BE5C17B9178  value)
	{
		___m_AppliedOverrides_12 = value;
	}

	inline static int32_t get_offset_of_m_CommonUsages_13() { return static_cast<int32_t>(offsetof(InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0, ___m_CommonUsages_13)); }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* get_m_CommonUsages_13() const { return ___m_CommonUsages_13; }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384** get_address_of_m_CommonUsages_13() { return &___m_CommonUsages_13; }
	inline void set_m_CommonUsages_13(InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* value)
	{
		___m_CommonUsages_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_CommonUsages_13), value);
	}

	inline static int32_t get_offset_of_m_Controls_14() { return static_cast<int32_t>(offsetof(InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0, ___m_Controls_14)); }
	inline ControlItemU5BU5D_t765CC6EFE64EE45E8CE5874203FA82F920D63D58* get_m_Controls_14() const { return ___m_Controls_14; }
	inline ControlItemU5BU5D_t765CC6EFE64EE45E8CE5874203FA82F920D63D58** get_address_of_m_Controls_14() { return &___m_Controls_14; }
	inline void set_m_Controls_14(ControlItemU5BU5D_t765CC6EFE64EE45E8CE5874203FA82F920D63D58* value)
	{
		___m_Controls_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controls_14), value);
	}

	inline static int32_t get_offset_of_m_DisplayName_15() { return static_cast<int32_t>(offsetof(InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0, ___m_DisplayName_15)); }
	inline String_t* get_m_DisplayName_15() const { return ___m_DisplayName_15; }
	inline String_t** get_address_of_m_DisplayName_15() { return &___m_DisplayName_15; }
	inline void set_m_DisplayName_15(String_t* value)
	{
		___m_DisplayName_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisplayName_15), value);
	}
};

struct InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0_StaticFields
{
public:
	// UnityEngine.Experimental.Input.Utilities.InternedString UnityEngine.Experimental.Input.Layouts.InputControlLayout::s_DefaultVariant
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___s_DefaultVariant_4;
	// UnityEngine.Experimental.Input.Layouts.InputControlLayout_Collection UnityEngine.Experimental.Input.Layouts.InputControlLayout::s_Layouts
	Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035  ___s_Layouts_16;

public:
	inline static int32_t get_offset_of_s_DefaultVariant_4() { return static_cast<int32_t>(offsetof(InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0_StaticFields, ___s_DefaultVariant_4)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_s_DefaultVariant_4() const { return ___s_DefaultVariant_4; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_s_DefaultVariant_4() { return &___s_DefaultVariant_4; }
	inline void set_s_DefaultVariant_4(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___s_DefaultVariant_4 = value;
	}

	inline static int32_t get_offset_of_s_Layouts_16() { return static_cast<int32_t>(offsetof(InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0_StaticFields, ___s_Layouts_16)); }
	inline Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035  get_s_Layouts_16() const { return ___s_Layouts_16; }
	inline Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035 * get_address_of_s_Layouts_16() { return &___s_Layouts_16; }
	inline void set_s_Layouts_16(Collection_t38AD76A66F195D44806ACF41FFD4BFE28F0EE035  value)
	{
		___s_Layouts_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTCONTROLLAYOUT_TED5F3DB1F1FE43B9F8659022552DAFD9587765A0_H
#ifndef INPUTVALUE_TC2638DF7FDAB22F6AB1A1FC08F85DA4380B698A5_H
#define INPUTVALUE_TC2638DF7FDAB22F6AB1A1FC08F85DA4380B698A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Plugins.PlayerInput.InputValue
struct  InputValue_tC2638DF7FDAB22F6AB1A1FC08F85DA4380B698A5  : public RuntimeObject
{
public:
	// System.Nullable`1<UnityEngine.Experimental.Input.InputAction_CallbackContext> UnityEngine.Experimental.Input.Plugins.PlayerInput.InputValue::m_Context
	Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79  ___m_Context_0;

public:
	inline static int32_t get_offset_of_m_Context_0() { return static_cast<int32_t>(offsetof(InputValue_tC2638DF7FDAB22F6AB1A1FC08F85DA4380B698A5, ___m_Context_0)); }
	inline Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79  get_m_Context_0() const { return ___m_Context_0; }
	inline Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 * get_address_of_m_Context_0() { return &___m_Context_0; }
	inline void set_m_Context_0(Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79  value)
	{
		___m_Context_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTVALUE_TC2638DF7FDAB22F6AB1A1FC08F85DA4380B698A5_H
#ifndef PRIMITIVEVALUE_T629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_H
#define PRIMITIVEVALUE_T629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.PrimitiveValue
struct  PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// UnityEngine.Experimental.Input.Utilities.PrimitiveValueType UnityEngine.Experimental.Input.Utilities.PrimitiveValue::valueType
			int32_t ___valueType_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___valueType_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___boolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.Experimental.Input.Utilities.PrimitiveValue::boolValue
			bool ___boolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___boolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___boolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___charValue_2_OffsetPadding[4];
			// System.Char UnityEngine.Experimental.Input.Utilities.PrimitiveValue::charValue
			Il2CppChar ___charValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___charValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___charValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.Experimental.Input.Utilities.PrimitiveValue::byteValue
			uint8_t ___byteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.Experimental.Input.Utilities.PrimitiveValue::sbyteValue
			int8_t ___sbyteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___shortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.Experimental.Input.Utilities.PrimitiveValue::shortValue
			int16_t ___shortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___shortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___shortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ushortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.Experimental.Input.Utilities.PrimitiveValue::ushortValue
			uint16_t ___ushortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ushortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___ushortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___intValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.Experimental.Input.Utilities.PrimitiveValue::intValue
			int32_t ___intValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___intValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___intValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uintValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.Experimental.Input.Utilities.PrimitiveValue::uintValue
			uint32_t ___uintValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uintValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uintValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___longValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.Experimental.Input.Utilities.PrimitiveValue::longValue
			int64_t ___longValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___longValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___longValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.Experimental.Input.Utilities.PrimitiveValue::ulongValue
			uint64_t ___ulongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___ulongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___floatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.Experimental.Input.Utilities.PrimitiveValue::floatValue
			float ___floatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___floatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___floatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___doubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.Experimental.Input.Utilities.PrimitiveValue::doubleValue
			double ___doubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___doubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___doubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_valueType_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9, ___valueType_0)); }
	inline int32_t get_valueType_0() const { return ___valueType_0; }
	inline int32_t* get_address_of_valueType_0() { return &___valueType_0; }
	inline void set_valueType_0(int32_t value)
	{
		___valueType_0 = value;
	}

	inline static int32_t get_offset_of_boolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9, ___boolValue_1)); }
	inline bool get_boolValue_1() const { return ___boolValue_1; }
	inline bool* get_address_of_boolValue_1() { return &___boolValue_1; }
	inline void set_boolValue_1(bool value)
	{
		___boolValue_1 = value;
	}

	inline static int32_t get_offset_of_charValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9, ___charValue_2)); }
	inline Il2CppChar get_charValue_2() const { return ___charValue_2; }
	inline Il2CppChar* get_address_of_charValue_2() { return &___charValue_2; }
	inline void set_charValue_2(Il2CppChar value)
	{
		___charValue_2 = value;
	}

	inline static int32_t get_offset_of_byteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9, ___byteValue_3)); }
	inline uint8_t get_byteValue_3() const { return ___byteValue_3; }
	inline uint8_t* get_address_of_byteValue_3() { return &___byteValue_3; }
	inline void set_byteValue_3(uint8_t value)
	{
		___byteValue_3 = value;
	}

	inline static int32_t get_offset_of_sbyteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9, ___sbyteValue_4)); }
	inline int8_t get_sbyteValue_4() const { return ___sbyteValue_4; }
	inline int8_t* get_address_of_sbyteValue_4() { return &___sbyteValue_4; }
	inline void set_sbyteValue_4(int8_t value)
	{
		___sbyteValue_4 = value;
	}

	inline static int32_t get_offset_of_shortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9, ___shortValue_5)); }
	inline int16_t get_shortValue_5() const { return ___shortValue_5; }
	inline int16_t* get_address_of_shortValue_5() { return &___shortValue_5; }
	inline void set_shortValue_5(int16_t value)
	{
		___shortValue_5 = value;
	}

	inline static int32_t get_offset_of_ushortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9, ___ushortValue_6)); }
	inline uint16_t get_ushortValue_6() const { return ___ushortValue_6; }
	inline uint16_t* get_address_of_ushortValue_6() { return &___ushortValue_6; }
	inline void set_ushortValue_6(uint16_t value)
	{
		___ushortValue_6 = value;
	}

	inline static int32_t get_offset_of_intValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9, ___intValue_7)); }
	inline int32_t get_intValue_7() const { return ___intValue_7; }
	inline int32_t* get_address_of_intValue_7() { return &___intValue_7; }
	inline void set_intValue_7(int32_t value)
	{
		___intValue_7 = value;
	}

	inline static int32_t get_offset_of_uintValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9, ___uintValue_8)); }
	inline uint32_t get_uintValue_8() const { return ___uintValue_8; }
	inline uint32_t* get_address_of_uintValue_8() { return &___uintValue_8; }
	inline void set_uintValue_8(uint32_t value)
	{
		___uintValue_8 = value;
	}

	inline static int32_t get_offset_of_longValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9, ___longValue_9)); }
	inline int64_t get_longValue_9() const { return ___longValue_9; }
	inline int64_t* get_address_of_longValue_9() { return &___longValue_9; }
	inline void set_longValue_9(int64_t value)
	{
		___longValue_9 = value;
	}

	inline static int32_t get_offset_of_ulongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9, ___ulongValue_10)); }
	inline uint64_t get_ulongValue_10() const { return ___ulongValue_10; }
	inline uint64_t* get_address_of_ulongValue_10() { return &___ulongValue_10; }
	inline void set_ulongValue_10(uint64_t value)
	{
		___ulongValue_10 = value;
	}

	inline static int32_t get_offset_of_floatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9, ___floatValue_11)); }
	inline float get_floatValue_11() const { return ___floatValue_11; }
	inline float* get_address_of_floatValue_11() { return &___floatValue_11; }
	inline void set_floatValue_11(float value)
	{
		___floatValue_11 = value;
	}

	inline static int32_t get_offset_of_doubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9, ___doubleValue_12)); }
	inline double get_doubleValue_12() const { return ___doubleValue_12; }
	inline double* get_address_of_doubleValue_12() { return &___doubleValue_12; }
	inline void set_doubleValue_12(double value)
	{
		___doubleValue_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.Utilities.PrimitiveValue
struct PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___valueType_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___valueType_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___boolValue_1_OffsetPadding[4];
			int32_t ___boolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___boolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___boolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___charValue_2_OffsetPadding[4];
			uint8_t ___charValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___charValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___charValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byteValue_3_OffsetPadding[4];
			uint8_t ___byteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyteValue_4_OffsetPadding[4];
			int8_t ___sbyteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___shortValue_5_OffsetPadding[4];
			int16_t ___shortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___shortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___shortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ushortValue_6_OffsetPadding[4];
			uint16_t ___ushortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ushortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___ushortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___intValue_7_OffsetPadding[4];
			int32_t ___intValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___intValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___intValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uintValue_8_OffsetPadding[4];
			uint32_t ___uintValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uintValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uintValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___longValue_9_OffsetPadding[4];
			int64_t ___longValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___longValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___longValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulongValue_10_OffsetPadding[4];
			uint64_t ___ulongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___ulongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___floatValue_11_OffsetPadding[4];
			float ___floatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___floatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___floatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___doubleValue_12_OffsetPadding[4];
			double ___doubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___doubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___doubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.Utilities.PrimitiveValue
struct PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___valueType_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___valueType_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___boolValue_1_OffsetPadding[4];
			int32_t ___boolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___boolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___boolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___charValue_2_OffsetPadding[4];
			uint8_t ___charValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___charValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___charValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byteValue_3_OffsetPadding[4];
			uint8_t ___byteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyteValue_4_OffsetPadding[4];
			int8_t ___sbyteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___shortValue_5_OffsetPadding[4];
			int16_t ___shortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___shortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___shortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ushortValue_6_OffsetPadding[4];
			uint16_t ___ushortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ushortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___ushortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___intValue_7_OffsetPadding[4];
			int32_t ___intValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___intValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___intValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uintValue_8_OffsetPadding[4];
			uint32_t ___uintValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uintValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uintValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___longValue_9_OffsetPadding[4];
			int64_t ___longValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___longValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___longValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulongValue_10_OffsetPadding[4];
			uint64_t ___ulongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___ulongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___floatValue_11_OffsetPadding[4];
			float ___floatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___floatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___floatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___doubleValue_12_OffsetPadding[4];
			double ___doubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___doubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___doubleValue_12_forAlignmentOnly;
		};
	};
};
#endif // PRIMITIVEVALUE_T629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#define MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifndef PLAYABLE_T4ABB910C374FCAB6B926DA4D34A85857A59950D0_H
#define PLAYABLE_T4ABB910C374FCAB6B926DA4D34A85857A59950D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T4ABB910C374FCAB6B926DA4D34A85857A59950D0_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef TIMELINECLIP_T45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A_H
#define TIMELINECLIP_T45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Timeline.TimelineClip
struct  TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A  : public RuntimeObject
{
public:
	// System.Double UnityEngine.Timeline.TimelineClip::m_Start
	double ___m_Start_6;
	// System.Double UnityEngine.Timeline.TimelineClip::m_ClipIn
	double ___m_ClipIn_7;
	// UnityEngine.Object UnityEngine.Timeline.TimelineClip::m_Asset
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_Asset_8;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Duration
	double ___m_Duration_9;
	// System.Double UnityEngine.Timeline.TimelineClip::m_TimeScale
	double ___m_TimeScale_10;
	// UnityEngine.Timeline.TrackAsset UnityEngine.Timeline.TimelineClip::m_ParentTrack
	TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC * ___m_ParentTrack_11;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseInDuration
	double ___m_EaseInDuration_12;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseOutDuration
	double ___m_EaseOutDuration_13;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendInDuration
	double ___m_BlendInDuration_14;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendOutDuration
	double ___m_BlendOutDuration_15;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixInCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_MixInCurve_16;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixOutCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_MixOutCurve_17;
	// UnityEngine.Timeline.TimelineClip_BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendInCurveMode
	int32_t ___m_BlendInCurveMode_18;
	// UnityEngine.Timeline.TimelineClip_BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendOutCurveMode
	int32_t ___m_BlendOutCurveMode_19;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Timeline.TimelineClip::m_ExposedParameterNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___m_ExposedParameterNames_20;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TimelineClip::m_AnimationCurves
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_AnimationCurves_21;
	// System.Boolean UnityEngine.Timeline.TimelineClip::m_Recordable
	bool ___m_Recordable_22;
	// UnityEngine.Timeline.TimelineClip_ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PostExtrapolationMode
	int32_t ___m_PostExtrapolationMode_23;
	// UnityEngine.Timeline.TimelineClip_ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PreExtrapolationMode
	int32_t ___m_PreExtrapolationMode_24;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PostExtrapolationTime
	double ___m_PostExtrapolationTime_25;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PreExtrapolationTime
	double ___m_PreExtrapolationTime_26;
	// System.String UnityEngine.Timeline.TimelineClip::m_DisplayName
	String_t* ___m_DisplayName_27;
	// System.Int32 UnityEngine.Timeline.TimelineClip::<dirtyHash>k__BackingField
	int32_t ___U3CdirtyHashU3Ek__BackingField_28;
	// System.Int32 UnityEngine.Timeline.TimelineClip::m_Version
	int32_t ___m_Version_30;

public:
	inline static int32_t get_offset_of_m_Start_6() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_Start_6)); }
	inline double get_m_Start_6() const { return ___m_Start_6; }
	inline double* get_address_of_m_Start_6() { return &___m_Start_6; }
	inline void set_m_Start_6(double value)
	{
		___m_Start_6 = value;
	}

	inline static int32_t get_offset_of_m_ClipIn_7() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_ClipIn_7)); }
	inline double get_m_ClipIn_7() const { return ___m_ClipIn_7; }
	inline double* get_address_of_m_ClipIn_7() { return &___m_ClipIn_7; }
	inline void set_m_ClipIn_7(double value)
	{
		___m_ClipIn_7 = value;
	}

	inline static int32_t get_offset_of_m_Asset_8() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_Asset_8)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_Asset_8() const { return ___m_Asset_8; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_Asset_8() { return &___m_Asset_8; }
	inline void set_m_Asset_8(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_Asset_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Asset_8), value);
	}

	inline static int32_t get_offset_of_m_Duration_9() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_Duration_9)); }
	inline double get_m_Duration_9() const { return ___m_Duration_9; }
	inline double* get_address_of_m_Duration_9() { return &___m_Duration_9; }
	inline void set_m_Duration_9(double value)
	{
		___m_Duration_9 = value;
	}

	inline static int32_t get_offset_of_m_TimeScale_10() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_TimeScale_10)); }
	inline double get_m_TimeScale_10() const { return ___m_TimeScale_10; }
	inline double* get_address_of_m_TimeScale_10() { return &___m_TimeScale_10; }
	inline void set_m_TimeScale_10(double value)
	{
		___m_TimeScale_10 = value;
	}

	inline static int32_t get_offset_of_m_ParentTrack_11() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_ParentTrack_11)); }
	inline TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC * get_m_ParentTrack_11() const { return ___m_ParentTrack_11; }
	inline TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC ** get_address_of_m_ParentTrack_11() { return &___m_ParentTrack_11; }
	inline void set_m_ParentTrack_11(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC * value)
	{
		___m_ParentTrack_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentTrack_11), value);
	}

	inline static int32_t get_offset_of_m_EaseInDuration_12() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_EaseInDuration_12)); }
	inline double get_m_EaseInDuration_12() const { return ___m_EaseInDuration_12; }
	inline double* get_address_of_m_EaseInDuration_12() { return &___m_EaseInDuration_12; }
	inline void set_m_EaseInDuration_12(double value)
	{
		___m_EaseInDuration_12 = value;
	}

	inline static int32_t get_offset_of_m_EaseOutDuration_13() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_EaseOutDuration_13)); }
	inline double get_m_EaseOutDuration_13() const { return ___m_EaseOutDuration_13; }
	inline double* get_address_of_m_EaseOutDuration_13() { return &___m_EaseOutDuration_13; }
	inline void set_m_EaseOutDuration_13(double value)
	{
		___m_EaseOutDuration_13 = value;
	}

	inline static int32_t get_offset_of_m_BlendInDuration_14() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_BlendInDuration_14)); }
	inline double get_m_BlendInDuration_14() const { return ___m_BlendInDuration_14; }
	inline double* get_address_of_m_BlendInDuration_14() { return &___m_BlendInDuration_14; }
	inline void set_m_BlendInDuration_14(double value)
	{
		___m_BlendInDuration_14 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutDuration_15() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_BlendOutDuration_15)); }
	inline double get_m_BlendOutDuration_15() const { return ___m_BlendOutDuration_15; }
	inline double* get_address_of_m_BlendOutDuration_15() { return &___m_BlendOutDuration_15; }
	inline void set_m_BlendOutDuration_15(double value)
	{
		___m_BlendOutDuration_15 = value;
	}

	inline static int32_t get_offset_of_m_MixInCurve_16() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_MixInCurve_16)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_MixInCurve_16() const { return ___m_MixInCurve_16; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_MixInCurve_16() { return &___m_MixInCurve_16; }
	inline void set_m_MixInCurve_16(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_MixInCurve_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_MixInCurve_16), value);
	}

	inline static int32_t get_offset_of_m_MixOutCurve_17() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_MixOutCurve_17)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_MixOutCurve_17() const { return ___m_MixOutCurve_17; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_MixOutCurve_17() { return &___m_MixOutCurve_17; }
	inline void set_m_MixOutCurve_17(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_MixOutCurve_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_MixOutCurve_17), value);
	}

	inline static int32_t get_offset_of_m_BlendInCurveMode_18() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_BlendInCurveMode_18)); }
	inline int32_t get_m_BlendInCurveMode_18() const { return ___m_BlendInCurveMode_18; }
	inline int32_t* get_address_of_m_BlendInCurveMode_18() { return &___m_BlendInCurveMode_18; }
	inline void set_m_BlendInCurveMode_18(int32_t value)
	{
		___m_BlendInCurveMode_18 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutCurveMode_19() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_BlendOutCurveMode_19)); }
	inline int32_t get_m_BlendOutCurveMode_19() const { return ___m_BlendOutCurveMode_19; }
	inline int32_t* get_address_of_m_BlendOutCurveMode_19() { return &___m_BlendOutCurveMode_19; }
	inline void set_m_BlendOutCurveMode_19(int32_t value)
	{
		___m_BlendOutCurveMode_19 = value;
	}

	inline static int32_t get_offset_of_m_ExposedParameterNames_20() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_ExposedParameterNames_20)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_m_ExposedParameterNames_20() const { return ___m_ExposedParameterNames_20; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_m_ExposedParameterNames_20() { return &___m_ExposedParameterNames_20; }
	inline void set_m_ExposedParameterNames_20(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___m_ExposedParameterNames_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExposedParameterNames_20), value);
	}

	inline static int32_t get_offset_of_m_AnimationCurves_21() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_AnimationCurves_21)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_AnimationCurves_21() const { return ___m_AnimationCurves_21; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_AnimationCurves_21() { return &___m_AnimationCurves_21; }
	inline void set_m_AnimationCurves_21(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_AnimationCurves_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationCurves_21), value);
	}

	inline static int32_t get_offset_of_m_Recordable_22() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_Recordable_22)); }
	inline bool get_m_Recordable_22() const { return ___m_Recordable_22; }
	inline bool* get_address_of_m_Recordable_22() { return &___m_Recordable_22; }
	inline void set_m_Recordable_22(bool value)
	{
		___m_Recordable_22 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationMode_23() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_PostExtrapolationMode_23)); }
	inline int32_t get_m_PostExtrapolationMode_23() const { return ___m_PostExtrapolationMode_23; }
	inline int32_t* get_address_of_m_PostExtrapolationMode_23() { return &___m_PostExtrapolationMode_23; }
	inline void set_m_PostExtrapolationMode_23(int32_t value)
	{
		___m_PostExtrapolationMode_23 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationMode_24() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_PreExtrapolationMode_24)); }
	inline int32_t get_m_PreExtrapolationMode_24() const { return ___m_PreExtrapolationMode_24; }
	inline int32_t* get_address_of_m_PreExtrapolationMode_24() { return &___m_PreExtrapolationMode_24; }
	inline void set_m_PreExtrapolationMode_24(int32_t value)
	{
		___m_PreExtrapolationMode_24 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationTime_25() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_PostExtrapolationTime_25)); }
	inline double get_m_PostExtrapolationTime_25() const { return ___m_PostExtrapolationTime_25; }
	inline double* get_address_of_m_PostExtrapolationTime_25() { return &___m_PostExtrapolationTime_25; }
	inline void set_m_PostExtrapolationTime_25(double value)
	{
		___m_PostExtrapolationTime_25 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationTime_26() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_PreExtrapolationTime_26)); }
	inline double get_m_PreExtrapolationTime_26() const { return ___m_PreExtrapolationTime_26; }
	inline double* get_address_of_m_PreExtrapolationTime_26() { return &___m_PreExtrapolationTime_26; }
	inline void set_m_PreExtrapolationTime_26(double value)
	{
		___m_PreExtrapolationTime_26 = value;
	}

	inline static int32_t get_offset_of_m_DisplayName_27() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_DisplayName_27)); }
	inline String_t* get_m_DisplayName_27() const { return ___m_DisplayName_27; }
	inline String_t** get_address_of_m_DisplayName_27() { return &___m_DisplayName_27; }
	inline void set_m_DisplayName_27(String_t* value)
	{
		___m_DisplayName_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisplayName_27), value);
	}

	inline static int32_t get_offset_of_U3CdirtyHashU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___U3CdirtyHashU3Ek__BackingField_28)); }
	inline int32_t get_U3CdirtyHashU3Ek__BackingField_28() const { return ___U3CdirtyHashU3Ek__BackingField_28; }
	inline int32_t* get_address_of_U3CdirtyHashU3Ek__BackingField_28() { return &___U3CdirtyHashU3Ek__BackingField_28; }
	inline void set_U3CdirtyHashU3Ek__BackingField_28(int32_t value)
	{
		___U3CdirtyHashU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_m_Version_30() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A, ___m_Version_30)); }
	inline int32_t get_m_Version_30() const { return ___m_Version_30; }
	inline int32_t* get_address_of_m_Version_30() { return &___m_Version_30; }
	inline void set_m_Version_30(int32_t value)
	{
		___m_Version_30 = value;
	}
};

struct TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A_StaticFields
{
public:
	// UnityEngine.Timeline.ClipCaps UnityEngine.Timeline.TimelineClip::kDefaultClipCaps
	int32_t ___kDefaultClipCaps_0;
	// System.Single UnityEngine.Timeline.TimelineClip::kDefaultClipDurationInSeconds
	float ___kDefaultClipDurationInSeconds_1;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMin
	double ___kTimeScaleMin_2;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMax
	double ___kTimeScaleMax_3;
	// System.Double UnityEngine.Timeline.TimelineClip::kMinDuration
	double ___kMinDuration_4;
	// System.Double UnityEngine.Timeline.TimelineClip::kMaxTimeValue
	double ___kMaxTimeValue_5;

public:
	inline static int32_t get_offset_of_kDefaultClipCaps_0() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A_StaticFields, ___kDefaultClipCaps_0)); }
	inline int32_t get_kDefaultClipCaps_0() const { return ___kDefaultClipCaps_0; }
	inline int32_t* get_address_of_kDefaultClipCaps_0() { return &___kDefaultClipCaps_0; }
	inline void set_kDefaultClipCaps_0(int32_t value)
	{
		___kDefaultClipCaps_0 = value;
	}

	inline static int32_t get_offset_of_kDefaultClipDurationInSeconds_1() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A_StaticFields, ___kDefaultClipDurationInSeconds_1)); }
	inline float get_kDefaultClipDurationInSeconds_1() const { return ___kDefaultClipDurationInSeconds_1; }
	inline float* get_address_of_kDefaultClipDurationInSeconds_1() { return &___kDefaultClipDurationInSeconds_1; }
	inline void set_kDefaultClipDurationInSeconds_1(float value)
	{
		___kDefaultClipDurationInSeconds_1 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMin_2() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A_StaticFields, ___kTimeScaleMin_2)); }
	inline double get_kTimeScaleMin_2() const { return ___kTimeScaleMin_2; }
	inline double* get_address_of_kTimeScaleMin_2() { return &___kTimeScaleMin_2; }
	inline void set_kTimeScaleMin_2(double value)
	{
		___kTimeScaleMin_2 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMax_3() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A_StaticFields, ___kTimeScaleMax_3)); }
	inline double get_kTimeScaleMax_3() const { return ___kTimeScaleMax_3; }
	inline double* get_address_of_kTimeScaleMax_3() { return &___kTimeScaleMax_3; }
	inline void set_kTimeScaleMax_3(double value)
	{
		___kTimeScaleMax_3 = value;
	}

	inline static int32_t get_offset_of_kMinDuration_4() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A_StaticFields, ___kMinDuration_4)); }
	inline double get_kMinDuration_4() const { return ___kMinDuration_4; }
	inline double* get_address_of_kMinDuration_4() { return &___kMinDuration_4; }
	inline void set_kMinDuration_4(double value)
	{
		___kMinDuration_4 = value;
	}

	inline static int32_t get_offset_of_kMaxTimeValue_5() { return static_cast<int32_t>(offsetof(TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A_StaticFields, ___kMaxTimeValue_5)); }
	inline double get_kMaxTimeValue_5() const { return ___kMaxTimeValue_5; }
	inline double* get_address_of_kMaxTimeValue_5() { return &___kMaxTimeValue_5; }
	inline void set_kMaxTimeValue_5(double value)
	{
		___kMaxTimeValue_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMELINECLIP_T45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A_H
#ifndef NULLABLE_1_T167F529785042EBDA4904D82CE25F5D72535ED8E_H
#define NULLABLE_1_T167F529785042EBDA4904D82CE25F5D72535ED8E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.Experimental.Input.InputBinding>
struct  Nullable_1_t167F529785042EBDA4904D82CE25F5D72535ED8E 
{
public:
	// T System.Nullable`1::value
	InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t167F529785042EBDA4904D82CE25F5D72535ED8E, ___value_0)); }
	inline InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE  get_value_0() const { return ___value_0; }
	inline InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t79DFEFBC65BBAAC7436D43CFF2B9CB3AF1F294FE  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t167F529785042EBDA4904D82CE25F5D72535ED8E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T167F529785042EBDA4904D82CE25F5D72535ED8E_H
#ifndef PREDICATE_1_T4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979_H
#define PREDICATE_1_T4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979_H
#ifndef PREDICATE_1_T3333496E2F2FA4644BD0542FABED4A4F600D860A_H
#define PREDICATE_1_T3333496E2F2FA4644BD0542FABED4A4F600D860A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<UnityEngine.Experimental.Input.Utilities.InternedString>
struct  Predicate_1_t3333496E2F2FA4644BD0542FABED4A4F600D860A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3333496E2F2FA4644BD0542FABED4A4F600D860A_H
#ifndef EVENTFUNCTION_1_TC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0_H
#define EVENTFUNCTION_1_TC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<System.Object>
struct  EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_TC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0_H
#ifndef INPUTCONTROLLIST_1_TAAF73F3721278A83C933A1795264F4286841CD3E_H
#define INPUTCONTROLLIST_1_TAAF73F3721278A83C933A1795264F4286841CD3E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputControlList`1<System.Object>
struct  InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.Experimental.Input.InputControlList`1::m_Indices
	NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.Experimental.Input.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E, ___m_Indices_1)); }
	inline NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTCONTROLLIST_1_TAAF73F3721278A83C933A1795264F4286841CD3E_H
#ifndef INPUTCONTROLLIST_1_TAAEC7CB4CBBE1895D7E621112FB21E11DB81A885_H
#define INPUTCONTROLLIST_1_TAAEC7CB4CBBE1895D7E621112FB21E11DB81A885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputControlList`1<UnityEngine.Experimental.Input.InputControl>
struct  InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.Experimental.Input.InputControlList`1::m_Indices
	NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.Experimental.Input.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885, ___m_Indices_1)); }
	inline NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTCONTROLLIST_1_TAAEC7CB4CBBE1895D7E621112FB21E11DB81A885_H
#ifndef INPUTCONTROLLIST_1_T8E3A87E611494F610209FE4996C4E19EA74E50CC_H
#define INPUTCONTROLLIST_1_T8E3A87E611494F610209FE4996C4E19EA74E50CC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputControlList`1<UnityEngine.Experimental.Input.InputDevice>
struct  InputControlList_1_t8E3A87E611494F610209FE4996C4E19EA74E50CC 
{
public:
	// System.Int32 UnityEngine.Experimental.Input.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.Experimental.Input.InputControlList`1::m_Indices
	NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.Experimental.Input.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_t8E3A87E611494F610209FE4996C4E19EA74E50CC, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_t8E3A87E611494F610209FE4996C4E19EA74E50CC, ___m_Indices_1)); }
	inline NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_t8E3A87E611494F610209FE4996C4E19EA74E50CC, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTCONTROLLIST_1_T8E3A87E611494F610209FE4996C4E19EA74E50CC_H
#ifndef ONSCREENDEVICEINFO_TA15227DD9577E210A11D51685EBFBB17CCD47BD9_H
#define ONSCREENDEVICEINFO_TA15227DD9577E210A11D51685EBFBB17CCD47BD9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl_OnScreenDeviceInfo
struct  OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9 
{
public:
	// UnityEngine.Experimental.Input.LowLevel.InputEventPtr UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl_OnScreenDeviceInfo::eventPtr
	InputEventPtr_tDB779E9C62F0376238944401D979912F849DB2AB  ___eventPtr_0;
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl_OnScreenDeviceInfo::buffer
	NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  ___buffer_1;
	// UnityEngine.Experimental.Input.InputDevice UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl_OnScreenDeviceInfo::device
	InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * ___device_2;
	// UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl_OnScreenDeviceInfo::firstControl
	OnScreenControl_tA4D87D6DD8F06D6200C5909DE619A341FD5773F0 * ___firstControl_3;

public:
	inline static int32_t get_offset_of_eventPtr_0() { return static_cast<int32_t>(offsetof(OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9, ___eventPtr_0)); }
	inline InputEventPtr_tDB779E9C62F0376238944401D979912F849DB2AB  get_eventPtr_0() const { return ___eventPtr_0; }
	inline InputEventPtr_tDB779E9C62F0376238944401D979912F849DB2AB * get_address_of_eventPtr_0() { return &___eventPtr_0; }
	inline void set_eventPtr_0(InputEventPtr_tDB779E9C62F0376238944401D979912F849DB2AB  value)
	{
		___eventPtr_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9, ___buffer_1)); }
	inline NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  get_buffer_1() const { return ___buffer_1; }
	inline NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE * get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  value)
	{
		___buffer_1 = value;
	}

	inline static int32_t get_offset_of_device_2() { return static_cast<int32_t>(offsetof(OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9, ___device_2)); }
	inline InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * get_device_2() const { return ___device_2; }
	inline InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 ** get_address_of_device_2() { return &___device_2; }
	inline void set_device_2(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * value)
	{
		___device_2 = value;
		Il2CppCodeGenWriteBarrier((&___device_2), value);
	}

	inline static int32_t get_offset_of_firstControl_3() { return static_cast<int32_t>(offsetof(OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9, ___firstControl_3)); }
	inline OnScreenControl_tA4D87D6DD8F06D6200C5909DE619A341FD5773F0 * get_firstControl_3() const { return ___firstControl_3; }
	inline OnScreenControl_tA4D87D6DD8F06D6200C5909DE619A341FD5773F0 ** get_address_of_firstControl_3() { return &___firstControl_3; }
	inline void set_firstControl_3(OnScreenControl_tA4D87D6DD8F06D6200C5909DE619A341FD5773F0 * value)
	{
		___firstControl_3 = value;
		Il2CppCodeGenWriteBarrier((&___firstControl_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl/OnScreenDeviceInfo
struct OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9_marshaled_pinvoke
{
	InputEventPtr_tDB779E9C62F0376238944401D979912F849DB2AB  ___eventPtr_0;
	NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  ___buffer_1;
	InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * ___device_2;
	OnScreenControl_tA4D87D6DD8F06D6200C5909DE619A341FD5773F0 * ___firstControl_3;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl/OnScreenDeviceInfo
struct OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9_marshaled_com
{
	InputEventPtr_tDB779E9C62F0376238944401D979912F849DB2AB  ___eventPtr_0;
	NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  ___buffer_1;
	InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * ___device_2;
	OnScreenControl_tA4D87D6DD8F06D6200C5909DE619A341FD5773F0 * ___firstControl_3;
};
#endif // ONSCREENDEVICEINFO_TA15227DD9577E210A11D51685EBFBB17CCD47BD9_H
#ifndef PRIMITIVEVALUEORARRAY_TB184E26170C9F45525FE5E368AF954D70E8984F4_H
#define PRIMITIVEVALUEORARRAY_TB184E26170C9F45525FE5E368AF954D70E8984F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.Utilities.PrimitiveValueOrArray
struct  PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4 
{
public:
	// UnityEngine.Experimental.Input.Utilities.PrimitiveValue UnityEngine.Experimental.Input.Utilities.PrimitiveValueOrArray::primitiveValue
	PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9  ___primitiveValue_0;
	// System.Object UnityEngine.Experimental.Input.Utilities.PrimitiveValueOrArray::arrayValue
	RuntimeObject * ___arrayValue_1;

public:
	inline static int32_t get_offset_of_primitiveValue_0() { return static_cast<int32_t>(offsetof(PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4, ___primitiveValue_0)); }
	inline PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9  get_primitiveValue_0() const { return ___primitiveValue_0; }
	inline PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9 * get_address_of_primitiveValue_0() { return &___primitiveValue_0; }
	inline void set_primitiveValue_0(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9  value)
	{
		___primitiveValue_0 = value;
	}

	inline static int32_t get_offset_of_arrayValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4, ___arrayValue_1)); }
	inline RuntimeObject * get_arrayValue_1() const { return ___arrayValue_1; }
	inline RuntimeObject ** get_address_of_arrayValue_1() { return &___arrayValue_1; }
	inline void set_arrayValue_1(RuntimeObject * value)
	{
		___arrayValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___arrayValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.Utilities.PrimitiveValueOrArray
struct PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4_marshaled_pinvoke
{
	PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_marshaled_pinvoke ___primitiveValue_0;
	Il2CppIUnknown* ___arrayValue_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.Utilities.PrimitiveValueOrArray
struct PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4_marshaled_com
{
	PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9_marshaled_com ___primitiveValue_0;
	Il2CppIUnknown* ___arrayValue_1;
};
#endif // PRIMITIVEVALUEORARRAY_TB184E26170C9F45525FE5E368AF954D70E8984F4_H
#ifndef PLAYABLEASSET_T28B670EFE526C0D383A1C5A5AE2A150424E989AD_H
#define PLAYABLEASSET_T28B670EFE526C0D383A1C5A5AE2A150424E989AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T28B670EFE526C0D383A1C5A5AE2A150424E989AD_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef INPUTACTION_T7BA9F6C6A529842D0C9298B88E370F682FAC7550_H
#define INPUTACTION_T7BA9F6C6A529842D0C9298B88E370F682FAC7550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputAction
struct  InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550  : public RuntimeObject
{
public:
	// System.String UnityEngine.Experimental.Input.InputAction::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.Experimental.Input.InputAction::m_ExpectedControlLayout
	String_t* ___m_ExpectedControlLayout_1;
	// System.String UnityEngine.Experimental.Input.InputAction::m_Id
	String_t* ___m_Id_2;
	// UnityEngine.Experimental.Input.InputAction_ActionFlags UnityEngine.Experimental.Input.InputAction::m_Flags
	int32_t ___m_Flags_3;
	// System.String UnityEngine.Experimental.Input.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.Experimental.Input.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.Experimental.Input.InputBinding[] UnityEngine.Experimental.Input.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t56C7F4DD49EB13137D6C67DF64A8DEFA837F0078* ___m_SingletonActionBindings_6;
	// System.Nullable`1<UnityEngine.Experimental.Input.InputBinding> UnityEngine.Experimental.Input.InputAction::m_BindingMask
	Nullable_1_t167F529785042EBDA4904D82CE25F5D72535ED8E  ___m_BindingMask_7;
	// System.Int32 UnityEngine.Experimental.Input.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_8;
	// System.Int32 UnityEngine.Experimental.Input.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_9;
	// System.Int32 UnityEngine.Experimental.Input.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_10;
	// System.Int32 UnityEngine.Experimental.Input.InputAction::m_ControlCount
	int32_t ___m_ControlCount_11;
	// System.Guid UnityEngine.Experimental.Input.InputAction::m_Guid
	Guid_t  ___m_Guid_12;
	// System.Int32 UnityEngine.Experimental.Input.InputAction::m_ActionIndex
	int32_t ___m_ActionIndex_13;
	// UnityEngine.Experimental.Input.InputActionMap UnityEngine.Experimental.Input.InputAction::m_ActionMap
	InputActionMap_t12E0A74F13DAEBDBE20D07D97A7D67628CB6E151 * ___m_ActionMap_14;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`1<UnityEngine.Experimental.Input.InputAction_CallbackContext>> UnityEngine.Experimental.Input.InputAction::m_OnStarted
	InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A  ___m_OnStarted_15;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`1<UnityEngine.Experimental.Input.InputAction_CallbackContext>> UnityEngine.Experimental.Input.InputAction::m_OnCancelled
	InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A  ___m_OnCancelled_16;
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<System.Action`1<UnityEngine.Experimental.Input.InputAction_CallbackContext>> UnityEngine.Experimental.Input.InputAction::m_OnPerformed
	InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A  ___m_OnPerformed_17;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_ExpectedControlLayout_1() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_ExpectedControlLayout_1)); }
	inline String_t* get_m_ExpectedControlLayout_1() const { return ___m_ExpectedControlLayout_1; }
	inline String_t** get_address_of_m_ExpectedControlLayout_1() { return &___m_ExpectedControlLayout_1; }
	inline void set_m_ExpectedControlLayout_1(String_t* value)
	{
		___m_ExpectedControlLayout_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExpectedControlLayout_1), value);
	}

	inline static int32_t get_offset_of_m_Id_2() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_Id_2)); }
	inline String_t* get_m_Id_2() const { return ___m_Id_2; }
	inline String_t** get_address_of_m_Id_2() { return &___m_Id_2; }
	inline void set_m_Id_2(String_t* value)
	{
		___m_Id_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Id_2), value);
	}

	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Processors_4), value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Interactions_5), value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_t56C7F4DD49EB13137D6C67DF64A8DEFA837F0078* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_t56C7F4DD49EB13137D6C67DF64A8DEFA837F0078** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_t56C7F4DD49EB13137D6C67DF64A8DEFA837F0078* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_SingletonActionBindings_6), value);
	}

	inline static int32_t get_offset_of_m_BindingMask_7() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_BindingMask_7)); }
	inline Nullable_1_t167F529785042EBDA4904D82CE25F5D72535ED8E  get_m_BindingMask_7() const { return ___m_BindingMask_7; }
	inline Nullable_1_t167F529785042EBDA4904D82CE25F5D72535ED8E * get_address_of_m_BindingMask_7() { return &___m_BindingMask_7; }
	inline void set_m_BindingMask_7(Nullable_1_t167F529785042EBDA4904D82CE25F5D72535ED8E  value)
	{
		___m_BindingMask_7 = value;
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_8() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_BindingsStartIndex_8)); }
	inline int32_t get_m_BindingsStartIndex_8() const { return ___m_BindingsStartIndex_8; }
	inline int32_t* get_address_of_m_BindingsStartIndex_8() { return &___m_BindingsStartIndex_8; }
	inline void set_m_BindingsStartIndex_8(int32_t value)
	{
		___m_BindingsStartIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_9() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_BindingsCount_9)); }
	inline int32_t get_m_BindingsCount_9() const { return ___m_BindingsCount_9; }
	inline int32_t* get_address_of_m_BindingsCount_9() { return &___m_BindingsCount_9; }
	inline void set_m_BindingsCount_9(int32_t value)
	{
		___m_BindingsCount_9 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_10() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_ControlStartIndex_10)); }
	inline int32_t get_m_ControlStartIndex_10() const { return ___m_ControlStartIndex_10; }
	inline int32_t* get_address_of_m_ControlStartIndex_10() { return &___m_ControlStartIndex_10; }
	inline void set_m_ControlStartIndex_10(int32_t value)
	{
		___m_ControlStartIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_11() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_ControlCount_11)); }
	inline int32_t get_m_ControlCount_11() const { return ___m_ControlCount_11; }
	inline int32_t* get_address_of_m_ControlCount_11() { return &___m_ControlCount_11; }
	inline void set_m_ControlCount_11(int32_t value)
	{
		___m_ControlCount_11 = value;
	}

	inline static int32_t get_offset_of_m_Guid_12() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_Guid_12)); }
	inline Guid_t  get_m_Guid_12() const { return ___m_Guid_12; }
	inline Guid_t * get_address_of_m_Guid_12() { return &___m_Guid_12; }
	inline void set_m_Guid_12(Guid_t  value)
	{
		___m_Guid_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndex_13() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_ActionIndex_13)); }
	inline int32_t get_m_ActionIndex_13() const { return ___m_ActionIndex_13; }
	inline int32_t* get_address_of_m_ActionIndex_13() { return &___m_ActionIndex_13; }
	inline void set_m_ActionIndex_13(int32_t value)
	{
		___m_ActionIndex_13 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_14() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_ActionMap_14)); }
	inline InputActionMap_t12E0A74F13DAEBDBE20D07D97A7D67628CB6E151 * get_m_ActionMap_14() const { return ___m_ActionMap_14; }
	inline InputActionMap_t12E0A74F13DAEBDBE20D07D97A7D67628CB6E151 ** get_address_of_m_ActionMap_14() { return &___m_ActionMap_14; }
	inline void set_m_ActionMap_14(InputActionMap_t12E0A74F13DAEBDBE20D07D97A7D67628CB6E151 * value)
	{
		___m_ActionMap_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionMap_14), value);
	}

	inline static int32_t get_offset_of_m_OnStarted_15() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_OnStarted_15)); }
	inline InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A  get_m_OnStarted_15() const { return ___m_OnStarted_15; }
	inline InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A * get_address_of_m_OnStarted_15() { return &___m_OnStarted_15; }
	inline void set_m_OnStarted_15(InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A  value)
	{
		___m_OnStarted_15 = value;
	}

	inline static int32_t get_offset_of_m_OnCancelled_16() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_OnCancelled_16)); }
	inline InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A  get_m_OnCancelled_16() const { return ___m_OnCancelled_16; }
	inline InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A * get_address_of_m_OnCancelled_16() { return &___m_OnCancelled_16; }
	inline void set_m_OnCancelled_16(InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A  value)
	{
		___m_OnCancelled_16 = value;
	}

	inline static int32_t get_offset_of_m_OnPerformed_17() { return static_cast<int32_t>(offsetof(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550, ___m_OnPerformed_17)); }
	inline InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A  get_m_OnPerformed_17() const { return ___m_OnPerformed_17; }
	inline InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A * get_address_of_m_OnPerformed_17() { return &___m_OnPerformed_17; }
	inline void set_m_OnPerformed_17(InlinedArray_1_tBC0ED76F87136F89F0CBD07F817940D51F3F7D6A  value)
	{
		___m_OnPerformed_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTACTION_T7BA9F6C6A529842D0C9298B88E370F682FAC7550_H
#ifndef REBINDINGOPERATION_T45234317F43061C73263B22FEF2B873523F25117_H
#define REBINDINGOPERATION_T45234317F43061C73263B22FEF2B873523F25117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation
struct  RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Input.InputAction UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_ActionToRebind
	InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * ___m_ActionToRebind_1;
	// UnityEngine.Experimental.Input.InputAction UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_CancelAction
	InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * ___m_CancelAction_2;
	// System.Nullable`1<UnityEngine.Experimental.Input.InputBinding> UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_BindingMask
	Nullable_1_t167F529785042EBDA4904D82CE25F5D72535ED8E  ___m_BindingMask_3;
	// System.Type UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_ControlType
	Type_t * ___m_ControlType_4;
	// UnityEngine.Experimental.Input.Utilities.InternedString UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_ExpectedLayout
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___m_ExpectedLayout_5;
	// System.Int32 UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_IncludePathCount
	int32_t ___m_IncludePathCount_6;
	// System.String[] UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_IncludePaths
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_IncludePaths_7;
	// System.Int32 UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_ExcludePathCount
	int32_t ___m_ExcludePathCount_8;
	// System.String[] UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_ExcludePaths
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_ExcludePaths_9;
	// System.Int32 UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_TargetBindingIndex
	int32_t ___m_TargetBindingIndex_10;
	// System.String UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_BindingGroupForNewBinding
	String_t* ___m_BindingGroupForNewBinding_11;
	// System.String UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_CancelBinding
	String_t* ___m_CancelBinding_12;
	// System.Single UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_13;
	// System.Single[] UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_Scores
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_Scores_14;
	// System.Double UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_LastMatchTime
	double ___m_LastMatchTime_15;
	// System.Single UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_WaitSecondsAfterMatch
	float ___m_WaitSecondsAfterMatch_16;
	// UnityEngine.Experimental.Input.InputControlList`1<UnityEngine.Experimental.Input.InputControl> UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_Candidates
	InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885  ___m_Candidates_17;
	// System.Action`1<UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation> UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_OnComplete
	Action_1_t28B7D26FFB0BA741BD353A09E30DDE21AED38A90 * ___m_OnComplete_18;
	// System.Action`1<UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation> UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_OnCancel
	Action_1_t28B7D26FFB0BA741BD353A09E30DDE21AED38A90 * ___m_OnCancel_19;
	// System.Action`1<UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation> UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_OnPotentialMatch
	Action_1_t28B7D26FFB0BA741BD353A09E30DDE21AED38A90 * ___m_OnPotentialMatch_20;
	// System.Func`2<UnityEngine.Experimental.Input.InputControl,System.String> UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_OnGeneratePath
	Func_2_tC523240A804D0111705B2A9FD10D43CE9AFEFB81 * ___m_OnGeneratePath_21;
	// System.Func`3<UnityEngine.Experimental.Input.InputControl,UnityEngine.Experimental.Input.LowLevel.InputEventPtr,System.Single> UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_OnComputeScore
	Func_3_tA49B99D7DAF4AE7806F63ADC90535BE47CDA50B5 * ___m_OnComputeScore_22;
	// System.Action`2<UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation,System.String> UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_OnApplyBinding
	Action_2_tE747A1B601F87BC1C731691C8828D29DC07A321B * ___m_OnApplyBinding_23;
	// System.Action`1<UnityEngine.Experimental.Input.LowLevel.InputEventPtr> UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_OnEventDelegate
	Action_1_t014CAD603D2936A5A39ABFC7B751B47D97A670C0 * ___m_OnEventDelegate_24;
	// System.Action`1<UnityEngine.Experimental.Input.InputUpdateType> UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_OnAfterUpdateDelegate
	Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 * ___m_OnAfterUpdateDelegate_25;
	// UnityEngine.Experimental.Input.Layouts.InputControlLayout_Cache UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_LayoutCache
	Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE  ___m_LayoutCache_26;
	// System.Text.StringBuilder UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_PathBuilder
	StringBuilder_t * ___m_PathBuilder_27;
	// UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation_Flags UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::m_Flags
	int32_t ___m_Flags_28;

public:
	inline static int32_t get_offset_of_m_ActionToRebind_1() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_ActionToRebind_1)); }
	inline InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * get_m_ActionToRebind_1() const { return ___m_ActionToRebind_1; }
	inline InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 ** get_address_of_m_ActionToRebind_1() { return &___m_ActionToRebind_1; }
	inline void set_m_ActionToRebind_1(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * value)
	{
		___m_ActionToRebind_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionToRebind_1), value);
	}

	inline static int32_t get_offset_of_m_CancelAction_2() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_CancelAction_2)); }
	inline InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * get_m_CancelAction_2() const { return ___m_CancelAction_2; }
	inline InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 ** get_address_of_m_CancelAction_2() { return &___m_CancelAction_2; }
	inline void set_m_CancelAction_2(InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * value)
	{
		___m_CancelAction_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CancelAction_2), value);
	}

	inline static int32_t get_offset_of_m_BindingMask_3() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_BindingMask_3)); }
	inline Nullable_1_t167F529785042EBDA4904D82CE25F5D72535ED8E  get_m_BindingMask_3() const { return ___m_BindingMask_3; }
	inline Nullable_1_t167F529785042EBDA4904D82CE25F5D72535ED8E * get_address_of_m_BindingMask_3() { return &___m_BindingMask_3; }
	inline void set_m_BindingMask_3(Nullable_1_t167F529785042EBDA4904D82CE25F5D72535ED8E  value)
	{
		___m_BindingMask_3 = value;
	}

	inline static int32_t get_offset_of_m_ControlType_4() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_ControlType_4)); }
	inline Type_t * get_m_ControlType_4() const { return ___m_ControlType_4; }
	inline Type_t ** get_address_of_m_ControlType_4() { return &___m_ControlType_4; }
	inline void set_m_ControlType_4(Type_t * value)
	{
		___m_ControlType_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_ControlType_4), value);
	}

	inline static int32_t get_offset_of_m_ExpectedLayout_5() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_ExpectedLayout_5)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_m_ExpectedLayout_5() const { return ___m_ExpectedLayout_5; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_m_ExpectedLayout_5() { return &___m_ExpectedLayout_5; }
	inline void set_m_ExpectedLayout_5(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___m_ExpectedLayout_5 = value;
	}

	inline static int32_t get_offset_of_m_IncludePathCount_6() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_IncludePathCount_6)); }
	inline int32_t get_m_IncludePathCount_6() const { return ___m_IncludePathCount_6; }
	inline int32_t* get_address_of_m_IncludePathCount_6() { return &___m_IncludePathCount_6; }
	inline void set_m_IncludePathCount_6(int32_t value)
	{
		___m_IncludePathCount_6 = value;
	}

	inline static int32_t get_offset_of_m_IncludePaths_7() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_IncludePaths_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_IncludePaths_7() const { return ___m_IncludePaths_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_IncludePaths_7() { return &___m_IncludePaths_7; }
	inline void set_m_IncludePaths_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_IncludePaths_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_IncludePaths_7), value);
	}

	inline static int32_t get_offset_of_m_ExcludePathCount_8() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_ExcludePathCount_8)); }
	inline int32_t get_m_ExcludePathCount_8() const { return ___m_ExcludePathCount_8; }
	inline int32_t* get_address_of_m_ExcludePathCount_8() { return &___m_ExcludePathCount_8; }
	inline void set_m_ExcludePathCount_8(int32_t value)
	{
		___m_ExcludePathCount_8 = value;
	}

	inline static int32_t get_offset_of_m_ExcludePaths_9() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_ExcludePaths_9)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_ExcludePaths_9() const { return ___m_ExcludePaths_9; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_ExcludePaths_9() { return &___m_ExcludePaths_9; }
	inline void set_m_ExcludePaths_9(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_ExcludePaths_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExcludePaths_9), value);
	}

	inline static int32_t get_offset_of_m_TargetBindingIndex_10() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_TargetBindingIndex_10)); }
	inline int32_t get_m_TargetBindingIndex_10() const { return ___m_TargetBindingIndex_10; }
	inline int32_t* get_address_of_m_TargetBindingIndex_10() { return &___m_TargetBindingIndex_10; }
	inline void set_m_TargetBindingIndex_10(int32_t value)
	{
		___m_TargetBindingIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_BindingGroupForNewBinding_11() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_BindingGroupForNewBinding_11)); }
	inline String_t* get_m_BindingGroupForNewBinding_11() const { return ___m_BindingGroupForNewBinding_11; }
	inline String_t** get_address_of_m_BindingGroupForNewBinding_11() { return &___m_BindingGroupForNewBinding_11; }
	inline void set_m_BindingGroupForNewBinding_11(String_t* value)
	{
		___m_BindingGroupForNewBinding_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_BindingGroupForNewBinding_11), value);
	}

	inline static int32_t get_offset_of_m_CancelBinding_12() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_CancelBinding_12)); }
	inline String_t* get_m_CancelBinding_12() const { return ___m_CancelBinding_12; }
	inline String_t** get_address_of_m_CancelBinding_12() { return &___m_CancelBinding_12; }
	inline void set_m_CancelBinding_12(String_t* value)
	{
		___m_CancelBinding_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_CancelBinding_12), value);
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_13() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_MagnitudeThreshold_13)); }
	inline float get_m_MagnitudeThreshold_13() const { return ___m_MagnitudeThreshold_13; }
	inline float* get_address_of_m_MagnitudeThreshold_13() { return &___m_MagnitudeThreshold_13; }
	inline void set_m_MagnitudeThreshold_13(float value)
	{
		___m_MagnitudeThreshold_13 = value;
	}

	inline static int32_t get_offset_of_m_Scores_14() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_Scores_14)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_Scores_14() const { return ___m_Scores_14; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_Scores_14() { return &___m_Scores_14; }
	inline void set_m_Scores_14(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_Scores_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_Scores_14), value);
	}

	inline static int32_t get_offset_of_m_LastMatchTime_15() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_LastMatchTime_15)); }
	inline double get_m_LastMatchTime_15() const { return ___m_LastMatchTime_15; }
	inline double* get_address_of_m_LastMatchTime_15() { return &___m_LastMatchTime_15; }
	inline void set_m_LastMatchTime_15(double value)
	{
		___m_LastMatchTime_15 = value;
	}

	inline static int32_t get_offset_of_m_WaitSecondsAfterMatch_16() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_WaitSecondsAfterMatch_16)); }
	inline float get_m_WaitSecondsAfterMatch_16() const { return ___m_WaitSecondsAfterMatch_16; }
	inline float* get_address_of_m_WaitSecondsAfterMatch_16() { return &___m_WaitSecondsAfterMatch_16; }
	inline void set_m_WaitSecondsAfterMatch_16(float value)
	{
		___m_WaitSecondsAfterMatch_16 = value;
	}

	inline static int32_t get_offset_of_m_Candidates_17() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_Candidates_17)); }
	inline InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885  get_m_Candidates_17() const { return ___m_Candidates_17; }
	inline InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 * get_address_of_m_Candidates_17() { return &___m_Candidates_17; }
	inline void set_m_Candidates_17(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885  value)
	{
		___m_Candidates_17 = value;
	}

	inline static int32_t get_offset_of_m_OnComplete_18() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_OnComplete_18)); }
	inline Action_1_t28B7D26FFB0BA741BD353A09E30DDE21AED38A90 * get_m_OnComplete_18() const { return ___m_OnComplete_18; }
	inline Action_1_t28B7D26FFB0BA741BD353A09E30DDE21AED38A90 ** get_address_of_m_OnComplete_18() { return &___m_OnComplete_18; }
	inline void set_m_OnComplete_18(Action_1_t28B7D26FFB0BA741BD353A09E30DDE21AED38A90 * value)
	{
		___m_OnComplete_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnComplete_18), value);
	}

	inline static int32_t get_offset_of_m_OnCancel_19() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_OnCancel_19)); }
	inline Action_1_t28B7D26FFB0BA741BD353A09E30DDE21AED38A90 * get_m_OnCancel_19() const { return ___m_OnCancel_19; }
	inline Action_1_t28B7D26FFB0BA741BD353A09E30DDE21AED38A90 ** get_address_of_m_OnCancel_19() { return &___m_OnCancel_19; }
	inline void set_m_OnCancel_19(Action_1_t28B7D26FFB0BA741BD353A09E30DDE21AED38A90 * value)
	{
		___m_OnCancel_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCancel_19), value);
	}

	inline static int32_t get_offset_of_m_OnPotentialMatch_20() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_OnPotentialMatch_20)); }
	inline Action_1_t28B7D26FFB0BA741BD353A09E30DDE21AED38A90 * get_m_OnPotentialMatch_20() const { return ___m_OnPotentialMatch_20; }
	inline Action_1_t28B7D26FFB0BA741BD353A09E30DDE21AED38A90 ** get_address_of_m_OnPotentialMatch_20() { return &___m_OnPotentialMatch_20; }
	inline void set_m_OnPotentialMatch_20(Action_1_t28B7D26FFB0BA741BD353A09E30DDE21AED38A90 * value)
	{
		___m_OnPotentialMatch_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnPotentialMatch_20), value);
	}

	inline static int32_t get_offset_of_m_OnGeneratePath_21() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_OnGeneratePath_21)); }
	inline Func_2_tC523240A804D0111705B2A9FD10D43CE9AFEFB81 * get_m_OnGeneratePath_21() const { return ___m_OnGeneratePath_21; }
	inline Func_2_tC523240A804D0111705B2A9FD10D43CE9AFEFB81 ** get_address_of_m_OnGeneratePath_21() { return &___m_OnGeneratePath_21; }
	inline void set_m_OnGeneratePath_21(Func_2_tC523240A804D0111705B2A9FD10D43CE9AFEFB81 * value)
	{
		___m_OnGeneratePath_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnGeneratePath_21), value);
	}

	inline static int32_t get_offset_of_m_OnComputeScore_22() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_OnComputeScore_22)); }
	inline Func_3_tA49B99D7DAF4AE7806F63ADC90535BE47CDA50B5 * get_m_OnComputeScore_22() const { return ___m_OnComputeScore_22; }
	inline Func_3_tA49B99D7DAF4AE7806F63ADC90535BE47CDA50B5 ** get_address_of_m_OnComputeScore_22() { return &___m_OnComputeScore_22; }
	inline void set_m_OnComputeScore_22(Func_3_tA49B99D7DAF4AE7806F63ADC90535BE47CDA50B5 * value)
	{
		___m_OnComputeScore_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnComputeScore_22), value);
	}

	inline static int32_t get_offset_of_m_OnApplyBinding_23() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_OnApplyBinding_23)); }
	inline Action_2_tE747A1B601F87BC1C731691C8828D29DC07A321B * get_m_OnApplyBinding_23() const { return ___m_OnApplyBinding_23; }
	inline Action_2_tE747A1B601F87BC1C731691C8828D29DC07A321B ** get_address_of_m_OnApplyBinding_23() { return &___m_OnApplyBinding_23; }
	inline void set_m_OnApplyBinding_23(Action_2_tE747A1B601F87BC1C731691C8828D29DC07A321B * value)
	{
		___m_OnApplyBinding_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnApplyBinding_23), value);
	}

	inline static int32_t get_offset_of_m_OnEventDelegate_24() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_OnEventDelegate_24)); }
	inline Action_1_t014CAD603D2936A5A39ABFC7B751B47D97A670C0 * get_m_OnEventDelegate_24() const { return ___m_OnEventDelegate_24; }
	inline Action_1_t014CAD603D2936A5A39ABFC7B751B47D97A670C0 ** get_address_of_m_OnEventDelegate_24() { return &___m_OnEventDelegate_24; }
	inline void set_m_OnEventDelegate_24(Action_1_t014CAD603D2936A5A39ABFC7B751B47D97A670C0 * value)
	{
		___m_OnEventDelegate_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnEventDelegate_24), value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_25() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_OnAfterUpdateDelegate_25)); }
	inline Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 * get_m_OnAfterUpdateDelegate_25() const { return ___m_OnAfterUpdateDelegate_25; }
	inline Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 ** get_address_of_m_OnAfterUpdateDelegate_25() { return &___m_OnAfterUpdateDelegate_25; }
	inline void set_m_OnAfterUpdateDelegate_25(Action_1_tAAAE64C73037B50982E38A4DDA6D1CA31E93F493 * value)
	{
		___m_OnAfterUpdateDelegate_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnAfterUpdateDelegate_25), value);
	}

	inline static int32_t get_offset_of_m_LayoutCache_26() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_LayoutCache_26)); }
	inline Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE  get_m_LayoutCache_26() const { return ___m_LayoutCache_26; }
	inline Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE * get_address_of_m_LayoutCache_26() { return &___m_LayoutCache_26; }
	inline void set_m_LayoutCache_26(Cache_t8FAB5C1298EF86CF8EFA41A62A91FF4D53E039BE  value)
	{
		___m_LayoutCache_26 = value;
	}

	inline static int32_t get_offset_of_m_PathBuilder_27() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_PathBuilder_27)); }
	inline StringBuilder_t * get_m_PathBuilder_27() const { return ___m_PathBuilder_27; }
	inline StringBuilder_t ** get_address_of_m_PathBuilder_27() { return &___m_PathBuilder_27; }
	inline void set_m_PathBuilder_27(StringBuilder_t * value)
	{
		___m_PathBuilder_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_PathBuilder_27), value);
	}

	inline static int32_t get_offset_of_m_Flags_28() { return static_cast<int32_t>(offsetof(RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117, ___m_Flags_28)); }
	inline int32_t get_m_Flags_28() const { return ___m_Flags_28; }
	inline int32_t* get_address_of_m_Flags_28() { return &___m_Flags_28; }
	inline void set_m_Flags_28(int32_t value)
	{
		___m_Flags_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REBINDINGOPERATION_T45234317F43061C73263B22FEF2B873523F25117_H
#ifndef INPUTCONTROL_TBAFD00FD8B5BB87B862081EDE34A10490BB4D780_H
#define INPUTCONTROL_TBAFD00FD8B5BB87B862081EDE34A10490BB4D780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputControl
struct  InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Input.LowLevel.InputStateBlock UnityEngine.Experimental.Input.InputControl::m_StateBlock
	InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186  ___m_StateBlock_1;
	// UnityEngine.Experimental.Input.Utilities.InternedString UnityEngine.Experimental.Input.InputControl::m_Name
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___m_Name_2;
	// System.String UnityEngine.Experimental.Input.InputControl::m_Path
	String_t* ___m_Path_3;
	// System.String UnityEngine.Experimental.Input.InputControl::m_DisplayName
	String_t* ___m_DisplayName_4;
	// System.String UnityEngine.Experimental.Input.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_5;
	// System.String UnityEngine.Experimental.Input.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_6;
	// System.String UnityEngine.Experimental.Input.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_7;
	// UnityEngine.Experimental.Input.Utilities.InternedString UnityEngine.Experimental.Input.InputControl::m_Layout
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___m_Layout_8;
	// UnityEngine.Experimental.Input.Utilities.InternedString UnityEngine.Experimental.Input.InputControl::m_Variants
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___m_Variants_9;
	// UnityEngine.Experimental.Input.InputDevice UnityEngine.Experimental.Input.InputControl::m_Device
	InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * ___m_Device_10;
	// UnityEngine.Experimental.Input.InputControl UnityEngine.Experimental.Input.InputControl::m_Parent
	InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * ___m_Parent_11;
	// UnityEngine.Experimental.Input.Utilities.ReadOnlyArray`1<UnityEngine.Experimental.Input.Utilities.InternedString> UnityEngine.Experimental.Input.InputControl::m_UsagesReadOnly
	ReadOnlyArray_1_t0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671  ___m_UsagesReadOnly_12;
	// UnityEngine.Experimental.Input.Utilities.ReadOnlyArray`1<UnityEngine.Experimental.Input.Utilities.InternedString> UnityEngine.Experimental.Input.InputControl::m_AliasesReadOnly
	ReadOnlyArray_1_t0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671  ___m_AliasesReadOnly_13;
	// UnityEngine.Experimental.Input.Utilities.ReadOnlyArray`1<UnityEngine.Experimental.Input.InputControl> UnityEngine.Experimental.Input.InputControl::m_ChildrenReadOnly
	ReadOnlyArray_1_t8AF991F13C72FB52FE5D7F981B80045A9F1EA2B8  ___m_ChildrenReadOnly_14;
	// UnityEngine.Experimental.Input.InputControl_ControlFlags UnityEngine.Experimental.Input.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_15;
	// UnityEngine.Experimental.Input.Utilities.PrimitiveValueOrArray UnityEngine.Experimental.Input.InputControl::m_DefaultValue
	PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4  ___m_DefaultValue_16;
	// UnityEngine.Experimental.Input.Utilities.PrimitiveValue UnityEngine.Experimental.Input.InputControl::m_MinValue
	PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9  ___m_MinValue_17;
	// UnityEngine.Experimental.Input.Utilities.PrimitiveValue UnityEngine.Experimental.Input.InputControl::m_MaxValue
	PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9  ___m_MaxValue_18;

public:
	inline static int32_t get_offset_of_m_StateBlock_1() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_StateBlock_1)); }
	inline InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186  get_m_StateBlock_1() const { return ___m_StateBlock_1; }
	inline InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186 * get_address_of_m_StateBlock_1() { return &___m_StateBlock_1; }
	inline void set_m_StateBlock_1(InputStateBlock_tD5C726451DE25905C4E2274FD6871D02F73D2186  value)
	{
		___m_StateBlock_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_Name_2)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_m_Name_2() const { return ___m_Name_2; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_Path_3() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_Path_3)); }
	inline String_t* get_m_Path_3() const { return ___m_Path_3; }
	inline String_t** get_address_of_m_Path_3() { return &___m_Path_3; }
	inline void set_m_Path_3(String_t* value)
	{
		___m_Path_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_3), value);
	}

	inline static int32_t get_offset_of_m_DisplayName_4() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_DisplayName_4)); }
	inline String_t* get_m_DisplayName_4() const { return ___m_DisplayName_4; }
	inline String_t** get_address_of_m_DisplayName_4() { return &___m_DisplayName_4; }
	inline void set_m_DisplayName_4(String_t* value)
	{
		___m_DisplayName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisplayName_4), value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_5() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_DisplayNameFromLayout_5)); }
	inline String_t* get_m_DisplayNameFromLayout_5() const { return ___m_DisplayNameFromLayout_5; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_5() { return &___m_DisplayNameFromLayout_5; }
	inline void set_m_DisplayNameFromLayout_5(String_t* value)
	{
		___m_DisplayNameFromLayout_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisplayNameFromLayout_5), value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_6() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_ShortDisplayName_6)); }
	inline String_t* get_m_ShortDisplayName_6() const { return ___m_ShortDisplayName_6; }
	inline String_t** get_address_of_m_ShortDisplayName_6() { return &___m_ShortDisplayName_6; }
	inline void set_m_ShortDisplayName_6(String_t* value)
	{
		___m_ShortDisplayName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_ShortDisplayName_6), value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_7() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_ShortDisplayNameFromLayout_7)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_7() const { return ___m_ShortDisplayNameFromLayout_7; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_7() { return &___m_ShortDisplayNameFromLayout_7; }
	inline void set_m_ShortDisplayNameFromLayout_7(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_ShortDisplayNameFromLayout_7), value);
	}

	inline static int32_t get_offset_of_m_Layout_8() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_Layout_8)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_m_Layout_8() const { return ___m_Layout_8; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_m_Layout_8() { return &___m_Layout_8; }
	inline void set_m_Layout_8(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___m_Layout_8 = value;
	}

	inline static int32_t get_offset_of_m_Variants_9() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_Variants_9)); }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  get_m_Variants_9() const { return ___m_Variants_9; }
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * get_address_of_m_Variants_9() { return &___m_Variants_9; }
	inline void set_m_Variants_9(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		___m_Variants_9 = value;
	}

	inline static int32_t get_offset_of_m_Device_10() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_Device_10)); }
	inline InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * get_m_Device_10() const { return ___m_Device_10; }
	inline InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 ** get_address_of_m_Device_10() { return &___m_Device_10; }
	inline void set_m_Device_10(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * value)
	{
		___m_Device_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Device_10), value);
	}

	inline static int32_t get_offset_of_m_Parent_11() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_Parent_11)); }
	inline InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * get_m_Parent_11() const { return ___m_Parent_11; }
	inline InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 ** get_address_of_m_Parent_11() { return &___m_Parent_11; }
	inline void set_m_Parent_11(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * value)
	{
		___m_Parent_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parent_11), value);
	}

	inline static int32_t get_offset_of_m_UsagesReadOnly_12() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_UsagesReadOnly_12)); }
	inline ReadOnlyArray_1_t0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671  get_m_UsagesReadOnly_12() const { return ___m_UsagesReadOnly_12; }
	inline ReadOnlyArray_1_t0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671 * get_address_of_m_UsagesReadOnly_12() { return &___m_UsagesReadOnly_12; }
	inline void set_m_UsagesReadOnly_12(ReadOnlyArray_1_t0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671  value)
	{
		___m_UsagesReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasesReadOnly_13() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_AliasesReadOnly_13)); }
	inline ReadOnlyArray_1_t0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671  get_m_AliasesReadOnly_13() const { return ___m_AliasesReadOnly_13; }
	inline ReadOnlyArray_1_t0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671 * get_address_of_m_AliasesReadOnly_13() { return &___m_AliasesReadOnly_13; }
	inline void set_m_AliasesReadOnly_13(ReadOnlyArray_1_t0DB1764C14DB351A91D9CED6EE0A40A1A2CA8671  value)
	{
		___m_AliasesReadOnly_13 = value;
	}

	inline static int32_t get_offset_of_m_ChildrenReadOnly_14() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_ChildrenReadOnly_14)); }
	inline ReadOnlyArray_1_t8AF991F13C72FB52FE5D7F981B80045A9F1EA2B8  get_m_ChildrenReadOnly_14() const { return ___m_ChildrenReadOnly_14; }
	inline ReadOnlyArray_1_t8AF991F13C72FB52FE5D7F981B80045A9F1EA2B8 * get_address_of_m_ChildrenReadOnly_14() { return &___m_ChildrenReadOnly_14; }
	inline void set_m_ChildrenReadOnly_14(ReadOnlyArray_1_t8AF991F13C72FB52FE5D7F981B80045A9F1EA2B8  value)
	{
		___m_ChildrenReadOnly_14 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_15() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_ControlFlags_15)); }
	inline int32_t get_m_ControlFlags_15() const { return ___m_ControlFlags_15; }
	inline int32_t* get_address_of_m_ControlFlags_15() { return &___m_ControlFlags_15; }
	inline void set_m_ControlFlags_15(int32_t value)
	{
		___m_ControlFlags_15 = value;
	}

	inline static int32_t get_offset_of_m_DefaultValue_16() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_DefaultValue_16)); }
	inline PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4  get_m_DefaultValue_16() const { return ___m_DefaultValue_16; }
	inline PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4 * get_address_of_m_DefaultValue_16() { return &___m_DefaultValue_16; }
	inline void set_m_DefaultValue_16(PrimitiveValueOrArray_tB184E26170C9F45525FE5E368AF954D70E8984F4  value)
	{
		___m_DefaultValue_16 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_17() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_MinValue_17)); }
	inline PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9  get_m_MinValue_17() const { return ___m_MinValue_17; }
	inline PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9 * get_address_of_m_MinValue_17() { return &___m_MinValue_17; }
	inline void set_m_MinValue_17(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9  value)
	{
		___m_MinValue_17 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_18() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780, ___m_MaxValue_18)); }
	inline PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9  get_m_MaxValue_18() const { return ___m_MaxValue_18; }
	inline PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9 * get_address_of_m_MaxValue_18() { return &___m_MaxValue_18; }
	inline void set_m_MaxValue_18(PrimitiveValue_t629BE4BAE3DB5BB7A69A74CEF01CE69995BDCDC9  value)
	{
		___m_MaxValue_18 = value;
	}
};

struct InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780_StaticFields
{
public:
	// System.String UnityEngine.Experimental.Input.InputControl::ReservedCharacters
	String_t* ___ReservedCharacters_0;

public:
	inline static int32_t get_offset_of_ReservedCharacters_0() { return static_cast<int32_t>(offsetof(InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780_StaticFields, ___ReservedCharacters_0)); }
	inline String_t* get_ReservedCharacters_0() const { return ___ReservedCharacters_0; }
	inline String_t** get_address_of_ReservedCharacters_0() { return &___ReservedCharacters_0; }
	inline void set_ReservedCharacters_0(String_t* value)
	{
		___ReservedCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((&___ReservedCharacters_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTCONTROL_TBAFD00FD8B5BB87B862081EDE34A10490BB4D780_H
#ifndef MATCHRESULT_T5B150B30E132F642B05DC89FECAF3B1E451A9F2C_H
#define MATCHRESULT_T5B150B30E132F642B05DC89FECAF3B1E451A9F2C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputControlScheme_MatchResult
struct  MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C 
{
public:
	// UnityEngine.Experimental.Input.InputControlScheme_MatchResult_Result UnityEngine.Experimental.Input.InputControlScheme_MatchResult::m_Result
	int32_t ___m_Result_0;
	// UnityEngine.Experimental.Input.InputControlList`1<UnityEngine.Experimental.Input.InputDevice> UnityEngine.Experimental.Input.InputControlScheme_MatchResult::m_Devices
	InputControlList_1_t8E3A87E611494F610209FE4996C4E19EA74E50CC  ___m_Devices_1;
	// UnityEngine.Experimental.Input.InputControlList`1<UnityEngine.Experimental.Input.InputControl> UnityEngine.Experimental.Input.InputControlScheme_MatchResult::m_Controls
	InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885  ___m_Controls_2;
	// UnityEngine.Experimental.Input.InputControlScheme_DeviceRequirement[] UnityEngine.Experimental.Input.InputControlScheme_MatchResult::m_Requirements
	DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* ___m_Requirements_3;

public:
	inline static int32_t get_offset_of_m_Result_0() { return static_cast<int32_t>(offsetof(MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C, ___m_Result_0)); }
	inline int32_t get_m_Result_0() const { return ___m_Result_0; }
	inline int32_t* get_address_of_m_Result_0() { return &___m_Result_0; }
	inline void set_m_Result_0(int32_t value)
	{
		___m_Result_0 = value;
	}

	inline static int32_t get_offset_of_m_Devices_1() { return static_cast<int32_t>(offsetof(MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C, ___m_Devices_1)); }
	inline InputControlList_1_t8E3A87E611494F610209FE4996C4E19EA74E50CC  get_m_Devices_1() const { return ___m_Devices_1; }
	inline InputControlList_1_t8E3A87E611494F610209FE4996C4E19EA74E50CC * get_address_of_m_Devices_1() { return &___m_Devices_1; }
	inline void set_m_Devices_1(InputControlList_1_t8E3A87E611494F610209FE4996C4E19EA74E50CC  value)
	{
		___m_Devices_1 = value;
	}

	inline static int32_t get_offset_of_m_Controls_2() { return static_cast<int32_t>(offsetof(MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C, ___m_Controls_2)); }
	inline InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885  get_m_Controls_2() const { return ___m_Controls_2; }
	inline InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 * get_address_of_m_Controls_2() { return &___m_Controls_2; }
	inline void set_m_Controls_2(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885  value)
	{
		___m_Controls_2 = value;
	}

	inline static int32_t get_offset_of_m_Requirements_3() { return static_cast<int32_t>(offsetof(MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C, ___m_Requirements_3)); }
	inline DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* get_m_Requirements_3() const { return ___m_Requirements_3; }
	inline DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066** get_address_of_m_Requirements_3() { return &___m_Requirements_3; }
	inline void set_m_Requirements_3(DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* value)
	{
		___m_Requirements_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Requirements_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Input.InputControlScheme/MatchResult
struct MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C_marshaled_pinvoke
{
	int32_t ___m_Result_0;
	InputControlList_1_t8E3A87E611494F610209FE4996C4E19EA74E50CC  ___m_Devices_1;
	InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885  ___m_Controls_2;
	DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshaled_pinvoke* ___m_Requirements_3;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Input.InputControlScheme/MatchResult
struct MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C_marshaled_com
{
	int32_t ___m_Result_0;
	InputControlList_1_t8E3A87E611494F610209FE4996C4E19EA74E50CC  ___m_Devices_1;
	InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885  ___m_Controls_2;
	DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E_marshaled_com* ___m_Requirements_3;
};
#endif // MATCHRESULT_T5B150B30E132F642B05DC89FECAF3B1E451A9F2C_H
#ifndef TRACKASSET_T6007D636CC5AC4D63FC2CE91D66F1478C23E32EC_H
#define TRACKASSET_T6007D636CC5AC4D63FC2CE91D66F1478C23E32EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Timeline.TrackAsset
struct  TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC  : public PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD
{
public:
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Locked
	bool ___m_Locked_4;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Muted
	bool ___m_Muted_5;
	// System.String UnityEngine.Timeline.TrackAsset::m_CustomPlayableFullTypename
	String_t* ___m_CustomPlayableFullTypename_6;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_AnimClip
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_AnimClip_7;
	// UnityEngine.Playables.PlayableAsset UnityEngine.Timeline.TrackAsset::m_Parent
	PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * ___m_Parent_8;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TrackAsset::m_Children
	List_1_t803BD2FB729584A0A796EBF33774257912427B4E * ___m_Children_9;
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_ItemsHash
	int32_t ___m_ItemsHash_10;
	// UnityEngine.Timeline.TimelineClip[] UnityEngine.Timeline.TrackAsset::m_ClipsCache
	TimelineClipU5BU5D_t54DF64E1454792297ECC9A75D1E33DB9293334A3* ___m_ClipsCache_11;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_Start
	DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC  ___m_Start_12;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_End
	DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC  ___m_End_13;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_CacheSorted
	bool ___m_CacheSorted_14;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset::m_ChildTrackCache
	RuntimeObject* ___m_ChildTrackCache_16;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::m_Clips
	List_1_tBE0C2267D3E6C51CE882E2B6B95F8E67011B1376 * ___m_Clips_18;
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_Version
	int32_t ___m_Version_21;

public:
	inline static int32_t get_offset_of_m_Locked_4() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_Locked_4)); }
	inline bool get_m_Locked_4() const { return ___m_Locked_4; }
	inline bool* get_address_of_m_Locked_4() { return &___m_Locked_4; }
	inline void set_m_Locked_4(bool value)
	{
		___m_Locked_4 = value;
	}

	inline static int32_t get_offset_of_m_Muted_5() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_Muted_5)); }
	inline bool get_m_Muted_5() const { return ___m_Muted_5; }
	inline bool* get_address_of_m_Muted_5() { return &___m_Muted_5; }
	inline void set_m_Muted_5(bool value)
	{
		___m_Muted_5 = value;
	}

	inline static int32_t get_offset_of_m_CustomPlayableFullTypename_6() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_CustomPlayableFullTypename_6)); }
	inline String_t* get_m_CustomPlayableFullTypename_6() const { return ___m_CustomPlayableFullTypename_6; }
	inline String_t** get_address_of_m_CustomPlayableFullTypename_6() { return &___m_CustomPlayableFullTypename_6; }
	inline void set_m_CustomPlayableFullTypename_6(String_t* value)
	{
		___m_CustomPlayableFullTypename_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomPlayableFullTypename_6), value);
	}

	inline static int32_t get_offset_of_m_AnimClip_7() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_AnimClip_7)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_AnimClip_7() const { return ___m_AnimClip_7; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_AnimClip_7() { return &___m_AnimClip_7; }
	inline void set_m_AnimClip_7(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_AnimClip_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimClip_7), value);
	}

	inline static int32_t get_offset_of_m_Parent_8() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_Parent_8)); }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * get_m_Parent_8() const { return ___m_Parent_8; }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD ** get_address_of_m_Parent_8() { return &___m_Parent_8; }
	inline void set_m_Parent_8(PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * value)
	{
		___m_Parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parent_8), value);
	}

	inline static int32_t get_offset_of_m_Children_9() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_Children_9)); }
	inline List_1_t803BD2FB729584A0A796EBF33774257912427B4E * get_m_Children_9() const { return ___m_Children_9; }
	inline List_1_t803BD2FB729584A0A796EBF33774257912427B4E ** get_address_of_m_Children_9() { return &___m_Children_9; }
	inline void set_m_Children_9(List_1_t803BD2FB729584A0A796EBF33774257912427B4E * value)
	{
		___m_Children_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Children_9), value);
	}

	inline static int32_t get_offset_of_m_ItemsHash_10() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_ItemsHash_10)); }
	inline int32_t get_m_ItemsHash_10() const { return ___m_ItemsHash_10; }
	inline int32_t* get_address_of_m_ItemsHash_10() { return &___m_ItemsHash_10; }
	inline void set_m_ItemsHash_10(int32_t value)
	{
		___m_ItemsHash_10 = value;
	}

	inline static int32_t get_offset_of_m_ClipsCache_11() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_ClipsCache_11)); }
	inline TimelineClipU5BU5D_t54DF64E1454792297ECC9A75D1E33DB9293334A3* get_m_ClipsCache_11() const { return ___m_ClipsCache_11; }
	inline TimelineClipU5BU5D_t54DF64E1454792297ECC9A75D1E33DB9293334A3** get_address_of_m_ClipsCache_11() { return &___m_ClipsCache_11; }
	inline void set_m_ClipsCache_11(TimelineClipU5BU5D_t54DF64E1454792297ECC9A75D1E33DB9293334A3* value)
	{
		___m_ClipsCache_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClipsCache_11), value);
	}

	inline static int32_t get_offset_of_m_Start_12() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_Start_12)); }
	inline DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC  get_m_Start_12() const { return ___m_Start_12; }
	inline DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC * get_address_of_m_Start_12() { return &___m_Start_12; }
	inline void set_m_Start_12(DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC  value)
	{
		___m_Start_12 = value;
	}

	inline static int32_t get_offset_of_m_End_13() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_End_13)); }
	inline DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC  get_m_End_13() const { return ___m_End_13; }
	inline DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC * get_address_of_m_End_13() { return &___m_End_13; }
	inline void set_m_End_13(DiscreteTime_t046D6A2A06BCF3D3853E9CAFE33CB138C0E164FC  value)
	{
		___m_End_13 = value;
	}

	inline static int32_t get_offset_of_m_CacheSorted_14() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_CacheSorted_14)); }
	inline bool get_m_CacheSorted_14() const { return ___m_CacheSorted_14; }
	inline bool* get_address_of_m_CacheSorted_14() { return &___m_CacheSorted_14; }
	inline void set_m_CacheSorted_14(bool value)
	{
		___m_CacheSorted_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildTrackCache_16() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_ChildTrackCache_16)); }
	inline RuntimeObject* get_m_ChildTrackCache_16() const { return ___m_ChildTrackCache_16; }
	inline RuntimeObject** get_address_of_m_ChildTrackCache_16() { return &___m_ChildTrackCache_16; }
	inline void set_m_ChildTrackCache_16(RuntimeObject* value)
	{
		___m_ChildTrackCache_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChildTrackCache_16), value);
	}

	inline static int32_t get_offset_of_m_Clips_18() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_Clips_18)); }
	inline List_1_tBE0C2267D3E6C51CE882E2B6B95F8E67011B1376 * get_m_Clips_18() const { return ___m_Clips_18; }
	inline List_1_tBE0C2267D3E6C51CE882E2B6B95F8E67011B1376 ** get_address_of_m_Clips_18() { return &___m_Clips_18; }
	inline void set_m_Clips_18(List_1_tBE0C2267D3E6C51CE882E2B6B95F8E67011B1376 * value)
	{
		___m_Clips_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Clips_18), value);
	}

	inline static int32_t get_offset_of_m_Version_21() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC, ___m_Version_21)); }
	inline int32_t get_m_Version_21() const { return ___m_Version_21; }
	inline int32_t* get_address_of_m_Version_21() { return &___m_Version_21; }
	inline void set_m_Version_21(int32_t value)
	{
		___m_Version_21 = value;
	}
};

struct TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC_StaticFields
{
public:
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TrackAsset::s_EmptyCache
	TrackAssetU5BU5D_tC31A3552CA774F0CE3BE5E6678D1AAB7B3E2845E* ___s_EmptyCache_15;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> UnityEngine.Timeline.TrackAsset::s_TrackBindingTypeAttributeCache
	Dictionary_2_t58C9CA6651216CBA1E51B3DE5F86E81AB30077B1 * ___s_TrackBindingTypeAttributeCache_17;
	// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnPlayableCreate
	Action_3_t94294D297455C1B4C4B6ACA47BC2B4019ECE97CB * ___OnPlayableCreate_19;
	// System.Comparison`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::<>f__amU24cache0
	Comparison_1_t7614A1867A1D09C766E3C9AECCEC0C38CFDDCFB8 * ___U3CU3Ef__amU24cache0_22;

public:
	inline static int32_t get_offset_of_s_EmptyCache_15() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC_StaticFields, ___s_EmptyCache_15)); }
	inline TrackAssetU5BU5D_tC31A3552CA774F0CE3BE5E6678D1AAB7B3E2845E* get_s_EmptyCache_15() const { return ___s_EmptyCache_15; }
	inline TrackAssetU5BU5D_tC31A3552CA774F0CE3BE5E6678D1AAB7B3E2845E** get_address_of_s_EmptyCache_15() { return &___s_EmptyCache_15; }
	inline void set_s_EmptyCache_15(TrackAssetU5BU5D_tC31A3552CA774F0CE3BE5E6678D1AAB7B3E2845E* value)
	{
		___s_EmptyCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_EmptyCache_15), value);
	}

	inline static int32_t get_offset_of_s_TrackBindingTypeAttributeCache_17() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC_StaticFields, ___s_TrackBindingTypeAttributeCache_17)); }
	inline Dictionary_2_t58C9CA6651216CBA1E51B3DE5F86E81AB30077B1 * get_s_TrackBindingTypeAttributeCache_17() const { return ___s_TrackBindingTypeAttributeCache_17; }
	inline Dictionary_2_t58C9CA6651216CBA1E51B3DE5F86E81AB30077B1 ** get_address_of_s_TrackBindingTypeAttributeCache_17() { return &___s_TrackBindingTypeAttributeCache_17; }
	inline void set_s_TrackBindingTypeAttributeCache_17(Dictionary_2_t58C9CA6651216CBA1E51B3DE5F86E81AB30077B1 * value)
	{
		___s_TrackBindingTypeAttributeCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_TrackBindingTypeAttributeCache_17), value);
	}

	inline static int32_t get_offset_of_OnPlayableCreate_19() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC_StaticFields, ___OnPlayableCreate_19)); }
	inline Action_3_t94294D297455C1B4C4B6ACA47BC2B4019ECE97CB * get_OnPlayableCreate_19() const { return ___OnPlayableCreate_19; }
	inline Action_3_t94294D297455C1B4C4B6ACA47BC2B4019ECE97CB ** get_address_of_OnPlayableCreate_19() { return &___OnPlayableCreate_19; }
	inline void set_OnPlayableCreate_19(Action_3_t94294D297455C1B4C4B6ACA47BC2B4019ECE97CB * value)
	{
		___OnPlayableCreate_19 = value;
		Il2CppCodeGenWriteBarrier((&___OnPlayableCreate_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_22() { return static_cast<int32_t>(offsetof(TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC_StaticFields, ___U3CU3Ef__amU24cache0_22)); }
	inline Comparison_1_t7614A1867A1D09C766E3C9AECCEC0C38CFDDCFB8 * get_U3CU3Ef__amU24cache0_22() const { return ___U3CU3Ef__amU24cache0_22; }
	inline Comparison_1_t7614A1867A1D09C766E3C9AECCEC0C38CFDDCFB8 ** get_address_of_U3CU3Ef__amU24cache0_22() { return &___U3CU3Ef__amU24cache0_22; }
	inline void set_U3CU3Ef__amU24cache0_22(Comparison_1_t7614A1867A1D09C766E3C9AECCEC0C38CFDDCFB8 * value)
	{
		___U3CU3Ef__amU24cache0_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKASSET_T6007D636CC5AC4D63FC2CE91D66F1478C23E32EC_H
#ifndef INPUTCONTROL_1_TA7DBA078A60C9B0156A80CF8360E520078AC6DAE_H
#define INPUTCONTROL_1_TA7DBA078A60C9B0156A80CF8360E520078AC6DAE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputControl`1<UnityEngine.Vector2>
struct  InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE  : public InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780
{
public:
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<UnityEngine.Experimental.Input.InputProcessor`1<TValue>> UnityEngine.Experimental.Input.InputControl`1::m_ProcessorStack
	InlinedArray_1_t4A42D2682F6EF8C8E9557124D07F705781915466  ___m_ProcessorStack_19;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_19() { return static_cast<int32_t>(offsetof(InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE, ___m_ProcessorStack_19)); }
	inline InlinedArray_1_t4A42D2682F6EF8C8E9557124D07F705781915466  get_m_ProcessorStack_19() const { return ___m_ProcessorStack_19; }
	inline InlinedArray_1_t4A42D2682F6EF8C8E9557124D07F705781915466 * get_address_of_m_ProcessorStack_19() { return &___m_ProcessorStack_19; }
	inline void set_m_ProcessorStack_19(InlinedArray_1_t4A42D2682F6EF8C8E9557124D07F705781915466  value)
	{
		___m_ProcessorStack_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTCONTROL_1_TA7DBA078A60C9B0156A80CF8360E520078AC6DAE_H
#ifndef INPUTCONTROL_1_T954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B_H
#define INPUTCONTROL_1_T954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputControl`1<UnityEngine.Vector3>
struct  InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B  : public InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780
{
public:
	// UnityEngine.Experimental.Input.Utilities.InlinedArray`1<UnityEngine.Experimental.Input.InputProcessor`1<TValue>> UnityEngine.Experimental.Input.InputControl`1::m_ProcessorStack
	InlinedArray_1_t6979F0181F311AA1DB1D13C511A1DDA8CA4AE257  ___m_ProcessorStack_19;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_19() { return static_cast<int32_t>(offsetof(InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B, ___m_ProcessorStack_19)); }
	inline InlinedArray_1_t6979F0181F311AA1DB1D13C511A1DDA8CA4AE257  get_m_ProcessorStack_19() const { return ___m_ProcessorStack_19; }
	inline InlinedArray_1_t6979F0181F311AA1DB1D13C511A1DDA8CA4AE257 * get_address_of_m_ProcessorStack_19() { return &___m_ProcessorStack_19; }
	inline void set_m_ProcessorStack_19(InlinedArray_1_t6979F0181F311AA1DB1D13C511A1DDA8CA4AE257  value)
	{
		___m_ProcessorStack_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTCONTROL_1_T954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B_H
#ifndef INPUTDEVICE_TE6A326B08DD07AC90A469442000B302C27C83984_H
#define INPUTDEVICE_TE6A326B08DD07AC90A469442000B302C27C83984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Input.InputDevice
struct  InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984  : public InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780
{
public:
	// UnityEngine.Experimental.Input.InputDevice_DeviceFlags UnityEngine.Experimental.Input.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_21;
	// System.Int32 UnityEngine.Experimental.Input.InputDevice::m_Id
	int32_t ___m_Id_22;
	// System.Int32 UnityEngine.Experimental.Input.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_23;
	// UnityEngine.Experimental.Input.Layouts.InputDeviceDescription UnityEngine.Experimental.Input.InputDevice::m_Description
	InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4  ___m_Description_24;
	// System.Double UnityEngine.Experimental.Input.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_25;
	// System.UInt32 UnityEngine.Experimental.Input.InputDevice::m_CurrentDynamicUpdateCount
	uint32_t ___m_CurrentDynamicUpdateCount_26;
	// System.UInt32 UnityEngine.Experimental.Input.InputDevice::m_CurrentFixedUpdateCount
	uint32_t ___m_CurrentFixedUpdateCount_27;
	// UnityEngine.Experimental.Input.Utilities.InternedString[] UnityEngine.Experimental.Input.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ___m_AliasesForEachControl_28;
	// UnityEngine.Experimental.Input.Utilities.InternedString[] UnityEngine.Experimental.Input.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ___m_UsagesForEachControl_29;
	// UnityEngine.Experimental.Input.InputControl[] UnityEngine.Experimental.Input.InputDevice::m_UsageToControl
	InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* ___m_UsageToControl_30;
	// UnityEngine.Experimental.Input.InputControl[] UnityEngine.Experimental.Input.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* ___m_ChildrenForEachControl_31;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_21() { return static_cast<int32_t>(offsetof(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984, ___m_DeviceFlags_21)); }
	inline int32_t get_m_DeviceFlags_21() const { return ___m_DeviceFlags_21; }
	inline int32_t* get_address_of_m_DeviceFlags_21() { return &___m_DeviceFlags_21; }
	inline void set_m_DeviceFlags_21(int32_t value)
	{
		___m_DeviceFlags_21 = value;
	}

	inline static int32_t get_offset_of_m_Id_22() { return static_cast<int32_t>(offsetof(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984, ___m_Id_22)); }
	inline int32_t get_m_Id_22() const { return ___m_Id_22; }
	inline int32_t* get_address_of_m_Id_22() { return &___m_Id_22; }
	inline void set_m_Id_22(int32_t value)
	{
		___m_Id_22 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_23() { return static_cast<int32_t>(offsetof(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984, ___m_DeviceIndex_23)); }
	inline int32_t get_m_DeviceIndex_23() const { return ___m_DeviceIndex_23; }
	inline int32_t* get_address_of_m_DeviceIndex_23() { return &___m_DeviceIndex_23; }
	inline void set_m_DeviceIndex_23(int32_t value)
	{
		___m_DeviceIndex_23 = value;
	}

	inline static int32_t get_offset_of_m_Description_24() { return static_cast<int32_t>(offsetof(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984, ___m_Description_24)); }
	inline InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4  get_m_Description_24() const { return ___m_Description_24; }
	inline InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4 * get_address_of_m_Description_24() { return &___m_Description_24; }
	inline void set_m_Description_24(InputDeviceDescription_tF8F702BCE0C58EBF86A57A3AFC135661A0EE73C4  value)
	{
		___m_Description_24 = value;
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_25() { return static_cast<int32_t>(offsetof(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984, ___m_LastUpdateTimeInternal_25)); }
	inline double get_m_LastUpdateTimeInternal_25() const { return ___m_LastUpdateTimeInternal_25; }
	inline double* get_address_of_m_LastUpdateTimeInternal_25() { return &___m_LastUpdateTimeInternal_25; }
	inline void set_m_LastUpdateTimeInternal_25(double value)
	{
		___m_LastUpdateTimeInternal_25 = value;
	}

	inline static int32_t get_offset_of_m_CurrentDynamicUpdateCount_26() { return static_cast<int32_t>(offsetof(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984, ___m_CurrentDynamicUpdateCount_26)); }
	inline uint32_t get_m_CurrentDynamicUpdateCount_26() const { return ___m_CurrentDynamicUpdateCount_26; }
	inline uint32_t* get_address_of_m_CurrentDynamicUpdateCount_26() { return &___m_CurrentDynamicUpdateCount_26; }
	inline void set_m_CurrentDynamicUpdateCount_26(uint32_t value)
	{
		___m_CurrentDynamicUpdateCount_26 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFixedUpdateCount_27() { return static_cast<int32_t>(offsetof(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984, ___m_CurrentFixedUpdateCount_27)); }
	inline uint32_t get_m_CurrentFixedUpdateCount_27() const { return ___m_CurrentFixedUpdateCount_27; }
	inline uint32_t* get_address_of_m_CurrentFixedUpdateCount_27() { return &___m_CurrentFixedUpdateCount_27; }
	inline void set_m_CurrentFixedUpdateCount_27(uint32_t value)
	{
		___m_CurrentFixedUpdateCount_27 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_28() { return static_cast<int32_t>(offsetof(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984, ___m_AliasesForEachControl_28)); }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* get_m_AliasesForEachControl_28() const { return ___m_AliasesForEachControl_28; }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384** get_address_of_m_AliasesForEachControl_28() { return &___m_AliasesForEachControl_28; }
	inline void set_m_AliasesForEachControl_28(InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* value)
	{
		___m_AliasesForEachControl_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_AliasesForEachControl_28), value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_29() { return static_cast<int32_t>(offsetof(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984, ___m_UsagesForEachControl_29)); }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* get_m_UsagesForEachControl_29() const { return ___m_UsagesForEachControl_29; }
	inline InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384** get_address_of_m_UsagesForEachControl_29() { return &___m_UsagesForEachControl_29; }
	inline void set_m_UsagesForEachControl_29(InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* value)
	{
		___m_UsagesForEachControl_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_UsagesForEachControl_29), value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_30() { return static_cast<int32_t>(offsetof(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984, ___m_UsageToControl_30)); }
	inline InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* get_m_UsageToControl_30() const { return ___m_UsageToControl_30; }
	inline InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68** get_address_of_m_UsageToControl_30() { return &___m_UsageToControl_30; }
	inline void set_m_UsageToControl_30(InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* value)
	{
		___m_UsageToControl_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_UsageToControl_30), value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_31() { return static_cast<int32_t>(offsetof(InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984, ___m_ChildrenForEachControl_31)); }
	inline InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* get_m_ChildrenForEachControl_31() const { return ___m_ChildrenForEachControl_31; }
	inline InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68** get_address_of_m_ChildrenForEachControl_31() { return &___m_ChildrenForEachControl_31; }
	inline void set_m_ChildrenForEachControl_31(InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* value)
	{
		___m_ChildrenForEachControl_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChildrenForEachControl_31), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTDEVICE_TE6A326B08DD07AC90A469442000B302C27C83984_H
// UnityEngine.Experimental.Input.InputBindingComposite[]
struct InputBindingCompositeU5BU5D_t7F618BF16D930F068FFC44D869E3F6D415D3C379  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * m_Items[1];

public:
	inline InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Experimental.Input.InputControl[]
struct InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * m_Items[1];

public:
	inline InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Experimental.Input.InputProcessor[]
struct InputProcessorU5BU5D_tA009D497963975CA0D2F4B3A401266CA77E3CE7D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78 * m_Items[1];

public:
	inline InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Runtime.InteropServices.GCHandle[]
struct GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  m_Items[1];

public:
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Experimental.Input.InputManager_StateChangeMonitorTimeout[]
struct StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2  m_Items[1];

public:
	inline StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl_OnScreenDeviceInfo[]
struct OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9  m_Items[1];

public:
	inline OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Experimental.Input.Plugins.Users.InputUser_OngoingAccountSelection[]
struct OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53  m_Items[1];

public:
	inline OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Experimental.Input.Utilities.InternedString[]
struct InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  m_Items[1];

public:
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  value)
	{
		m_Items[index] = value;
	}
};
// Pathfinding.Connection[]
struct ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B  m_Items[1];

public:
	inline Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B  value)
	{
		m_Items[index] = value;
	}
};
// Pathfinding.GraphUpdateProcessor_GUOSingle[]
struct GUOSingleU5BU5D_tE4141A46A423610509D84978B9302FDA023F60F6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9  m_Items[1];

public:
	inline GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9  value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  m_Items[1];

public:
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * m_Items[1];

public:
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Experimental.Input.InputControlScheme_DeviceRequirement[]
struct DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E  m_Items[1];

public:
	inline DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E  value)
	{
		m_Items[index] = value;
	}
};


// TValue UnityEngine.Experimental.Input.InputBindingCompositeContext::ReadValue<System.Single>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float InputBindingCompositeContext_ReadValue_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mC4389A2DEADE8A3940979F0BFE001D24B60C5113_gshared (InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 * __this, int32_t ___partNumber0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Experimental.Input.InputAction/CallbackContext>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m471F36A6A3ED6629C9AAD3F28A85AF68CD1B5B98_gshared (Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Experimental.Input.InputAction/CallbackContext>::get_Value()
extern "C" IL2CPP_METHOD_ATTR CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2  Nullable_1_get_Value_mF740A466EBC8CEA9A335149B81C91C9E04D553A9_gshared (Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 * __this, const RuntimeMethod* method);
// TValue UnityEngine.Experimental.Input.InputAction/CallbackContext::ReadValue<System.Single>()
extern "C" IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m6214980C6D03863539E13B6688319F409D94CD3D_gshared (CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310_gshared (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" IL2CPP_METHOD_ATTR void LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5_gshared (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, RuntimeObject* p0, const RuntimeMethod* method);
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E_gshared (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
extern "C" IL2CPP_METHOD_ATTR BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  BindingSyntax_WithInteraction_TisRuntimeObject_m26E2CB1AC600331B016AD40386F6D82AEF5038F2_gshared (BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 * __this, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
extern "C" IL2CPP_METHOD_ATTR BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  BindingSyntax_WithProcessor_TisRuntimeObject_m540ACF13EF811CC374ABE606077C07C1EAA06DD4_gshared (BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
extern "C" IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m689E86CFD854AC8146FB62FF915816B6677F58D2_gshared (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_m8966887E83B2AE6054672810E933A9EBE7B059A0_gshared (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_mB1ECF1A1D6966E050F998166779F60EBFD2715A5_gshared (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mCD06D2D53731D3F640930A6D1F289D95463477BC_gshared (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_m927B2DAD260EC3CC95E303F9C34DB69DFCF2E507_gshared (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Input.InputControlList`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<TControl>,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InputControlList_1_AddRange_m4B4FBF0179E3B69BA329AE82B5BBC0F81B4CFAAA_gshared (InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E * __this, RuntimeObject* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Input.InputControlList`1<System.Object>::AddSlice<System.Object>(!!0,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InputControlList_1_AddSlice_TisRuntimeObject_mF3C681DB66754875CD8199336760796BF2587B62_gshared (InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E * __this, RuntimeObject * p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Input.InputControlList`1<System.Object>::.ctor(Unity.Collections.Allocator,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void InputControlList_1__ctor_m49B3574784A83FF24BAAFB93694E772DBCEB8034_gshared (InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Input.InputControlList`1<System.Object>::Add(TControl)
extern "C" IL2CPP_METHOD_ATTR void InputControlList_1_Add_m38AB1E8B77D6230586B77C466201CB43C39EE34D_gshared (InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Input.InputControlList`1<System.Object>::Contains(TControl)
extern "C" IL2CPP_METHOD_ATTR bool InputControlList_1_Contains_mF120ABCFDBFCD95A7E3E7E353CF1CB52091D8A65_gshared (InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Input.InputControlList`1<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void InputControlList_1_Dispose_m80760CA1AE5B18911E895ECE98474BC82DF032D6_gshared (InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E * __this, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputControlScheme/MatchResult UnityEngine.Experimental.Input.InputControlScheme::PickDevicesFrom<System.Object>(TDevices)
extern "C" IL2CPP_METHOD_ATTR MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  InputControlScheme_PickDevicesFrom_TisRuntimeObject_m65FB475400BF9ED59B1E316789C9A2297565036B_gshared (InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 * __this, RuntimeObject * ___devices0, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputControlScheme/MatchResult UnityEngine.Experimental.Input.InputControlScheme::PickDevicesFrom<UnityEngine.Experimental.Input.InputControlList`1<System.Object>>(TDevices)
extern "C" IL2CPP_METHOD_ATTR MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  InputControlScheme_PickDevicesFrom_TisInputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E_mBDC41FA33EB583512F7918977F184283BE3D0227_gshared (InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 * __this, InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E  ___devices0, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.Layouts.InputControlLayout/Builder UnityEngine.Experimental.Input.Layouts.InputControlLayout/Builder::WithType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR Builder_t2549C7EDAC67237F97015821103155122BF1797D  Builder_WithType_TisRuntimeObject_m09CF7026975C3EF9FA236BBEB34171E73BED6B1C_gshared (Builder_t2549C7EDAC67237F97015821103155122BF1797D * __this, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher::WithCapability<System.Int32>(System.String,TValue)
extern "C" IL2CPP_METHOD_ATTR InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C  InputDeviceMatcher_WithCapability_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m26D2A9EF8F680390FF3206FF5FB187BEA91E7082_gshared (InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C * __this, String_t* ___path0, int32_t ___value1, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher::WithCapability<System.Object>(System.String,TValue)
extern "C" IL2CPP_METHOD_ATTR InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C  InputDeviceMatcher_WithCapability_TisRuntimeObject_mDFC26371800126F21F59202328F3425BC2BCB5FB_gshared (InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C * __this, String_t* ___path0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// UnityEngine.Experimental.Input.InputActionState/BindingState* UnityEngine.Experimental.Input.InputActionState::get_bindingStates()
extern "C" IL2CPP_METHOD_ATTR BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * InputActionState_get_bindingStates_m982293A49DE49A9EF3425D58D2D18A951A614FC5 (InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Input.InputActionState/BindingState::get_isPartOfComposite()
extern "C" IL2CPP_METHOD_ATTR bool BindingState_get_isPartOfComposite_m107856E6F4C4DED60A2C525DF0F281A813263782 (BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Experimental.Input.InputActionState/BindingState::get_compositeOrCompositeBindingIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t BindingState_get_compositeOrCompositeBindingIndex_mA8CC79C7C2D865564A22FEBA77B2FE5E9F10E993 (BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputAction UnityEngine.Experimental.Input.InputActionState::GetActionOrNull(System.Int32)
extern "C" IL2CPP_METHOD_ATTR InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * InputActionState_GetActionOrNull_mF40F7E36AD73C3D338BE36194A41BCDE8FF9935C (InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * __this, int32_t ___bindingIndex0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.Experimental.Input.Utilities.TypeHelpers::GetNiceTypeName(System.Type)
extern "C" IL2CPP_METHOD_ATTR String_t* TypeHelpers_GetNiceTypeName_m255DEA05C7A2B3CCB50B36BB0330116B7790722C (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// System.String UnityEngine.Experimental.Input.InputControl::get_path()
extern "C" IL2CPP_METHOD_ATTR String_t* InputControl_get_path_m7F6C1E2707C0A6F8FCE5DF9C6E59A8E0539CEF08 (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Experimental.Input.InputActionState/BindingState::get_processorCount()
extern "C" IL2CPP_METHOD_ATTR int32_t BindingState_get_processorCount_m49129278E5ED2F8CE06BFBEB7147176501F100B0 (BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Experimental.Input.InputActionState/BindingState::get_processorStartIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t BindingState_get_processorStartIndex_m38E2B9196557C0546110E7C8B2E085956030E08F (BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * __this, const RuntimeMethod* method);
// TValue UnityEngine.Experimental.Input.InputBindingCompositeContext::ReadValue<System.Single>(System.Int32)
inline float InputBindingCompositeContext_ReadValue_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mC4389A2DEADE8A3940979F0BFE001D24B60C5113 (InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 * __this, int32_t ___partNumber0, const RuntimeMethod* method)
{
	return ((  float (*) (InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 *, int32_t, const RuntimeMethod*))InputBindingCompositeContext_ReadValue_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mC4389A2DEADE8A3940979F0BFE001D24B60C5113_gshared)(__this, ___partNumber0, method);
}
// System.Boolean System.Nullable`1<UnityEngine.Experimental.Input.InputAction/CallbackContext>::get_HasValue()
inline bool Nullable_1_get_HasValue_m471F36A6A3ED6629C9AAD3F28A85AF68CD1B5B98 (Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 *, const RuntimeMethod*))Nullable_1_get_HasValue_m471F36A6A3ED6629C9AAD3F28A85AF68CD1B5B98_gshared)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Experimental.Input.InputAction/CallbackContext>::get_Value()
inline CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2  Nullable_1_get_Value_mF740A466EBC8CEA9A335149B81C91C9E04D553A9 (Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 * __this, const RuntimeMethod* method)
{
	return ((  CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2  (*) (Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 *, const RuntimeMethod*))Nullable_1_get_Value_mF740A466EBC8CEA9A335149B81C91C9E04D553A9_gshared)(__this, method);
}
// TValue UnityEngine.Experimental.Input.InputAction/CallbackContext::ReadValue<System.Single>()
inline float CallbackContext_ReadValue_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m6214980C6D03863539E13B6688319F409D94CD3D (CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2 *, const RuntimeMethod*))CallbackContext_ReadValue_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m6214980C6D03863539E13B6688319F409D94CD3D_gshared)(__this, method);
}
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434 (RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525 (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::.ctor(System.Boolean)
inline void LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310 (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *, bool, const RuntimeMethod*))LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5 (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *, RuntimeObject*, const RuntimeMethod*))LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5_gshared)(__this, p0, method);
}
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Object>::ToArray()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *, const RuntimeMethod*))LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9 (int32_t ___channel0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::get_canAccess()
extern "C" IL2CPP_METHOD_ATTR bool Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::HasChannel(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR bool Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___ch0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203 (Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputActionRebindingExtensions/RebindingOperation UnityEngine.Experimental.Input.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType(System.Type)
extern "C" IL2CPP_METHOD_ATTR RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117 * RebindingOperation_WithExpectedControlType_m5EA8FDA2E6CB02B03CF65F6CE1E82F40C2030816 (RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117 * __this, Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.Utilities.InternedString UnityEngine.Experimental.Input.Utilities.TypeTable::FindNameForType(System.Type)
extern "C" IL2CPP_METHOD_ATTR InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  TypeTable_FindNameForType_m27FC99FA7459CD609492F03A67630BE4A7EFE0C4 (TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Input.Utilities.InternedString::IsEmpty()
extern "C" IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_mD911516AA0584E4F15B3A3CD32B38132CB10CBFA (InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String UnityEngine.Experimental.Input.Utilities.InternedString::op_Implicit(UnityEngine.Experimental.Input.Utilities.InternedString)
extern "C" IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_m3530BD5B32DAAB5960B17A7A7B73B3E7CE989642 (InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___str0, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax::WithInteraction(System.String)
extern "C" IL2CPP_METHOD_ATTR BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  BindingSyntax_WithInteraction_m98CA0C5BF9D0146180A479D39C7646F5ADB4FFEB (BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 * __this, String_t* ___interaction0, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
inline BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  BindingSyntax_WithInteraction_TisRuntimeObject_m26E2CB1AC600331B016AD40386F6D82AEF5038F2 (BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  (*) (BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 *, const RuntimeMethod*))BindingSyntax_WithInteraction_TisRuntimeObject_m26E2CB1AC600331B016AD40386F6D82AEF5038F2_gshared)(__this, method);
}
// UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax::WithProcessor(System.String)
extern "C" IL2CPP_METHOD_ATTR BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  BindingSyntax_WithProcessor_mAFB50675C62399BA5498308F7CEFD6B73841C393 (BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 * __this, String_t* ___processor0, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
inline BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  BindingSyntax_WithProcessor_TisRuntimeObject_m540ACF13EF811CC374ABE606077C07C1EAA06DD4 (BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  (*) (BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 *, const RuntimeMethod*))BindingSyntax_WithProcessor_TisRuntimeObject_m540ACF13EF811CC374ABE606077C07C1EAA06DD4_gshared)(__this, method);
}
// System.String UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m689E86CFD854AC8146FB62FF915816B6677F58D2 (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m689E86CFD854AC8146FB62FF915816B6677F58D2_gshared)(__this, method);
}
// UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice(System.String)
extern "C" IL2CPP_METHOD_ATTR ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_WithOptionalDevice_m8AEF8D14125D8146FC88998FCE331F884E688A4D (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_m8966887E83B2AE6054672810E933A9EBE7B059A0 (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  (*) (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_m8966887E83B2AE6054672810E933A9EBE7B059A0_gshared)(__this, method);
}
// UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice(System.String)
extern "C" IL2CPP_METHOD_ATTR ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_WithRequiredDevice_mEB0D621B792F15DA7BB4722904880B379075E395 (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_mB1ECF1A1D6966E050F998166779F60EBFD2715A5 (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  (*) (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_mB1ECF1A1D6966E050F998166779F60EBFD2715A5_gshared)(__this, method);
}
// UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mCD06D2D53731D3F640930A6D1F289D95463477BC (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  (*) (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mCD06D2D53731D3F640930A6D1F289D95463477BC_gshared)(__this, method);
}
// UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_m927B2DAD260EC3CC95E303F9C34DB69DFCF2E507 (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  (*) (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_m927B2DAD260EC3CC95E303F9C34DB69DFCF2E507_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.Input.InputControlList`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<TControl>,System.Int32,System.Int32)
inline void InputControlList_1_AddRange_m4B4FBF0179E3B69BA329AE82B5BBC0F81B4CFAAA (InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E * __this, RuntimeObject* p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E *, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))InputControlList_1_AddRange_m4B4FBF0179E3B69BA329AE82B5BBC0F81B4CFAAA_gshared)(__this, p0, p1, p2, method);
}
// System.Void UnityEngine.Experimental.Input.InputControlList`1<System.Object>::AddSlice<System.Collections.Generic.IReadOnlyList`1<System.Object>>(!!0,System.Int32,System.Int32,System.Int32)
inline void InputControlList_1_AddSlice_TisIReadOnlyList_1_tE81E1489F9663A3FFB16117EBB97C07D91EA7557_mE09F00305B042CFC2E2D429E79238F336D4B7625 (InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E * __this, RuntimeObject* p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E *, RuntimeObject*, int32_t, int32_t, int32_t, const RuntimeMethod*))InputControlList_1_AddSlice_TisRuntimeObject_mF3C681DB66754875CD8199336760796BF2587B62_gshared)(__this, p0, p1, p2, p3, method);
}
// System.Void UnityEngine.Experimental.Input.InputControlList`1<UnityEngine.Experimental.Input.InputControl>::.ctor(Unity.Collections.Allocator,System.Int32)
inline void InputControlList_1__ctor_m618E0D787CA05BA1B8B397A93DEB04B1EA05DA99 (InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *, int32_t, int32_t, const RuntimeMethod*))InputControlList_1__ctor_m49B3574784A83FF24BAAFB93694E772DBCEB8034_gshared)(__this, p0, p1, method);
}
// System.Boolean UnityEngine.Experimental.Input.InputControlScheme/DeviceRequirement::get_isOR()
extern "C" IL2CPP_METHOD_ATTR bool DeviceRequirement_get_isOR_mE19C8ECCBE428DB8EEDC1DDC75F13660C4251619 (DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Input.InputControlScheme/DeviceRequirement::get_isOptional()
extern "C" IL2CPP_METHOD_ATTR bool DeviceRequirement_get_isOptional_m4D9E7DB98931DDC9A407A0905DDA316B58B0EB1F (DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Input.InputControlList`1<UnityEngine.Experimental.Input.InputControl>::Add(TControl)
inline void InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549 (InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 * __this, InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * p0, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *, InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *, const RuntimeMethod*))InputControlList_1_Add_m38AB1E8B77D6230586B77C466201CB43C39EE34D_gshared)(__this, p0, method);
}
// System.String UnityEngine.Experimental.Input.InputControlScheme/DeviceRequirement::get_controlPath()
extern "C" IL2CPP_METHOD_ATTR String_t* DeviceRequirement_get_controlPath_m2EBD39CEE130D6E8476C58B17AECB0D8D15A75B8 (DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* p0, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.InputControl UnityEngine.Experimental.Input.InputControlPath::TryFindControl(UnityEngine.Experimental.Input.InputControl,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * InputControlPath_TryFindControl_mF2309BB03FFCE0548023F3032BBBD014C7FD849D (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * ___control0, String_t* ___path1, int32_t ___indexInPath2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Input.InputControlList`1<UnityEngine.Experimental.Input.InputControl>::Contains(TControl)
inline bool InputControlList_1_Contains_mBC1E0A16C2E3150BDEA258FF139A6E858C0C99C7 (InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 * __this, InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *, InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *, const RuntimeMethod*))InputControlList_1_Contains_mF120ABCFDBFCD95A7E3E7E353CF1CB52091D8A65_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Experimental.Input.InputControlList`1<UnityEngine.Experimental.Input.InputControl>::Dispose()
inline void InputControlList_1_Dispose_mAB171168B9A995BA5B7340FBED941AC0F5CC3293 (InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 * __this, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *, const RuntimeMethod*))InputControlList_1_Dispose_m80760CA1AE5B18911E895ECE98474BC82DF032D6_gshared)(__this, method);
}
// UnityEngine.Experimental.Input.InputControlScheme/MatchResult UnityEngine.Experimental.Input.InputControlScheme::PickDevicesFrom<System.Object>(TDevices)
inline MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  InputControlScheme_PickDevicesFrom_TisRuntimeObject_m65FB475400BF9ED59B1E316789C9A2297565036B (InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 * __this, RuntimeObject * ___devices0, const RuntimeMethod* method)
{
	return ((  MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  (*) (InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 *, RuntimeObject *, const RuntimeMethod*))InputControlScheme_PickDevicesFrom_TisRuntimeObject_m65FB475400BF9ED59B1E316789C9A2297565036B_gshared)(__this, ___devices0, method);
}
// UnityEngine.Experimental.Input.InputControlScheme/MatchResult UnityEngine.Experimental.Input.InputControlScheme::PickDevicesFrom<UnityEngine.Experimental.Input.InputControlList`1<System.Object>>(TDevices)
inline MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  InputControlScheme_PickDevicesFrom_TisInputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E_mBDC41FA33EB583512F7918977F184283BE3D0227 (InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 * __this, InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E  ___devices0, const RuntimeMethod* method)
{
	return ((  MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  (*) (InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 *, InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E , const RuntimeMethod*))InputControlScheme_PickDevicesFrom_TisInputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E_mBDC41FA33EB583512F7918977F184283BE3D0227_gshared)(__this, ___devices0, method);
}
// UnityEngine.Experimental.Input.Layouts.InputControlLayout UnityEngine.Experimental.Input.InputManager::TryLoadControlLayout(System.Type)
extern "C" IL2CPP_METHOD_ATTR InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0 * InputManager_TryLoadControlLayout_m70C376C8F525676707DF3B0352ACB0962B343A72 (InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9 * __this, Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.Layouts.InputControlLayout/Builder UnityEngine.Experimental.Input.Layouts.InputControlLayout/Builder::WithType<System.Object>()
inline Builder_t2549C7EDAC67237F97015821103155122BF1797D  Builder_WithType_TisRuntimeObject_m09CF7026975C3EF9FA236BBEB34171E73BED6B1C (Builder_t2549C7EDAC67237F97015821103155122BF1797D * __this, const RuntimeMethod* method)
{
	return ((  Builder_t2549C7EDAC67237F97015821103155122BF1797D  (*) (Builder_t2549C7EDAC67237F97015821103155122BF1797D *, const RuntimeMethod*))Builder_WithType_TisRuntimeObject_m09CF7026975C3EF9FA236BBEB34171E73BED6B1C_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.Input.Utilities.InternedString::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InternedString__ctor_mB883DD361E1D253493DA509A7D8E1521592C0F7B (InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE * __this, String_t* ___text0, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher::With(UnityEngine.Experimental.Input.Utilities.InternedString,System.Object)
extern "C" IL2CPP_METHOD_ATTR InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C  InputDeviceMatcher_With_m66BFDFAAAAA799C2102C7D2EAAD3031F63F829EF (InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C * __this, InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher::WithCapability<System.Int32>(System.String,TValue)
inline InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C  InputDeviceMatcher_WithCapability_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m26D2A9EF8F680390FF3206FF5FB187BEA91E7082 (InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C * __this, String_t* ___path0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C  (*) (InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C *, String_t*, int32_t, const RuntimeMethod*))InputDeviceMatcher_WithCapability_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m26D2A9EF8F680390FF3206FF5FB187BEA91E7082_gshared)(__this, ___path0, ___value1, method);
}
// UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher::WithCapability<System.Object>(System.String,TValue)
inline InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C  InputDeviceMatcher_WithCapability_TisRuntimeObject_mDFC26371800126F21F59202328F3425BC2BCB5FB (InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C * __this, String_t* ___path0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	return ((  InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C  (*) (InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C *, String_t*, RuntimeObject *, const RuntimeMethod*))InputDeviceMatcher_WithCapability_TisRuntimeObject_mDFC26371800126F21F59202328F3425BC2BCB5FB_gshared)(__this, ___path0, ___value1, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
extern "C" IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_m640191F67AEB374A5E6FD9B1E6CC48CF31FFDCAD (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8 (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableHandle::GetPlayState()
extern "C" IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetPlayState_m080CF2B647260A57E27E0FCDF65D92547DE8912E (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableHandle::GetInput(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableHandle_GetInput_mBDC7706AEC48332E896AD885CC4DFB71D05D39A1 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, int32_t ___inputPort0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567 (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  AnimationPlayableOutput_GetHandle_m7E849F774F2B3E233A115FFB63DF473AF88F95E0 (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableOutputHandle::GetSourcePlayable()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  PlayableOutputHandle_GetSourcePlayable_mCD956832B4DD487FAFFA1669BAF5DC82A13BF625 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableGraph UnityEngine.Playables.PlayableHandle::GetGraph()
extern "C" IL2CPP_METHOD_ATTR PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  PlayableHandle_GetGraph_mEB257F6CD9170C1E94E0B93A8DB35FECC6F757E3 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// UnityEngine.Timeline.TimelineClip UnityEngine.Timeline.TrackAsset::CreateClip(System.Type)
extern "C" IL2CPP_METHOD_ATTR TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A * TrackAsset_CreateClip_m34278D33C83C902D576500091E88C75675FAD165 (TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC * __this, Type_t * ___requestedType0, const RuntimeMethod* method);
// TValue UnityEngine.Experimental.Input.InputActionState::ReadValue<UnityEngine.Vector2>(System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  InputActionState_ReadValue_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m29552BBCA6F9F9474E4F4F6EAB91590E9F7A87B7_gshared (InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * __this, int32_t ___bindingIndex0, int32_t ___controlIndex1, bool ___ignoreComposites2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputActionState_ReadValue_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m29552BBCA6F9F9474E4F4F6EAB91590E9F7A87B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * V_5 = NULL;
	InputBindingComposite_1_t7119FA7CB3938542B98FF37C0FCF2C20F5C8F768 * V_6 = NULL;
	InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385  V_7;
	memset(&V_7, 0, sizeof(V_7));
	InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385  V_8;
	memset(&V_8, 0, sizeof(V_8));
	InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D ));
		V_1 = (InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE *)NULL;
		bool L_0 = ___ignoreComposites2;
		if (L_0)
		{
			goto IL_00f8;
		}
	}
	{
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * L_1 = InputActionState_get_bindingStates_m982293A49DE49A9EF3425D58D2D18A951A614FC5((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, /*hidden argument*/NULL);
		int32_t L_2 = ___bindingIndex0;
		uint32_t L_3 = sizeof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 );
		bool L_4 = BindingState_get_isPartOfComposite_m107856E6F4C4DED60A2C525DF0F281A813263782((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_2)), (int32_t)L_3)))), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00f8;
		}
	}
	{
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * L_5 = InputActionState_get_bindingStates_m982293A49DE49A9EF3425D58D2D18A951A614FC5((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, /*hidden argument*/NULL);
		int32_t L_6 = ___bindingIndex0;
		uint32_t L_7 = sizeof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 );
		int32_t L_8 = BindingState_get_compositeOrCompositeBindingIndex_mA8CC79C7C2D865564A22FEBA77B2FE5E9F10E993((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_6)), (int32_t)L_7)))), /*hidden argument*/NULL);
		V_3 = (int32_t)L_8;
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * L_9 = InputActionState_get_bindingStates_m982293A49DE49A9EF3425D58D2D18A951A614FC5((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, /*hidden argument*/NULL);
		int32_t L_10 = V_3;
		uint32_t L_11 = sizeof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 );
		int32_t L_12 = BindingState_get_compositeOrCompositeBindingIndex_mA8CC79C7C2D865564A22FEBA77B2FE5E9F10E993((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)il2cpp_codegen_add((intptr_t)L_9, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_10)), (int32_t)L_11)))), /*hidden argument*/NULL);
		V_4 = (int32_t)L_12;
		InputBindingCompositeU5BU5D_t7F618BF16D930F068FFC44D869E3F6D415D3C379* L_13 = (InputBindingCompositeU5BU5D_t7F618BF16D930F068FFC44D869E3F6D415D3C379*)__this->get_composites_5();
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = (InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 *)L_16;
		InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * L_17 = V_5;
		V_6 = (InputBindingComposite_1_t7119FA7CB3938542B98FF37C0FCF2C20F5C8F768 *)((InputBindingComposite_1_t7119FA7CB3938542B98FF37C0FCF2C20F5C8F768 *)IsInst((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		InputBindingComposite_1_t7119FA7CB3938542B98FF37C0FCF2C20F5C8F768 * L_18 = V_6;
		if (L_18)
		{
			goto IL_00d0;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_19;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_21 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_21, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_20;
		InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * L_25 = V_5;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_24;
		int32_t L_27 = ___bindingIndex0;
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * L_28 = InputActionState_GetActionOrNull_mF40F7E36AD73C3D338BE36194A41BCDE8FF9935C((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, (int32_t)L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_28);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_26;
		int32_t L_30 = V_4;
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_31);
		NullCheck((RuntimeObject *)L_32);
		Type_t * L_33 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_32, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_33);
		String_t* L_34 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_33);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_34);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_34);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_35 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_29;
		InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * L_36 = V_5;
		NullCheck((RuntimeObject *)L_36);
		Type_t * L_37 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_36, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_37);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_38 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(99 /* System.Type[] System.Type::GetGenericArguments() */, (Type_t *)L_37);
		NullCheck(L_38);
		int32_t L_39 = 0;
		Type_t * L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		String_t* L_41 = TypeHelpers_GetNiceTypeName_m255DEA05C7A2B3CCB50B36BB0330116B7790722C((Type_t *)L_40, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_41);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_41);
		String_t* L_42 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865((String_t*)_stringLiteralA7DEDE1DFA2C8D0BA470F38631FDF2CA68EE9A45, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_35, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_43 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_43, (String_t*)L_42, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, NULL, InputActionState_ReadValue_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m29552BBCA6F9F9474E4F4F6EAB91590E9F7A87B7_RuntimeMethod_var);
	}

IL_00d0:
	{
		il2cpp_codegen_initobj((&V_8), sizeof(InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 ));
		(&V_8)->set_m_State_0(__this);
		int32_t L_44 = V_3;
		(&V_8)->set_m_BindingIndex_1(L_44);
		InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385  L_45 = V_8;
		V_7 = (InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 )L_45;
		InputBindingComposite_1_t7119FA7CB3938542B98FF37C0FCF2C20F5C8F768 * L_46 = V_6;
		NullCheck((InputBindingComposite_1_t7119FA7CB3938542B98FF37C0FCF2C20F5C8F768 *)L_46);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_47 = VirtFuncInvoker1< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 * >::Invoke(9 /* TValue UnityEngine.Experimental.Input.InputBindingComposite`1<UnityEngine.Vector2>::ReadValue(UnityEngine.Experimental.Input.InputBindingCompositeContext&) */, (InputBindingComposite_1_t7119FA7CB3938542B98FF37C0FCF2C20F5C8F768 *)L_46, (InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 *)(InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 *)(&V_7));
		V_0 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_47;
		goto IL_016e;
	}

IL_00f8:
	{
		InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* L_48 = (InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68*)__this->get_controls_2();
		int32_t L_49 = ___controlIndex1;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_9 = (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_51;
		InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_52 = V_9;
		V_1 = (InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE *)((InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE *)IsInst((RuntimeObject*)L_52, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE * L_53 = V_1;
		if (L_53)
		{
			goto IL_0167;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_54 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_55 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_54;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_56 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_57 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_56, /*hidden argument*/NULL);
		String_t* L_58 = TypeHelpers_GetNiceTypeName_m255DEA05C7A2B3CCB50B36BB0330116B7790722C((Type_t *)L_57, /*hidden argument*/NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_58);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_59 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_55;
		InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_60 = V_9;
		NullCheck((InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_60);
		String_t* L_61 = InputControl_get_path_m7F6C1E2707C0A6F8FCE5DF9C6E59A8E0539CEF08((InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_60, /*hidden argument*/NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_61);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_61);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_62 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_59;
		int32_t L_63 = ___bindingIndex0;
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * L_64 = InputActionState_GetActionOrNull_mF40F7E36AD73C3D338BE36194A41BCDE8FF9935C((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, (int32_t)L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_64);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_65 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_62;
		InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_66 = V_9;
		NullCheck((RuntimeObject *)L_66);
		Type_t * L_67 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_66, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_67);
		String_t* L_68 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_67);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_68);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_69 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_65;
		InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_70 = V_9;
		NullCheck((InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_70);
		Type_t * L_71 = VirtFuncInvoker0< Type_t * >::Invoke(4 /* System.Type UnityEngine.Experimental.Input.InputControl::get_valueType() */, (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_70);
		String_t* L_72 = TypeHelpers_GetNiceTypeName_m255DEA05C7A2B3CCB50B36BB0330116B7790722C((Type_t *)L_71, /*hidden argument*/NULL);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_72);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_72);
		String_t* L_73 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865((String_t*)_stringLiteral50EACB889AE369682E4402F94C992271F0458871, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_69, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_74 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_74, (String_t*)L_73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, NULL, InputActionState_ReadValue_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m29552BBCA6F9F9474E4F4F6EAB91590E9F7A87B7_RuntimeMethod_var);
	}

IL_0167:
	{
		InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE * L_75 = V_1;
		NullCheck((InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE *)L_75);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_76 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE *)L_75, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_0 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_76;
	}

IL_016e:
	{
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * L_77 = InputActionState_get_bindingStates_m982293A49DE49A9EF3425D58D2D18A951A614FC5((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, /*hidden argument*/NULL);
		int32_t L_78 = ___bindingIndex0;
		uint32_t L_79 = sizeof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 );
		int32_t L_80 = BindingState_get_processorCount_m49129278E5ED2F8CE06BFBEB7147176501F100B0((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)il2cpp_codegen_add((intptr_t)L_77, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_78)), (int32_t)L_79)))), /*hidden argument*/NULL);
		V_2 = (int32_t)L_80;
		int32_t L_81 = V_2;
		if ((((int32_t)L_81) <= ((int32_t)0)))
		{
			goto IL_01c8;
		}
	}
	{
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * L_82 = InputActionState_get_bindingStates_m982293A49DE49A9EF3425D58D2D18A951A614FC5((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, /*hidden argument*/NULL);
		int32_t L_83 = ___bindingIndex0;
		uint32_t L_84 = sizeof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 );
		int32_t L_85 = BindingState_get_processorStartIndex_m38E2B9196557C0546110E7C8B2E085956030E08F((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)il2cpp_codegen_add((intptr_t)L_82, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_83)), (int32_t)L_84)))), /*hidden argument*/NULL);
		V_10 = (int32_t)L_85;
		V_11 = (int32_t)0;
		goto IL_01c3;
	}

IL_01a4:
	{
		InputProcessorU5BU5D_tA009D497963975CA0D2F4B3A401266CA77E3CE7D* L_86 = (InputProcessorU5BU5D_tA009D497963975CA0D2F4B3A401266CA77E3CE7D*)__this->get_processors_4();
		int32_t L_87 = V_10;
		int32_t L_88 = V_11;
		NullCheck(L_86);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)L_88));
		InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78 * L_90 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_91 = V_0;
		InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE * L_92 = V_1;
		NullCheck((InputProcessor_1_tB61E701E2E12A1C56FA4780AF9D482A639B70D3F *)((InputProcessor_1_tB61E701E2E12A1C56FA4780AF9D482A639B70D3F *)Castclass((RuntimeObject*)L_90, IL2CPP_RGCTX_DATA(method->rgctx_data, 5))));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_93 = VirtFuncInvoker2< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE * >::Invoke(7 /* TValue UnityEngine.Experimental.Input.InputProcessor`1<UnityEngine.Vector2>::Process(TValue,UnityEngine.Experimental.Input.InputControl`1<TValue>) */, (InputProcessor_1_tB61E701E2E12A1C56FA4780AF9D482A639B70D3F *)((InputProcessor_1_tB61E701E2E12A1C56FA4780AF9D482A639B70D3F *)Castclass((RuntimeObject*)L_90, IL2CPP_RGCTX_DATA(method->rgctx_data, 5))), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_91, (InputControl_1_tA7DBA078A60C9B0156A80CF8360E520078AC6DAE *)L_92);
		V_0 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_93;
		int32_t L_94 = V_11;
		V_11 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_95 = V_11;
		int32_t L_96 = V_2;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_01a4;
		}
	}

IL_01c8:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_97 = V_0;
		return L_97;
	}
}
// TValue UnityEngine.Experimental.Input.InputActionState::ReadValue<UnityEngine.Vector3>(System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  InputActionState_ReadValue_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m3C98011C69BA3821A768C727C5FABA29A59577D5_gshared (InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * __this, int32_t ___bindingIndex0, int32_t ___controlIndex1, bool ___ignoreComposites2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputActionState_ReadValue_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m3C98011C69BA3821A768C727C5FABA29A59577D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * V_5 = NULL;
	InputBindingComposite_1_tF1DDF85677072866E46F8F60C0B814FA330129A4 * V_6 = NULL;
	InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385  V_7;
	memset(&V_7, 0, sizeof(V_7));
	InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385  V_8;
	memset(&V_8, 0, sizeof(V_8));
	InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		V_1 = (InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B *)NULL;
		bool L_0 = ___ignoreComposites2;
		if (L_0)
		{
			goto IL_00f8;
		}
	}
	{
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * L_1 = InputActionState_get_bindingStates_m982293A49DE49A9EF3425D58D2D18A951A614FC5((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, /*hidden argument*/NULL);
		int32_t L_2 = ___bindingIndex0;
		uint32_t L_3 = sizeof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 );
		bool L_4 = BindingState_get_isPartOfComposite_m107856E6F4C4DED60A2C525DF0F281A813263782((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_2)), (int32_t)L_3)))), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00f8;
		}
	}
	{
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * L_5 = InputActionState_get_bindingStates_m982293A49DE49A9EF3425D58D2D18A951A614FC5((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, /*hidden argument*/NULL);
		int32_t L_6 = ___bindingIndex0;
		uint32_t L_7 = sizeof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 );
		int32_t L_8 = BindingState_get_compositeOrCompositeBindingIndex_mA8CC79C7C2D865564A22FEBA77B2FE5E9F10E993((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_6)), (int32_t)L_7)))), /*hidden argument*/NULL);
		V_3 = (int32_t)L_8;
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * L_9 = InputActionState_get_bindingStates_m982293A49DE49A9EF3425D58D2D18A951A614FC5((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, /*hidden argument*/NULL);
		int32_t L_10 = V_3;
		uint32_t L_11 = sizeof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 );
		int32_t L_12 = BindingState_get_compositeOrCompositeBindingIndex_mA8CC79C7C2D865564A22FEBA77B2FE5E9F10E993((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)il2cpp_codegen_add((intptr_t)L_9, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_10)), (int32_t)L_11)))), /*hidden argument*/NULL);
		V_4 = (int32_t)L_12;
		InputBindingCompositeU5BU5D_t7F618BF16D930F068FFC44D869E3F6D415D3C379* L_13 = (InputBindingCompositeU5BU5D_t7F618BF16D930F068FFC44D869E3F6D415D3C379*)__this->get_composites_5();
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = (InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 *)L_16;
		InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * L_17 = V_5;
		V_6 = (InputBindingComposite_1_tF1DDF85677072866E46F8F60C0B814FA330129A4 *)((InputBindingComposite_1_tF1DDF85677072866E46F8F60C0B814FA330129A4 *)IsInst((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		InputBindingComposite_1_tF1DDF85677072866E46F8F60C0B814FA330129A4 * L_18 = V_6;
		if (L_18)
		{
			goto IL_00d0;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_19;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_21 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_21, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_20;
		InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * L_25 = V_5;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_24;
		int32_t L_27 = ___bindingIndex0;
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * L_28 = InputActionState_GetActionOrNull_mF40F7E36AD73C3D338BE36194A41BCDE8FF9935C((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, (int32_t)L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_28);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_26;
		int32_t L_30 = V_4;
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_31);
		NullCheck((RuntimeObject *)L_32);
		Type_t * L_33 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_32, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_33);
		String_t* L_34 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_33);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_34);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_34);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_35 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_29;
		InputBindingComposite_tCFE4ACFDBFADAF3282B1E2A908021D007FB27276 * L_36 = V_5;
		NullCheck((RuntimeObject *)L_36);
		Type_t * L_37 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_36, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_37);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_38 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(99 /* System.Type[] System.Type::GetGenericArguments() */, (Type_t *)L_37);
		NullCheck(L_38);
		int32_t L_39 = 0;
		Type_t * L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		String_t* L_41 = TypeHelpers_GetNiceTypeName_m255DEA05C7A2B3CCB50B36BB0330116B7790722C((Type_t *)L_40, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_41);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_41);
		String_t* L_42 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865((String_t*)_stringLiteralA7DEDE1DFA2C8D0BA470F38631FDF2CA68EE9A45, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_35, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_43 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_43, (String_t*)L_42, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, NULL, InputActionState_ReadValue_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m3C98011C69BA3821A768C727C5FABA29A59577D5_RuntimeMethod_var);
	}

IL_00d0:
	{
		il2cpp_codegen_initobj((&V_8), sizeof(InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 ));
		(&V_8)->set_m_State_0(__this);
		int32_t L_44 = V_3;
		(&V_8)->set_m_BindingIndex_1(L_44);
		InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385  L_45 = V_8;
		V_7 = (InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 )L_45;
		InputBindingComposite_1_tF1DDF85677072866E46F8F60C0B814FA330129A4 * L_46 = V_6;
		NullCheck((InputBindingComposite_1_tF1DDF85677072866E46F8F60C0B814FA330129A4 *)L_46);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 * >::Invoke(9 /* TValue UnityEngine.Experimental.Input.InputBindingComposite`1<UnityEngine.Vector3>::ReadValue(UnityEngine.Experimental.Input.InputBindingCompositeContext&) */, (InputBindingComposite_1_tF1DDF85677072866E46F8F60C0B814FA330129A4 *)L_46, (InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 *)(InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 *)(&V_7));
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_47;
		goto IL_016e;
	}

IL_00f8:
	{
		InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68* L_48 = (InputControlU5BU5D_tB6D72F233A7796B6879873EB6C3336AED3B02A68*)__this->get_controls_2();
		int32_t L_49 = ___controlIndex1;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_9 = (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_51;
		InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_52 = V_9;
		V_1 = (InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B *)((InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B *)IsInst((RuntimeObject*)L_52, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B * L_53 = V_1;
		if (L_53)
		{
			goto IL_0167;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_54 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_55 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_54;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_56 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_57 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_56, /*hidden argument*/NULL);
		String_t* L_58 = TypeHelpers_GetNiceTypeName_m255DEA05C7A2B3CCB50B36BB0330116B7790722C((Type_t *)L_57, /*hidden argument*/NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_58);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_59 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_55;
		InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_60 = V_9;
		NullCheck((InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_60);
		String_t* L_61 = InputControl_get_path_m7F6C1E2707C0A6F8FCE5DF9C6E59A8E0539CEF08((InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_60, /*hidden argument*/NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_61);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_61);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_62 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_59;
		int32_t L_63 = ___bindingIndex0;
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		InputAction_t7BA9F6C6A529842D0C9298B88E370F682FAC7550 * L_64 = InputActionState_GetActionOrNull_mF40F7E36AD73C3D338BE36194A41BCDE8FF9935C((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, (int32_t)L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_64);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_65 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_62;
		InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_66 = V_9;
		NullCheck((RuntimeObject *)L_66);
		Type_t * L_67 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_66, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_67);
		String_t* L_68 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_67);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_68);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_69 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_65;
		InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_70 = V_9;
		NullCheck((InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_70);
		Type_t * L_71 = VirtFuncInvoker0< Type_t * >::Invoke(4 /* System.Type UnityEngine.Experimental.Input.InputControl::get_valueType() */, (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_70);
		String_t* L_72 = TypeHelpers_GetNiceTypeName_m255DEA05C7A2B3CCB50B36BB0330116B7790722C((Type_t *)L_71, /*hidden argument*/NULL);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_72);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_72);
		String_t* L_73 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865((String_t*)_stringLiteral50EACB889AE369682E4402F94C992271F0458871, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_69, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_74 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_74, (String_t*)L_73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, NULL, InputActionState_ReadValue_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m3C98011C69BA3821A768C727C5FABA29A59577D5_RuntimeMethod_var);
	}

IL_0167:
	{
		InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B * L_75 = V_1;
		NullCheck((InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B *)L_75);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B *)L_75, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_76;
	}

IL_016e:
	{
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * L_77 = InputActionState_get_bindingStates_m982293A49DE49A9EF3425D58D2D18A951A614FC5((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, /*hidden argument*/NULL);
		int32_t L_78 = ___bindingIndex0;
		uint32_t L_79 = sizeof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 );
		int32_t L_80 = BindingState_get_processorCount_m49129278E5ED2F8CE06BFBEB7147176501F100B0((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)il2cpp_codegen_add((intptr_t)L_77, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_78)), (int32_t)L_79)))), /*hidden argument*/NULL);
		V_2 = (int32_t)L_80;
		int32_t L_81 = V_2;
		if ((((int32_t)L_81) <= ((int32_t)0)))
		{
			goto IL_01c8;
		}
	}
	{
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this);
		BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 * L_82 = InputActionState_get_bindingStates_m982293A49DE49A9EF3425D58D2D18A951A614FC5((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this, /*hidden argument*/NULL);
		int32_t L_83 = ___bindingIndex0;
		uint32_t L_84 = sizeof(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 );
		int32_t L_85 = BindingState_get_processorStartIndex_m38E2B9196557C0546110E7C8B2E085956030E08F((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)(BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)((BindingState_t9AE5998441CE8D1578D440EA76F42B3D779CDD36 *)il2cpp_codegen_add((intptr_t)L_82, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_83)), (int32_t)L_84)))), /*hidden argument*/NULL);
		V_10 = (int32_t)L_85;
		V_11 = (int32_t)0;
		goto IL_01c3;
	}

IL_01a4:
	{
		InputProcessorU5BU5D_tA009D497963975CA0D2F4B3A401266CA77E3CE7D* L_86 = (InputProcessorU5BU5D_tA009D497963975CA0D2F4B3A401266CA77E3CE7D*)__this->get_processors_4();
		int32_t L_87 = V_10;
		int32_t L_88 = V_11;
		NullCheck(L_86);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)L_88));
		InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78 * L_90 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = V_0;
		InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B * L_92 = V_1;
		NullCheck((InputProcessor_1_tEC0E3B32C1173731BEB9A00F5AEDD9E5562568B5 *)((InputProcessor_1_tEC0E3B32C1173731BEB9A00F5AEDD9E5562568B5 *)Castclass((RuntimeObject*)L_90, IL2CPP_RGCTX_DATA(method->rgctx_data, 5))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = VirtFuncInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B * >::Invoke(7 /* TValue UnityEngine.Experimental.Input.InputProcessor`1<UnityEngine.Vector3>::Process(TValue,UnityEngine.Experimental.Input.InputControl`1<TValue>) */, (InputProcessor_1_tEC0E3B32C1173731BEB9A00F5AEDD9E5562568B5 *)((InputProcessor_1_tEC0E3B32C1173731BEB9A00F5AEDD9E5562568B5 *)Castclass((RuntimeObject*)L_90, IL2CPP_RGCTX_DATA(method->rgctx_data, 5))), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_91, (InputControl_1_t954AC19A3B0B509A6E4F4EF4B7F15451FA1FB14B *)L_92);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_93;
		int32_t L_94 = V_11;
		V_11 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_95 = V_11;
		int32_t L_96 = V_2;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_01a4;
		}
	}

IL_01c8:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_97 = V_0;
		return L_97;
	}
}
// TValue UnityEngine.Experimental.Input.InputBindingCompositeContext::ReadValue<System.Single>(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float InputBindingCompositeContext_ReadValue_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mC4389A2DEADE8A3940979F0BFE001D24B60C5113_gshared (InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 * __this, int32_t ___partNumber0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * L_0 = (InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this->get_m_State_0();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC * L_2 = (InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)__this->get_m_State_0();
		int32_t L_3 = (int32_t)__this->get_m_BindingIndex_1();
		int32_t L_4 = ___partNumber0;
		NullCheck((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)L_2);
		float L_5 = ((  float (*) (InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_t5568F30275572A5CAE381EFF238EA399CA896EAC *)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
extern "C"  float InputBindingCompositeContext_ReadValue_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mC4389A2DEADE8A3940979F0BFE001D24B60C5113_AdjustorThunk (RuntimeObject * __this, int32_t ___partNumber0, const RuntimeMethod* method)
{
	InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 * _thisAdjusted = reinterpret_cast<InputBindingCompositeContext_tD3035BE8C9C5FB3AA2C15DA05D49DFD588C11385 *>(__this + 1);
	return InputBindingCompositeContext_ReadValue_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mC4389A2DEADE8A3940979F0BFE001D24B60C5113(_thisAdjusted, ___partNumber0, method);
}
// TValue UnityEngine.Experimental.Input.Plugins.PlayerInput.InputValue::Get<System.Single>()
extern "C" IL2CPP_METHOD_ATTR float InputValue_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m43D519B432C16E54E8050FFB0ED3BF7467FC8F9D_gshared (InputValue_tC2638DF7FDAB22F6AB1A1FC08F85DA4380B698A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputValue_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m43D519B432C16E54E8050FFB0ED3BF7467FC8F9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 * L_0 = (Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 *)__this->get_address_of_m_Context_0();
		bool L_1 = Nullable_1_get_HasValue_m471F36A6A3ED6629C9AAD3F28A85AF68CD1B5B98((Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 *)(Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m471F36A6A3ED6629C9AAD3F28A85AF68CD1B5B98_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_2, (String_t*)_stringLiteral7CB639FED5C0F2FC979463FA355E473AD2CCCDAE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, InputValue_Get_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m43D519B432C16E54E8050FFB0ED3BF7467FC8F9D_RuntimeMethod_var);
	}

IL_0018:
	{
		Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 * L_3 = (Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 *)__this->get_address_of_m_Context_0();
		CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2  L_4 = Nullable_1_get_Value_mF740A466EBC8CEA9A335149B81C91C9E04D553A9((Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 *)(Nullable_1_t4027756F992C11A9BB61104B56AAC18EDD15CE79 *)L_3, /*hidden argument*/Nullable_1_get_Value_mF740A466EBC8CEA9A335149B81C91C9E04D553A9_RuntimeMethod_var);
		V_0 = (CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2 )L_4;
		float L_5 = CallbackContext_ReadValue_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m6214980C6D03863539E13B6688319F409D94CD3D((CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2 *)(CallbackContext_tB2C08ACB0E6D89F4022E4445202D49E88F5F34C2 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_5;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Clone<System.Object>(TValue[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ArrayHelpers_Clone_TisRuntimeObject_m5B35A203B82B86A055093B50946359F063ABF884_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArrayHelpers_Clone_TisRuntimeObject_m5B35A203B82B86A055093B50946359F063ABF884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL;
	}

IL_0005:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___array0;
		NullCheck(L_1);
		V_0 = (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		int32_t L_2 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_2);
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		V_2 = (int32_t)0;
		goto IL_0038;
	}

IL_0014:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_1;
		int32_t L_5 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___array0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		NullCheck((RuntimeObject*)(*((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))));
		RuntimeObject * L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.ICloneable::Clone() */, ICloneable_tB0EF2757D90DF969033D641822566814815EB134_il2cpp_TypeInfo_var, (RuntimeObject*)(*((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_9 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0038:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0014;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_1;
		return L_12;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Copy<System.Object>(TValue[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ArrayHelpers_Copy_TisRuntimeObject_mC6A84DF4C0D60B1A9C0F96CCA4D5F4AC88298173_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL;
	}

IL_0005:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___array0;
		NullCheck(L_1);
		V_0 = (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		int32_t L_2 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_2);
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___array0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_1;
		int32_t L_6 = V_0;
		Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = V_1;
		return L_7;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Copy<System.Runtime.InteropServices.GCHandle>(TValue[])
extern "C" IL2CPP_METHOD_ATTR GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* ArrayHelpers_Copy_TisGCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3_mF0ECB37F6D617BFDE6EB596025A26F8920793E87_gshared (GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* ___array0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* V_1 = NULL;
	{
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB*)NULL;
	}

IL_0005:
	{
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_1 = ___array0;
		NullCheck(L_1);
		V_0 = (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		int32_t L_2 = V_0;
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_3 = (GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_2);
		V_1 = (GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB*)L_3;
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_4 = ___array0;
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_5 = V_1;
		int32_t L_6 = V_0;
		Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_7 = V_1;
		return L_7;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Copy<System.UInt64>(TValue[])
extern "C" IL2CPP_METHOD_ATTR UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* ArrayHelpers_Copy_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m03E5D1495AFD2B8F03A4B5FE4FE0E53A14CD8C14_gshared (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* ___array0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* V_1 = NULL;
	{
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)NULL;
	}

IL_0005:
	{
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_1 = ___array0;
		NullCheck(L_1);
		V_0 = (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		int32_t L_2 = V_0;
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_3 = (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_2);
		V_1 = (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)L_3;
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_4 = ___array0;
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_5 = V_1;
		int32_t L_6 = V_0;
		Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_7 = V_1;
		return L_7;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Copy<UnityEngine.Experimental.Input.InputManager_StateChangeMonitorTimeout>(TValue[])
extern "C" IL2CPP_METHOD_ATTR StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* ArrayHelpers_Copy_TisStateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2_m48E27544DFE6FDB4A97501D6B8991B62A314CB34_gshared (StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* ___array0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* V_1 = NULL;
	{
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E*)NULL;
	}

IL_0005:
	{
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_1 = ___array0;
		NullCheck(L_1);
		V_0 = (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		int32_t L_2 = V_0;
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_3 = (StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_2);
		V_1 = (StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E*)L_3;
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_4 = ___array0;
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_5 = V_1;
		int32_t L_6 = V_0;
		Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_7 = V_1;
		return L_7;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Copy<UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl_OnScreenDeviceInfo>(TValue[])
extern "C" IL2CPP_METHOD_ATTR OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* ArrayHelpers_Copy_TisOnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9_mAEDD0821E1BD3C30998D71EAFA522F7840E7CC3F_gshared (OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* ___array0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* V_1 = NULL;
	{
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB*)NULL;
	}

IL_0005:
	{
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_1 = ___array0;
		NullCheck(L_1);
		V_0 = (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		int32_t L_2 = V_0;
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_3 = (OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_2);
		V_1 = (OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB*)L_3;
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_4 = ___array0;
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_5 = V_1;
		int32_t L_6 = V_0;
		Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_7 = V_1;
		return L_7;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Copy<UnityEngine.Experimental.Input.Plugins.Users.InputUser_OngoingAccountSelection>(TValue[])
extern "C" IL2CPP_METHOD_ATTR OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* ArrayHelpers_Copy_TisOngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_mD00D22ED4F37EA973D6D82C2674751DB4BFC7920_gshared (OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* ___array0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* V_1 = NULL;
	{
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152*)NULL;
	}

IL_0005:
	{
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_1 = ___array0;
		NullCheck(L_1);
		V_0 = (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		int32_t L_2 = V_0;
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_3 = (OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_2);
		V_1 = (OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152*)L_3;
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_4 = ___array0;
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_5 = V_1;
		int32_t L_6 = V_0;
		Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_7 = V_1;
		return L_7;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Copy<UnityEngine.Experimental.Input.Utilities.InternedString>(TValue[])
extern "C" IL2CPP_METHOD_ATTR InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ArrayHelpers_Copy_TisInternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE_mD9312A4F4F367B22B40D1E5F54DFA4294E956316_gshared (InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ___array0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* V_1 = NULL;
	{
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384*)NULL;
	}

IL_0005:
	{
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_1 = ___array0;
		NullCheck(L_1);
		V_0 = (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		int32_t L_2 = V_0;
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_3 = (InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_2);
		V_1 = (InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384*)L_3;
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_4 = ___array0;
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_5 = V_1;
		int32_t L_6 = V_0;
		Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_7 = V_1;
		return L_7;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Join<System.Object>(TValue,TValue[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ArrayHelpers_Join_TisRuntimeObject_m6393A74BE396E65BAB925747CBD1A4DCEEBA8157_gshared (RuntimeObject * ___value0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (int32_t)0;
		RuntimeObject * L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___values1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values1;
		NullCheck(L_4);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
	}

IL_0017:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL;
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_6);
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_7;
		V_2 = (int32_t)0;
		RuntimeObject * L_8 = ___value0;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = (int32_t)L_10;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		RuntimeObject * L_12 = ___value0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (RuntimeObject *)L_12);
	}

IL_0039:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = ___values1;
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = ___values1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = V_1;
		int32_t L_16 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = ___values1;
		NullCheck(L_17);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_14, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_15, (int32_t)L_16, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))), /*hidden argument*/NULL);
	}

IL_0048:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = V_1;
		return L_18;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Join<System.Runtime.InteropServices.GCHandle>(TValue,TValue[])
extern "C" IL2CPP_METHOD_ATTR GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* ArrayHelpers_Join_TisGCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3_m5060736FE989FCE861D34EC727B856F4C1F3CCF8_gshared (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___value0, GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* ___values1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (int32_t)0;
	}
	{
		int32_t L_1 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_000e:
	{
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_2 = ___values1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_4 = ___values1;
		NullCheck(L_4);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
	}

IL_0017:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		return (GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB*)NULL;
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_7 = (GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_6);
		V_1 = (GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB*)L_7;
		V_2 = (int32_t)0;
	}
	{
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = (int32_t)L_10;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_12 = ___value0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 )L_12);
	}

IL_0039:
	{
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_13 = ___values1;
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_14 = ___values1;
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_15 = V_1;
		int32_t L_16 = V_2;
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_17 = ___values1;
		NullCheck(L_17);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_14, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_15, (int32_t)L_16, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))), /*hidden argument*/NULL);
	}

IL_0048:
	{
		GCHandleU5BU5D_tAE7F4D24EA18C49A20B43A8260A53318150611CB* L_18 = V_1;
		return L_18;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Join<System.UInt64>(TValue,TValue[])
extern "C" IL2CPP_METHOD_ATTR UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* ArrayHelpers_Join_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m97F73BD364E34C7B4928EF01BE179D52EEB8D69C_gshared (uint64_t ___value0, UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* ___values1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (int32_t)0;
	}
	{
		int32_t L_1 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_000e:
	{
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_2 = ___values1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_4 = ___values1;
		NullCheck(L_4);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
	}

IL_0017:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		return (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)NULL;
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_7 = (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_6);
		V_1 = (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)L_7;
		V_2 = (int32_t)0;
	}
	{
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = (int32_t)L_10;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		uint64_t L_12 = ___value0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint64_t)L_12);
	}

IL_0039:
	{
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_13 = ___values1;
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_14 = ___values1;
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_15 = V_1;
		int32_t L_16 = V_2;
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_17 = ___values1;
		NullCheck(L_17);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_14, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_15, (int32_t)L_16, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))), /*hidden argument*/NULL);
	}

IL_0048:
	{
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_18 = V_1;
		return L_18;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Join<UnityEngine.Experimental.Input.InputManager_StateChangeMonitorTimeout>(TValue,TValue[])
extern "C" IL2CPP_METHOD_ATTR StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* ArrayHelpers_Join_TisStateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2_m62E5C31231F43BF62C9C37D25CDB97783C2A9055_gshared (StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2  ___value0, StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* ___values1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (int32_t)0;
	}
	{
		int32_t L_1 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_000e:
	{
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_2 = ___values1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_4 = ___values1;
		NullCheck(L_4);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
	}

IL_0017:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		return (StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E*)NULL;
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_7 = (StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_6);
		V_1 = (StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E*)L_7;
		V_2 = (int32_t)0;
	}
	{
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = (int32_t)L_10;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2  L_12 = ___value0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (StateChangeMonitorTimeout_t6CAEB053F8AC6CCFE709A5116005493966F9C9B2 )L_12);
	}

IL_0039:
	{
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_13 = ___values1;
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_14 = ___values1;
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_15 = V_1;
		int32_t L_16 = V_2;
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_17 = ___values1;
		NullCheck(L_17);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_14, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_15, (int32_t)L_16, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))), /*hidden argument*/NULL);
	}

IL_0048:
	{
		StateChangeMonitorTimeoutU5BU5D_t12F2957D8CBCD6B5B153D9B695649FC58DC0499E* L_18 = V_1;
		return L_18;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Join<UnityEngine.Experimental.Input.Plugins.OnScreen.OnScreenControl_OnScreenDeviceInfo>(TValue,TValue[])
extern "C" IL2CPP_METHOD_ATTR OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* ArrayHelpers_Join_TisOnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9_m079ED1523AEB1AC15604C94AFA07B850C93C1E32_gshared (OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9  ___value0, OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* ___values1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (int32_t)0;
	}
	{
		int32_t L_1 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_000e:
	{
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_2 = ___values1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_4 = ___values1;
		NullCheck(L_4);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
	}

IL_0017:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		return (OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB*)NULL;
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_7 = (OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_6);
		V_1 = (OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB*)L_7;
		V_2 = (int32_t)0;
	}
	{
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = (int32_t)L_10;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9  L_12 = ___value0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (OnScreenDeviceInfo_tA15227DD9577E210A11D51685EBFBB17CCD47BD9 )L_12);
	}

IL_0039:
	{
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_13 = ___values1;
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_14 = ___values1;
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_15 = V_1;
		int32_t L_16 = V_2;
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_17 = ___values1;
		NullCheck(L_17);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_14, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_15, (int32_t)L_16, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))), /*hidden argument*/NULL);
	}

IL_0048:
	{
		OnScreenDeviceInfoU5BU5D_t37250BEB26515FA1560F9F248BB4A224653403BB* L_18 = V_1;
		return L_18;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Join<UnityEngine.Experimental.Input.Plugins.Users.InputUser_OngoingAccountSelection>(TValue,TValue[])
extern "C" IL2CPP_METHOD_ATTR OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* ArrayHelpers_Join_TisOngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53_m3A62DC8869E2F0CFE02F59E931692E4D3C1D65ED_gshared (OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53  ___value0, OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* ___values1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (int32_t)0;
	}
	{
		int32_t L_1 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_000e:
	{
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_2 = ___values1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_4 = ___values1;
		NullCheck(L_4);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
	}

IL_0017:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		return (OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152*)NULL;
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_7 = (OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_6);
		V_1 = (OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152*)L_7;
		V_2 = (int32_t)0;
	}
	{
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = (int32_t)L_10;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53  L_12 = ___value0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (OngoingAccountSelection_tBC75815ACEA11E0AD7D7E9A448DA58A0129C3E53 )L_12);
	}

IL_0039:
	{
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_13 = ___values1;
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_14 = ___values1;
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_15 = V_1;
		int32_t L_16 = V_2;
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_17 = ___values1;
		NullCheck(L_17);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_14, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_15, (int32_t)L_16, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))), /*hidden argument*/NULL);
	}

IL_0048:
	{
		OngoingAccountSelectionU5BU5D_t1BBC74CB4268052FA74011CE37C87FFA9866E152* L_18 = V_1;
		return L_18;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Join<UnityEngine.Experimental.Input.Utilities.InternedString>(TValue,TValue[])
extern "C" IL2CPP_METHOD_ATTR InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ArrayHelpers_Join_TisInternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE_m20BE945E5E71C0FD8EE69F595B15012681218A50_gshared (InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  ___value0, InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ___values1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (int32_t)0;
	}
	{
		int32_t L_1 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_000e:
	{
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_2 = ___values1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_4 = ___values1;
		NullCheck(L_4);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
	}

IL_0017:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		return (InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384*)NULL;
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_7 = (InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_6);
		V_1 = (InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384*)L_7;
		V_2 = (int32_t)0;
	}
	{
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = (int32_t)L_10;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  L_12 = ___value0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE )L_12);
	}

IL_0039:
	{
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_13 = ___values1;
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_14 = ___values1;
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_15 = V_1;
		int32_t L_16 = V_2;
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_17 = ___values1;
		NullCheck(L_17);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_14, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_15, (int32_t)L_16, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))), /*hidden argument*/NULL);
	}

IL_0048:
	{
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_18 = V_1;
		return L_18;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Merge<System.Object>(TValue[],TValue[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ArrayHelpers_Merge_TisRuntimeObject_m8474B542243F1511B9CDD6808C88851E68FCC945_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___first0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___second1, const RuntimeMethod* method)
{
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_0 = NULL;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass26_0_1_t46A34562CE0AAEF22893264746E8601066376919 * V_2 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___first0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___second1;
		return L_1;
	}

IL_0005:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___second1;
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___first0;
		return L_3;
	}

IL_000a:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___first0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_1 = (int32_t)0;
		goto IL_0052;
	}

IL_001b:
	{
		U3CU3Ec__DisplayClass26_0_1_t46A34562CE0AAEF22893264746E8601066376919 * L_7 = (U3CU3Ec__DisplayClass26_0_1_t46A34562CE0AAEF22893264746E8601066376919 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (U3CU3Ec__DisplayClass26_0_1_t46A34562CE0AAEF22893264746E8601066376919 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_2 = (U3CU3Ec__DisplayClass26_0_1_t46A34562CE0AAEF22893264746E8601066376919 *)L_7;
		U3CU3Ec__DisplayClass26_0_1_t46A34562CE0AAEF22893264746E8601066376919 * L_8 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = ___second1;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		L_8->set_secondValue_0(L_12);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_13 = V_0;
		U3CU3Ec__DisplayClass26_0_1_t46A34562CE0AAEF22893264746E8601066376919 * L_14 = V_2;
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_15 = (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 6));
		((  void (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7)->methodPointer)(L_15, (RuntimeObject *)L_14, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7));
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_13);
		bool L_16 = ((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_13, (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8));
		if (L_16)
		{
			goto IL_004e;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_17 = V_0;
		U3CU3Ec__DisplayClass26_0_1_t46A34562CE0AAEF22893264746E8601066376919 * L_18 = V_2;
		NullCheck(L_18);
		RuntimeObject * L_19 = (RuntimeObject *)L_18->get_secondValue_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_17);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_17, (RuntimeObject *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9));
	}

IL_004e:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_21 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = ___second1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_23 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_23);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 10));
		return L_24;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Merge<System.Object>(TValue[],TValue[],System.Collections.Generic.IEqualityComparer`1<TValue>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ArrayHelpers_Merge_TisRuntimeObject_m21E70CEE198D74772B70F6C155C603D1F4A9D4F8_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___first0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___second1, RuntimeObject* ___comparer2, const RuntimeMethod* method)
{
	U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77 * V_0 = NULL;
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_1 = NULL;
	int32_t V_2 = 0;
	U3CU3Ec__DisplayClass27_1_1_tDB47225E1DCC72375D50800BC28E520C1481ABD5 * V_3 = NULL;
	{
		U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77 * L_0 = (U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77 *)L_0;
		U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77 * L_1 = V_0;
		RuntimeObject* L_2 = ___comparer2;
		NullCheck(L_1);
		L_1->set_comparer_0(L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___first0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___second1;
		return L_4;
	}

IL_0012:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ___second1;
		if (L_5)
		{
			goto IL_0017;
		}
	}
	{
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL;
	}

IL_0017:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_6 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		V_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_7 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = ___first0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7, (RuntimeObject*)(RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_2 = (int32_t)0;
		goto IL_0066;
	}

IL_0028:
	{
		U3CU3Ec__DisplayClass27_1_1_tDB47225E1DCC72375D50800BC28E520C1481ABD5 * L_9 = (U3CU3Ec__DisplayClass27_1_1_tDB47225E1DCC72375D50800BC28E520C1481ABD5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 5));
		((  void (*) (U3CU3Ec__DisplayClass27_1_1_tDB47225E1DCC72375D50800BC28E520C1481ABD5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)(L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		V_3 = (U3CU3Ec__DisplayClass27_1_1_tDB47225E1DCC72375D50800BC28E520C1481ABD5 *)L_9;
		U3CU3Ec__DisplayClass27_1_1_tDB47225E1DCC72375D50800BC28E520C1481ABD5 * L_10 = V_3;
		U3CU3Ec__DisplayClass27_0_1_t000DBFAA8B59BB6D759E147F13020966DE57CF77 * L_11 = V_0;
		NullCheck(L_10);
		L_10->set_CSU24U3CU3E8__locals1_1(L_11);
		U3CU3Ec__DisplayClass27_1_1_tDB47225E1DCC72375D50800BC28E520C1481ABD5 * L_12 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = ___second1;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		L_12->set_secondValue_0(L_16);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_17 = V_1;
		U3CU3Ec__DisplayClass27_1_1_tDB47225E1DCC72375D50800BC28E520C1481ABD5 * L_18 = V_3;
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_19 = (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 8));
		((  void (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9)->methodPointer)(L_19, (RuntimeObject *)L_18, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9));
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_17);
		bool L_20 = ((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_17, (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 10));
		if (L_20)
		{
			goto IL_0062;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_21 = V_1;
		U3CU3Ec__DisplayClass27_1_1_tDB47225E1DCC72375D50800BC28E520C1481ABD5 * L_22 = V_3;
		NullCheck(L_22);
		RuntimeObject * L_23 = (RuntimeObject *)L_22->get_secondValue_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 11)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21, (RuntimeObject *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 11));
	}

IL_0062:
	{
		int32_t L_24 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0066:
	{
		int32_t L_25 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = ___second1;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_27 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_27);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_27, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 12));
		return L_28;
	}
}
// TValue[] UnityEngine.Experimental.Input.Utilities.ArrayHelpers::Merge<UnityEngine.Experimental.Input.Utilities.InternedString>(TValue[],TValue[])
extern "C" IL2CPP_METHOD_ATTR InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ArrayHelpers_Merge_TisInternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE_m0415FD87B41944752834E4F40BB0A4C1F20DEDF0_gshared (InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ___first0, InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* ___second1, const RuntimeMethod* method)
{
	List_1_t82FE44828FE0E756353252A5BD7380719CCE154D * V_0 = NULL;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass26_0_1_tDC97F85D29580FDB40E7C733F6166804E895AEBF * V_2 = NULL;
	{
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_0 = ___first0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_1 = ___second1;
		return L_1;
	}

IL_0005:
	{
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_2 = ___second1;
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_3 = ___first0;
		return L_3;
	}

IL_000a:
	{
		List_1_t82FE44828FE0E756353252A5BD7380719CCE154D * L_4 = (List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *)L_4;
		List_1_t82FE44828FE0E756353252A5BD7380719CCE154D * L_5 = V_0;
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_6 = ___first0;
		NullCheck((List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *)L_5);
		((  void (*) (List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *)L_5, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_1 = (int32_t)0;
		goto IL_0052;
	}

IL_001b:
	{
		U3CU3Ec__DisplayClass26_0_1_tDC97F85D29580FDB40E7C733F6166804E895AEBF * L_7 = (U3CU3Ec__DisplayClass26_0_1_tDC97F85D29580FDB40E7C733F6166804E895AEBF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (U3CU3Ec__DisplayClass26_0_1_tDC97F85D29580FDB40E7C733F6166804E895AEBF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_2 = (U3CU3Ec__DisplayClass26_0_1_tDC97F85D29580FDB40E7C733F6166804E895AEBF *)L_7;
		U3CU3Ec__DisplayClass26_0_1_tDC97F85D29580FDB40E7C733F6166804E895AEBF * L_8 = V_2;
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_9 = ___second1;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		L_8->set_secondValue_0(L_12);
		List_1_t82FE44828FE0E756353252A5BD7380719CCE154D * L_13 = V_0;
		U3CU3Ec__DisplayClass26_0_1_tDC97F85D29580FDB40E7C733F6166804E895AEBF * L_14 = V_2;
		Predicate_1_t3333496E2F2FA4644BD0542FABED4A4F600D860A * L_15 = (Predicate_1_t3333496E2F2FA4644BD0542FABED4A4F600D860A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 6));
		((  void (*) (Predicate_1_t3333496E2F2FA4644BD0542FABED4A4F600D860A *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7)->methodPointer)(L_15, (RuntimeObject *)L_14, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7));
		NullCheck((List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *)L_13);
		bool L_16 = ((  bool (*) (List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *, Predicate_1_t3333496E2F2FA4644BD0542FABED4A4F600D860A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8)->methodPointer)((List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *)L_13, (Predicate_1_t3333496E2F2FA4644BD0542FABED4A4F600D860A *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8));
		if (L_16)
		{
			goto IL_004e;
		}
	}
	{
		List_1_t82FE44828FE0E756353252A5BD7380719CCE154D * L_17 = V_0;
		U3CU3Ec__DisplayClass26_0_1_tDC97F85D29580FDB40E7C733F6166804E895AEBF * L_18 = V_2;
		NullCheck(L_18);
		InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  L_19 = (InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE )L_18->get_secondValue_0();
		NullCheck((List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *)L_17);
		((  void (*) (List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *, InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9)->methodPointer)((List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *)L_17, (InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE )L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 9));
	}

IL_004e:
	{
		int32_t L_20 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_21 = V_1;
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_22 = ___second1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		List_1_t82FE44828FE0E756353252A5BD7380719CCE154D * L_23 = V_0;
		NullCheck((List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *)L_23);
		InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* L_24 = ((  InternedStringU5BU5D_t25D3A3EEECB110CA0DDC195DB3D231959DAFB384* (*) (List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 10)->methodPointer)((List_1_t82FE44828FE0E756353252A5BD7380719CCE154D *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 10));
		return L_24;
	}
}
// T[] Pathfinding.Util.ListExtensions::ToArrayFromPool<Pathfinding.Connection>(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679* ListExtensions_ToArrayFromPool_TisConnection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_m239FFAF37F7CCD0E3B792854B83A72F6916BFBD2_gshared (List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3 * ___list0, const RuntimeMethod* method)
{
	ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3 * L_0 = ___list0;
		NullCheck((List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3 *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679* L_2 = ((  ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679* (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679*)L_2;
		V_1 = (int32_t)0;
		goto IL_0022;
	}

IL_0010:
	{
		ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679* L_3 = V_0;
		int32_t L_4 = V_1;
		List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3 * L_5 = ___list0;
		int32_t L_6 = V_1;
		NullCheck((List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3 *)L_5);
		Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B  L_7 = ((  Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B  (*) (List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t7A84F73E8DC1F7CD4EAEF0D2B8269512F4FCABE3 *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B )L_7);
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0022:
	{
		int32_t L_9 = V_1;
		ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		ConnectionU5BU5D_tF184666BF56F1EA579DA1995EF8F1AF228E00679* L_11 = V_0;
		return L_11;
	}
}
// T[] Pathfinding.Util.ListExtensions::ToArrayFromPool<System.Object>(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ListExtensions_ToArrayFromPool_TisRuntimeObject_m4F3C17030240DB0B196AFBE091CD119BB29B28DE_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___list0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		V_1 = (int32_t)0;
		goto IL_0022;
	}

IL_0010:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		int32_t L_4 = V_1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = ___list0;
		int32_t L_6 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5);
		RuntimeObject * L_7 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject *)L_7);
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0022:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_0;
		return L_11;
	}
}
// T[] Pathfinding.Util.Memory::ShrinkArray<System.Object>(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Memory_ShrinkArray_TisRuntimeObject_m34D2B33E456E3CE3EAC855603B47DDC6A0301FB4_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___arr0, int32_t ___newLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Memory_ShrinkArray_TisRuntimeObject_m34D2B33E456E3CE3EAC855603B47DDC6A0301FB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		int32_t L_0 = ___newLength1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___arr0;
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_2 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525((int32_t)L_0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		___newLength1 = (int32_t)L_2;
		int32_t L_3 = ___newLength1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ___arr0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = V_0;
		int32_t L_7 = ___newLength1;
		Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_5, (RuntimeArray *)(RuntimeArray *)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = V_0;
		return L_8;
	}
}
// T[] System.Array::Empty<Pathfinding.GraphUpdateProcessor_GUOSingle>()
extern "C" IL2CPP_METHOD_ATTR GUOSingleU5BU5D_tE4141A46A423610509D84978B9302FDA023F60F6* Array_Empty_TisGUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_mD503A8FF9065F45B0624ED2CCBA97EC4407CE2CC_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		GUOSingleU5BU5D_tE4141A46A423610509D84978B9302FDA023F60F6* L_0 = ((EmptyArray_1_tE2F2D2C2589B4F671AFF48ACE7A711E90D08C957_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Char>()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* Array_Empty_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mB69B3E7C1276AE609F2B9FA977634893619F966D_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = ((EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Int32>()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* Array_Empty_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m5066C2C3DF88F26B4EC031F72604B15F5D7D5493_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = ((EmptyArray_1_t0CF75D058B9309A45D99E4F49D7BA4B2C9331D0C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B9_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B10_1 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_000e:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, (String_t*)_stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_001c:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
		V_2 = (int32_t)0;
		goto IL_006b;
	}

IL_0028:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_5 = ___match1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___array0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5);
		bool L_10 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_11 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_1;
		NullCheck(L_12);
		if ((!(((uint32_t)L_11) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_13 = V_0;
		G_B8_0 = (&V_1);
		if (!L_13)
		{
			G_B9_0 = (&V_1);
			goto IL_0047;
		}
	}
	{
		int32_t L_14 = V_0;
		G_B10_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2));
		G_B10_1 = G_B8_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B10_0 = 4;
		G_B10_1 = G_B9_0;
	}

IL_0048:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = ___array0;
		NullCheck(L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_16 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525((int32_t)G_B10_0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))), /*hidden argument*/NULL);
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)G_B10_1, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0055:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_1;
		int32_t L_18 = V_0;
		int32_t L_19 = (int32_t)L_18;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = ___array0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject *)L_23);
	}

IL_0067:
	{
		int32_t L_24 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_25 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = ___array0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_27 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_29 = V_0;
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(&V_1), (int32_t)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = V_1;
		return L_30;
	}
}
// T[] System.Collections.Generic.EnumerableHelpers::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* EnumerableHelpers_ToArray_TisRuntimeObject_m0C9E5CDDF9B4066E9FC751A904CF977FD78A14EB_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_0 = (RuntimeObject*)L_1;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2);
		V_2 = (int32_t)L_3;
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (uint32_t)L_6);
		V_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_7;
		RuntimeObject* L_8 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		InterfaceActionInvoker2< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_8, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_9, (int32_t)0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = V_3;
		return L_10;
	}

IL_002b:
	{
		LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310((LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(&V_1), (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		RuntimeObject* L_11 = ___source0;
		LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5((LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(&V_1), (RuntimeObject*)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E((LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return L_12;
	}
}
// T[] System.Dynamic.Utils.CollectionExtensions::RemoveFirst<System.Object>(T[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CollectionExtensions_RemoveFirst_TisRuntimeObject_m05278467A5F0AA59D6F8E6AC5FCC92EEFE2B5B70_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)1)));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___array0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		NullCheck(L_4);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_2, (int32_t)1, (RuntimeArray *)(RuntimeArray *)L_3, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_0;
		return L_5;
	}
}
// T[] System.Dynamic.Utils.CollectionExtensions::RemoveLast<System.Object>(T[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CollectionExtensions_RemoveLast_TisRuntimeObject_mB0B7A94B3575C8674282F02A28E49DC416FC147A_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)1)));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___array0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		NullCheck(L_4);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_2, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_3, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_0;
		return L_5;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CustomAttributeData_UnboxValues_TisRuntimeObject_mFB1257FB7BD27255281B2111A20203E3A93E7050_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_mC152FBD94252DA2417B7773AE16C51154C9F6A72_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_1 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E )((*(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)((CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
extern "C" IL2CPP_METHOD_ATTR CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_m846F81B95C445180214406E0D355EBA8EC9644D1_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_1 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 )((*(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)((CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_11 = V_0;
		return L_11;
	}
}
// T[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_mC1990520B7718DB9F2D68839716E6853645566FC_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		return L_2;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m8EDDAD383E0869517344FACCD43A329D35AAA0CE_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponents_TisRuntimeObject_m199B72A002ECBCA128D9490B3B1FBE35BA0E1181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_2 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)0, (bool)1, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_m615406921CD720805AC5F99C672532A31C81D1C7_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000e;
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return L_1;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_mF8264046D64101403390F97A2EAC7D36EA15D502_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInChildren_TisRuntimeObject_mF8264046D64101403390F97A2EAC7D36EA15D502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_mA5F18E3462F04632978FDE240F85E28A870C2B2F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_mB70F49316410928344D97591B36FEF0E8F7A9F21_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color32>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* Mesh_GetAllocArrayFromChannel_TisColor32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_mBD28E289F6DA9261F8B48C346E498E4CE24131C9_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)((Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_8 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5C40565F81077409CEBD6BB7B2C5ABC02A44F0A8_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_3 = ((  Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m2F05741DD1B1A6FA9D8A822335B3AFF732E51535_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_8 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m2A198BF0F2DF179DF0C126C5A0BAFA1B75765F4E_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ((  Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m6941226C08A606477C40149880CDB6D9D7142485_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_8 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute)
extern "C" IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_mBDD94A90E9F34CAC60C6B772992E35F66EF2D64D_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_3 = ((  Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m3CF4E55B415536795AD1C1C3B620AE9546B674AF_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_8 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_mE570B614F68E0A19BD5F65061CDA9BEE6EDBD159_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_FindObjectsOfType_TisRuntimeObject_mE570B614F68E0A19BD5F65061CDA9BEE6EDBD159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203((Type_t *)L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_001b;
	}

IL_001b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Resources_ConvertObjects_TisRuntimeObject_m94711E44E9B970084C63588FDEBE3D295D14A0DA_gshared (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* ___rawObjects0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_0 = ___rawObjects0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL;
		goto IL_0041;
	}

IL_000e:
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_1 = ___rawObjects0;
		NullCheck(L_1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		V_2 = (int32_t)0;
		goto IL_0031;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_1;
		int32_t L_4 = V_2;
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_5 = ___rawObjects0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_9 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_10 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_1;
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_12;
		goto IL_0041;
	}

IL_0041:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = V_0;
		return L_13;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
extern "C" IL2CPP_METHOD_ATTR NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m8CBD2A205B8E33F2C70E9F42F54D0AE00BB805A0_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  V_0;
	memset(&V_0, 0, sizeof(V_0));
	NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  V_1;
	memset(&V_1, 0, sizeof(V_1));
	NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  L_3 = V_1;
		V_0 = (NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE )L_3;
		NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  L_4 = V_0;
		V_2 = (NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_tB6F81A87EBCD8958AF30E15FACF167CE524DEABE  L_5 = V_2;
		return L_5;
	}
}
// UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation UnityEngine.Experimental.Input.InputActionRebindingExtensions_RebindingOperation::WithExpectedControlType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117 * RebindingOperation_WithExpectedControlType_TisRuntimeObject_mC8A2945650DAE5B60AFB382696FB00961305A446_gshared (RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RebindingOperation_WithExpectedControlType_TisRuntimeObject_mC8A2945650DAE5B60AFB382696FB00961305A446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		NullCheck((RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117 *)__this);
		RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117 * L_2 = RebindingOperation_WithExpectedControlType_m5EA8FDA2E6CB02B03CF65F6CE1E82F40C2030816((RebindingOperation_t45234317F43061C73263B22FEF2B873523F25117 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Experimental.Input.InputActionSetupExtensions_BindingSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions_BindingSyntax::WithInteraction<System.Object>()
extern "C" IL2CPP_METHOD_ATTR BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  BindingSyntax_WithInteraction_TisRuntimeObject_m26E2CB1AC600331B016AD40386F6D82AEF5038F2_gshared (BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BindingSyntax_WithInteraction_TisRuntimeObject_m26E2CB1AC600331B016AD40386F6D82AEF5038F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  L_2 = TypeTable_FindNameForType_m27FC99FA7459CD609492F03A67630BE4A7EFE0C4((TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688 *)(TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688 *)(((InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE )L_2;
		bool L_3 = InternedString_IsEmpty_mD911516AA0584E4F15B3A3CD32B38132CB10CBFA((InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE *)(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE *)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA((String_t*)_stringLiteral9FA2A91B7D120B60A8043F12A2BB1D5C64E7C4EF, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_7, (String_t*)L_6, (String_t*)_stringLiteralD5938A9EA685DE9CA7FEEA9D049765F466CE18DA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, BindingSyntax_WithInteraction_TisRuntimeObject_m26E2CB1AC600331B016AD40386F6D82AEF5038F2_RuntimeMethod_var);
	}

IL_003d:
	{
		InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  L_8 = V_0;
		String_t* L_9 = InternedString_op_Implicit_m3530BD5B32DAAB5960B17A7A7B73B3E7CE989642((InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE )L_8, /*hidden argument*/NULL);
		BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  L_10 = BindingSyntax_WithInteraction_m98CA0C5BF9D0146180A479D39C7646F5ADB4FFEB((BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 *)(BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 *)__this, (String_t*)L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
extern "C"  BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  BindingSyntax_WithInteraction_TisRuntimeObject_m26E2CB1AC600331B016AD40386F6D82AEF5038F2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 * _thisAdjusted = reinterpret_cast<BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 *>(__this + 1);
	return BindingSyntax_WithInteraction_TisRuntimeObject_m26E2CB1AC600331B016AD40386F6D82AEF5038F2(_thisAdjusted, method);
}
// UnityEngine.Experimental.Input.InputActionSetupExtensions_BindingSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions_BindingSyntax::WithProcessor<System.Object>()
extern "C" IL2CPP_METHOD_ATTR BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  BindingSyntax_WithProcessor_TisRuntimeObject_m540ACF13EF811CC374ABE606077C07C1EAA06DD4_gshared (BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BindingSyntax_WithProcessor_TisRuntimeObject_m540ACF13EF811CC374ABE606077C07C1EAA06DD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  L_2 = TypeTable_FindNameForType_m27FC99FA7459CD609492F03A67630BE4A7EFE0C4((TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688 *)(TypeTable_t5606B8BE60C7FBD680E4EC7867D8FC22D88A1688 *)(((InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t4A15B04D6A59FC3BC2DF0ECBA275273A57046B78_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE )L_2;
		bool L_3 = InternedString_IsEmpty_mD911516AA0584E4F15B3A3CD32B38132CB10CBFA((InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE *)(InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE *)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA((String_t*)_stringLiteral9FA2A91B7D120B60A8043F12A2BB1D5C64E7C4EF, (RuntimeObject *)L_5, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_7, (String_t*)L_6, (String_t*)_stringLiteral1CF92493FFFB39A56C9294A9A50E0BC302612024, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, BindingSyntax_WithProcessor_TisRuntimeObject_m540ACF13EF811CC374ABE606077C07C1EAA06DD4_RuntimeMethod_var);
	}

IL_003d:
	{
		InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  L_8 = V_0;
		String_t* L_9 = InternedString_op_Implicit_m3530BD5B32DAAB5960B17A7A7B73B3E7CE989642((InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE )L_8, /*hidden argument*/NULL);
		BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  L_10 = BindingSyntax_WithProcessor_mAFB50675C62399BA5498308F7CEFD6B73841C393((BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 *)(BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 *)__this, (String_t*)L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
extern "C"  BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51  BindingSyntax_WithProcessor_TisRuntimeObject_m540ACF13EF811CC374ABE606077C07C1EAA06DD4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 * _thisAdjusted = reinterpret_cast<BindingSyntax_tE1201B89368856DA18195A2F3D198BE08E680C51 *>(__this + 1);
	return BindingSyntax_WithProcessor_TisRuntimeObject_m540ACF13EF811CC374ABE606077C07C1EAA06DD4(_thisAdjusted, method);
}
// UnityEngine.Experimental.Input.InputActionSetupExtensions_ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions_ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_m8966887E83B2AE6054672810E933A9EBE7B059A0_gshared (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m689E86CFD854AC8146FB62FF915816B6677F58D2((ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)(ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  L_1 = ControlSchemeSyntax_WithOptionalDevice_m8AEF8D14125D8146FC88998FCE331F884E688A4D((ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)(ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_m8966887E83B2AE6054672810E933A9EBE7B059A0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *>(__this + 1);
	return ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_m8966887E83B2AE6054672810E933A9EBE7B059A0(_thisAdjusted, method);
}
// UnityEngine.Experimental.Input.InputActionSetupExtensions_ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions_ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_mB1ECF1A1D6966E050F998166779F60EBFD2715A5_gshared (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m689E86CFD854AC8146FB62FF915816B6677F58D2((ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)(ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  L_1 = ControlSchemeSyntax_WithRequiredDevice_mEB0D621B792F15DA7BB4722904880B379075E395((ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)(ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_mB1ECF1A1D6966E050F998166779F60EBFD2715A5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *>(__this + 1);
	return ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_mB1ECF1A1D6966E050F998166779F60EBFD2715A5(_thisAdjusted, method);
}
// UnityEngine.Experimental.Input.InputActionSetupExtensions_ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions_ControlSchemeSyntax::WithOptionalDevice<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mCD06D2D53731D3F640930A6D1F289D95463477BC_gshared (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m689E86CFD854AC8146FB62FF915816B6677F58D2((ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)(ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  L_1 = ControlSchemeSyntax_WithOptionalDevice_m8AEF8D14125D8146FC88998FCE331F884E688A4D((ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)(ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mCD06D2D53731D3F640930A6D1F289D95463477BC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *>(__this + 1);
	return ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mCD06D2D53731D3F640930A6D1F289D95463477BC(_thisAdjusted, method);
}
// UnityEngine.Experimental.Input.InputActionSetupExtensions_ControlSchemeSyntax UnityEngine.Experimental.Input.InputActionSetupExtensions_ControlSchemeSyntax::WithRequiredDevice<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_m927B2DAD260EC3CC95E303F9C34DB69DFCF2E507_gshared (ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m689E86CFD854AC8146FB62FF915816B6677F58D2((ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)(ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  L_1 = ControlSchemeSyntax_WithRequiredDevice_mEB0D621B792F15DA7BB4722904880B379075E395((ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)(ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_m927B2DAD260EC3CC95E303F9C34DB69DFCF2E507_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_tB7BF6D4EE7FB8CD8971CBDB3FFBC17771DDF2998 *>(__this + 1);
	return ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_m927B2DAD260EC3CC95E303F9C34DB69DFCF2E507(_thisAdjusted, method);
}
// UnityEngine.Experimental.Input.InputControlList`1<TControl> UnityEngine.Experimental.Input.InputControlListExtensions::ToControlList<System.Object>(System.Collections.Generic.IEnumerable`1<TControl>)
extern "C" IL2CPP_METHOD_ATTR InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E  InputControlListExtensions_ToControlList_TisRuntimeObject_mE90C151068F9EC906EEA28DEC3853A9C7FD3119F_gshared (RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputControlListExtensions_ToControlList_TisRuntimeObject_mE90C151068F9EC906EEA28DEC3853A9C7FD3119F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E ));
		RuntimeObject* L_0 = ___list0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_1 = (RuntimeObject*)L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0022;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck((RuntimeObject*)L_2);
			InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			RuntimeObject* L_3 = ___list0;
			InputControlList_1_AddRange_m4B4FBF0179E3B69BA329AE82B5BBC0F81B4CFAAA((InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E *)(InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E *)(&V_0), (RuntimeObject*)L_3, (int32_t)(-1), (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		}

IL_0022:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x36, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_6 = V_1;
			if (!L_6)
			{
				goto IL_0035;
			}
		}

IL_002f:
		{
			RuntimeObject* L_7 = V_1;
			NullCheck((RuntimeObject*)L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
		}

IL_0035:
		{
			IL2CPP_RESET_LEAVE(0x36);
			IL2CPP_END_FINALLY(44)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x36, IL_0036)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0036:
	{
		InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E  L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Experimental.Input.InputControlList`1<TControl> UnityEngine.Experimental.Input.InputControlListExtensions::ToControlList<System.Object>(System.Collections.Generic.IReadOnlyList`1<TControl>)
extern "C" IL2CPP_METHOD_ATTR InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E  InputControlListExtensions_ToControlList_TisRuntimeObject_mF3227CEE11BB6D65253E82DFB196B2B5F04510E6_gshared (RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputControlListExtensions_ToControlList_TisRuntimeObject_mF3227CEE11BB6D65253E82DFB196B2B5F04510E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E ));
		RuntimeObject* L_0 = ___list0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_1 = (RuntimeObject*)L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0023;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck((RuntimeObject*)L_2);
			InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			RuntimeObject* L_3 = ___list0;
			InputControlList_1_AddSlice_TisIReadOnlyList_1_tE81E1489F9663A3FFB16117EBB97C07D91EA7557_mE09F00305B042CFC2E2D429E79238F336D4B7625((InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E *)(InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E *)(&V_0), (RuntimeObject*)L_3, (int32_t)(-1), (int32_t)(-1), (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		}

IL_0023:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck((RuntimeObject*)L_4);
			bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x37, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_6 = V_1;
			if (!L_6)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			RuntimeObject* L_7 = V_1;
			NullCheck((RuntimeObject*)L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
		}

IL_0036:
		{
			IL2CPP_RESET_LEAVE(0x37);
			IL2CPP_END_FINALLY(45)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0037:
	{
		InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E  L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Experimental.Input.InputControlList`1<TControl> UnityEngine.Experimental.Input.InputSystem::FindControls<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E  InputSystem_FindControls_TisRuntimeObject_m10FBC3D3BD9D5DAB9A03600889B4D7776DCD14E1_gshared (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputSystem_FindControls_TisRuntimeObject_m10FBC3D3BD9D5DAB9A03600889B4D7776DCD14E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E ));
		String_t* L_0 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t9EEE2BD461CED1A911C169F864BF6AE8933D92EA_il2cpp_TypeInfo_var);
		((  int32_t (*) (String_t*, InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((String_t*)L_0, (InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E *)(InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Experimental.Input.InputControlScheme_MatchResult UnityEngine.Experimental.Input.InputControlScheme::PickDevicesFrom<System.Object>(TDevices)
extern "C" IL2CPP_METHOD_ATTR MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  InputControlScheme_PickDevicesFrom_TisRuntimeObject_m65FB475400BF9ED59B1E316789C9A2297565036B_gshared (InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 * __this, RuntimeObject * ___devices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputControlScheme_PickDevicesFrom_TisRuntimeObject_m65FB475400BF9ED59B1E316789C9A2297565036B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885  V_3;
	memset(&V_3, 0, sizeof(V_3));
	MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	String_t* V_10 = NULL;
	InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * V_11 = NULL;
	int32_t V_12 = 0;
	InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B18_0 = 0;
	MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C * G_B49_0 = NULL;
	MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C * G_B46_0 = NULL;
	MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C * G_B48_0 = NULL;
	MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C * G_B47_0 = NULL;
	int32_t G_B50_0 = 0;
	MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C * G_B50_1 = NULL;
	{
		DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_0 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_1 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
		NullCheck(L_1);
		if ((((RuntimeArray *)L_1)->max_length))
		{
			goto IL_0024;
		}
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C ));
		(&V_4)->set_m_Result_0(0);
		MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  L_2 = V_4;
		return L_2;
	}

IL_0024:
	{
		V_0 = (bool)1;
		V_1 = (bool)1;
		DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_3 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
		NullCheck(L_3);
		V_2 = (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))));
		int32_t L_4 = V_2;
		InputControlList_1__ctor_m618E0D787CA05BA1B8B397A93DEB04B1EA05DA99((InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(&V_3), (int32_t)4, (int32_t)L_4, /*hidden argument*/InputControlList_1__ctor_m618E0D787CA05BA1B8B397A93DEB04B1EA05DA99_RuntimeMethod_var);
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			V_5 = (bool)0;
			V_6 = (bool)0;
			V_7 = (int32_t)0;
			goto IL_0191;
		}

IL_0048:
		{
			DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_5 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
			int32_t L_6 = V_7;
			NullCheck(L_5);
			bool L_7 = DeviceRequirement_get_isOR_mE19C8ECCBE428DB8EEDC1DDC75F13660C4251619((DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)(DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), /*hidden argument*/NULL);
			V_8 = (bool)L_7;
			DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_8 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
			int32_t L_9 = V_7;
			NullCheck(L_8);
			bool L_10 = DeviceRequirement_get_isOptional_m4D9E7DB98931DDC9A407A0905DDA316B58B0EB1F((DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)(DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), /*hidden argument*/NULL);
			V_9 = (bool)L_10;
			bool L_11 = V_8;
			bool L_12 = V_5;
			if (!((int32_t)((int32_t)L_11&(int32_t)L_12)))
			{
				goto IL_0084;
			}
		}

IL_0077:
		{
			InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549((InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(&V_3), (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)NULL, /*hidden argument*/InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549_RuntimeMethod_var);
			goto IL_018b;
		}

IL_0084:
		{
			DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_13 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
			int32_t L_14 = V_7;
			NullCheck(L_13);
			String_t* L_15 = DeviceRequirement_get_controlPath_m2EBD39CEE130D6E8476C58B17AECB0D8D15A75B8((DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)(DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), /*hidden argument*/NULL);
			V_10 = (String_t*)L_15;
			String_t* L_16 = V_10;
			bool L_17 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229((String_t*)L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00ae;
			}
		}

IL_00a1:
		{
			InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549((InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(&V_3), (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)NULL, /*hidden argument*/InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549_RuntimeMethod_var);
			goto IL_018b;
		}

IL_00ae:
		{
			V_11 = (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)NULL;
			V_12 = (int32_t)0;
			goto IL_00ea;
		}

IL_00b6:
		{
			int32_t L_18 = V_12;
			NullCheck((RuntimeObject*)(___devices0));
			InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * L_19 = InterfaceFuncInvoker1< InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<UnityEngine.Experimental.Input.InputDevice>::get_Item(System.Int32) */, IReadOnlyList_1_tE95739A7507E8A0FABC49BE31A173D8B7EA873DE_il2cpp_TypeInfo_var, (RuntimeObject*)(___devices0), (int32_t)L_18);
			String_t* L_20 = V_10;
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_21 = InputControlPath_TryFindControl_mF2309BB03FFCE0548023F3032BBBD014C7FD849D((InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_19, (String_t*)L_20, (int32_t)0, /*hidden argument*/NULL);
			V_13 = (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_21;
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_22 = V_13;
			if (!L_22)
			{
				goto IL_00e4;
			}
		}

IL_00d3:
		{
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_23 = V_13;
			bool L_24 = InputControlList_1_Contains_mBC1E0A16C2E3150BDEA258FF139A6E858C0C99C7((InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(&V_3), (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_23, /*hidden argument*/InputControlList_1_Contains_mBC1E0A16C2E3150BDEA258FF139A6E858C0C99C7_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_00e4;
			}
		}

IL_00de:
		{
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_25 = V_13;
			V_11 = (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_25;
			goto IL_00fb;
		}

IL_00e4:
		{
			int32_t L_26 = V_12;
			V_12 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		}

IL_00ea:
		{
			int32_t L_27 = V_12;
			NullCheck((RuntimeObject*)(___devices0));
			int32_t L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<UnityEngine.Experimental.Input.InputDevice>::get_Count() */, IReadOnlyCollection_1_tE08B2D84A1D0685F449EDB3D57FC60C06EFF01E7_il2cpp_TypeInfo_var, (RuntimeObject*)(___devices0));
			if ((((int32_t)L_27) < ((int32_t)L_28)))
			{
				goto IL_00b6;
			}
		}

IL_00fb:
		{
			int32_t L_29 = V_7;
			int32_t L_30 = V_2;
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1))) >= ((int32_t)L_30)))
			{
				goto IL_0118;
			}
		}

IL_0102:
		{
			DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_31 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
			int32_t L_32 = V_7;
			NullCheck(L_31);
			bool L_33 = DeviceRequirement_get_isOR_mE19C8ECCBE428DB8EEDC1DDC75F13660C4251619((DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)(DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1))))), /*hidden argument*/NULL);
			G_B18_0 = ((int32_t)(L_33));
			goto IL_0119;
		}

IL_0118:
		{
			G_B18_0 = 0;
		}

IL_0119:
		{
			if (!G_B18_0)
			{
				goto IL_012d;
			}
		}

IL_011b:
		{
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_34 = V_11;
			if (!L_34)
			{
				goto IL_0124;
			}
		}

IL_011f:
		{
			V_5 = (bool)1;
			goto IL_0182;
		}

IL_0124:
		{
			bool L_35 = V_9;
			if (L_35)
			{
				goto IL_0182;
			}
		}

IL_0128:
		{
			V_6 = (bool)1;
			goto IL_0182;
		}

IL_012d:
		{
			bool L_36 = V_8;
			if (!L_36)
			{
				goto IL_0148;
			}
		}

IL_0131:
		{
			int32_t L_37 = V_7;
			int32_t L_38 = V_2;
			if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1))))))
			{
				goto IL_0148;
			}
		}

IL_0138:
		{
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_39 = V_11;
			if (L_39)
			{
				goto IL_0182;
			}
		}

IL_013c:
		{
			bool L_40 = V_6;
			if (!L_40)
			{
				goto IL_0144;
			}
		}

IL_0140:
		{
			V_0 = (bool)0;
			goto IL_0182;
		}

IL_0144:
		{
			V_1 = (bool)0;
			goto IL_0182;
		}

IL_0148:
		{
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_41 = V_11;
			if (L_41)
			{
				goto IL_0156;
			}
		}

IL_014c:
		{
			bool L_42 = V_9;
			if (!L_42)
			{
				goto IL_0154;
			}
		}

IL_0150:
		{
			V_1 = (bool)0;
			goto IL_0156;
		}

IL_0154:
		{
			V_0 = (bool)0;
		}

IL_0156:
		{
			int32_t L_43 = V_7;
			if ((((int32_t)L_43) <= ((int32_t)0)))
			{
				goto IL_0182;
			}
		}

IL_015b:
		{
			DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_44 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
			int32_t L_45 = V_7;
			NullCheck(L_44);
			bool L_46 = DeviceRequirement_get_isOR_mE19C8ECCBE428DB8EEDC1DDC75F13660C4251619((DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)(DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1))))), /*hidden argument*/NULL);
			if (!L_46)
			{
				goto IL_0182;
			}
		}

IL_0171:
		{
			bool L_47 = V_5;
			if (L_47)
			{
				goto IL_017f;
			}
		}

IL_0175:
		{
			bool L_48 = V_6;
			if (!L_48)
			{
				goto IL_017d;
			}
		}

IL_0179:
		{
			V_0 = (bool)0;
			goto IL_017f;
		}

IL_017d:
		{
			V_1 = (bool)0;
		}

IL_017f:
		{
			V_5 = (bool)0;
		}

IL_0182:
		{
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_49 = V_11;
			InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549((InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(&V_3), (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_49, /*hidden argument*/InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549_RuntimeMethod_var);
		}

IL_018b:
		{
			int32_t L_50 = V_7;
			V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		}

IL_0191:
		{
			int32_t L_51 = V_7;
			int32_t L_52 = V_2;
			if ((((int32_t)L_51) < ((int32_t)L_52)))
			{
				goto IL_0048;
			}
		}

IL_0199:
		{
			goto IL_01a5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_019b;
		throw e;
	}

CATCH_019b:
	{ // begin catch(System.Exception)
		InputControlList_1_Dispose_mAB171168B9A995BA5B7340FBED941AC0F5CC3293((InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(&V_3), /*hidden argument*/InputControlList_1_Dispose_mAB171168B9A995BA5B7340FBED941AC0F5CC3293_RuntimeMethod_var);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, InputControlScheme_PickDevicesFrom_TisRuntimeObject_m65FB475400BF9ED59B1E316789C9A2297565036B_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_01a5:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C ));
		bool L_53 = V_0;
		G_B46_0 = (&V_4);
		if (!L_53)
		{
			G_B49_0 = (&V_4);
			goto IL_01bb;
		}
	}
	{
		bool L_54 = V_1;
		G_B47_0 = G_B46_0;
		if (!L_54)
		{
			G_B48_0 = G_B46_0;
			goto IL_01b8;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B47_0;
		goto IL_01bc;
	}

IL_01b8:
	{
		G_B50_0 = 2;
		G_B50_1 = G_B48_0;
		goto IL_01bc;
	}

IL_01bb:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01bc:
	{
		G_B50_1->set_m_Result_0(G_B50_0);
		InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885  L_55 = V_3;
		(&V_4)->set_m_Controls_2(L_55);
		DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_56 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
		(&V_4)->set_m_Requirements_3(L_56);
		MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  L_57 = V_4;
		return L_57;
	}
}
extern "C"  MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  InputControlScheme_PickDevicesFrom_TisRuntimeObject_m65FB475400BF9ED59B1E316789C9A2297565036B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___devices0, const RuntimeMethod* method)
{
	InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 * _thisAdjusted = reinterpret_cast<InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 *>(__this + 1);
	return InputControlScheme_PickDevicesFrom_TisRuntimeObject_m65FB475400BF9ED59B1E316789C9A2297565036B(_thisAdjusted, ___devices0, method);
}
// UnityEngine.Experimental.Input.InputControlScheme_MatchResult UnityEngine.Experimental.Input.InputControlScheme::PickDevicesFrom<UnityEngine.Experimental.Input.InputControlList`1<System.Object>>(TDevices)
extern "C" IL2CPP_METHOD_ATTR MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  InputControlScheme_PickDevicesFrom_TisInputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E_mBDC41FA33EB583512F7918977F184283BE3D0227_gshared (InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 * __this, InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E  ___devices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputControlScheme_PickDevicesFrom_TisInputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E_mBDC41FA33EB583512F7918977F184283BE3D0227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885  V_3;
	memset(&V_3, 0, sizeof(V_3));
	MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	String_t* V_10 = NULL;
	InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * V_11 = NULL;
	int32_t V_12 = 0;
	InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B18_0 = 0;
	MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C * G_B49_0 = NULL;
	MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C * G_B46_0 = NULL;
	MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C * G_B48_0 = NULL;
	MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C * G_B47_0 = NULL;
	int32_t G_B50_0 = 0;
	MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C * G_B50_1 = NULL;
	{
		DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_0 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_1 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
		NullCheck(L_1);
		if ((((RuntimeArray *)L_1)->max_length))
		{
			goto IL_0024;
		}
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C ));
		(&V_4)->set_m_Result_0(0);
		MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  L_2 = V_4;
		return L_2;
	}

IL_0024:
	{
		V_0 = (bool)1;
		V_1 = (bool)1;
		DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_3 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
		NullCheck(L_3);
		V_2 = (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))));
		int32_t L_4 = V_2;
		InputControlList_1__ctor_m618E0D787CA05BA1B8B397A93DEB04B1EA05DA99((InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(&V_3), (int32_t)4, (int32_t)L_4, /*hidden argument*/InputControlList_1__ctor_m618E0D787CA05BA1B8B397A93DEB04B1EA05DA99_RuntimeMethod_var);
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			V_5 = (bool)0;
			V_6 = (bool)0;
			V_7 = (int32_t)0;
			goto IL_0191;
		}

IL_0048:
		{
			DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_5 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
			int32_t L_6 = V_7;
			NullCheck(L_5);
			bool L_7 = DeviceRequirement_get_isOR_mE19C8ECCBE428DB8EEDC1DDC75F13660C4251619((DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)(DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), /*hidden argument*/NULL);
			V_8 = (bool)L_7;
			DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_8 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
			int32_t L_9 = V_7;
			NullCheck(L_8);
			bool L_10 = DeviceRequirement_get_isOptional_m4D9E7DB98931DDC9A407A0905DDA316B58B0EB1F((DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)(DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), /*hidden argument*/NULL);
			V_9 = (bool)L_10;
			bool L_11 = V_8;
			bool L_12 = V_5;
			if (!((int32_t)((int32_t)L_11&(int32_t)L_12)))
			{
				goto IL_0084;
			}
		}

IL_0077:
		{
			InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549((InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(&V_3), (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)NULL, /*hidden argument*/InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549_RuntimeMethod_var);
			goto IL_018b;
		}

IL_0084:
		{
			DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_13 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
			int32_t L_14 = V_7;
			NullCheck(L_13);
			String_t* L_15 = DeviceRequirement_get_controlPath_m2EBD39CEE130D6E8476C58B17AECB0D8D15A75B8((DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)(DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), /*hidden argument*/NULL);
			V_10 = (String_t*)L_15;
			String_t* L_16 = V_10;
			bool L_17 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229((String_t*)L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00ae;
			}
		}

IL_00a1:
		{
			InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549((InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(&V_3), (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)NULL, /*hidden argument*/InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549_RuntimeMethod_var);
			goto IL_018b;
		}

IL_00ae:
		{
			V_11 = (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)NULL;
			V_12 = (int32_t)0;
			goto IL_00ea;
		}

IL_00b6:
		{
			int32_t L_18 = V_12;
			RuntimeObject * L_19 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___devices0));
			NullCheck((RuntimeObject*)L_19);
			InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 * L_20 = InterfaceFuncInvoker1< InputDevice_tE6A326B08DD07AC90A469442000B302C27C83984 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<UnityEngine.Experimental.Input.InputDevice>::get_Item(System.Int32) */, IReadOnlyList_1_tE95739A7507E8A0FABC49BE31A173D8B7EA873DE_il2cpp_TypeInfo_var, (RuntimeObject*)L_19, (int32_t)L_18);
			___devices0 = *(InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E *)UnBox(L_19);
			String_t* L_21 = V_10;
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_22 = InputControlPath_TryFindControl_mF2309BB03FFCE0548023F3032BBBD014C7FD849D((InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_20, (String_t*)L_21, (int32_t)0, /*hidden argument*/NULL);
			V_13 = (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_22;
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_23 = V_13;
			if (!L_23)
			{
				goto IL_00e4;
			}
		}

IL_00d3:
		{
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_24 = V_13;
			bool L_25 = InputControlList_1_Contains_mBC1E0A16C2E3150BDEA258FF139A6E858C0C99C7((InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(&V_3), (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_24, /*hidden argument*/InputControlList_1_Contains_mBC1E0A16C2E3150BDEA258FF139A6E858C0C99C7_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_00e4;
			}
		}

IL_00de:
		{
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_26 = V_13;
			V_11 = (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_26;
			goto IL_00fb;
		}

IL_00e4:
		{
			int32_t L_27 = V_12;
			V_12 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		}

IL_00ea:
		{
			int32_t L_28 = V_12;
			RuntimeObject * L_29 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___devices0));
			NullCheck((RuntimeObject*)L_29);
			int32_t L_30 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<UnityEngine.Experimental.Input.InputDevice>::get_Count() */, IReadOnlyCollection_1_tE08B2D84A1D0685F449EDB3D57FC60C06EFF01E7_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
			___devices0 = *(InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E *)UnBox(L_29);
			if ((((int32_t)L_28) < ((int32_t)L_30)))
			{
				goto IL_00b6;
			}
		}

IL_00fb:
		{
			int32_t L_31 = V_7;
			int32_t L_32 = V_2;
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1))) >= ((int32_t)L_32)))
			{
				goto IL_0118;
			}
		}

IL_0102:
		{
			DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_33 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
			int32_t L_34 = V_7;
			NullCheck(L_33);
			bool L_35 = DeviceRequirement_get_isOR_mE19C8ECCBE428DB8EEDC1DDC75F13660C4251619((DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)(DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1))))), /*hidden argument*/NULL);
			G_B18_0 = ((int32_t)(L_35));
			goto IL_0119;
		}

IL_0118:
		{
			G_B18_0 = 0;
		}

IL_0119:
		{
			if (!G_B18_0)
			{
				goto IL_012d;
			}
		}

IL_011b:
		{
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_36 = V_11;
			if (!L_36)
			{
				goto IL_0124;
			}
		}

IL_011f:
		{
			V_5 = (bool)1;
			goto IL_0182;
		}

IL_0124:
		{
			bool L_37 = V_9;
			if (L_37)
			{
				goto IL_0182;
			}
		}

IL_0128:
		{
			V_6 = (bool)1;
			goto IL_0182;
		}

IL_012d:
		{
			bool L_38 = V_8;
			if (!L_38)
			{
				goto IL_0148;
			}
		}

IL_0131:
		{
			int32_t L_39 = V_7;
			int32_t L_40 = V_2;
			if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1))))))
			{
				goto IL_0148;
			}
		}

IL_0138:
		{
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_41 = V_11;
			if (L_41)
			{
				goto IL_0182;
			}
		}

IL_013c:
		{
			bool L_42 = V_6;
			if (!L_42)
			{
				goto IL_0144;
			}
		}

IL_0140:
		{
			V_0 = (bool)0;
			goto IL_0182;
		}

IL_0144:
		{
			V_1 = (bool)0;
			goto IL_0182;
		}

IL_0148:
		{
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_43 = V_11;
			if (L_43)
			{
				goto IL_0156;
			}
		}

IL_014c:
		{
			bool L_44 = V_9;
			if (!L_44)
			{
				goto IL_0154;
			}
		}

IL_0150:
		{
			V_1 = (bool)0;
			goto IL_0156;
		}

IL_0154:
		{
			V_0 = (bool)0;
		}

IL_0156:
		{
			int32_t L_45 = V_7;
			if ((((int32_t)L_45) <= ((int32_t)0)))
			{
				goto IL_0182;
			}
		}

IL_015b:
		{
			DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_46 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
			int32_t L_47 = V_7;
			NullCheck(L_46);
			bool L_48 = DeviceRequirement_get_isOR_mE19C8ECCBE428DB8EEDC1DDC75F13660C4251619((DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)(DeviceRequirement_tC7E25F23DA38AEA72DF1E16E64F76BC18431DC9E *)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)1))))), /*hidden argument*/NULL);
			if (!L_48)
			{
				goto IL_0182;
			}
		}

IL_0171:
		{
			bool L_49 = V_5;
			if (L_49)
			{
				goto IL_017f;
			}
		}

IL_0175:
		{
			bool L_50 = V_6;
			if (!L_50)
			{
				goto IL_017d;
			}
		}

IL_0179:
		{
			V_0 = (bool)0;
			goto IL_017f;
		}

IL_017d:
		{
			V_1 = (bool)0;
		}

IL_017f:
		{
			V_5 = (bool)0;
		}

IL_0182:
		{
			InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 * L_51 = V_11;
			InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549((InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(&V_3), (InputControl_tBAFD00FD8B5BB87B862081EDE34A10490BB4D780 *)L_51, /*hidden argument*/InputControlList_1_Add_m168259C79E9FBB151CF907FFD5FBEB47A5C0A549_RuntimeMethod_var);
		}

IL_018b:
		{
			int32_t L_52 = V_7;
			V_7 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		}

IL_0191:
		{
			int32_t L_53 = V_7;
			int32_t L_54 = V_2;
			if ((((int32_t)L_53) < ((int32_t)L_54)))
			{
				goto IL_0048;
			}
		}

IL_0199:
		{
			goto IL_01a5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_019b;
		throw e;
	}

CATCH_019b:
	{ // begin catch(System.Exception)
		InputControlList_1_Dispose_mAB171168B9A995BA5B7340FBED941AC0F5CC3293((InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885 *)(&V_3), /*hidden argument*/InputControlList_1_Dispose_mAB171168B9A995BA5B7340FBED941AC0F5CC3293_RuntimeMethod_var);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, InputControlScheme_PickDevicesFrom_TisInputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E_mBDC41FA33EB583512F7918977F184283BE3D0227_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_01a5:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C ));
		bool L_55 = V_0;
		G_B46_0 = (&V_4);
		if (!L_55)
		{
			G_B49_0 = (&V_4);
			goto IL_01bb;
		}
	}
	{
		bool L_56 = V_1;
		G_B47_0 = G_B46_0;
		if (!L_56)
		{
			G_B48_0 = G_B46_0;
			goto IL_01b8;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B47_0;
		goto IL_01bc;
	}

IL_01b8:
	{
		G_B50_0 = 2;
		G_B50_1 = G_B48_0;
		goto IL_01bc;
	}

IL_01bb:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01bc:
	{
		G_B50_1->set_m_Result_0(G_B50_0);
		InputControlList_1_tAAEC7CB4CBBE1895D7E621112FB21E11DB81A885  L_57 = V_3;
		(&V_4)->set_m_Controls_2(L_57);
		DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066* L_58 = (DeviceRequirementU5BU5D_t99346B2E72168E3DC2CC795F1E63EC8006C48066*)__this->get_m_DeviceRequirements_3();
		(&V_4)->set_m_Requirements_3(L_58);
		MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  L_59 = V_4;
		return L_59;
	}
}
extern "C"  MatchResult_t5B150B30E132F642B05DC89FECAF3B1E451A9F2C  InputControlScheme_PickDevicesFrom_TisInputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E_mBDC41FA33EB583512F7918977F184283BE3D0227_AdjustorThunk (RuntimeObject * __this, InputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E  ___devices0, const RuntimeMethod* method)
{
	InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 * _thisAdjusted = reinterpret_cast<InputControlScheme_t60AA02D5BE21179206A533E0BA5DD1E85E446BA3 *>(__this + 1);
	return InputControlScheme_PickDevicesFrom_TisInputControlList_1_tAAF73F3721278A83C933A1795264F4286841CD3E_mBDC41FA33EB583512F7918977F184283BE3D0227(_thisAdjusted, ___devices0, method);
}
// UnityEngine.Experimental.Input.Layouts.InputControlLayout UnityEngine.Experimental.Input.InputSystem::TryLoadLayout<System.Object>()
extern "C" IL2CPP_METHOD_ATTR InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0 * InputSystem_TryLoadLayout_TisRuntimeObject_m0B8C5A26A72E3D26D4FBD09A35D5A48C2BE01B33_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputSystem_TryLoadLayout_TisRuntimeObject_m0B8C5A26A72E3D26D4FBD09A35D5A48C2BE01B33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t9EEE2BD461CED1A911C169F864BF6AE8933D92EA_il2cpp_TypeInfo_var);
		InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9 * L_0 = ((InputSystem_t9EEE2BD461CED1A911C169F864BF6AE8933D92EA_StaticFields*)il2cpp_codegen_static_fields_for(InputSystem_t9EEE2BD461CED1A911C169F864BF6AE8933D92EA_il2cpp_TypeInfo_var))->get_s_Manager_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		NullCheck((InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9 *)L_0);
		InputControlLayout_tED5F3DB1F1FE43B9F8659022552DAFD9587765A0 * L_3 = InputManager_TryLoadControlLayout_m70C376C8F525676707DF3B0352ACB0962B343A72((InputManager_t3BB103D0CEE64B14B2FC3C6D1B55FC0C38DC9CD9 *)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Experimental.Input.Layouts.InputControlLayout_Builder UnityEngine.Experimental.Input.Layouts.InputControlLayout_Builder::WithType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR Builder_t2549C7EDAC67237F97015821103155122BF1797D  Builder_WithType_TisRuntimeObject_m09CF7026975C3EF9FA236BBEB34171E73BED6B1C_gshared (Builder_t2549C7EDAC67237F97015821103155122BF1797D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder_WithType_TisRuntimeObject_m09CF7026975C3EF9FA236BBEB34171E73BED6B1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		__this->set_type_1(L_1);
		return (*(Builder_t2549C7EDAC67237F97015821103155122BF1797D *)__this);
	}
}
extern "C"  Builder_t2549C7EDAC67237F97015821103155122BF1797D  Builder_WithType_TisRuntimeObject_m09CF7026975C3EF9FA236BBEB34171E73BED6B1C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Builder_t2549C7EDAC67237F97015821103155122BF1797D * _thisAdjusted = reinterpret_cast<Builder_t2549C7EDAC67237F97015821103155122BF1797D *>(__this + 1);
	return Builder_WithType_TisRuntimeObject_m09CF7026975C3EF9FA236BBEB34171E73BED6B1C(_thisAdjusted, method);
}
// UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher::WithCapability<System.Int32>(System.String,TValue)
extern "C" IL2CPP_METHOD_ATTR InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C  InputDeviceMatcher_WithCapability_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m26D2A9EF8F680390FF3206FF5FB187BEA91E7082_gshared (InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C * __this, String_t* ___path0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___path0;
		InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  L_1;
		memset(&L_1, 0, sizeof(L_1));
		InternedString__ctor_mB883DD361E1D253493DA509A7D8E1521592C0F7B((&L_1), (String_t*)L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), &L_3);
		InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C  L_5 = InputDeviceMatcher_With_m66BFDFAAAAA799C2102C7D2EAAD3031F63F829EF((InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C *)(InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C *)__this, (InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE )L_1, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
extern "C"  InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C  InputDeviceMatcher_WithCapability_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m26D2A9EF8F680390FF3206FF5FB187BEA91E7082_AdjustorThunk (RuntimeObject * __this, String_t* ___path0, int32_t ___value1, const RuntimeMethod* method)
{
	InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C * _thisAdjusted = reinterpret_cast<InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C *>(__this + 1);
	return InputDeviceMatcher_WithCapability_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m26D2A9EF8F680390FF3206FF5FB187BEA91E7082(_thisAdjusted, ___path0, ___value1, method);
}
// UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher UnityEngine.Experimental.Input.Layouts.InputDeviceMatcher::WithCapability<System.Object>(System.String,TValue)
extern "C" IL2CPP_METHOD_ATTR InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C  InputDeviceMatcher_WithCapability_TisRuntimeObject_mDFC26371800126F21F59202328F3425BC2BCB5FB_gshared (InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C * __this, String_t* ___path0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___path0;
		InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE  L_1;
		memset(&L_1, 0, sizeof(L_1));
		InternedString__ctor_mB883DD361E1D253493DA509A7D8E1521592C0F7B((&L_1), (String_t*)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___value1;
		InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C  L_3 = InputDeviceMatcher_With_m66BFDFAAAAA799C2102C7D2EAAD3031F63F829EF((InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C *)(InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C *)__this, (InternedString_tEDC512014F6AE11F22AE6364A787277595C4AEDE )L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C  InputDeviceMatcher_WithCapability_TisRuntimeObject_mDFC26371800126F21F59202328F3425BC2BCB5FB_AdjustorThunk (RuntimeObject * __this, String_t* ___path0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C * _thisAdjusted = reinterpret_cast<InputDeviceMatcher_t200D4994B61798DB11C9D10D54588010328B047C *>(__this + 1);
	return InputDeviceMatcher_WithCapability_TisRuntimeObject_mDFC26371800126F21F59202328F3425BC2BCB5FB(_thisAdjusted, ___path0, ___value1, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<T>)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m00DF495FDAFA66A78A4B175A094C644FB5D901D5_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0 * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m00DF495FDAFA66A78A4B175A094C644FB5D901D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * L_1 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_m640191F67AEB374A5E6FD9B1E6CC48CF31FFDCAD((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)0;
		goto IL_0043;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * L_2 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8((List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_m88FE4B6F43A2CD95BB9ECF8D801F206618FFFFB8_RuntimeMethod_var);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_7 = ___eventData1;
		EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0 * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *)L_7, (EventFunction_1_tC8BA6CC6AE9BBB9A4F9703E7EA47532F813105B0 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		V_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_11;
		goto IL_005a;
	}

IL_003e:
	{
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D * L_14 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *)L_14);
		int32_t L_15 = List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C((List_1_t1863EF4EE1FDEED14D460C85AF61BE0850892F6D *)L_14, /*hidden argument*/List_1_get_Count_mFB4F65ABD2DD0845C2448493238223FB4079A90C_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		V_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_005a;
	}

IL_005a:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = V_2;
		return L_16;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_GetEventHandler_TisRuntimeObject_m254A7FA10E4BFC952CF3E997AF14092C337943B6_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m254A7FA10E4BFC952CF3E997AF14092C337943B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_0058;
	}

IL_0014:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___root0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/NULL);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3;
		goto IL_0045;
	}

IL_0020:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7, /*hidden argument*/NULL);
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_8;
		goto IL_0058;
	}

IL_003d:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_1;
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9, /*hidden argument*/NULL);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10;
	}

IL_0045:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_0058;
	}

IL_0058:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableExtensions::GetPlayState<UnityEngine.Playables.Playable>(U)
extern "C" IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mB5AC5C1D7868CF6A484497D012F883ABD05CCCD8_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A((Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0;
		int32_t L_1 = PlayableHandle_GetPlayState_m080CF2B647260A57E27E0FCDF65D92547DE8912E((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (int32_t)L_1;
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Animations.AnimationLayerMixerPlayable>(U,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableExtensions_GetInput_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_m57E9CC406971BBAEB822EDD029CB0449E0CEB042_gshared (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___playable0, int32_t ___inputPort1, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8((AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *)(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0;
		int32_t L_1 = ___inputPort1;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = PlayableHandle_GetInput_mBDC7706AEC48332E896AD885CC4DFB71D05D39A1((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), (int32_t)L_1, /*hidden argument*/NULL);
		V_1 = (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 )L_2;
		goto IL_001d;
	}

IL_001d:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Animations.AnimationMixerPlayable>(U,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableExtensions_GetInput_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m7111DE0B4D77035FFA6FD5DA72536B830A7D5915_gshared (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___playable0, int32_t ___inputPort1, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567((AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *)(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0;
		int32_t L_1 = ___inputPort1;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = PlayableHandle_GetInput_mBDC7706AEC48332E896AD885CC4DFB71D05D39A1((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), (int32_t)L_1, /*hidden argument*/NULL);
		V_1 = (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 )L_2;
		goto IL_001d;
	}

IL_001d:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>(U,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableExtensions_GetInput_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_m855CFC49E5F62E774EC9BD29CFC96273894B09CD_gshared (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___playable0, int32_t ___inputPort1, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076((AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *)(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0;
		int32_t L_1 = ___inputPort1;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = PlayableHandle_GetInput_mBDC7706AEC48332E896AD885CC4DFB71D05D39A1((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), (int32_t)L_1, /*hidden argument*/NULL);
		V_1 = (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 )L_2;
		goto IL_001d;
	}

IL_001d:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(U,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m0C01CA98E539AF4856954D0F5DFA1D14481CF650_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, int32_t ___inputPort1, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A((Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0;
		int32_t L_1 = ___inputPort1;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = PlayableHandle_GetInput_mBDC7706AEC48332E896AD885CC4DFB71D05D39A1((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), (int32_t)L_1, /*hidden argument*/NULL);
		V_1 = (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 )L_2;
		goto IL_001d;
	}

IL_001d:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableOutputExtensions::GetSourcePlayable<UnityEngine.Animations.AnimationPlayableOutput>(U)
extern "C" IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableOutputExtensions_GetSourcePlayable_TisAnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6_m860C82D6DBE1A6C1013ADADDAE4C4D40D51C6BA1_gshared (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  ___output0, const RuntimeMethod* method)
{
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_0 = AnimationPlayableOutput_GetHandle_m7E849F774F2B3E233A115FFB63DF473AF88F95E0((AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 *)(AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 *)(&___output0), /*hidden argument*/NULL);
		V_0 = (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 )L_0;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = PlayableOutputHandle_GetSourcePlayable_mCD956832B4DD487FAFFA1669BAF5DC82A13BF625((PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)(&V_0), /*hidden argument*/NULL);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E((&L_2), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_1, /*hidden argument*/NULL);
		V_1 = (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 )L_2;
		goto IL_0021;
	}

IL_0021:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Playables.PlayableGraph UnityEngine.Playables.PlayableExtensions::GetGraph<UnityEngine.Playables.Playable>(U)
extern "C" IL2CPP_METHOD_ATTR PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  PlayableExtensions_GetGraph_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2C5C212B26F725DAD0FE7198182148C6A7EBF328_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A((Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0;
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_1 = PlayableHandle_GetGraph_mEB257F6CD9170C1E94E0B93A8DB35FECC6F757E3((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA )L_1;
		goto IL_001c;
	}

IL_001c:
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.Timeline.TimelineClip UnityEngine.Timeline.TrackAsset::CreateClip<System.Object>()
extern "C" IL2CPP_METHOD_ATTR TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A * TrackAsset_CreateClip_TisRuntimeObject_m8E81C806E0B226CB7342AC3ED18DA6FAB47FFC25_gshared (TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackAsset_CreateClip_TisRuntimeObject_m8E81C806E0B226CB7342AC3ED18DA6FAB47FFC25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A * V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		NullCheck((TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC *)__this);
		TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A * L_2 = TrackAsset_CreateClip_m34278D33C83C902D576500091E88C75675FAD165((TrackAsset_t6007D636CC5AC4D63FC2CE91D66F1478C23E32EC *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A *)L_2;
		goto IL_0017;
	}

IL_0017:
	{
		TimelineClip_t45F9949FAF8A648D6A8E5F81221FC7B0A1B42E9A * L_3 = V_0;
		return L_3;
	}
}
