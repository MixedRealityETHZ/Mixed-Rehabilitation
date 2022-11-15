#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.RenderMode,UnityEngine.Material>>
struct Dictionary_2_t2992CEAE94F0811CC022927721DC7F829FAFB6D3;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.SceneUnderstanding.SceneObserverAccessStatus>>
struct Func_2_t70A40055E6EF044593529744124EFCE8C0B28C66;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t82E05038F75AC719F3B4316F5EAA7D69D4B4058D;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>
struct IReadOnlyList_1_tB5B19C1CBDF287DBE28B987E76BC9C0CF47EBE92;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>
struct List_1_t884C040642DCB159A123549C8F62D3860DCC52FF;
// System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>
struct List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB;
// System.Collections.Generic.List`1<UnityEngine.TextAsset>
struct List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.SceneUnderstanding.SceneObserverAccessStatus>
struct TaskFactory_1_tEA0D73EA4EAAFACCBCA9DFB1B62236871E67CD50;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.SceneUnderstanding.SceneObserverAccessStatus>
struct Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9;
// System.Threading.Tasks.Task`1<Windows.Storage.StorageFile>
struct Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Microsoft.MixedReality.SceneUnderstanding.SceneFragment[]
struct SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B;
// Microsoft.MixedReality.SceneUnderstanding.SceneObject[]
struct SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA;
// Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind[]
struct SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478;
// UnityEngine.TextAsset[]
struct TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Windows.Storage.ApplicationData
struct ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Windows.Storage.IApplicationDataStatics
struct IApplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C;
// Windows.Storage.IApplicationDataStatics2
struct IApplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Windows.Storage.IStorageFile
struct IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8;
// Windows.Storage.IStorageFileStatics
struct IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;
// Windows.Storage.IStorageFileStatics2
struct IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
// Windows.Storage.IStorageFolderStatics
struct IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F;
// Windows.Storage.IStorageFolderStatics2
struct IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.SceneUnderstanding.Scene
struct Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D;
// Microsoft.MixedReality.SceneUnderstanding.SceneFragment
struct SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538;
// Microsoft.MixedReality.SceneUnderstanding.SceneObject
struct SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC;
// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager
struct SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE;
// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer
struct SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// Windows.Storage.StorageFile
struct StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF;
// Windows.Storage.StorageFolder
struct StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer/<SprayCoroutine>d__12
struct U3CSprayCoroutineU3Ed__12_t53640CDA10599FAE4BBC6A9338F6048E36E3D72A;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA431B9CBD909811A2D75413BCADE1EADDEC10297_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC63F95E6BE7630C140ECEF20D623332C90D67911_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t884C040642DCB159A123549C8F62D3860DCC52FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneObjectKind_tDF43C6EC2284DBB922EB87D401922E7F2B405B76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneObserverAccessStatus_t83BCCBF5C05EF18D5E7E673FBF7798E0E3FD9D0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral23D70B42C414F9FC448261EC56DA7B5DDB844434;
IL2CPP_EXTERN_C String_t* _stringLiteral33D3C0AEF8C266168530C8D0BED3A31C2B498C8C;
IL2CPP_EXTERN_C String_t* _stringLiteral49309EB5A327BE56A61BF2CC70192B4739B2ACA3;
IL2CPP_EXTERN_C String_t* _stringLiteral51B701A0FDB41E749212AA746F1FD14C05709093;
IL2CPP_EXTERN_C String_t* _stringLiteral6CA31EFC00E82CCF8928BD386557B04C4B0FB08B;
IL2CPP_EXTERN_C String_t* _stringLiteral8FCFCD34C322154A836A299ACE9E406FF37E1FC1;
IL2CPP_EXTERN_C String_t* _stringLiteral969A931523EEE891A1CDF8C03B141ABE46F6E427;
IL2CPP_EXTERN_C String_t* _stringLiteralA9D839B936FC49FCDA257D5AD2A82B703872911D;
IL2CPP_EXTERN_C String_t* _stringLiteralBB87370D19C007D145960DF2A456363EB622BE20;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A446955D45ED9D735C1F4DB98160D97396677C;
IL2CPP_EXTERN_C String_t* _stringLiteralE775FC4FED578FD0A0EA171D66073894DB693287;
IL2CPP_EXTERN_C String_t* _stringLiteralECA7D17E28BC58E4F7D9F94DE1F32FEFBB3183CE;
IL2CPP_EXTERN_C String_t* _stringLiteralF53545D28411B0CE2FBAD7D89F41DEFA3FE0BF5B;
IL2CPP_EXTERN_C String_t* _stringLiteralFE298226A64EE7559D694BA8C15916059988007E;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m8727A51CCB08CE132081B70735A4787252AF9908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_mC92057FF4B961018E16ACEE567154FCAF443E53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m56AA31A7122850F2B23905813FC3CD168CEB4D49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659_m52BF6B75A60319F472F3D6710986DB7390FFF4B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_mBA8ACF1AC5B477159C3B04F6A6468AC407F29C12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F_TisU3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F_m6529ECBC267E9C00F47650AA793BBB227D2ACF86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2_mC4ED335952E3DCC5B3FBD0838B1D34F0CA1EA94F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6172BAD2B0D9FC1881AB61FCDD504276FF9E5CB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF7E1783D62714EC882640A7A9D8C62A478F561EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mED17FF7801359A6E44DE28A3DE0F4DDA3FC905E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m8A7C1E803E270C9EF2DA310339083AE5271AF9B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5255798E349416BABA17730F9F8EA34D8FDDEDBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF77159120E380419524D9338A8F33D27460A5F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA3F1B4A7C89257C36FDA2E4302AB750F8C5A7E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF37C7F12F27B8716644D04AB9D484ECEE44848E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0BB1FBDBC8F42797B9A8C54C0E2D9B33FBD8EF08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE792CFEFA0D524F630ED195F5A74F953346942BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneUnderstandingManager_U3CStartU3Eb__76_0_mAEF86C21BA67E160419B64F552159500818EEE5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mC146748C4F599E937FA6AB615EDCD983BE11508C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m414B0D426DF49C4BF6ADA77683604D5A8BA76680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m53E815C9BE7EBD5671C5B5AB323A1F941F0B95CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSprayCoroutineU3Ed__12_System_Collections_IEnumerator_Reset_m8D5651369ED58998EEFC673EB3944895C012E8C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IApplicationData_t9F64C19F82A7E76B06A42E9BA3CE5105E2C3FA6E;
struct IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper;
struct IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8;
struct IStorageFolder_t582A78BB94B49B6AD89A1B8CE57B5B1B9832F9F1;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct NOVTABLE IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m108CBA2BE6D19F6A961970FF1AC3DE4761942818(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m9773816D15B923B84BCE4CB70D52BBB55D61421B(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8071D5CC72DC722A092D03B8725B40398F216758(IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8** comReturnValue) = 0;
};
// Windows.Storage.IApplicationDataStatics
struct NOVTABLE IApplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics_get_Current_m5BA6206F759AD3CAA45D14D57E671A16E6927345(IApplicationData_t9F64C19F82A7E76B06A42E9BA3CE5105E2C3FA6E** comReturnValue) = 0;
};
// Windows.Storage.IApplicationDataStatics2
struct NOVTABLE IApplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics2_U24__Stripped0_GetForUserAsync_mC778BB22D3226DC4B393311724CE1947CAC5830C() = 0;
};
// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_m153FFA20288B2A12135D5E31F5E321CB7C7C32A4(IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_mEEA8DB3EB0D4FE9F33A54B6A16D65902B70DCB39(IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_mD06D8F02D7793FED272208F851EF8A2D9B25FE38() = 0;
};
// Windows.Storage.IStorageFile
struct NOVTABLE IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped0_get_FileType_m034E89518CD8F6472E7FC470D89C0A16BF0D5D84() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped1_get_ContentType_m3B942B5956DEBCB0AAA0999BEE84395370583EEC() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped2_OpenAsync_m5173C7923B0F7CF3B7D167A72ED1A58EBD9A27B9() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped3_OpenTransactedWriteAsync_m70E453524C3018BCFA35F3E0751EC819D8DB4768() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped4_CopyAsync_m7CCAA2A3977161ECA34C5FAB3B47F44918976546() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped5_CopyAsync_m64DA01A608DAB25246571BB50971DEFAAAD9D24E() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped6_CopyAsync_m9DF7B02522E2B78D630D88635809A4082895CF76() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped7_CopyAndReplaceAsync_m396CC1A3D011EB184AD47BEE8E702D2AC13E866C() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped8_MoveAsync_m94C30646D222693C1AD16D6772693F212E1B18B3() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped9_MoveAsync_m4C48231F9DF7A47A4EA644C52582419C0EE337A5() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped10_MoveAsync_m0A5A95CDF5DD8586EEEB04F6A0CC19B2B6F6911A() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped11_MoveAndReplaceAsync_m4C6BD5C531D018CF47CFD7D8AAAAC70136D6E88C() = 0;
};
// Windows.Storage.IStorageFileStatics
struct NOVTABLE IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped0_GetFileFromPathAsync_m7EE380D1DA0A52DDCDC5FB6B69786B81BC5939EB() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped1_GetFileFromApplicationUriAsync_m4DA1B0C0C6CC2A87094864C2EF6881DBCB119104() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped2_CreateStreamedFileAsync_mE7E6E7F5AB98637CB9DE4E52FC6AFA3F41A1CCEC() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped3_ReplaceWithStreamedFileAsync_m21BBA3A989EB406D68CAF7F90E469CC3CF40CA67() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped4_CreateStreamedFileFromUriAsync_m39CCDD9F43F957BEDB168D0B37A30AC0DB090D01() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped5_ReplaceWithStreamedFileFromUriAsync_m2ACBC234E279043B52EEF7172B8A84045096CFA6() = 0;
};
// Windows.Storage.IStorageFileStatics2
struct NOVTABLE IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics2_U24__Stripped0_GetFileFromPathForUserAsync_m5A8E30130D34379E1839986B2C9B36B50A4A3A88() = 0;
};
// Windows.Storage.IStorageFolderStatics
struct NOVTABLE IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderStatics_U24__Stripped0_GetFolderFromPathAsync_m23EFE828CA0A0A608D1001D6DA413353FA1A2E6F() = 0;
};
// Windows.Storage.IStorageFolderStatics2
struct NOVTABLE IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderStatics2_U24__Stripped0_GetFolderFromPathForUserAsync_m4652AB072776181F1FE707A64521DE3877EE2C28() = 0;
};

// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>
struct List_1_t884C040642DCB159A123549C8F62D3860DCC52FF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF, ____items_1)); }
	inline SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA* get__items_1() const { return ____items_1; }
	inline SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t884C040642DCB159A123549C8F62D3860DCC52FF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF_StaticFields, ____emptyArray_5)); }
	inline SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>
struct List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2, ____items_1)); }
	inline SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5* get__items_1() const { return ____items_1; }
	inline SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2_StaticFields, ____emptyArray_5)); }
	inline SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB, ____items_1)); }
	inline TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* get__items_1() const { return ____items_1; }
	inline TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_StaticFields, ____emptyArray_5)); }
	inline TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.TextAsset>
struct List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E, ____items_1)); }
	inline TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8* get__items_1() const { return ____items_1; }
	inline TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E_StaticFields, ____emptyArray_5)); }
	inline TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// System.__Il2CppComObject


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer/<SprayCoroutine>d__12
struct U3CSprayCoroutineU3Ed__12_t53640CDA10599FAE4BBC6A9338F6048E36E3D72A  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer/<SprayCoroutine>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer/<SprayCoroutine>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer/<SprayCoroutine>d__12::<>4__this
	SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7 * ___U3CU3E4__this_2;
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer/<SprayCoroutine>d__12::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSprayCoroutineU3Ed__12_t53640CDA10599FAE4BBC6A9338F6048E36E3D72A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSprayCoroutineU3Ed__12_t53640CDA10599FAE4BBC6A9338F6048E36E3D72A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSprayCoroutineU3Ed__12_t53640CDA10599FAE4BBC6A9338F6048E36E3D72A, ___U3CU3E4__this_2)); }
	inline SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSprayCoroutineU3Ed__12_t53640CDA10599FAE4BBC6A9338F6048E36E3D72A, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.TextAsset>
struct Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF, ___list_0)); }
	inline List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * get_list_0() const { return ___list_0; }
	inline List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF, ___current_3)); }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * get_current_3() const { return ___current_3; }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>
struct TaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7, ___m_task_0)); }
	inline Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.SceneUnderstanding.SceneObserverAccessStatus>
struct TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F, ___m_task_0)); }
	inline Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>
struct TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531, ___m_task_0)); }
	inline Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// Windows.Storage.ApplicationData
struct ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9  : public Il2CppComObject
{
public:

public:
};

struct ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IApplicationDataStatics2
	IApplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131* ____iapplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131;
	// Cached pointer to Windows.Storage.IApplicationDataStatics
	IApplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C* ____iapplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.ApplicationData"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131* get_____iapplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131()
	{
		IApplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131* returnValue = ____iapplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iapplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C* get_____iapplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C()
	{
		IApplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C* returnValue = ____iapplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iapplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C;
			}
		}
		return returnValue;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct Guid_t 
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
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

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
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Windows.Storage.StorageFile
struct StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF  : public Il2CppComObject
{
public:

public:
};

struct StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFileStatics
	IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0* ____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;
	// Cached pointer to Windows.Storage.IStorageFileStatics2
	IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314* ____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFile"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0* get_____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0()
	{
		IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0* returnValue = ____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;
			}
		}
		return returnValue;
	}

	inline IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314* get_____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314()
	{
		IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314* returnValue = ____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
			}
		}
		return returnValue;
	}
};


// Windows.Storage.StorageFolder
struct StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA  : public Il2CppComObject
{
public:

public:
};

struct StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFolderStatics2
	IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF* ____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF;
	// Cached pointer to Windows.Storage.IStorageFolderStatics
	IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F* ____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFolder"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF* get_____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF()
	{
		IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF* returnValue = ____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF;
			}
		}
		return returnValue;
	}

	inline IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F* get_____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F()
	{
		IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F* returnValue = ____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F;
			}
		}
		return returnValue;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 
{
public:
	// T System.Nullable`1::value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___value_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_value_0() const { return ___value_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// Windows.Storage.CreationCollisionOption
struct CreationCollisionOption_t1DD3DB5A11ACB9F9A6F911FC1451CC64D8840F51 
{
public:
	// System.Int32 Windows.Storage.CreationCollisionOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CreationCollisionOption_t1DD3DB5A11ACB9F9A6F911FC1451CC64D8840F51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.ForceMode
struct ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.PrimitiveType
struct PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.RenderMode
struct RenderMode_t911BEE8CB7FE53C84C22017FF8A9B3936664DB68 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_t911BEE8CB7FE53C84C22017FF8A9B3936664DB68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.SceneUnderstanding.Scene
struct Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.MixedReality.SceneUnderstanding.Scene::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// Microsoft.MixedReality.SceneUnderstanding.SceneComponent
struct SceneComponent_t96DA3B45D4A6E5F36A31849DC1EABD77B4F73A8C  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.MixedReality.SceneUnderstanding.SceneComponent::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SceneComponent_t96DA3B45D4A6E5F36A31849DC1EABD77B4F73A8C, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// Microsoft.MixedReality.SceneUnderstanding.SceneFragment
struct SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.MixedReality.SceneUnderstanding.SceneFragment::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// Microsoft.MixedReality.SceneUnderstanding.SceneMeshLevelOfDetail
struct SceneMeshLevelOfDetail_t925CB1AFEDD5DBFC9039E5BEC35B34EF33024F5E 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.SceneMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneMeshLevelOfDetail_t925CB1AFEDD5DBFC9039E5BEC35B34EF33024F5E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind
struct SceneObjectKind_tDF43C6EC2284DBB922EB87D401922E7F2B405B76 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneObjectKind_tDF43C6EC2284DBB922EB87D401922E7F2B405B76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.SceneUnderstanding.SceneObserverAccessStatus
struct SceneObserverAccessStatus_t83BCCBF5C05EF18D5E7E673FBF7798E0E3FD9D0A 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.SceneObserverAccessStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneObserverAccessStatus_t83BCCBF5C05EF18D5E7E673FBF7798E0E3FD9D0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>
struct Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___list_0)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_list_0() const { return ___list_0; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>
struct Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54, ___list_0)); }
	inline List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * get_list_0() const { return ___list_0; }
	inline List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.SceneUnderstanding.SceneObserverAccessStatus>
struct Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tEA0D73EA4EAAFACCBCA9DFB1B62236871E67CD50 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t70A40055E6EF044593529744124EFCE8C0B28C66 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tEA0D73EA4EAAFACCBCA9DFB1B62236871E67CD50 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tEA0D73EA4EAAFACCBCA9DFB1B62236871E67CD50 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tEA0D73EA4EAAFACCBCA9DFB1B62236871E67CD50 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t70A40055E6EF044593529744124EFCE8C0B28C66 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t70A40055E6EF044593529744124EFCE8C0B28C66 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t70A40055E6EF044593529744124EFCE8C0B28C66 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

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

// Microsoft.MixedReality.SceneUnderstanding.SceneObject
struct SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC  : public SceneComponent_t96DA3B45D4A6E5F36A31849DC1EABD77B4F73A8C
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Start>d__76
struct U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Start>d__76::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Start>d__76::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Start>d__76::<>4__this
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.SceneUnderstanding.SceneObserverAccessStatus> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Start>d__76::<>u__1
	TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F, ___U3CU3E4__this_2)); }
	inline SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Update>d__77
struct U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Update>d__77::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Update>d__77::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Update>d__77::<>4__this
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Update>d__77::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2, ___U3CU3E4__this_2)); }
	inline SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103
struct U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103::<>4__this
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * ___U3CU3E4__this_2;
	// System.Byte[] Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103::<OnDeviceBytes>5__2
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3COnDeviceBytesU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103::<>u__1
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB, ___U3CU3E4__this_2)); }
	inline SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnDeviceBytesU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB, ___U3COnDeviceBytesU3E5__2_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3COnDeviceBytesU3E5__2_3() const { return ___U3COnDeviceBytesU3E5__2_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3COnDeviceBytesU3E5__2_3() { return &___U3COnDeviceBytesU3E5__2_3; }
	inline void set_U3COnDeviceBytesU3E5__2_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3COnDeviceBytesU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnDeviceBytesU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_5() { return static_cast<int32_t>(offsetof(U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB, ___U3CU3Eu__2_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_5() const { return ___U3CU3Eu__2_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_5() { return &___U3CU3Eu__2_5; }
	inline void set_U3CU3Eu__2_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveObjsToDiskAsync>d__104
struct U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveObjsToDiskAsync>d__104::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveObjsToDiskAsync>d__104::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveObjsToDiskAsync>d__104::<>4__this
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveObjsToDiskAsync>d__104::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659, ___U3CU3E4__this_2)); }
	inline SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106
struct U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106::data
	String_t* ___data_2;
	// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106::<>4__this
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * ___U3CU3E4__this_3;
	// System.String Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106::fileName
	String_t* ___fileName_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106::<>u__1
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591, ___data_2)); }
	inline String_t* get_data_2() const { return ___data_2; }
	inline String_t** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(String_t* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591, ___U3CU3E4__this_3)); }
	inline SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_fileName_4() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591, ___fileName_4)); }
	inline String_t* get_fileName_4() const { return ___fileName_4; }
	inline String_t** get_address_of_fileName_4() { return &___fileName_4; }
	inline void set_fileName_4(String_t* value)
	{
		___fileName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileName_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591, ___U3CU3Eu__2_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager
struct SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::QuerySceneFromDevice
	bool ___QuerySceneFromDevice_4;
	// System.Collections.Generic.List`1<UnityEngine.TextAsset> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SUSerializedScenePaths
	List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * ___SUSerializedScenePaths_5;
	// UnityEngine.GameObject Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneRoot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SceneRoot_6;
	// System.Single Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::BoundingSphereRadiusInMeters
	float ___BoundingSphereRadiusInMeters_7;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::AutoRefresh
	bool ___AutoRefresh_8;
	// System.Single Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::AutoRefreshIntervalInSeconds
	float ___AutoRefreshIntervalInSeconds_9;
	// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.RenderMode Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectRequestMode
	int32_t ___SceneObjectRequestMode_10;
	// Microsoft.MixedReality.SceneUnderstanding.SceneMeshLevelOfDetail Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::MeshQuality
	int32_t ___MeshQuality_11;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::RequestInferredRegions
	bool ___RequestInferredRegions_12;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::ColorForBackgroundObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForBackgroundObjects_13;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::ColorForWallObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForWallObjects_14;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::ColorForFloorObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForFloorObjects_15;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::ColorForCeilingObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForCeilingObjects_16;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::ColorForPlatformsObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForPlatformsObjects_17;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::ColorForUnknownObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForUnknownObjects_18;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::ColorForInferredObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForInferredObjects_19;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::ColorForWorldObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForWorldObjects_20;
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::LayerForBackgroundObjects
	int32_t ___LayerForBackgroundObjects_21;
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::LayerForWallObjects
	int32_t ___LayerForWallObjects_22;
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::LayerForFloorObjects
	int32_t ___LayerForFloorObjects_23;
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::LayerForCeilingObjects
	int32_t ___LayerForCeilingObjects_24;
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::LayerForPlatformsObjects
	int32_t ___LayerForPlatformsObjects_25;
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::LayerForUnknownObjects
	int32_t ___LayerForUnknownObjects_26;
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::LayerForInferredObjects
	int32_t ___LayerForInferredObjects_27;
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::LayerForWorldObjects
	int32_t ___LayerForWorldObjects_28;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectBackgroundMeshMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectBackgroundMeshMaterial_29;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectWallMeshMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectWallMeshMaterial_30;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectFloorMeshMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectFloorMeshMaterial_31;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectCeilingMeshMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectCeilingMeshMaterial_32;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectPlatformMeshMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectPlatformMeshMaterial_33;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectUnknownMeshMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectUnknownMeshMaterial_34;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectInferredMeshMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectInferredMeshMaterial_35;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectBackgroundQuadMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectBackgroundQuadMaterial_36;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectWallQuadMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectWallQuadMaterial_37;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectFloorQuadMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectFloorQuadMaterial_38;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectCeilingQuadMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectCeilingQuadMaterial_39;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectPlatformQuadMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectPlatformQuadMaterial_40;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectUnknownQuadMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectUnknownQuadMaterial_41;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectInferredQuadMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectInferredQuadMaterial_42;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SceneObjectWireframeMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SceneObjectWireframeMaterial_43;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::TransparentOcclussion
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___TransparentOcclussion_44;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::FilterAllSceneObjects
	bool ___FilterAllSceneObjects_45;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::FilterPlatformSceneObjects
	bool ___FilterPlatformSceneObjects_46;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::FilterBackgroundSceneObjects
	bool ___FilterBackgroundSceneObjects_47;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::FilterUnknownSceneObjects
	bool ___FilterUnknownSceneObjects_48;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::FilterWorldMesh
	bool ___FilterWorldMesh_49;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::FilterCompletelyInferredSceneObjects
	bool ___FilterCompletelyInferredSceneObjects_50;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::FilterWallSceneObjects
	bool ___FilterWallSceneObjects_51;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::FilterFloorSceneObjects
	bool ___FilterFloorSceneObjects_52;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::FilterCeilingSceneObjects
	bool ___FilterCeilingSceneObjects_53;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::AddCollidersInPlatformSceneObjects
	bool ___AddCollidersInPlatformSceneObjects_54;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::AddCollidersInBackgroundSceneObjects
	bool ___AddCollidersInBackgroundSceneObjects_55;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::AddCollidersInUnknownSceneObjects
	bool ___AddCollidersInUnknownSceneObjects_56;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::AddCollidersInWorldMesh
	bool ___AddCollidersInWorldMesh_57;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::AddCollidersInCompletelyInferredSceneObjects
	bool ___AddCollidersInCompletelyInferredSceneObjects_58;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::AddCollidersInWallSceneObjects
	bool ___AddCollidersInWallSceneObjects_59;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::AddCollidersInFloorSceneObjects
	bool ___AddCollidersInFloorSceneObjects_60;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::AddCollidersCeilingSceneObjects
	bool ___AddCollidersCeilingSceneObjects_61;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::IsInGhostMode
	bool ___IsInGhostMode_62;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::AlignSUObjectsNormalToUnityYAxis
	bool ___AlignSUObjectsNormalToUnityYAxis_63;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::OnLoadStarted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnLoadStarted_64;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::OnLoadFinished
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnLoadFinished_65;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.RenderMode,UnityEngine.Material>> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::materialCache
	Dictionary_2_t2992CEAE94F0811CC022927721DC7F829FAFB6D3 * ___materialCache_66;
	// System.Single Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::MinBoundingSphereRadiusInMeters
	float ___MinBoundingSphereRadiusInMeters_67;
	// System.Single Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::MaxBoundingSphereRadiusInMeters
	float ___MaxBoundingSphereRadiusInMeters_68;
	// System.Byte[] Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::LatestSUSceneData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___LatestSUSceneData_69;
	// System.Object Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SUDataLock
	RuntimeObject * ___SUDataLock_70;
	// System.Guid Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::LatestSceneGuid
	Guid_t  ___LatestSceneGuid_71;
	// System.Guid Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::LastDisplayedSceneGuid
	Guid_t  ___LastDisplayedSceneGuid_72;
	// System.Threading.Tasks.Task Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::displayTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___displayTask_73;
	// System.Single Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::TimeElapsedSinceLastAutoRefresh
	float ___TimeElapsedSinceLastAutoRefresh_74;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::DisplayFromDiskStarted
	bool ___DisplayFromDiskStarted_75;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::RunOnDevice
	bool ___RunOnDevice_76;
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::NumberOfSceneObjectsToLoadPerFrame
	int32_t ___NumberOfSceneObjectsToLoadPerFrame_77;
	// Microsoft.MixedReality.SceneUnderstanding.Scene Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::cachedDeserializedScene
	Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * ___cachedDeserializedScene_78;
	// System.Object Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::cachedDeserializedSceneLock
	RuntimeObject * ___cachedDeserializedSceneLock_79;

public:
	inline static int32_t get_offset_of_QuerySceneFromDevice_4() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___QuerySceneFromDevice_4)); }
	inline bool get_QuerySceneFromDevice_4() const { return ___QuerySceneFromDevice_4; }
	inline bool* get_address_of_QuerySceneFromDevice_4() { return &___QuerySceneFromDevice_4; }
	inline void set_QuerySceneFromDevice_4(bool value)
	{
		___QuerySceneFromDevice_4 = value;
	}

	inline static int32_t get_offset_of_SUSerializedScenePaths_5() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SUSerializedScenePaths_5)); }
	inline List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * get_SUSerializedScenePaths_5() const { return ___SUSerializedScenePaths_5; }
	inline List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E ** get_address_of_SUSerializedScenePaths_5() { return &___SUSerializedScenePaths_5; }
	inline void set_SUSerializedScenePaths_5(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * value)
	{
		___SUSerializedScenePaths_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SUSerializedScenePaths_5), (void*)value);
	}

	inline static int32_t get_offset_of_SceneRoot_6() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneRoot_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SceneRoot_6() const { return ___SceneRoot_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SceneRoot_6() { return &___SceneRoot_6; }
	inline void set_SceneRoot_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SceneRoot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneRoot_6), (void*)value);
	}

	inline static int32_t get_offset_of_BoundingSphereRadiusInMeters_7() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___BoundingSphereRadiusInMeters_7)); }
	inline float get_BoundingSphereRadiusInMeters_7() const { return ___BoundingSphereRadiusInMeters_7; }
	inline float* get_address_of_BoundingSphereRadiusInMeters_7() { return &___BoundingSphereRadiusInMeters_7; }
	inline void set_BoundingSphereRadiusInMeters_7(float value)
	{
		___BoundingSphereRadiusInMeters_7 = value;
	}

	inline static int32_t get_offset_of_AutoRefresh_8() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___AutoRefresh_8)); }
	inline bool get_AutoRefresh_8() const { return ___AutoRefresh_8; }
	inline bool* get_address_of_AutoRefresh_8() { return &___AutoRefresh_8; }
	inline void set_AutoRefresh_8(bool value)
	{
		___AutoRefresh_8 = value;
	}

	inline static int32_t get_offset_of_AutoRefreshIntervalInSeconds_9() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___AutoRefreshIntervalInSeconds_9)); }
	inline float get_AutoRefreshIntervalInSeconds_9() const { return ___AutoRefreshIntervalInSeconds_9; }
	inline float* get_address_of_AutoRefreshIntervalInSeconds_9() { return &___AutoRefreshIntervalInSeconds_9; }
	inline void set_AutoRefreshIntervalInSeconds_9(float value)
	{
		___AutoRefreshIntervalInSeconds_9 = value;
	}

	inline static int32_t get_offset_of_SceneObjectRequestMode_10() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectRequestMode_10)); }
	inline int32_t get_SceneObjectRequestMode_10() const { return ___SceneObjectRequestMode_10; }
	inline int32_t* get_address_of_SceneObjectRequestMode_10() { return &___SceneObjectRequestMode_10; }
	inline void set_SceneObjectRequestMode_10(int32_t value)
	{
		___SceneObjectRequestMode_10 = value;
	}

	inline static int32_t get_offset_of_MeshQuality_11() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___MeshQuality_11)); }
	inline int32_t get_MeshQuality_11() const { return ___MeshQuality_11; }
	inline int32_t* get_address_of_MeshQuality_11() { return &___MeshQuality_11; }
	inline void set_MeshQuality_11(int32_t value)
	{
		___MeshQuality_11 = value;
	}

	inline static int32_t get_offset_of_RequestInferredRegions_12() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___RequestInferredRegions_12)); }
	inline bool get_RequestInferredRegions_12() const { return ___RequestInferredRegions_12; }
	inline bool* get_address_of_RequestInferredRegions_12() { return &___RequestInferredRegions_12; }
	inline void set_RequestInferredRegions_12(bool value)
	{
		___RequestInferredRegions_12 = value;
	}

	inline static int32_t get_offset_of_ColorForBackgroundObjects_13() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___ColorForBackgroundObjects_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForBackgroundObjects_13() const { return ___ColorForBackgroundObjects_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForBackgroundObjects_13() { return &___ColorForBackgroundObjects_13; }
	inline void set_ColorForBackgroundObjects_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForBackgroundObjects_13 = value;
	}

	inline static int32_t get_offset_of_ColorForWallObjects_14() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___ColorForWallObjects_14)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForWallObjects_14() const { return ___ColorForWallObjects_14; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForWallObjects_14() { return &___ColorForWallObjects_14; }
	inline void set_ColorForWallObjects_14(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForWallObjects_14 = value;
	}

	inline static int32_t get_offset_of_ColorForFloorObjects_15() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___ColorForFloorObjects_15)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForFloorObjects_15() const { return ___ColorForFloorObjects_15; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForFloorObjects_15() { return &___ColorForFloorObjects_15; }
	inline void set_ColorForFloorObjects_15(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForFloorObjects_15 = value;
	}

	inline static int32_t get_offset_of_ColorForCeilingObjects_16() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___ColorForCeilingObjects_16)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForCeilingObjects_16() const { return ___ColorForCeilingObjects_16; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForCeilingObjects_16() { return &___ColorForCeilingObjects_16; }
	inline void set_ColorForCeilingObjects_16(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForCeilingObjects_16 = value;
	}

	inline static int32_t get_offset_of_ColorForPlatformsObjects_17() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___ColorForPlatformsObjects_17)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForPlatformsObjects_17() const { return ___ColorForPlatformsObjects_17; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForPlatformsObjects_17() { return &___ColorForPlatformsObjects_17; }
	inline void set_ColorForPlatformsObjects_17(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForPlatformsObjects_17 = value;
	}

	inline static int32_t get_offset_of_ColorForUnknownObjects_18() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___ColorForUnknownObjects_18)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForUnknownObjects_18() const { return ___ColorForUnknownObjects_18; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForUnknownObjects_18() { return &___ColorForUnknownObjects_18; }
	inline void set_ColorForUnknownObjects_18(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForUnknownObjects_18 = value;
	}

	inline static int32_t get_offset_of_ColorForInferredObjects_19() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___ColorForInferredObjects_19)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForInferredObjects_19() const { return ___ColorForInferredObjects_19; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForInferredObjects_19() { return &___ColorForInferredObjects_19; }
	inline void set_ColorForInferredObjects_19(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForInferredObjects_19 = value;
	}

	inline static int32_t get_offset_of_ColorForWorldObjects_20() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___ColorForWorldObjects_20)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForWorldObjects_20() const { return ___ColorForWorldObjects_20; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForWorldObjects_20() { return &___ColorForWorldObjects_20; }
	inline void set_ColorForWorldObjects_20(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForWorldObjects_20 = value;
	}

	inline static int32_t get_offset_of_LayerForBackgroundObjects_21() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___LayerForBackgroundObjects_21)); }
	inline int32_t get_LayerForBackgroundObjects_21() const { return ___LayerForBackgroundObjects_21; }
	inline int32_t* get_address_of_LayerForBackgroundObjects_21() { return &___LayerForBackgroundObjects_21; }
	inline void set_LayerForBackgroundObjects_21(int32_t value)
	{
		___LayerForBackgroundObjects_21 = value;
	}

	inline static int32_t get_offset_of_LayerForWallObjects_22() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___LayerForWallObjects_22)); }
	inline int32_t get_LayerForWallObjects_22() const { return ___LayerForWallObjects_22; }
	inline int32_t* get_address_of_LayerForWallObjects_22() { return &___LayerForWallObjects_22; }
	inline void set_LayerForWallObjects_22(int32_t value)
	{
		___LayerForWallObjects_22 = value;
	}

	inline static int32_t get_offset_of_LayerForFloorObjects_23() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___LayerForFloorObjects_23)); }
	inline int32_t get_LayerForFloorObjects_23() const { return ___LayerForFloorObjects_23; }
	inline int32_t* get_address_of_LayerForFloorObjects_23() { return &___LayerForFloorObjects_23; }
	inline void set_LayerForFloorObjects_23(int32_t value)
	{
		___LayerForFloorObjects_23 = value;
	}

	inline static int32_t get_offset_of_LayerForCeilingObjects_24() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___LayerForCeilingObjects_24)); }
	inline int32_t get_LayerForCeilingObjects_24() const { return ___LayerForCeilingObjects_24; }
	inline int32_t* get_address_of_LayerForCeilingObjects_24() { return &___LayerForCeilingObjects_24; }
	inline void set_LayerForCeilingObjects_24(int32_t value)
	{
		___LayerForCeilingObjects_24 = value;
	}

	inline static int32_t get_offset_of_LayerForPlatformsObjects_25() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___LayerForPlatformsObjects_25)); }
	inline int32_t get_LayerForPlatformsObjects_25() const { return ___LayerForPlatformsObjects_25; }
	inline int32_t* get_address_of_LayerForPlatformsObjects_25() { return &___LayerForPlatformsObjects_25; }
	inline void set_LayerForPlatformsObjects_25(int32_t value)
	{
		___LayerForPlatformsObjects_25 = value;
	}

	inline static int32_t get_offset_of_LayerForUnknownObjects_26() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___LayerForUnknownObjects_26)); }
	inline int32_t get_LayerForUnknownObjects_26() const { return ___LayerForUnknownObjects_26; }
	inline int32_t* get_address_of_LayerForUnknownObjects_26() { return &___LayerForUnknownObjects_26; }
	inline void set_LayerForUnknownObjects_26(int32_t value)
	{
		___LayerForUnknownObjects_26 = value;
	}

	inline static int32_t get_offset_of_LayerForInferredObjects_27() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___LayerForInferredObjects_27)); }
	inline int32_t get_LayerForInferredObjects_27() const { return ___LayerForInferredObjects_27; }
	inline int32_t* get_address_of_LayerForInferredObjects_27() { return &___LayerForInferredObjects_27; }
	inline void set_LayerForInferredObjects_27(int32_t value)
	{
		___LayerForInferredObjects_27 = value;
	}

	inline static int32_t get_offset_of_LayerForWorldObjects_28() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___LayerForWorldObjects_28)); }
	inline int32_t get_LayerForWorldObjects_28() const { return ___LayerForWorldObjects_28; }
	inline int32_t* get_address_of_LayerForWorldObjects_28() { return &___LayerForWorldObjects_28; }
	inline void set_LayerForWorldObjects_28(int32_t value)
	{
		___LayerForWorldObjects_28 = value;
	}

	inline static int32_t get_offset_of_SceneObjectBackgroundMeshMaterial_29() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectBackgroundMeshMaterial_29)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectBackgroundMeshMaterial_29() const { return ___SceneObjectBackgroundMeshMaterial_29; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectBackgroundMeshMaterial_29() { return &___SceneObjectBackgroundMeshMaterial_29; }
	inline void set_SceneObjectBackgroundMeshMaterial_29(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectBackgroundMeshMaterial_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectBackgroundMeshMaterial_29), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectWallMeshMaterial_30() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectWallMeshMaterial_30)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectWallMeshMaterial_30() const { return ___SceneObjectWallMeshMaterial_30; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectWallMeshMaterial_30() { return &___SceneObjectWallMeshMaterial_30; }
	inline void set_SceneObjectWallMeshMaterial_30(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectWallMeshMaterial_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectWallMeshMaterial_30), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectFloorMeshMaterial_31() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectFloorMeshMaterial_31)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectFloorMeshMaterial_31() const { return ___SceneObjectFloorMeshMaterial_31; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectFloorMeshMaterial_31() { return &___SceneObjectFloorMeshMaterial_31; }
	inline void set_SceneObjectFloorMeshMaterial_31(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectFloorMeshMaterial_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectFloorMeshMaterial_31), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectCeilingMeshMaterial_32() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectCeilingMeshMaterial_32)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectCeilingMeshMaterial_32() const { return ___SceneObjectCeilingMeshMaterial_32; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectCeilingMeshMaterial_32() { return &___SceneObjectCeilingMeshMaterial_32; }
	inline void set_SceneObjectCeilingMeshMaterial_32(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectCeilingMeshMaterial_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectCeilingMeshMaterial_32), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectPlatformMeshMaterial_33() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectPlatformMeshMaterial_33)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectPlatformMeshMaterial_33() const { return ___SceneObjectPlatformMeshMaterial_33; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectPlatformMeshMaterial_33() { return &___SceneObjectPlatformMeshMaterial_33; }
	inline void set_SceneObjectPlatformMeshMaterial_33(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectPlatformMeshMaterial_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectPlatformMeshMaterial_33), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectUnknownMeshMaterial_34() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectUnknownMeshMaterial_34)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectUnknownMeshMaterial_34() const { return ___SceneObjectUnknownMeshMaterial_34; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectUnknownMeshMaterial_34() { return &___SceneObjectUnknownMeshMaterial_34; }
	inline void set_SceneObjectUnknownMeshMaterial_34(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectUnknownMeshMaterial_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectUnknownMeshMaterial_34), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectInferredMeshMaterial_35() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectInferredMeshMaterial_35)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectInferredMeshMaterial_35() const { return ___SceneObjectInferredMeshMaterial_35; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectInferredMeshMaterial_35() { return &___SceneObjectInferredMeshMaterial_35; }
	inline void set_SceneObjectInferredMeshMaterial_35(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectInferredMeshMaterial_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectInferredMeshMaterial_35), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectBackgroundQuadMaterial_36() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectBackgroundQuadMaterial_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectBackgroundQuadMaterial_36() const { return ___SceneObjectBackgroundQuadMaterial_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectBackgroundQuadMaterial_36() { return &___SceneObjectBackgroundQuadMaterial_36; }
	inline void set_SceneObjectBackgroundQuadMaterial_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectBackgroundQuadMaterial_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectBackgroundQuadMaterial_36), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectWallQuadMaterial_37() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectWallQuadMaterial_37)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectWallQuadMaterial_37() const { return ___SceneObjectWallQuadMaterial_37; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectWallQuadMaterial_37() { return &___SceneObjectWallQuadMaterial_37; }
	inline void set_SceneObjectWallQuadMaterial_37(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectWallQuadMaterial_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectWallQuadMaterial_37), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectFloorQuadMaterial_38() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectFloorQuadMaterial_38)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectFloorQuadMaterial_38() const { return ___SceneObjectFloorQuadMaterial_38; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectFloorQuadMaterial_38() { return &___SceneObjectFloorQuadMaterial_38; }
	inline void set_SceneObjectFloorQuadMaterial_38(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectFloorQuadMaterial_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectFloorQuadMaterial_38), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectCeilingQuadMaterial_39() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectCeilingQuadMaterial_39)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectCeilingQuadMaterial_39() const { return ___SceneObjectCeilingQuadMaterial_39; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectCeilingQuadMaterial_39() { return &___SceneObjectCeilingQuadMaterial_39; }
	inline void set_SceneObjectCeilingQuadMaterial_39(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectCeilingQuadMaterial_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectCeilingQuadMaterial_39), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectPlatformQuadMaterial_40() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectPlatformQuadMaterial_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectPlatformQuadMaterial_40() const { return ___SceneObjectPlatformQuadMaterial_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectPlatformQuadMaterial_40() { return &___SceneObjectPlatformQuadMaterial_40; }
	inline void set_SceneObjectPlatformQuadMaterial_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectPlatformQuadMaterial_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectPlatformQuadMaterial_40), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectUnknownQuadMaterial_41() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectUnknownQuadMaterial_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectUnknownQuadMaterial_41() const { return ___SceneObjectUnknownQuadMaterial_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectUnknownQuadMaterial_41() { return &___SceneObjectUnknownQuadMaterial_41; }
	inline void set_SceneObjectUnknownQuadMaterial_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectUnknownQuadMaterial_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectUnknownQuadMaterial_41), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectInferredQuadMaterial_42() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectInferredQuadMaterial_42)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectInferredQuadMaterial_42() const { return ___SceneObjectInferredQuadMaterial_42; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectInferredQuadMaterial_42() { return &___SceneObjectInferredQuadMaterial_42; }
	inline void set_SceneObjectInferredQuadMaterial_42(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectInferredQuadMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectInferredQuadMaterial_42), (void*)value);
	}

	inline static int32_t get_offset_of_SceneObjectWireframeMaterial_43() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SceneObjectWireframeMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SceneObjectWireframeMaterial_43() const { return ___SceneObjectWireframeMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SceneObjectWireframeMaterial_43() { return &___SceneObjectWireframeMaterial_43; }
	inline void set_SceneObjectWireframeMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SceneObjectWireframeMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneObjectWireframeMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_TransparentOcclussion_44() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___TransparentOcclussion_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_TransparentOcclussion_44() const { return ___TransparentOcclussion_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_TransparentOcclussion_44() { return &___TransparentOcclussion_44; }
	inline void set_TransparentOcclussion_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___TransparentOcclussion_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TransparentOcclussion_44), (void*)value);
	}

	inline static int32_t get_offset_of_FilterAllSceneObjects_45() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___FilterAllSceneObjects_45)); }
	inline bool get_FilterAllSceneObjects_45() const { return ___FilterAllSceneObjects_45; }
	inline bool* get_address_of_FilterAllSceneObjects_45() { return &___FilterAllSceneObjects_45; }
	inline void set_FilterAllSceneObjects_45(bool value)
	{
		___FilterAllSceneObjects_45 = value;
	}

	inline static int32_t get_offset_of_FilterPlatformSceneObjects_46() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___FilterPlatformSceneObjects_46)); }
	inline bool get_FilterPlatformSceneObjects_46() const { return ___FilterPlatformSceneObjects_46; }
	inline bool* get_address_of_FilterPlatformSceneObjects_46() { return &___FilterPlatformSceneObjects_46; }
	inline void set_FilterPlatformSceneObjects_46(bool value)
	{
		___FilterPlatformSceneObjects_46 = value;
	}

	inline static int32_t get_offset_of_FilterBackgroundSceneObjects_47() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___FilterBackgroundSceneObjects_47)); }
	inline bool get_FilterBackgroundSceneObjects_47() const { return ___FilterBackgroundSceneObjects_47; }
	inline bool* get_address_of_FilterBackgroundSceneObjects_47() { return &___FilterBackgroundSceneObjects_47; }
	inline void set_FilterBackgroundSceneObjects_47(bool value)
	{
		___FilterBackgroundSceneObjects_47 = value;
	}

	inline static int32_t get_offset_of_FilterUnknownSceneObjects_48() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___FilterUnknownSceneObjects_48)); }
	inline bool get_FilterUnknownSceneObjects_48() const { return ___FilterUnknownSceneObjects_48; }
	inline bool* get_address_of_FilterUnknownSceneObjects_48() { return &___FilterUnknownSceneObjects_48; }
	inline void set_FilterUnknownSceneObjects_48(bool value)
	{
		___FilterUnknownSceneObjects_48 = value;
	}

	inline static int32_t get_offset_of_FilterWorldMesh_49() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___FilterWorldMesh_49)); }
	inline bool get_FilterWorldMesh_49() const { return ___FilterWorldMesh_49; }
	inline bool* get_address_of_FilterWorldMesh_49() { return &___FilterWorldMesh_49; }
	inline void set_FilterWorldMesh_49(bool value)
	{
		___FilterWorldMesh_49 = value;
	}

	inline static int32_t get_offset_of_FilterCompletelyInferredSceneObjects_50() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___FilterCompletelyInferredSceneObjects_50)); }
	inline bool get_FilterCompletelyInferredSceneObjects_50() const { return ___FilterCompletelyInferredSceneObjects_50; }
	inline bool* get_address_of_FilterCompletelyInferredSceneObjects_50() { return &___FilterCompletelyInferredSceneObjects_50; }
	inline void set_FilterCompletelyInferredSceneObjects_50(bool value)
	{
		___FilterCompletelyInferredSceneObjects_50 = value;
	}

	inline static int32_t get_offset_of_FilterWallSceneObjects_51() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___FilterWallSceneObjects_51)); }
	inline bool get_FilterWallSceneObjects_51() const { return ___FilterWallSceneObjects_51; }
	inline bool* get_address_of_FilterWallSceneObjects_51() { return &___FilterWallSceneObjects_51; }
	inline void set_FilterWallSceneObjects_51(bool value)
	{
		___FilterWallSceneObjects_51 = value;
	}

	inline static int32_t get_offset_of_FilterFloorSceneObjects_52() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___FilterFloorSceneObjects_52)); }
	inline bool get_FilterFloorSceneObjects_52() const { return ___FilterFloorSceneObjects_52; }
	inline bool* get_address_of_FilterFloorSceneObjects_52() { return &___FilterFloorSceneObjects_52; }
	inline void set_FilterFloorSceneObjects_52(bool value)
	{
		___FilterFloorSceneObjects_52 = value;
	}

	inline static int32_t get_offset_of_FilterCeilingSceneObjects_53() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___FilterCeilingSceneObjects_53)); }
	inline bool get_FilterCeilingSceneObjects_53() const { return ___FilterCeilingSceneObjects_53; }
	inline bool* get_address_of_FilterCeilingSceneObjects_53() { return &___FilterCeilingSceneObjects_53; }
	inline void set_FilterCeilingSceneObjects_53(bool value)
	{
		___FilterCeilingSceneObjects_53 = value;
	}

	inline static int32_t get_offset_of_AddCollidersInPlatformSceneObjects_54() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___AddCollidersInPlatformSceneObjects_54)); }
	inline bool get_AddCollidersInPlatformSceneObjects_54() const { return ___AddCollidersInPlatformSceneObjects_54; }
	inline bool* get_address_of_AddCollidersInPlatformSceneObjects_54() { return &___AddCollidersInPlatformSceneObjects_54; }
	inline void set_AddCollidersInPlatformSceneObjects_54(bool value)
	{
		___AddCollidersInPlatformSceneObjects_54 = value;
	}

	inline static int32_t get_offset_of_AddCollidersInBackgroundSceneObjects_55() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___AddCollidersInBackgroundSceneObjects_55)); }
	inline bool get_AddCollidersInBackgroundSceneObjects_55() const { return ___AddCollidersInBackgroundSceneObjects_55; }
	inline bool* get_address_of_AddCollidersInBackgroundSceneObjects_55() { return &___AddCollidersInBackgroundSceneObjects_55; }
	inline void set_AddCollidersInBackgroundSceneObjects_55(bool value)
	{
		___AddCollidersInBackgroundSceneObjects_55 = value;
	}

	inline static int32_t get_offset_of_AddCollidersInUnknownSceneObjects_56() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___AddCollidersInUnknownSceneObjects_56)); }
	inline bool get_AddCollidersInUnknownSceneObjects_56() const { return ___AddCollidersInUnknownSceneObjects_56; }
	inline bool* get_address_of_AddCollidersInUnknownSceneObjects_56() { return &___AddCollidersInUnknownSceneObjects_56; }
	inline void set_AddCollidersInUnknownSceneObjects_56(bool value)
	{
		___AddCollidersInUnknownSceneObjects_56 = value;
	}

	inline static int32_t get_offset_of_AddCollidersInWorldMesh_57() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___AddCollidersInWorldMesh_57)); }
	inline bool get_AddCollidersInWorldMesh_57() const { return ___AddCollidersInWorldMesh_57; }
	inline bool* get_address_of_AddCollidersInWorldMesh_57() { return &___AddCollidersInWorldMesh_57; }
	inline void set_AddCollidersInWorldMesh_57(bool value)
	{
		___AddCollidersInWorldMesh_57 = value;
	}

	inline static int32_t get_offset_of_AddCollidersInCompletelyInferredSceneObjects_58() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___AddCollidersInCompletelyInferredSceneObjects_58)); }
	inline bool get_AddCollidersInCompletelyInferredSceneObjects_58() const { return ___AddCollidersInCompletelyInferredSceneObjects_58; }
	inline bool* get_address_of_AddCollidersInCompletelyInferredSceneObjects_58() { return &___AddCollidersInCompletelyInferredSceneObjects_58; }
	inline void set_AddCollidersInCompletelyInferredSceneObjects_58(bool value)
	{
		___AddCollidersInCompletelyInferredSceneObjects_58 = value;
	}

	inline static int32_t get_offset_of_AddCollidersInWallSceneObjects_59() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___AddCollidersInWallSceneObjects_59)); }
	inline bool get_AddCollidersInWallSceneObjects_59() const { return ___AddCollidersInWallSceneObjects_59; }
	inline bool* get_address_of_AddCollidersInWallSceneObjects_59() { return &___AddCollidersInWallSceneObjects_59; }
	inline void set_AddCollidersInWallSceneObjects_59(bool value)
	{
		___AddCollidersInWallSceneObjects_59 = value;
	}

	inline static int32_t get_offset_of_AddCollidersInFloorSceneObjects_60() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___AddCollidersInFloorSceneObjects_60)); }
	inline bool get_AddCollidersInFloorSceneObjects_60() const { return ___AddCollidersInFloorSceneObjects_60; }
	inline bool* get_address_of_AddCollidersInFloorSceneObjects_60() { return &___AddCollidersInFloorSceneObjects_60; }
	inline void set_AddCollidersInFloorSceneObjects_60(bool value)
	{
		___AddCollidersInFloorSceneObjects_60 = value;
	}

	inline static int32_t get_offset_of_AddCollidersCeilingSceneObjects_61() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___AddCollidersCeilingSceneObjects_61)); }
	inline bool get_AddCollidersCeilingSceneObjects_61() const { return ___AddCollidersCeilingSceneObjects_61; }
	inline bool* get_address_of_AddCollidersCeilingSceneObjects_61() { return &___AddCollidersCeilingSceneObjects_61; }
	inline void set_AddCollidersCeilingSceneObjects_61(bool value)
	{
		___AddCollidersCeilingSceneObjects_61 = value;
	}

	inline static int32_t get_offset_of_IsInGhostMode_62() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___IsInGhostMode_62)); }
	inline bool get_IsInGhostMode_62() const { return ___IsInGhostMode_62; }
	inline bool* get_address_of_IsInGhostMode_62() { return &___IsInGhostMode_62; }
	inline void set_IsInGhostMode_62(bool value)
	{
		___IsInGhostMode_62 = value;
	}

	inline static int32_t get_offset_of_AlignSUObjectsNormalToUnityYAxis_63() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___AlignSUObjectsNormalToUnityYAxis_63)); }
	inline bool get_AlignSUObjectsNormalToUnityYAxis_63() const { return ___AlignSUObjectsNormalToUnityYAxis_63; }
	inline bool* get_address_of_AlignSUObjectsNormalToUnityYAxis_63() { return &___AlignSUObjectsNormalToUnityYAxis_63; }
	inline void set_AlignSUObjectsNormalToUnityYAxis_63(bool value)
	{
		___AlignSUObjectsNormalToUnityYAxis_63 = value;
	}

	inline static int32_t get_offset_of_OnLoadStarted_64() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___OnLoadStarted_64)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnLoadStarted_64() const { return ___OnLoadStarted_64; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnLoadStarted_64() { return &___OnLoadStarted_64; }
	inline void set_OnLoadStarted_64(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnLoadStarted_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLoadStarted_64), (void*)value);
	}

	inline static int32_t get_offset_of_OnLoadFinished_65() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___OnLoadFinished_65)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnLoadFinished_65() const { return ___OnLoadFinished_65; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnLoadFinished_65() { return &___OnLoadFinished_65; }
	inline void set_OnLoadFinished_65(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnLoadFinished_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLoadFinished_65), (void*)value);
	}

	inline static int32_t get_offset_of_materialCache_66() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___materialCache_66)); }
	inline Dictionary_2_t2992CEAE94F0811CC022927721DC7F829FAFB6D3 * get_materialCache_66() const { return ___materialCache_66; }
	inline Dictionary_2_t2992CEAE94F0811CC022927721DC7F829FAFB6D3 ** get_address_of_materialCache_66() { return &___materialCache_66; }
	inline void set_materialCache_66(Dictionary_2_t2992CEAE94F0811CC022927721DC7F829FAFB6D3 * value)
	{
		___materialCache_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materialCache_66), (void*)value);
	}

	inline static int32_t get_offset_of_MinBoundingSphereRadiusInMeters_67() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___MinBoundingSphereRadiusInMeters_67)); }
	inline float get_MinBoundingSphereRadiusInMeters_67() const { return ___MinBoundingSphereRadiusInMeters_67; }
	inline float* get_address_of_MinBoundingSphereRadiusInMeters_67() { return &___MinBoundingSphereRadiusInMeters_67; }
	inline void set_MinBoundingSphereRadiusInMeters_67(float value)
	{
		___MinBoundingSphereRadiusInMeters_67 = value;
	}

	inline static int32_t get_offset_of_MaxBoundingSphereRadiusInMeters_68() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___MaxBoundingSphereRadiusInMeters_68)); }
	inline float get_MaxBoundingSphereRadiusInMeters_68() const { return ___MaxBoundingSphereRadiusInMeters_68; }
	inline float* get_address_of_MaxBoundingSphereRadiusInMeters_68() { return &___MaxBoundingSphereRadiusInMeters_68; }
	inline void set_MaxBoundingSphereRadiusInMeters_68(float value)
	{
		___MaxBoundingSphereRadiusInMeters_68 = value;
	}

	inline static int32_t get_offset_of_LatestSUSceneData_69() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___LatestSUSceneData_69)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_LatestSUSceneData_69() const { return ___LatestSUSceneData_69; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_LatestSUSceneData_69() { return &___LatestSUSceneData_69; }
	inline void set_LatestSUSceneData_69(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___LatestSUSceneData_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LatestSUSceneData_69), (void*)value);
	}

	inline static int32_t get_offset_of_SUDataLock_70() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___SUDataLock_70)); }
	inline RuntimeObject * get_SUDataLock_70() const { return ___SUDataLock_70; }
	inline RuntimeObject ** get_address_of_SUDataLock_70() { return &___SUDataLock_70; }
	inline void set_SUDataLock_70(RuntimeObject * value)
	{
		___SUDataLock_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SUDataLock_70), (void*)value);
	}

	inline static int32_t get_offset_of_LatestSceneGuid_71() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___LatestSceneGuid_71)); }
	inline Guid_t  get_LatestSceneGuid_71() const { return ___LatestSceneGuid_71; }
	inline Guid_t * get_address_of_LatestSceneGuid_71() { return &___LatestSceneGuid_71; }
	inline void set_LatestSceneGuid_71(Guid_t  value)
	{
		___LatestSceneGuid_71 = value;
	}

	inline static int32_t get_offset_of_LastDisplayedSceneGuid_72() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___LastDisplayedSceneGuid_72)); }
	inline Guid_t  get_LastDisplayedSceneGuid_72() const { return ___LastDisplayedSceneGuid_72; }
	inline Guid_t * get_address_of_LastDisplayedSceneGuid_72() { return &___LastDisplayedSceneGuid_72; }
	inline void set_LastDisplayedSceneGuid_72(Guid_t  value)
	{
		___LastDisplayedSceneGuid_72 = value;
	}

	inline static int32_t get_offset_of_displayTask_73() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___displayTask_73)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_displayTask_73() const { return ___displayTask_73; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_displayTask_73() { return &___displayTask_73; }
	inline void set_displayTask_73(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___displayTask_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayTask_73), (void*)value);
	}

	inline static int32_t get_offset_of_TimeElapsedSinceLastAutoRefresh_74() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___TimeElapsedSinceLastAutoRefresh_74)); }
	inline float get_TimeElapsedSinceLastAutoRefresh_74() const { return ___TimeElapsedSinceLastAutoRefresh_74; }
	inline float* get_address_of_TimeElapsedSinceLastAutoRefresh_74() { return &___TimeElapsedSinceLastAutoRefresh_74; }
	inline void set_TimeElapsedSinceLastAutoRefresh_74(float value)
	{
		___TimeElapsedSinceLastAutoRefresh_74 = value;
	}

	inline static int32_t get_offset_of_DisplayFromDiskStarted_75() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___DisplayFromDiskStarted_75)); }
	inline bool get_DisplayFromDiskStarted_75() const { return ___DisplayFromDiskStarted_75; }
	inline bool* get_address_of_DisplayFromDiskStarted_75() { return &___DisplayFromDiskStarted_75; }
	inline void set_DisplayFromDiskStarted_75(bool value)
	{
		___DisplayFromDiskStarted_75 = value;
	}

	inline static int32_t get_offset_of_RunOnDevice_76() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___RunOnDevice_76)); }
	inline bool get_RunOnDevice_76() const { return ___RunOnDevice_76; }
	inline bool* get_address_of_RunOnDevice_76() { return &___RunOnDevice_76; }
	inline void set_RunOnDevice_76(bool value)
	{
		___RunOnDevice_76 = value;
	}

	inline static int32_t get_offset_of_NumberOfSceneObjectsToLoadPerFrame_77() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___NumberOfSceneObjectsToLoadPerFrame_77)); }
	inline int32_t get_NumberOfSceneObjectsToLoadPerFrame_77() const { return ___NumberOfSceneObjectsToLoadPerFrame_77; }
	inline int32_t* get_address_of_NumberOfSceneObjectsToLoadPerFrame_77() { return &___NumberOfSceneObjectsToLoadPerFrame_77; }
	inline void set_NumberOfSceneObjectsToLoadPerFrame_77(int32_t value)
	{
		___NumberOfSceneObjectsToLoadPerFrame_77 = value;
	}

	inline static int32_t get_offset_of_cachedDeserializedScene_78() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___cachedDeserializedScene_78)); }
	inline Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * get_cachedDeserializedScene_78() const { return ___cachedDeserializedScene_78; }
	inline Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D ** get_address_of_cachedDeserializedScene_78() { return &___cachedDeserializedScene_78; }
	inline void set_cachedDeserializedScene_78(Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * value)
	{
		___cachedDeserializedScene_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedDeserializedScene_78), (void*)value);
	}

	inline static int32_t get_offset_of_cachedDeserializedSceneLock_79() { return static_cast<int32_t>(offsetof(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE, ___cachedDeserializedSceneLock_79)); }
	inline RuntimeObject * get_cachedDeserializedSceneLock_79() const { return ___cachedDeserializedSceneLock_79; }
	inline RuntimeObject ** get_address_of_cachedDeserializedSceneLock_79() { return &___cachedDeserializedSceneLock_79; }
	inline void set_cachedDeserializedSceneLock_79(RuntimeObject * value)
	{
		___cachedDeserializedSceneLock_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedDeserializedSceneLock_79), (void*)value);
	}
};


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer
struct SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer::objToPlaceRef
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___objToPlaceRef_4;
	// UnityEngine.Material Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_5;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer::UseSUSDKPlacementAPI
	bool ___UseSUSDKPlacementAPI_6;
	// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer::manager
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * ___manager_7;
	// UnityEngine.GameObject Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer::objToPlace
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___objToPlace_8;
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer::isPlacing
	bool ___isPlacing_9;
	// System.Single Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer::placementScaleForSUSDKAPI
	float ___placementScaleForSUSDKAPI_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer::holoObjects
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___holoObjects_11;

public:
	inline static int32_t get_offset_of_objToPlaceRef_4() { return static_cast<int32_t>(offsetof(SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7, ___objToPlaceRef_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_objToPlaceRef_4() const { return ___objToPlaceRef_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_objToPlaceRef_4() { return &___objToPlaceRef_4; }
	inline void set_objToPlaceRef_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___objToPlaceRef_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objToPlaceRef_4), (void*)value);
	}

	inline static int32_t get_offset_of_material_5() { return static_cast<int32_t>(offsetof(SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7, ___material_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_5() const { return ___material_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_5() { return &___material_5; }
	inline void set_material_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_5), (void*)value);
	}

	inline static int32_t get_offset_of_UseSUSDKPlacementAPI_6() { return static_cast<int32_t>(offsetof(SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7, ___UseSUSDKPlacementAPI_6)); }
	inline bool get_UseSUSDKPlacementAPI_6() const { return ___UseSUSDKPlacementAPI_6; }
	inline bool* get_address_of_UseSUSDKPlacementAPI_6() { return &___UseSUSDKPlacementAPI_6; }
	inline void set_UseSUSDKPlacementAPI_6(bool value)
	{
		___UseSUSDKPlacementAPI_6 = value;
	}

	inline static int32_t get_offset_of_manager_7() { return static_cast<int32_t>(offsetof(SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7, ___manager_7)); }
	inline SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * get_manager_7() const { return ___manager_7; }
	inline SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE ** get_address_of_manager_7() { return &___manager_7; }
	inline void set_manager_7(SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * value)
	{
		___manager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_7), (void*)value);
	}

	inline static int32_t get_offset_of_objToPlace_8() { return static_cast<int32_t>(offsetof(SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7, ___objToPlace_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_objToPlace_8() const { return ___objToPlace_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_objToPlace_8() { return &___objToPlace_8; }
	inline void set_objToPlace_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___objToPlace_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objToPlace_8), (void*)value);
	}

	inline static int32_t get_offset_of_isPlacing_9() { return static_cast<int32_t>(offsetof(SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7, ___isPlacing_9)); }
	inline bool get_isPlacing_9() const { return ___isPlacing_9; }
	inline bool* get_address_of_isPlacing_9() { return &___isPlacing_9; }
	inline void set_isPlacing_9(bool value)
	{
		___isPlacing_9 = value;
	}

	inline static int32_t get_offset_of_placementScaleForSUSDKAPI_10() { return static_cast<int32_t>(offsetof(SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7, ___placementScaleForSUSDKAPI_10)); }
	inline float get_placementScaleForSUSDKAPI_10() const { return ___placementScaleForSUSDKAPI_10; }
	inline float* get_address_of_placementScaleForSUSDKAPI_10() { return &___placementScaleForSUSDKAPI_10; }
	inline void set_placementScaleForSUSDKAPI_10(float value)
	{
		___placementScaleForSUSDKAPI_10 = value;
	}

	inline static int32_t get_offset_of_holoObjects_11() { return static_cast<int32_t>(offsetof(SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7, ___holoObjects_11)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_holoObjects_11() const { return ___holoObjects_11; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_holoObjects_11() { return &___holoObjects_11; }
	inline void set_holoObjects_11(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___holoObjects_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___holoObjects_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.SceneUnderstanding.SceneFragment[]
struct SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * m_Items[1];

public:
	inline SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Object>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m58C7F91BED3078A6174F13405E451FA465826A3D_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m56AA31A7122850F2B23905813FC3CD168CEB4D49_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB * ___stateMachine1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  List_1_GetEnumerator_m727BA8689385EAF30E46DD5720E3C36A2EE2048E_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A_gshared (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9905093718C2F34CB58BC1D8E16860E029C08456_gshared (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveObjsToDiskAsync>d__104>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659_m52BF6B75A60319F472F3D6710986DB7390FFF4B0_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_m47AA111D9370DED11EEAD91504EDDCC00A60E698_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_mBA8ACF1AC5B477159C3B04F6A6468AC407F29C12_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 * ___stateMachine1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int32Enum>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7  Task_1_GetAwaiter_m4EF638C9B2EDBA17F0C9F4DD1029E9BD08C7BF19_gshared (Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m2A676042F160D1A6A0BA2AD08D10AE3F41277FEB_gshared (TaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Start>d__76>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7_TisU3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F_mA920E4FD8D4465A9688207449BF67FE1EA13CE94_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7 * ___awaiter0, U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m0E423017AA9BCD5014ECA8DF02802488ECB0B673_gshared (TaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Update>d__77>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2_mC4ED335952E3DCC5B3FBD0838B1D34F0CA1EA94F_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 * ___stateMachine1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m6AC78B553639A108EA00728498FA037E52CC425E (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m1BBE1AABAAFE39019ED26585D12E67A1F9D5A4AA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_m6E1FEADC4E62BCC99846934C0761F0AF67DFE17A (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Byte[] Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::GetLatestSceneBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SceneUnderstandingManager_GetLatestSceneBytes_mB7771B5C7B1ADB8E4654AC1FC37AA3FC6E2FEF35 (SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * __this, const RuntimeMethod* method);
// Windows.Storage.ApplicationData Windows.Storage.ApplicationData::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9 * ApplicationData_get_Current_mEC0F896D294D660711178C8F7D6F75697B10B230 (const RuntimeMethod* method);
// Windows.Storage.StorageFolder Windows.Storage.ApplicationData::get_LocalFolder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * ApplicationData_get_LocalFolder_mE9F8D02C6F2A4FE34889891B7F7A48AD19202383 (ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9 * __this, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile> Windows.Storage.StorageFolder::CreateFileAsync(System.String,Windows.Storage.CreationCollisionOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StorageFolder_CreateFileAsync_m34F3CB53AFCA4762C7B57C4F5F586C5099CD9EA1 (StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * __this, String_t* ___desiredName0, int32_t ___options1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Storage.StorageFile>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m8727A51CCB08CE132081B70735A4787252AF9908 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * ___awaiter0, U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m58C7F91BED3078A6174F13405E451FA465826A3D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>::GetResult()
inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * __this, const RuntimeMethod* method)
{
	return ((  StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * (*) (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// Windows.Foundation.IAsyncAction Windows.Storage.FileIO::WriteBytesAsync(Windows.Storage.IStorageFile,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileIO_WriteBytesAsync_mCFE4E28CAEDD1B418E1238F934F2FFB4ECAFFF47 (RuntimeObject* ___file0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.WindowsRuntimeSystemExtensions::GetAwaiter(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  WindowsRuntimeSystemExtensions_GetAwaiter_m0218FEA730C2DAD8311AA5A6BAE767DC7BB5D58B (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m56AA31A7122850F2B23905813FC3CD168CEB4D49 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m56AA31A7122850F2B23905813FC3CD168CEB4D49_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.TextAsset>::GetEnumerator()
inline Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF  List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC (List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF  (*) (List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.TextAsset>::get_Current()
inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_inline (Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF * __this, const RuntimeMethod* method)
{
	return ((  TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * (*) (Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Byte[] UnityEngine.TextAsset::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetTempPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetTempPath_m3A0C2630133CA7FCD4BE0F2B5440A6C46DC53B83 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.TextAsset>::MoveNext()
inline bool Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D (Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.TextAsset>::Dispose()
inline void Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F (Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveBytesToDiskAsyncU3Ed__103_MoveNext_m1FC93C7A383A08A28400682BC831D062AC43A4CB (U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveBytesToDiskAsyncU3Ed__103_SetStateMachine_m1BB217BE02B7E12FE268B22A99CA5C500ED4A5F3 (U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>::.ctor()
inline void List_1__ctor_mCA3F1B4A7C89257C36FDA2E4302AB750F8C5A7E7 (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 *, const RuntimeMethod*))List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>::Add(!0)
inline void List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 *, int32_t, const RuntimeMethod*))List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor()
inline void List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85 (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// Microsoft.MixedReality.SceneUnderstanding.SceneFragment Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::GetLatestSceneSerialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * SceneUnderstandingManager_GetLatestSceneSerialization_mAB379F2F3D2CAF6CC856C1C735B17B95EA603E27 (SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Microsoft.MixedReality.SceneUnderstanding.Scene Microsoft.MixedReality.SceneUnderstanding.Scene::FromFragments(Microsoft.MixedReality.SceneUnderstanding.SceneFragment[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * Scene_FromFragments_m0E7D5E013FED54A4B4D448F83EA965E591541DC1 (SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* ___sceneFragments0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TextAsset>::get_Count()
inline int32_t List_1_get_Count_m0BB1FBDBC8F42797B9A8C54C0E2D9B33FBD8EF08_inline (List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.SceneUnderstanding.SceneFragment Microsoft.MixedReality.SceneUnderstanding.SceneFragment::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * SceneFragment_Deserialize_m31FC02F1B5882ED8D63A1A4F3CCE6B33F50D9777 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___serializedSceneFragment0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>::GetEnumerator()
inline Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54  List_1_GetEnumerator_mF77159120E380419524D9338A8F33D27460A5F9B (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54  (*) (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 *, const RuntimeMethod*))List_1_GetEnumerator_m727BA8689385EAF30E46DD5720E3C36A2EE2048E_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>::get_Current()
inline int32_t Enumerator_get_Current_mED17FF7801359A6E44DE28A3DE0F4DDA3FC905E0_inline (Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 *, const RuntimeMethod*))Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::.ctor()
inline void List_1__ctor_mF37C7F12F27B8716644D04AB9D484ECEE44848E6 (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject> Microsoft.MixedReality.SceneUnderstanding.Scene::get_SceneObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Scene_get_SceneObjects_mB784FAB9903AD8AD46D3ADFF5BF4CF389AAE77F6 (Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind Microsoft.MixedReality.SceneUnderstanding.SceneObject::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneObject_get_Kind_m2DC82991CD3E3BFCE41A0CEA0098BC42A9D7207D (SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::Add(!0)
inline void List_1_Add_m5255798E349416BABA17730F9F8EA34D8FDDEDBA (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * __this, SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF *, SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::get_Count()
inline int32_t List_1_get_Count_mE792CFEFA0D524F630ED195F5A74F953346942BB_inline (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Nullable`1<UnityEngine.Color> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::GetColor(Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  SceneUnderstandingManager_GetColor_m3CC9C7F7BA70F5CD571B86EC7CE95145E9BC40BA (SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * __this, int32_t ___kind0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::SaveAllSceneObjectsOfAKindAsOneObj(System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>,System.Nullable`1<UnityEngine.Color>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneUnderstandingManager_SaveAllSceneObjectsOfAKindAsOneObj_mF79C1976EB14DFEAE0BE8ECD7370D45EFD8830F7 (SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * __this, List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * ___sceneObjects0, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___color1, String_t* ___fileName2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(!0)
inline void List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514 (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>::MoveNext()
inline bool Enumerator_MoveNext_mF7E1783D62714EC882640A7A9D8C62A478F561EF (Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 *, const RuntimeMethod*))Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>::Dispose()
inline void Enumerator_Dispose_m6172BAD2B0D9FC1881AB61FCDD504276FF9E5CB4 (Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 *, const RuntimeMethod*))Enumerator_Dispose_m9905093718C2F34CB58BC1D8E16860E029C08456_gshared)(__this, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_WhenAll_mA7F77F1CCEF7F07CFDC5F4586FE529E1B4684CBF (RuntimeObject* ___tasks0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveObjsToDiskAsync>d__104>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659_m52BF6B75A60319F472F3D6710986DB7390FFF4B0 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659_m52BF6B75A60319F472F3D6710986DB7390FFF4B0_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveObjsToDiskAsync>d__104::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveObjsToDiskAsyncU3Ed__104_MoveNext_mDC49657CF19074CADEBCA7F37488E42F7859E392 (U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveObjsToDiskAsync>d__104::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveObjsToDiskAsyncU3Ed__104_SetStateMachine_mAF05C3661D7C42A47E23E0731C293F1943B790BC (U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_mC92057FF4B961018E16ACEE567154FCAF443E53F (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * ___awaiter0, U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_m47AA111D9370DED11EEAD91504EDDCC00A60E698_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// Windows.Foundation.IAsyncAction Windows.Storage.FileIO::AppendTextAsync(Windows.Storage.IStorageFile,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileIO_AppendTextAsync_m43E7E7074D7E9CB760170590216025B230DF9E56 (RuntimeObject* ___file0, String_t* ___contents1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_mBA8ACF1AC5B477159C3B04F6A6468AC407F29C12 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_mBA8ACF1AC5B477159C3B04F6A6468AC407F29C12_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveStringToDiskAsyncU3Ed__106_MoveNext_m4F6032BBADA70EE588D8538CD1611C2D5088BA17 (U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveStringToDiskAsyncU3Ed__106_SetStateMachine_m3F7ED9DB01C78DF56FECFC33DF3D2BDA13726D3A (U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.SceneUnderstanding.SceneObserver::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneObserver_IsSupported_mCC1E6FC61E9E39EF4EB5771059FAB06B6CCBE63E (const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.SceneUnderstanding.SceneObserverAccessStatus> Microsoft.MixedReality.SceneUnderstanding.SceneObserver::RequestAccessAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9 * SceneObserver_RequestAccessAsync_m810859CDC57FB1F08D944138CA26F39541102BB9 (const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.SceneUnderstanding.SceneObserverAccessStatus>::GetAwaiter()
inline TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F  Task_1_GetAwaiter_m53E815C9BE7EBD5671C5B5AB323A1F941F0B95CA (Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F  (*) (Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9 *, const RuntimeMethod*))Task_1_GetAwaiter_m4EF638C9B2EDBA17F0C9F4DD1029E9BD08C7BF19_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.SceneUnderstanding.SceneObserverAccessStatus>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m414B0D426DF49C4BF6ADA77683604D5A8BA76680 (TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m2A676042F160D1A6A0BA2AD08D10AE3F41277FEB_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.SceneUnderstanding.SceneObserverAccessStatus>,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Start>d__76>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F_TisU3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F_m6529ECBC267E9C00F47650AA793BBB227D2ACF86 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F * ___awaiter0, U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F *, U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1AD4CE1104B9729E3948AA51217FFD3A46D29BC7_TisU3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F_mA920E4FD8D4465A9688207449BF67FE1EA13CE94_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.SceneUnderstanding.SceneObserverAccessStatus>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_mC146748C4F599E937FA6AB615EDCD983BE11508C (TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m0E423017AA9BCD5014ECA8DF02802488ECB0B673_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Start>d__76::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__76_MoveNext_m79CB6A8BF19144467F263C15BCB378E82622D7EC (U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Start>d__76::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__76_SetStateMachine_m7798E7F4AB0DB8174ACCD54280BBD8F23DCEC95E (U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager::DisplayDataAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneUnderstandingManager_DisplayDataAsync_m1E546DCFD9D061ED1541251CC94B4F3A5915F8BD (SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Update>d__77>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2_mC4ED335952E3DCC5B3FBD0838B1D34F0CA1EA94F (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2_mC4ED335952E3DCC5B3FBD0838B1D34F0CA1EA94F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Update>d__77::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__77_MoveNext_m1BDE05477B60E91C70EBDE178309A872C692D8C0 (U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Update>d__77::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__77_SetStateMachine_mC9F90CE737B64F303D68678DE456B267D5F1E26A (U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC (int32_t ___type0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_AddComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m8A7C1E803E270C9EF2DA310339083AE5271AF9B0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveBytesToDiskAsyncU3Ed__103_MoveNext_m1FC93C7A383A08A28400682BC831D062AC43A4CB (U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m8727A51CCB08CE132081B70735A4787252AF9908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m56AA31A7122850F2B23905813FC3CD168CEB4D49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49309EB5A327BE56A61BF2CC70192B4739B2ACA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9D839B936FC49FCDA257D5AD2A82B703872911D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE775FC4FED578FD0A0EA171D66073894DB693287);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * V_1 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  V_10;
	memset((&V_10), 0, sizeof(V_10));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF  V_13;
	memset((&V_13), 0, sizeof(V_13));
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_14 = NULL;
	String_t* V_15 = NULL;
	String_t* V_16 = NULL;
	Exception_t * V_17 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0100;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0163;
			}
		}

IL_001b:
		{
			// DateTime currentDate = DateTime.Now;
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_4;
			L_4 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
			V_2 = L_4;
			// int year = currentDate.Year;
			int32_t L_5;
			L_5 = DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_3 = L_5;
			// int month = currentDate.Month;
			int32_t L_6;
			L_6 = DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_4 = L_6;
			// int day = currentDate.Day;
			int32_t L_7;
			L_7 = DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_5 = L_7;
			// int hour = currentDate.Hour;
			int32_t L_8;
			L_8 = DateTime_get_Hour_m6AC78B553639A108EA00728498FA037E52CC425E((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_6 = L_8;
			// int min = currentDate.Minute;
			int32_t L_9;
			L_9 = DateTime_get_Minute_m1BBE1AABAAFE39019ED26585D12E67A1F9D5A4AA((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_7 = L_9;
			// int sec = currentDate.Second;
			int32_t L_10;
			L_10 = DateTime_get_Second_m6E1FEADC4E62BCC99846934C0761F0AF67DFE17A((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_8 = L_10;
			// if (QuerySceneFromDevice)
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_11 = V_1;
			NullCheck(L_11);
			bool L_12 = L_11->get_QuerySceneFromDevice_4();
			if (!L_12)
			{
				goto IL_0193;
			}
		}

IL_0061:
		{
			// string fileName = string.Format("SU_{0}-{1}-{2}_{3}-{4}-{5}.bytes",
			//                                 year, month, day, hour, min, sec);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_13;
			int32_t L_15 = V_3;
			int32_t L_16 = L_15;
			RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_14;
			int32_t L_19 = V_4;
			int32_t L_20 = L_19;
			RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_21);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_18;
			int32_t L_23 = V_5;
			int32_t L_24 = L_23;
			RuntimeObject * L_25 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_24);
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_25);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_25);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_22;
			int32_t L_27 = V_6;
			int32_t L_28 = L_27;
			RuntimeObject * L_29 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_28);
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_29);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_29);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_26;
			int32_t L_31 = V_7;
			int32_t L_32 = L_31;
			RuntimeObject * L_33 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_32);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_33);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_33);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_30;
			int32_t L_35 = V_8;
			int32_t L_36 = L_35;
			RuntimeObject * L_37 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_36);
			NullCheck(L_34);
			ArrayElementTypeCheck (L_34, L_37);
			(L_34)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_37);
			String_t* L_38;
			L_38 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralE775FC4FED578FD0A0EA171D66073894DB693287, L_34, /*hidden argument*/NULL);
			V_9 = L_38;
			// byte[] OnDeviceBytes = GetLatestSceneBytes();
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_39 = V_1;
			NullCheck(L_39);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40;
			L_40 = SceneUnderstandingManager_GetLatestSceneBytes_mB7771B5C7B1ADB8E4654AC1FC37AA3FC6E2FEF35(L_39, /*hidden argument*/NULL);
			__this->set_U3COnDeviceBytesU3E5__2_3(L_40);
			// var folder = WindowsStorage.ApplicationData.Current.LocalFolder;
			ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9 * L_41;
			L_41 = ApplicationData_get_Current_mEC0F896D294D660711178C8F7D6F75697B10B230(/*hidden argument*/NULL);
			NullCheck(L_41);
			StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * L_42;
			L_42 = ApplicationData_get_LocalFolder_mE9F8D02C6F2A4FE34889891B7F7A48AD19202383(L_41, /*hidden argument*/NULL);
			// var file = await folder.CreateFileAsync(fileName, WindowsStorage.CreationCollisionOption.GenerateUniqueName);
			String_t* L_43 = V_9;
			NullCheck(L_42);
			RuntimeObject* L_44;
			L_44 = StorageFolder_CreateFileAsync_m34F3CB53AFCA4762C7B57C4F5F586C5099CD9EA1(L_42, L_43, 0, /*hidden argument*/NULL);
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_45;
			L_45 = WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65(L_44, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
			V_10 = L_45;
			bool L_46;
			L_46 = TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_10), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
			if (L_46)
			{
				goto IL_011d;
			}
		}

IL_00dc:
		{
			int32_t L_47 = 0;
			V_0 = L_47;
			__this->set_U3CU3E1__state_0(L_47);
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_48 = V_10;
			__this->set_U3CU3Eu__1_4(L_48);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_49 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m8727A51CCB08CE132081B70735A4787252AF9908((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_49, (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_10), (U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m8727A51CCB08CE132081B70735A4787252AF9908_RuntimeMethod_var);
			goto IL_0288;
		}

IL_0100:
		{
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_50 = __this->get_U3CU3Eu__1_4();
			V_10 = L_50;
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * L_51 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_51, sizeof(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 ));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->set_U3CU3E1__state_0(L_52);
		}

IL_011d:
		{
			StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_53;
			L_53 = TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_10), /*hidden argument*/TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
			// await WindowsStorage.FileIO.WriteBytesAsync(file, OnDeviceBytes);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = __this->get_U3COnDeviceBytesU3E5__2_3();
			RuntimeObject* L_55;
			L_55 = FileIO_WriteBytesAsync_mCFE4E28CAEDD1B418E1238F934F2FFB4ECAFFF47(L_53, L_54, /*hidden argument*/NULL);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_56;
			L_56 = WindowsRuntimeSystemExtensions_GetAwaiter_m0218FEA730C2DAD8311AA5A6BAE767DC7BB5D58B(L_55, /*hidden argument*/NULL);
			V_11 = L_56;
			bool L_57;
			L_57 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_11), /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_0180;
			}
		}

IL_013f:
		{
			int32_t L_58 = 1;
			V_0 = L_58;
			__this->set_U3CU3E1__state_0(L_58);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_59 = V_11;
			__this->set_U3CU3Eu__2_5(L_59);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_60 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m56AA31A7122850F2B23905813FC3CD168CEB4D49((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_60, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_11), (U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB_m56AA31A7122850F2B23905813FC3CD168CEB4D49_RuntimeMethod_var);
			goto IL_0288;
		}

IL_0163:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_61 = __this->get_U3CU3Eu__2_5();
			V_11 = L_61;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_62 = __this->get_address_of_U3CU3Eu__2_5();
			il2cpp_codegen_initobj(L_62, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_63 = (-1);
			V_0 = L_63;
			__this->set_U3CU3E1__state_0(L_63);
		}

IL_0180:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_11), /*hidden argument*/NULL);
			// }
			__this->set_U3COnDeviceBytesU3E5__2_3((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
			goto IL_025a;
		}

IL_0193:
		{
			// int fragmentNumber = 0;
			V_12 = 0;
			// foreach (TextAsset serializedScene in SUSerializedScenePaths)
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_64 = V_1;
			NullCheck(L_64);
			List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * L_65 = L_64->get_SUSerializedScenePaths_5();
			NullCheck(L_65);
			Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF  L_66;
			L_66 = List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC(L_65, /*hidden argument*/List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC_RuntimeMethod_var);
			V_13 = L_66;
		}

IL_01a3:
		try
		{ // begin try (depth: 2)
			{
				goto IL_023a;
			}

IL_01a8:
			{
				// foreach (TextAsset serializedScene in SUSerializedScenePaths)
				TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_67;
				L_67 = Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_inline((Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *)(&V_13), /*hidden argument*/Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_RuntimeMethod_var);
				// byte[] fragmentBytes = serializedScene.bytes;
				NullCheck(L_67);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_68;
				L_68 = TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F(L_67, /*hidden argument*/NULL);
				V_14 = L_68;
				// string fileName = string.Format("SU_Frag{0}-{1}-{2}-{3}_{4}-{5}-{6}.bytes",
				//                                 fragmentNumber++, year, month, day, hour, min, sec);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_69 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_70 = L_69;
				int32_t L_71 = V_12;
				int32_t L_72 = L_71;
				V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
				int32_t L_73 = L_72;
				RuntimeObject * L_74 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_73);
				NullCheck(L_70);
				ArrayElementTypeCheck (L_70, L_74);
				(L_70)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_74);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_75 = L_70;
				int32_t L_76 = V_3;
				int32_t L_77 = L_76;
				RuntimeObject * L_78 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_77);
				NullCheck(L_75);
				ArrayElementTypeCheck (L_75, L_78);
				(L_75)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_78);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_79 = L_75;
				int32_t L_80 = V_4;
				int32_t L_81 = L_80;
				RuntimeObject * L_82 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_81);
				NullCheck(L_79);
				ArrayElementTypeCheck (L_79, L_82);
				(L_79)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_82);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_83 = L_79;
				int32_t L_84 = V_5;
				int32_t L_85 = L_84;
				RuntimeObject * L_86 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_85);
				NullCheck(L_83);
				ArrayElementTypeCheck (L_83, L_86);
				(L_83)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_86);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_87 = L_83;
				int32_t L_88 = V_6;
				int32_t L_89 = L_88;
				RuntimeObject * L_90 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_89);
				NullCheck(L_87);
				ArrayElementTypeCheck (L_87, L_90);
				(L_87)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_90);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_91 = L_87;
				int32_t L_92 = V_7;
				int32_t L_93 = L_92;
				RuntimeObject * L_94 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_93);
				NullCheck(L_91);
				ArrayElementTypeCheck (L_91, L_94);
				(L_91)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_94);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_95 = L_91;
				int32_t L_96 = V_8;
				int32_t L_97 = L_96;
				RuntimeObject * L_98 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_97);
				NullCheck(L_95);
				ArrayElementTypeCheck (L_95, L_98);
				(L_95)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_98);
				String_t* L_99;
				L_99 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralA9D839B936FC49FCDA257D5AD2A82B703872911D, L_95, /*hidden argument*/NULL);
				V_15 = L_99;
				// string folder = Path.GetTempPath();
				IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
				String_t* L_100;
				L_100 = Path_GetTempPath_m3A0C2630133CA7FCD4BE0F2B5440A6C46DC53B83(/*hidden argument*/NULL);
				// string file = Path.Combine(folder, fileName);
				String_t* L_101 = V_15;
				String_t* L_102;
				L_102 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_100, L_101, /*hidden argument*/NULL);
				V_16 = L_102;
				// File.WriteAllBytes(file, fragmentBytes);
				String_t* L_103 = V_16;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_104 = V_14;
				File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_103, L_104, /*hidden argument*/NULL);
				// Debug.Log("SceneUnderstandingManager.SaveBytesToDisk: Scene Fragment saved at " + file);
				String_t* L_105 = V_16;
				String_t* L_106;
				L_106 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral49309EB5A327BE56A61BF2CC70192B4739B2ACA3, L_105, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_106, /*hidden argument*/NULL);
			}

IL_023a:
			{
				// foreach (TextAsset serializedScene in SUSerializedScenePaths)
				bool L_107;
				L_107 = Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D((Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *)(&V_13), /*hidden argument*/Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D_RuntimeMethod_var);
				if (L_107)
				{
					goto IL_01a8;
				}
			}

IL_0246:
			{
				IL2CPP_LEAVE(0x25A, FINALLY_0248);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0248;
		}

FINALLY_0248:
		{ // begin finally (depth: 2)
			{
				int32_t L_108 = V_0;
				if ((((int32_t)L_108) >= ((int32_t)0)))
				{
					goto IL_0259;
				}
			}

IL_024c:
			{
				Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F((Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *)(&V_13), /*hidden argument*/Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F_RuntimeMethod_var);
			}

IL_0259:
			{
				IL2CPP_END_FINALLY(584)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(584)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x25A, IL_025a)
		}

IL_025a:
		{
			goto IL_0275;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_025c;
		}
		throw e;
	}

CATCH_025c:
	{ // begin catch(System.Exception)
		V_17 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_109 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_110 = V_17;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_109, L_110, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0288;
	} // end catch (depth: 1)

IL_0275:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_111 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_111, /*hidden argument*/NULL);
	}

IL_0288:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveBytesToDiskAsyncU3Ed__103_MoveNext_m1FC93C7A383A08A28400682BC831D062AC43A4CB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB * _thisAdjusted = reinterpret_cast<U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB *>(__this + _offset);
	U3CSaveBytesToDiskAsyncU3Ed__103_MoveNext_m1FC93C7A383A08A28400682BC831D062AC43A4CB(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveBytesToDiskAsync>d__103::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveBytesToDiskAsyncU3Ed__103_SetStateMachine_m1BB217BE02B7E12FE268B22A99CA5C500ED4A5F3 (U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveBytesToDiskAsyncU3Ed__103_SetStateMachine_m1BB217BE02B7E12FE268B22A99CA5C500ED4A5F3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB * _thisAdjusted = reinterpret_cast<U3CSaveBytesToDiskAsyncU3Ed__103_t8EB3A8BA81DF5D816C19DEBE30F1AA6F79D922EB *>(__this + _offset);
	U3CSaveBytesToDiskAsyncU3Ed__103_SetStateMachine_m1BB217BE02B7E12FE268B22A99CA5C500ED4A5F3(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveObjsToDiskAsync>d__104::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveObjsToDiskAsyncU3Ed__104_MoveNext_mDC49657CF19074CADEBCA7F37488E42F7859E392 (U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659_m52BF6B75A60319F472F3D6710986DB7390FFF4B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6172BAD2B0D9FC1881AB61FCDD504276FF9E5CB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF7E1783D62714EC882640A7A9D8C62A478F561EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mED17FF7801359A6E44DE28A3DE0F4DDA3FC905E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA431B9CBD909811A2D75413BCADE1EADDEC10297_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC63F95E6BE7630C140ECEF20D623332C90D67911_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5255798E349416BABA17730F9F8EA34D8FDDEDBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF77159120E380419524D9338A8F33D27460A5F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA3F1B4A7C89257C36FDA2E4302AB750F8C5A7E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF37C7F12F27B8716644D04AB9D484ECEE44848E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0BB1FBDBC8F42797B9A8C54C0E2D9B33FBD8EF08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE792CFEFA0D524F630ED195F5A74F953346942BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t884C040642DCB159A123549C8F62D3860DCC52FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneObjectKind_tDF43C6EC2284DBB922EB87D401922E7F2B405B76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33D3C0AEF8C266168530C8D0BED3A31C2B498C8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECA7D17E28BC58E4F7D9F94DE1F32FEFBB3183CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE298226A64EE7559D694BA8C15916059988007E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * V_1 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * V_9 = NULL;
	List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * V_10 = NULL;
	Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * V_11 = NULL;
	SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * V_12 = NULL;
	SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* V_13 = NULL;
	int32_t V_14 = 0;
	Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF  V_15;
	memset((&V_15), 0, sizeof(V_15));
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * V_16 = NULL;
	SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * V_17 = NULL;
	Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54  V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t V_19 = 0;
	List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * V_20 = NULL;
	String_t* V_21 = NULL;
	RuntimeObject* V_22 = NULL;
	SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * V_23 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_24;
	memset((&V_24), 0, sizeof(V_24));
	Exception_t * V_25 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 8> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_02ab;
			}
		}

IL_0014:
		{
			// DateTime currentDate = DateTime.Now;
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
			L_3 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
			V_2 = L_3;
			// int year = currentDate.Year;
			int32_t L_4;
			L_4 = DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_3 = L_4;
			// int month = currentDate.Month;
			int32_t L_5;
			L_5 = DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_4 = L_5;
			// int day = currentDate.Day;
			int32_t L_6;
			L_6 = DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_5 = L_6;
			// int hour = currentDate.Hour;
			int32_t L_7;
			L_7 = DateTime_get_Hour_m6AC78B553639A108EA00728498FA037E52CC425E((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_6 = L_7;
			// int min = currentDate.Minute;
			int32_t L_8;
			L_8 = DateTime_get_Minute_m1BBE1AABAAFE39019ED26585D12E67A1F9D5A4AA((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_7 = L_8;
			// int sec = currentDate.Second;
			int32_t L_9;
			L_9 = DateTime_get_Second_m6E1FEADC4E62BCC99846934C0761F0AF67DFE17A((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_8 = L_9;
			// List<SceneUnderstanding.SceneObjectKind> sceneObjectKinds = new List<SceneObjectKind>();
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_10 = (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 *)il2cpp_codegen_object_new(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2_il2cpp_TypeInfo_var);
			List_1__ctor_mCA3F1B4A7C89257C36FDA2E4302AB750F8C5A7E7(L_10, /*hidden argument*/List_1__ctor_mCA3F1B4A7C89257C36FDA2E4302AB750F8C5A7E7_RuntimeMethod_var);
			V_9 = L_10;
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Background);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_11 = V_9;
			NullCheck(L_11);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_11, 0, /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Ceiling);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_12 = V_9;
			NullCheck(L_12);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_12, 3, /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.CompletelyInferred);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_13 = V_9;
			NullCheck(L_13);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_13, ((int32_t)249), /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Floor);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_14 = V_9;
			NullCheck(L_14);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_14, 2, /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Platform);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_15 = V_9;
			NullCheck(L_15);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_15, 4, /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Unknown);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_16 = V_9;
			NullCheck(L_16);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_16, ((int32_t)247), /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Wall);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_17 = V_9;
			NullCheck(L_17);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_17, 1, /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.World);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_18 = V_9;
			NullCheck(L_18);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_18, ((int32_t)248), /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// List<Task> tasks = new List<Task>();
			List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * L_19 = (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB *)il2cpp_codegen_object_new(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_il2cpp_TypeInfo_var);
			List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85(L_19, /*hidden argument*/List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85_RuntimeMethod_var);
			V_10 = L_19;
			// SceneUnderstanding.Scene scene = null;
			V_11 = (Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D *)NULL;
			// if (QuerySceneFromDevice)
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_20 = V_1;
			NullCheck(L_20);
			bool L_21 = L_20->get_QuerySceneFromDevice_4();
			if (!L_21)
			{
				goto IL_00e3;
			}
		}

IL_00b4:
		{
			// SceneFragment sceneFragment = GetLatestSceneSerialization();
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_22 = V_1;
			NullCheck(L_22);
			SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * L_23;
			L_23 = SceneUnderstandingManager_GetLatestSceneSerialization_mAB379F2F3D2CAF6CC856C1C735B17B95EA603E27(L_22, /*hidden argument*/NULL);
			V_12 = L_23;
			// if (sceneFragment == null)
			SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * L_24 = V_12;
			if (L_24)
			{
				goto IL_00cf;
			}
		}

IL_00c0:
		{
			// Debug.LogWarning("SceneUnderstandingManager.SaveObjsToDisk: Nothing to save.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralECA7D17E28BC58E4F7D9F94DE1F32FEFBB3183CE, /*hidden argument*/NULL);
			// return;
			goto IL_02ea;
		}

IL_00cf:
		{
			// SceneFragment[] sceneFragmentsArray = new SceneFragment[1] { sceneFragment };
			SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* L_25 = (SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B*)(SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B*)SZArrayNew(SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B_il2cpp_TypeInfo_var, (uint32_t)1);
			SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* L_26 = L_25;
			SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * L_27 = V_12;
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_27);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 *)L_27);
			// scene = SceneUnderstanding.Scene.FromFragments(sceneFragmentsArray);
			Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * L_28;
			L_28 = Scene_FromFragments_m0E7D5E013FED54A4B4D448F83EA965E591541DC1(L_26, /*hidden argument*/NULL);
			V_11 = L_28;
			// }
			goto IL_015a;
		}

IL_00e3:
		{
			// SceneFragment[] sceneFragments = new SceneFragment[SUSerializedScenePaths.Count];
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_29 = V_1;
			NullCheck(L_29);
			List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * L_30 = L_29->get_SUSerializedScenePaths_5();
			NullCheck(L_30);
			int32_t L_31;
			L_31 = List_1_get_Count_m0BB1FBDBC8F42797B9A8C54C0E2D9B33FBD8EF08_inline(L_30, /*hidden argument*/List_1_get_Count_m0BB1FBDBC8F42797B9A8C54C0E2D9B33FBD8EF08_RuntimeMethod_var);
			SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* L_32 = (SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B*)(SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B*)SZArrayNew(SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B_il2cpp_TypeInfo_var, (uint32_t)L_31);
			V_13 = L_32;
			// int index = 0;
			V_14 = 0;
			// foreach (TextAsset serializedScene in SUSerializedScenePaths)
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_33 = V_1;
			NullCheck(L_33);
			List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * L_34 = L_33->get_SUSerializedScenePaths_5();
			NullCheck(L_34);
			Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF  L_35;
			L_35 = List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC(L_34, /*hidden argument*/List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC_RuntimeMethod_var);
			V_15 = L_35;
		}

IL_0105:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0134;
			}

IL_0107:
			{
				// foreach (TextAsset serializedScene in SUSerializedScenePaths)
				TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_36;
				L_36 = Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_inline((Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *)(&V_15), /*hidden argument*/Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_RuntimeMethod_var);
				V_16 = L_36;
				// if (serializedScene != null)
				TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_37 = V_16;
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_38;
				L_38 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				if (!L_38)
				{
					goto IL_0134;
				}
			}

IL_011a:
			{
				// byte[] sceneData = serializedScene.bytes;
				TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_39 = V_16;
				NullCheck(L_39);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40;
				L_40 = TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F(L_39, /*hidden argument*/NULL);
				// SceneFragment frag = SceneFragment.Deserialize(sceneData);
				SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * L_41;
				L_41 = SceneFragment_Deserialize_m31FC02F1B5882ED8D63A1A4F3CCE6B33F50D9777(L_40, /*hidden argument*/NULL);
				V_17 = L_41;
				// sceneFragments[index++] = frag;
				SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* L_42 = V_13;
				int32_t L_43 = V_14;
				int32_t L_44 = L_43;
				V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
				SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * L_45 = V_17;
				NullCheck(L_42);
				ArrayElementTypeCheck (L_42, L_45);
				(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 *)L_45);
			}

IL_0134:
			{
				// foreach (TextAsset serializedScene in SUSerializedScenePaths)
				bool L_46;
				L_46 = Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D((Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *)(&V_15), /*hidden argument*/Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D_RuntimeMethod_var);
				if (L_46)
				{
					goto IL_0107;
				}
			}

IL_013d:
			{
				IL2CPP_LEAVE(0x151, FINALLY_013f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_013f;
		}

FINALLY_013f:
		{ // begin finally (depth: 2)
			{
				int32_t L_47 = V_0;
				if ((((int32_t)L_47) >= ((int32_t)0)))
				{
					goto IL_0150;
				}
			}

IL_0143:
			{
				Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F((Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *)(&V_15), /*hidden argument*/Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F_RuntimeMethod_var);
			}

IL_0150:
			{
				IL2CPP_END_FINALLY(319)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(319)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x151, IL_0151)
		}

IL_0151:
		{
			// scene = SceneUnderstanding.Scene.FromFragments(sceneFragments);
			SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* L_48 = V_13;
			Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * L_49;
			L_49 = Scene_FromFragments_m0E7D5E013FED54A4B4D448F83EA965E591541DC1(L_48, /*hidden argument*/NULL);
			V_11 = L_49;
		}

IL_015a:
		{
			// if (scene == null)
			Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * L_50 = V_11;
			if (L_50)
			{
				goto IL_016d;
			}
		}

IL_015e:
		{
			// Debug.LogWarning("SceneUnderstandingManager.SaveObjsToDiskAsync: Scene is null");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralFE298226A64EE7559D694BA8C15916059988007E, /*hidden argument*/NULL);
			// return;
			goto IL_02ea;
		}

IL_016d:
		{
			// foreach (SceneUnderstanding.SceneObjectKind soKind in sceneObjectKinds)
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_51 = V_9;
			NullCheck(L_51);
			Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54  L_52;
			L_52 = List_1_GetEnumerator_mF77159120E380419524D9338A8F33D27460A5F9B(L_51, /*hidden argument*/List_1_GetEnumerator_mF77159120E380419524D9338A8F33D27460A5F9B_RuntimeMethod_var);
			V_18 = L_52;
		}

IL_0176:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0253;
			}

IL_017b:
			{
				// foreach (SceneUnderstanding.SceneObjectKind soKind in sceneObjectKinds)
				int32_t L_53;
				L_53 = Enumerator_get_Current_mED17FF7801359A6E44DE28A3DE0F4DDA3FC905E0_inline((Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 *)(&V_18), /*hidden argument*/Enumerator_get_Current_mED17FF7801359A6E44DE28A3DE0F4DDA3FC905E0_RuntimeMethod_var);
				V_19 = L_53;
				// List<SceneUnderstanding.SceneObject> allObjectsOfAKind = new List<SceneObject>();
				List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * L_54 = (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF *)il2cpp_codegen_object_new(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF_il2cpp_TypeInfo_var);
				List_1__ctor_mF37C7F12F27B8716644D04AB9D484ECEE44848E6(L_54, /*hidden argument*/List_1__ctor_mF37C7F12F27B8716644D04AB9D484ECEE44848E6_RuntimeMethod_var);
				V_20 = L_54;
				// foreach (SceneUnderstanding.SceneObject sceneObject in scene.SceneObjects)
				Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * L_55 = V_11;
				NullCheck(L_55);
				RuntimeObject* L_56;
				L_56 = Scene_get_SceneObjects_mB784FAB9903AD8AD46D3ADFF5BF4CF389AAE77F6(L_55, /*hidden argument*/NULL);
				NullCheck(L_56);
				RuntimeObject* L_57;
				L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::GetEnumerator() */, IEnumerable_1_tA431B9CBD909811A2D75413BCADE1EADDEC10297_il2cpp_TypeInfo_var, L_56);
				V_22 = L_57;
			}

IL_0199:
			try
			{ // begin try (depth: 3)
				{
					goto IL_01b8;
				}

IL_019b:
				{
					// foreach (SceneUnderstanding.SceneObject sceneObject in scene.SceneObjects)
					RuntimeObject* L_58 = V_22;
					NullCheck(L_58);
					SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * L_59;
					L_59 = InterfaceFuncInvoker0< SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::get_Current() */, IEnumerator_1_tC63F95E6BE7630C140ECEF20D623332C90D67911_il2cpp_TypeInfo_var, L_58);
					V_23 = L_59;
					// if (sceneObject.Kind == soKind)
					SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * L_60 = V_23;
					NullCheck(L_60);
					int32_t L_61;
					L_61 = SceneObject_get_Kind_m2DC82991CD3E3BFCE41A0CEA0098BC42A9D7207D(L_60, /*hidden argument*/NULL);
					int32_t L_62 = V_19;
					if ((!(((uint32_t)L_61) == ((uint32_t)L_62))))
					{
						goto IL_01b8;
					}
				}

IL_01af:
				{
					// allObjectsOfAKind.Add(sceneObject);
					List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * L_63 = V_20;
					SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * L_64 = V_23;
					NullCheck(L_63);
					List_1_Add_m5255798E349416BABA17730F9F8EA34D8FDDEDBA(L_63, L_64, /*hidden argument*/List_1_Add_m5255798E349416BABA17730F9F8EA34D8FDDEDBA_RuntimeMethod_var);
				}

IL_01b8:
				{
					// foreach (SceneUnderstanding.SceneObject sceneObject in scene.SceneObjects)
					RuntimeObject* L_65 = V_22;
					NullCheck(L_65);
					bool L_66;
					L_66 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_65);
					if (L_66)
					{
						goto IL_019b;
					}
				}

IL_01c1:
				{
					IL2CPP_LEAVE(0x1D3, FINALLY_01c3);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_01c3;
			}

FINALLY_01c3:
			{ // begin finally (depth: 3)
				{
					int32_t L_67 = V_0;
					if ((((int32_t)L_67) >= ((int32_t)0)))
					{
						goto IL_01d2;
					}
				}

IL_01c7:
				{
					RuntimeObject* L_68 = V_22;
					if (!L_68)
					{
						goto IL_01d2;
					}
				}

IL_01cb:
				{
					RuntimeObject* L_69 = V_22;
					NullCheck(L_69);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_69);
				}

IL_01d2:
				{
					IL2CPP_END_FINALLY(451)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(451)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x1D3, IL_01d3)
			}

IL_01d3:
			{
				// string fileName = string.Format("SU_{0}_{1}-{2}-{3}_{4}-{5}-{6}.obj",
				//                                 soKind.ToString(), year, month, day, hour, min, sec);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_70 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = L_70;
				RuntimeObject * L_72 = Box(SceneObjectKind_tDF43C6EC2284DBB922EB87D401922E7F2B405B76_il2cpp_TypeInfo_var, (&V_19));
				NullCheck(L_72);
				String_t* L_73;
				L_73 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_72);
				V_19 = *(int32_t*)UnBox(L_72);
				NullCheck(L_71);
				ArrayElementTypeCheck (L_71, L_73);
				(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_73);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_74 = L_71;
				int32_t L_75 = V_3;
				int32_t L_76 = L_75;
				RuntimeObject * L_77 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_76);
				NullCheck(L_74);
				ArrayElementTypeCheck (L_74, L_77);
				(L_74)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_77);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_78 = L_74;
				int32_t L_79 = V_4;
				int32_t L_80 = L_79;
				RuntimeObject * L_81 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_80);
				NullCheck(L_78);
				ArrayElementTypeCheck (L_78, L_81);
				(L_78)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_81);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_82 = L_78;
				int32_t L_83 = V_5;
				int32_t L_84 = L_83;
				RuntimeObject * L_85 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_84);
				NullCheck(L_82);
				ArrayElementTypeCheck (L_82, L_85);
				(L_82)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_85);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_86 = L_82;
				int32_t L_87 = V_6;
				int32_t L_88 = L_87;
				RuntimeObject * L_89 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_88);
				NullCheck(L_86);
				ArrayElementTypeCheck (L_86, L_89);
				(L_86)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_89);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_90 = L_86;
				int32_t L_91 = V_7;
				int32_t L_92 = L_91;
				RuntimeObject * L_93 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_92);
				NullCheck(L_90);
				ArrayElementTypeCheck (L_90, L_93);
				(L_90)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_93);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_94 = L_90;
				int32_t L_95 = V_8;
				int32_t L_96 = L_95;
				RuntimeObject * L_97 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_96);
				NullCheck(L_94);
				ArrayElementTypeCheck (L_94, L_97);
				(L_94)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_97);
				String_t* L_98;
				L_98 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral33D3C0AEF8C266168530C8D0BED3A31C2B498C8C, L_94, /*hidden argument*/NULL);
				V_21 = L_98;
				// if (allObjectsOfAKind.Count > 0)
				List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * L_99 = V_20;
				NullCheck(L_99);
				int32_t L_100;
				L_100 = List_1_get_Count_mE792CFEFA0D524F630ED195F5A74F953346942BB_inline(L_99, /*hidden argument*/List_1_get_Count_mE792CFEFA0D524F630ED195F5A74F953346942BB_RuntimeMethod_var);
				if ((((int32_t)L_100) <= ((int32_t)0)))
				{
					goto IL_0253;
				}
			}

IL_023a:
			{
				// tasks.Add(SaveAllSceneObjectsOfAKindAsOneObj(allObjectsOfAKind, GetColor(soKind), fileName));
				List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * L_101 = V_10;
				SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_102 = V_1;
				List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * L_103 = V_20;
				SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_104 = V_1;
				int32_t L_105 = V_19;
				NullCheck(L_104);
				Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_106;
				L_106 = SceneUnderstandingManager_GetColor_m3CC9C7F7BA70F5CD571B86EC7CE95145E9BC40BA(L_104, L_105, /*hidden argument*/NULL);
				String_t* L_107 = V_21;
				NullCheck(L_102);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_108;
				L_108 = SceneUnderstandingManager_SaveAllSceneObjectsOfAKindAsOneObj_mF79C1976EB14DFEAE0BE8ECD7370D45EFD8830F7(L_102, L_103, L_106, L_107, /*hidden argument*/NULL);
				NullCheck(L_101);
				List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514(L_101, L_108, /*hidden argument*/List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514_RuntimeMethod_var);
			}

IL_0253:
			{
				// foreach (SceneUnderstanding.SceneObjectKind soKind in sceneObjectKinds)
				bool L_109;
				L_109 = Enumerator_MoveNext_mF7E1783D62714EC882640A7A9D8C62A478F561EF((Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 *)(&V_18), /*hidden argument*/Enumerator_MoveNext_mF7E1783D62714EC882640A7A9D8C62A478F561EF_RuntimeMethod_var);
				if (L_109)
				{
					goto IL_017b;
				}
			}

IL_025f:
			{
				IL2CPP_LEAVE(0x273, FINALLY_0261);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0261;
		}

FINALLY_0261:
		{ // begin finally (depth: 2)
			{
				int32_t L_110 = V_0;
				if ((((int32_t)L_110) >= ((int32_t)0)))
				{
					goto IL_0272;
				}
			}

IL_0265:
			{
				Enumerator_Dispose_m6172BAD2B0D9FC1881AB61FCDD504276FF9E5CB4((Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 *)(&V_18), /*hidden argument*/Enumerator_Dispose_m6172BAD2B0D9FC1881AB61FCDD504276FF9E5CB4_RuntimeMethod_var);
			}

IL_0272:
			{
				IL2CPP_END_FINALLY(609)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(609)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x273, IL_0273)
		}

IL_0273:
		{
			// await Task.WhenAll(tasks);
			List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * L_111 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_112;
			L_112 = Task_WhenAll_mA7F77F1CCEF7F07CFDC5F4586FE529E1B4684CBF(L_111, /*hidden argument*/NULL);
			NullCheck(L_112);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_113;
			L_113 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_112, /*hidden argument*/NULL);
			V_24 = L_113;
			bool L_114;
			L_114 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_24), /*hidden argument*/NULL);
			if (L_114)
			{
				goto IL_02c8;
			}
		}

IL_028a:
		{
			int32_t L_115 = 0;
			V_0 = L_115;
			__this->set_U3CU3E1__state_0(L_115);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_116 = V_24;
			__this->set_U3CU3Eu__1_3(L_116);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_117 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659_m52BF6B75A60319F472F3D6710986DB7390FFF4B0((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_117, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_24), (U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659_m52BF6B75A60319F472F3D6710986DB7390FFF4B0_RuntimeMethod_var);
			goto IL_02fd;
		}

IL_02ab:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_118 = __this->get_U3CU3Eu__1_3();
			V_24 = L_118;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_119 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_119, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_120 = (-1);
			V_0 = L_120;
			__this->set_U3CU3E1__state_0(L_120);
		}

IL_02c8:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_24), /*hidden argument*/NULL);
			goto IL_02ea;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d1;
		}
		throw e;
	}

CATCH_02d1:
	{ // begin catch(System.Exception)
		V_25 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_121 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_122 = V_25;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_121, L_122, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02fd;
	} // end catch (depth: 1)

IL_02ea:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_123 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_123, /*hidden argument*/NULL);
	}

IL_02fd:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveObjsToDiskAsyncU3Ed__104_MoveNext_mDC49657CF19074CADEBCA7F37488E42F7859E392_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659 * _thisAdjusted = reinterpret_cast<U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659 *>(__this + _offset);
	U3CSaveObjsToDiskAsyncU3Ed__104_MoveNext_mDC49657CF19074CADEBCA7F37488E42F7859E392(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveObjsToDiskAsync>d__104::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveObjsToDiskAsyncU3Ed__104_SetStateMachine_mAF05C3661D7C42A47E23E0731C293F1943B790BC (U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveObjsToDiskAsyncU3Ed__104_SetStateMachine_mAF05C3661D7C42A47E23E0731C293F1943B790BC_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659 * _thisAdjusted = reinterpret_cast<U3CSaveObjsToDiskAsyncU3Ed__104_t43B6B12E973B31B1760D693DEE41B8DEDB373659 *>(__this + _offset);
	U3CSaveObjsToDiskAsyncU3Ed__104_SetStateMachine_mAF05C3661D7C42A47E23E0731C293F1943B790BC(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveStringToDiskAsyncU3Ed__106_MoveNext_m4F6032BBADA70EE588D8538CD1611C2D5088BA17 (U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_mC92057FF4B961018E16ACEE567154FCAF443E53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_mBA8ACF1AC5B477159C3B04F6A6468AC407F29C12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B701A0FDB41E749212AA746F1FD14C05709093);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB87370D19C007D145960DF2A456363EB622BE20);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * V_1 = NULL;
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0087;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00e7;
			}
		}

IL_0018:
		{
			// if (string.IsNullOrEmpty(data))
			String_t* L_4 = __this->get_data_2();
			bool L_5;
			L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0034;
			}
		}

IL_0025:
		{
			// Debug.LogWarning("SceneUnderstandingManager.SaveStringToDiskAsync: Nothing to save.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralBB87370D19C007D145960DF2A456363EB622BE20, /*hidden argument*/NULL);
			// return;
			goto IL_0157;
		}

IL_0034:
		{
			// if (QuerySceneFromDevice)
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = L_6->get_QuerySceneFromDevice_4();
			if (!L_7)
			{
				goto IL_010c;
			}
		}

IL_003f:
		{
			// var folder = WindowsStorage.ApplicationData.Current.LocalFolder;
			ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9 * L_8;
			L_8 = ApplicationData_get_Current_mEC0F896D294D660711178C8F7D6F75697B10B230(/*hidden argument*/NULL);
			NullCheck(L_8);
			StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * L_9;
			L_9 = ApplicationData_get_LocalFolder_mE9F8D02C6F2A4FE34889891B7F7A48AD19202383(L_8, /*hidden argument*/NULL);
			// var file = await folder.CreateFileAsync(fileName, WindowsStorage.CreationCollisionOption.GenerateUniqueName);
			String_t* L_10 = __this->get_fileName_4();
			NullCheck(L_9);
			RuntimeObject* L_11;
			L_11 = StorageFolder_CreateFileAsync_m34F3CB53AFCA4762C7B57C4F5F586C5099CD9EA1(L_9, L_10, 0, /*hidden argument*/NULL);
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_12;
			L_12 = WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65(L_11, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
			V_2 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_00a3;
			}
		}

IL_0064:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_15 = V_2;
			__this->set_U3CU3Eu__1_5(L_15);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_mC92057FF4B961018E16ACEE567154FCAF443E53F((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_16, (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_2), (U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_mC92057FF4B961018E16ACEE567154FCAF443E53F_RuntimeMethod_var);
			goto IL_016a;
		}

IL_0087:
		{
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_17 = __this->get_U3CU3Eu__1_5();
			V_2 = L_17;
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * L_18 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_00a3:
		{
			StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_20;
			L_20 = TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
			// await WindowsStorage.FileIO.AppendTextAsync(file, data);
			String_t* L_21 = __this->get_data_2();
			RuntimeObject* L_22;
			L_22 = FileIO_AppendTextAsync_m43E7E7074D7E9CB760170590216025B230DF9E56(L_20, L_21, /*hidden argument*/NULL);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_23;
			L_23 = WindowsRuntimeSystemExtensions_GetAwaiter_m0218FEA730C2DAD8311AA5A6BAE767DC7BB5D58B(L_22, /*hidden argument*/NULL);
			V_3 = L_23;
			bool L_24;
			L_24 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			if (L_24)
			{
				goto IL_0103;
			}
		}

IL_00c4:
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_26 = V_3;
			__this->set_U3CU3Eu__2_6(L_26);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_27 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_mBA8ACF1AC5B477159C3B04F6A6468AC407F29C12((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_27, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591_mBA8ACF1AC5B477159C3B04F6A6468AC407F29C12_RuntimeMethod_var);
			goto IL_016a;
		}

IL_00e7:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_28 = __this->get_U3CU3Eu__2_6();
			V_3 = L_28;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_29 = __this->get_address_of_U3CU3Eu__2_6();
			il2cpp_codegen_initobj(L_29, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
		}

IL_0103:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			// }
			goto IL_013c;
		}

IL_010c:
		{
			// string folder = Path.GetTempPath();
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_31;
			L_31 = Path_GetTempPath_m3A0C2630133CA7FCD4BE0F2B5440A6C46DC53B83(/*hidden argument*/NULL);
			// string file = Path.Combine(folder, fileName);
			String_t* L_32 = __this->get_fileName_4();
			String_t* L_33;
			L_33 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_31, L_32, /*hidden argument*/NULL);
			V_4 = L_33;
			// File.WriteAllText(file, data);
			String_t* L_34 = V_4;
			String_t* L_35 = __this->get_data_2();
			File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C(L_34, L_35, /*hidden argument*/NULL);
			// Debug.Log("SceneUnderstandingManager.SaveStringToDiskAsync: Scene Objects saved at " + file);
			String_t* L_36 = V_4;
			String_t* L_37;
			L_37 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral51B701A0FDB41E749212AA746F1FD14C05709093, L_36, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_37, /*hidden argument*/NULL);
		}

IL_013c:
		{
			goto IL_0157;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013e;
		}
		throw e;
	}

CATCH_013e:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_38 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_39 = V_5;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_38, L_39, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_016a;
	} // end catch (depth: 1)

IL_0157:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_40 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_40, /*hidden argument*/NULL);
	}

IL_016a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveStringToDiskAsyncU3Ed__106_MoveNext_m4F6032BBADA70EE588D8538CD1611C2D5088BA17_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 * _thisAdjusted = reinterpret_cast<U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 *>(__this + _offset);
	U3CSaveStringToDiskAsyncU3Ed__106_MoveNext_m4F6032BBADA70EE588D8538CD1611C2D5088BA17(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<SaveStringToDiskAsync>d__106::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveStringToDiskAsyncU3Ed__106_SetStateMachine_m3F7ED9DB01C78DF56FECFC33DF3D2BDA13726D3A (U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveStringToDiskAsyncU3Ed__106_SetStateMachine_m3F7ED9DB01C78DF56FECFC33DF3D2BDA13726D3A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 * _thisAdjusted = reinterpret_cast<U3CSaveStringToDiskAsyncU3Ed__106_tFC53AD6128D150B8B5253648263DD64927808591 *>(__this + _offset);
	U3CSaveStringToDiskAsyncU3Ed__106_SetStateMachine_m3F7ED9DB01C78DF56FECFC33DF3D2BDA13726D3A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Start>d__76::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__76_MoveNext_m79CB6A8BF19144467F263C15BCB378E82622D7EC (U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F_TisU3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F_m6529ECBC267E9C00F47650AA793BBB227D2ACF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneObserverAccessStatus_t83BCCBF5C05EF18D5E7E673FBF7798E0E3FD9D0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneUnderstandingManager_U3CStartU3Eb__76_0_mAEF86C21BA67E160419B64F552159500818EEE5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mC146748C4F599E937FA6AB615EDCD983BE11508C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m414B0D426DF49C4BF6ADA77683604D5A8BA76680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m53E815C9BE7EBD5671C5B5AB323A1F941F0B95CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23D70B42C414F9FC448261EC56DA7B5DDB844434);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FCFCD34C322154A836A299ACE9E406FF37E1FC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral969A931523EEE891A1CDF8C03B141ABE46F6E427);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A446955D45ED9D735C1F4DB98160D97396677C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * V_1 = NULL;
	int32_t V_2 = 0;
	TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 8> __leave_targets;
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * G_B4_0 = NULL;
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * G_B3_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_0 = NULL;
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * G_B5_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00b6;
			}
		}

IL_0014:
		{
			// SceneRoot = SceneRoot == null ? new GameObject("Scene Root") : SceneRoot;
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_3 = V_1;
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_4 = V_1;
			NullCheck(L_4);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_SceneRoot_6();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			G_B3_0 = L_3;
			if (L_6)
			{
				G_B4_0 = L_3;
				goto IL_002b;
			}
		}

IL_0023:
		{
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_7 = V_1;
			NullCheck(L_7);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_SceneRoot_6();
			G_B5_0 = L_8;
			G_B5_1 = G_B3_0;
			goto IL_0035;
		}

IL_002b:
		{
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
			GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_9, _stringLiteralD4A446955D45ED9D735C1F4DB98160D97396677C, /*hidden argument*/NULL);
			G_B5_0 = L_9;
			G_B5_1 = G_B4_0;
		}

IL_0035:
		{
			NullCheck(G_B5_1);
			G_B5_1->set_SceneRoot_6(G_B5_0);
			// RunOnDevice = !Application.isEditor;
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_10 = V_1;
			bool L_11;
			L_11 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
			NullCheck(L_10);
			L_10->set_RunOnDevice_76((bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0));
			// if (QuerySceneFromDevice)
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = L_12->get_QuerySceneFromDevice_4();
			if (!L_13)
			{
				goto IL_0117;
			}
		}

IL_0053:
		{
			// if (Application.isEditor)
			bool L_14;
			L_14 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_0069;
			}
		}

IL_005a:
		{
			// Debug.LogError("SceneUnderstandingManager.Start: Running in editor while quering scene from a device is not supported.\n" +
			//                "To run on editor disable the 'QuerySceneFromDevice' Flag in the SceneUnderstandingManager Component");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral23D70B42C414F9FC448261EC56DA7B5DDB844434, /*hidden argument*/NULL);
			// return;
			goto IL_0132;
		}

IL_0069:
		{
			// if (!SceneUnderstanding.SceneObserver.IsSupported())
			bool L_15;
			L_15 = SceneObserver_IsSupported_mCC1E6FC61E9E39EF4EB5771059FAB06B6CCBE63E(/*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_007f;
			}
		}

IL_0070:
		{
			// Debug.LogError("SceneUnderstandingManager.Start: Scene Understanding not supported.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral969A931523EEE891A1CDF8C03B141ABE46F6E427, /*hidden argument*/NULL);
			// return;
			goto IL_0132;
		}

IL_007f:
		{
			// SceneObserverAccessStatus access = await SceneUnderstanding.SceneObserver.RequestAccessAsync();
			Task_1_tCFC28F75F4D096CC6458A5315F5F7CBD231D5AA9 * L_16;
			L_16 = SceneObserver_RequestAccessAsync_m810859CDC57FB1F08D944138CA26F39541102BB9(/*hidden argument*/NULL);
			NullCheck(L_16);
			TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F  L_17;
			L_17 = Task_1_GetAwaiter_m53E815C9BE7EBD5671C5B5AB323A1F941F0B95CA(L_16, /*hidden argument*/Task_1_GetAwaiter_m53E815C9BE7EBD5671C5B5AB323A1F941F0B95CA_RuntimeMethod_var);
			V_3 = L_17;
			bool L_18;
			L_18 = TaskAwaiter_1_get_IsCompleted_m414B0D426DF49C4BF6ADA77683604D5A8BA76680((TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m414B0D426DF49C4BF6ADA77683604D5A8BA76680_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_00d2;
			}
		}

IL_0093:
		{
			int32_t L_19 = 0;
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
			TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F  L_20 = V_3;
			__this->set_U3CU3Eu__1_3(L_20);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F_TisU3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F_m6529ECBC267E9C00F47650AA793BBB227D2ACF86((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, (TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F *)(&V_3), (U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F_TisU3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F_m6529ECBC267E9C00F47650AA793BBB227D2ACF86_RuntimeMethod_var);
			goto IL_0145;
		}

IL_00b6:
		{
			TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F  L_22 = __this->get_U3CU3Eu__1_3();
			V_3 = L_22;
			TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F * L_23 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_23, sizeof(TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F ));
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->set_U3CU3E1__state_0(L_24);
		}

IL_00d2:
		{
			int32_t L_25;
			L_25 = TaskAwaiter_1_GetResult_mC146748C4F599E937FA6AB615EDCD983BE11508C((TaskAwaiter_1_t4AC5CC6D0C334DD584ADD20D4891E15497710D9F *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_mC146748C4F599E937FA6AB615EDCD983BE11508C_RuntimeMethod_var);
			V_2 = L_25;
			// if (access != SceneObserverAccessStatus.Allowed)
			int32_t L_26 = V_2;
			if (!L_26)
			{
				goto IL_00fb;
			}
		}

IL_00dd:
		{
			// Debug.LogError("SceneUnderstandingManager.Start: Access to Scene Understanding has been denied.\n" +
			//                "Reason: " + access);
			RuntimeObject * L_27 = Box(SceneObserverAccessStatus_t83BCCBF5C05EF18D5E7E673FBF7798E0E3FD9D0A_il2cpp_TypeInfo_var, (&V_2));
			NullCheck(L_27);
			String_t* L_28;
			L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
			V_2 = *(int32_t*)UnBox(L_27);
			String_t* L_29;
			L_29 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8FCFCD34C322154A836A299ACE9E406FF37E1FC1, L_28, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_29, /*hidden argument*/NULL);
			// return;
			goto IL_0132;
		}

IL_00fb:
		{
		}

IL_00fc:
		try
		{ // begin try (depth: 2)
			// Task.Run(() => RetrieveDataContinuously());
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_30 = V_1;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_31 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_31, L_30, (intptr_t)((intptr_t)SceneUnderstandingManager_U3CStartU3Eb__76_0_mAEF86C21BA67E160419B64F552159500818EEE5E_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_32;
			L_32 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(L_31, /*hidden argument*/NULL);
			// }
			goto IL_0117;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0110;
			}
			throw e;
		}

CATCH_0110:
		{ // begin catch(System.Exception)
			// Debug.LogException(e);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0117;
		} // end catch (depth: 2)

IL_0117:
		{
			goto IL_0132;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0119;
		}
		throw e;
	}

CATCH_0119:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_33 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_34 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0145;
	} // end catch (depth: 1)

IL_0132:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_35 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_35, /*hidden argument*/NULL);
	}

IL_0145:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__76_MoveNext_m79CB6A8BF19144467F263C15BCB378E82622D7EC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F *>(__this + _offset);
	U3CStartU3Ed__76_MoveNext_m79CB6A8BF19144467F263C15BCB378E82622D7EC(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Start>d__76::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__76_SetStateMachine_m7798E7F4AB0DB8174ACCD54280BBD8F23DCEC95E (U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__76_SetStateMachine_m7798E7F4AB0DB8174ACCD54280BBD8F23DCEC95E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__76_tAD9C2109A5009946C595524F3C08D5217690DA6F *>(__this + _offset);
	U3CStartU3Ed__76_SetStateMachine_m7798E7F4AB0DB8174ACCD54280BBD8F23DCEC95E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Update>d__77::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__77_MoveNext_m1BDE05477B60E91C70EBDE178309A872C692D8C0 (U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2_mC4ED335952E3DCC5B3FBD0838B1D34F0CA1EA94F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 8> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0051;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00ec;
			}
		}

IL_0018:
		{
			// if (QuerySceneFromDevice)
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = L_4->get_QuerySceneFromDevice_4();
			if (!L_5)
			{
				goto IL_00da;
			}
		}

IL_0023:
		{
			// if (AutoRefresh)
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = L_6->get_AutoRefresh_8();
			if (!L_7)
			{
				goto IL_0165;
			}
		}

IL_002e:
		{
			// TimeElapsedSinceLastAutoRefresh += Time.deltaTime;
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_8 = V_1;
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_9 = V_1;
			NullCheck(L_9);
			float L_10 = L_9->get_TimeElapsedSinceLastAutoRefresh_74();
			float L_11;
			L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
			NullCheck(L_8);
			L_8->set_TimeElapsedSinceLastAutoRefresh_74(((float)il2cpp_codegen_add((float)L_10, (float)L_11)));
			// if (TimeElapsedSinceLastAutoRefresh >= AutoRefreshIntervalInSeconds)
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_12 = V_1;
			NullCheck(L_12);
			float L_13 = L_12->get_TimeElapsedSinceLastAutoRefresh_74();
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_14 = V_1;
			NullCheck(L_14);
			float L_15 = L_14->get_AutoRefreshIntervalInSeconds_9();
			if ((!(((float)L_13) >= ((float)L_15))))
			{
				goto IL_0165;
			}
		}

IL_0051:
		{
		}

IL_0052:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_16 = V_0;
				if (!L_16)
				{
					goto IL_008d;
				}
			}

IL_0055:
			{
				// await DisplayDataAsync();
				SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_17 = V_1;
				NullCheck(L_17);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_18;
				L_18 = SceneUnderstandingManager_DisplayDataAsync_m1E546DCFD9D061ED1541251CC94B4F3A5915F8BD(L_17, /*hidden argument*/NULL);
				NullCheck(L_18);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_19;
				L_19 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_18, /*hidden argument*/NULL);
				V_2 = L_19;
				bool L_20;
				L_20 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				if (L_20)
				{
					goto IL_00a9;
				}
			}

IL_006a:
			{
				int32_t L_21 = 0;
				V_0 = L_21;
				__this->set_U3CU3E1__state_0(L_21);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_22 = V_2;
				__this->set_U3CU3Eu__1_3(L_22);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2_mC4ED335952E3DCC5B3FBD0838B1D34F0CA1EA94F((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_23, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2_mC4ED335952E3DCC5B3FBD0838B1D34F0CA1EA94F_RuntimeMethod_var);
				goto IL_0193;
			}

IL_008d:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_24 = __this->get_U3CU3Eu__1_3();
				V_2 = L_24;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_25 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_26 = (-1);
				V_0 = L_26;
				__this->set_U3CU3E1__state_0(L_26);
			}

IL_00a9:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				// }
				goto IL_00ca;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00b2;
			}
			throw e;
		}

CATCH_00b2:
		{ // begin catch(System.Exception)
			// catch (Exception ex)
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.LogError($"Error in {nameof(SceneUnderstandingManager)} {nameof(AutoRefresh)}: {ex.Message}");
			Exception_t * L_27 = V_3;
			NullCheck(L_27);
			String_t* L_28;
			L_28 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_27);
			String_t* L_29;
			L_29 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CA31EFC00E82CCF8928BD386557B04C4B0FB08B)), L_28, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_29, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00ca;
		} // end catch (depth: 2)

IL_00ca:
		{
			// TimeElapsedSinceLastAutoRefresh = 0.0f;
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_30 = V_1;
			NullCheck(L_30);
			L_30->set_TimeElapsedSinceLastAutoRefresh_74((0.0f));
			// }
			goto IL_0165;
		}

IL_00da:
		{
			// else if (!DisplayFromDiskStarted)
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_31 = V_1;
			NullCheck(L_31);
			bool L_32 = L_31->get_DisplayFromDiskStarted_75();
			if (L_32)
			{
				goto IL_0165;
			}
		}

IL_00e5:
		{
			// DisplayFromDiskStarted = true;
			SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_33 = V_1;
			NullCheck(L_33);
			L_33->set_DisplayFromDiskStarted_75((bool)1);
		}

IL_00ec:
		{
		}

IL_00ed:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_34 = V_0;
				if ((((int32_t)L_34) == ((int32_t)1)))
				{
					goto IL_0126;
				}
			}

IL_00f1:
			{
				// await DisplayDataAsync();
				SceneUnderstandingManager_tB41EFD8A46F879AD53ACCB2A1489CC56F7A0EEFE * L_35 = V_1;
				NullCheck(L_35);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_36;
				L_36 = SceneUnderstandingManager_DisplayDataAsync_m1E546DCFD9D061ED1541251CC94B4F3A5915F8BD(L_35, /*hidden argument*/NULL);
				NullCheck(L_36);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_37;
				L_37 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_36, /*hidden argument*/NULL);
				V_2 = L_37;
				bool L_38;
				L_38 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				if (L_38)
				{
					goto IL_0142;
				}
			}

IL_0106:
			{
				int32_t L_39 = 1;
				V_0 = L_39;
				__this->set_U3CU3E1__state_0(L_39);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_40 = V_2;
				__this->set_U3CU3Eu__1_3(L_40);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_41 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2_mC4ED335952E3DCC5B3FBD0838B1D34F0CA1EA94F((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_41, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2_mC4ED335952E3DCC5B3FBD0838B1D34F0CA1EA94F_RuntimeMethod_var);
				goto IL_0193;
			}

IL_0126:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_42 = __this->get_U3CU3Eu__1_3();
				V_2 = L_42;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_43 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_43, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_44 = (-1);
				V_0 = L_44;
				__this->set_U3CU3E1__state_0(L_44);
			}

IL_0142:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				// }
				goto IL_0165;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_014b;
			}
			throw e;
		}

CATCH_014b:
		{ // begin catch(System.Exception)
			// catch (Exception ex)
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.LogError($"Error in {nameof(SceneUnderstandingManager)} DisplayFromDisk: {ex.Message}");
			Exception_t * L_45 = V_4;
			NullCheck(L_45);
			String_t* L_46;
			L_46 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_45);
			String_t* L_47;
			L_47 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF53545D28411B0CE2FBAD7D89F41DEFA3FE0BF5B)), L_46, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_47, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0165;
		} // end catch (depth: 2)

IL_0165:
		{
			goto IL_0180;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0167;
		}
		throw e;
	}

CATCH_0167:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_48 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_49 = V_5;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_48, L_49, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0193;
	} // end catch (depth: 1)

IL_0180:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_50 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_50, /*hidden argument*/NULL);
	}

IL_0193:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateU3Ed__77_MoveNext_m1BDE05477B60E91C70EBDE178309A872C692D8C0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 * _thisAdjusted = reinterpret_cast<U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 *>(__this + _offset);
	U3CUpdateU3Ed__77_MoveNext_m1BDE05477B60E91C70EBDE178309A872C692D8C0(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingManager/<Update>d__77::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__77_SetStateMachine_mC9F90CE737B64F303D68678DE456B267D5F1E26A (U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateU3Ed__77_SetStateMachine_mC9F90CE737B64F303D68678DE456B267D5F1E26A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 * _thisAdjusted = reinterpret_cast<U3CUpdateU3Ed__77_t38A62966CB3E4869F737AD10EDB6CC23C872BFB2 *>(__this + _offset);
	U3CUpdateU3Ed__77_SetStateMachine_mC9F90CE737B64F303D68678DE456B267D5F1E26A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer/<SprayCoroutine>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSprayCoroutineU3Ed__12__ctor_m3D64BBC217FC5DB744BADC971AC6CFA2A370D172 (U3CSprayCoroutineU3Ed__12_t53640CDA10599FAE4BBC6A9338F6048E36E3D72A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer/<SprayCoroutine>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSprayCoroutineU3Ed__12_System_IDisposable_Dispose_m46AADE894A5796A84A7EE5FA99E894952E5BA8FA (U3CSprayCoroutineU3Ed__12_t53640CDA10599FAE4BBC6A9338F6048E36E3D72A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer/<SprayCoroutine>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSprayCoroutineU3Ed__12_MoveNext_mFCA848146FCE6C897A12DCAC581A9B67F0DFEC27 (U3CSprayCoroutineU3Ed__12_t53640CDA10599FAE4BBC6A9338F6048E36E3D72A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m8A7C1E803E270C9EF2DA310339083AE5271AF9B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_0039;
			}
			case 2:
			{
				goto IL_0119;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int i=0; i<10; i++)
		__this->set_U3CiU3E5__2_3(0);
		goto IL_0130;
	}

IL_004c:
	{
		// PrimitiveType pt = i % 2 == 0 ? PrimitiveType.Cube : PrimitiveType.Sphere;
		int32_t L_3 = __this->get_U3CiU3E5__2_3();
		if (!((int32_t)((int32_t)L_3%(int32_t)2)))
		{
			goto IL_0059;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_005a;
	}

IL_0059:
	{
		G_B7_0 = 3;
	}

IL_005a:
	{
		// GameObject tempgbj = GameObject.CreatePrimitive(pt);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(G_B7_0, /*hidden argument*/NULL);
		V_2 = L_4;
		// tempgbj.transform.localScale = new Vector3(0.2f,0.2f,0.2f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_2;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (0.200000003f), (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_6, L_7, /*hidden argument*/NULL);
		// tempgbj.GetComponent<MeshRenderer>().material = material;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_2;
		NullCheck(L_8);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_9;
		L_9 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_8, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7 * L_10 = V_1;
		NullCheck(L_10);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = L_10->get_material_5();
		NullCheck(L_9);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_9, L_11, /*hidden argument*/NULL);
		// tempgbj.AddComponent<Rigidbody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_2;
		NullCheck(L_12);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_13;
		L_13 = GameObject_AddComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m8A7C1E803E270C9EF2DA310339083AE5271AF9B0(L_12, /*hidden argument*/GameObject_AddComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m8A7C1E803E270C9EF2DA310339083AE5271AF9B0_RuntimeMethod_var);
		// tempgbj.transform.position = Camera.main.transform.position + (Camera.main.transform.forward * 1.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_2;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_16;
		L_16 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19;
		L_19 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_18, L_22, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_23, /*hidden argument*/NULL);
		// tempgbj.GetComponent<Rigidbody>().AddForce(Camera.main.transform.forward * 3.0f, ForceMode.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_2;
		NullCheck(L_24);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_25;
		L_25 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_24, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_26;
		L_26 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_28, (3.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_25, L_29, 1, /*hidden argument*/NULL);
		// holoObjects.Add(tempgbj);
		SceneUnderstandingObjectPlacer_t828279D5B0DDDD665957FEEF0DEE4942CC722FD7 * L_30 = V_1;
		NullCheck(L_30);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_31 = L_30->get_holoObjects_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = V_2;
		NullCheck(L_31);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_31, L_32, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_33 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_33, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_33);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0119:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int i=0; i<10; i++)
		int32_t L_34 = __this->get_U3CiU3E5__2_3();
		V_3 = L_34;
		int32_t L_35 = V_3;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
	}

IL_0130:
	{
		// for(int i=0; i<10; i++)
		int32_t L_36 = __this->get_U3CiU3E5__2_3();
		if ((((int32_t)L_36) < ((int32_t)((int32_t)10))))
		{
			goto IL_004c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer/<SprayCoroutine>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSprayCoroutineU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB3D321913E48206AF4E87C82D610F1792A017F47 (U3CSprayCoroutineU3Ed__12_t53640CDA10599FAE4BBC6A9338F6048E36E3D72A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer/<SprayCoroutine>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSprayCoroutineU3Ed__12_System_Collections_IEnumerator_Reset_m8D5651369ED58998EEFC673EB3944895C012E8C4 (U3CSprayCoroutineU3Ed__12_t53640CDA10599FAE4BBC6A9338F6048E36E3D72A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSprayCoroutineU3Ed__12_System_Collections_IEnumerator_Reset_m8D5651369ED58998EEFC673EB3944895C012E8C4_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.SceneUnderstandingObjectPlacer/<SprayCoroutine>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSprayCoroutineU3Ed__12_System_Collections_IEnumerator_get_Current_mB1658F944BD5D5B47234D241482A6083995381C8 (U3CSprayCoroutineU3Ed__12_t53640CDA10599FAE4BBC6A9338F6048E36E3D72A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
