#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Int32>
struct ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Object>
struct ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t261B924C5A81BD7105A5798D8C188A0A50C456C5;
// System.Collections.Generic.IEqualityComparer`1<System.Runtime.Serialization.MemberHolder>
struct IEqualityComparer_1_t33A58346F7FA84C153DA0C4B167EE21284B2C96A;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct KeyValuePairComparer_tFC5E21C6C8782BC287C8B0C4CB03DF5751F91AD0;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct KeyValuePairComparer_t03194E7D2DB79A8C13325854A6F897A97DE95CFA;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct KeyValuePairComparer_tCE80B36BCD7AF178DEB3987C7897C0857C185D07;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct KeyValuePairComparer_tFB05E23A3B4957527A0D93DB63B56E7F6879CA7C;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct KeyValuePairComparer_t429491AA1D71796BFA9C1C8C51BB5F13B076260B;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct KeyValuePairComparer_t42C43560797DF8EE0E01A58A20BBCE6E0BF2A60D;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>
struct KeyValuePairComparer_t80D02691D93DFA36E2A5B1346185D67AD7260273;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct KeyValuePairComparer_t6190B959DA8128810423EB4579EC0820B756EA5A;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct KeyValuePairComparer_t01B5BC219DC78E4120C91395C983D7F0CA09418C;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct KeyValuePairComparer_tAD6F75A1896E5F3111A3B3DF07FF01F6622CCB97;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<UnityEngine.UI.Graphic,System.Int32>
struct KeyValuePairComparer_tDE2538699709B5FFA52FE047910D5EC668F22A9A;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct KeyValuePairComparer_t6F02B672B9FBAAC02703EA4A857048972EB36391;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Guid,System.Int32>
struct KeyValuePairComparer_tC2E19323B76E1DCA688D61AD686DDA96D4FA4C99;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Threading.IAsyncLocal,System.Object>
struct KeyValuePairComparer_t732DEE80657F865891FDE84B085FB84B089E7AD7;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<UnityEngine.UI.ICanvasElement,System.Int32>
struct KeyValuePairComparer_tD932A84792F7E355153E10F08816ABE9F6392EEB;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct Node_t2A395D6F315EF31861C8781D05747A139D42C4ED;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Guid,System.Int32>
struct Node_t6304F0CBAF4DD23958B25964545594CC97066AAA;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct Node_t35EAA0BA762A7E66EB36F41D56A4CC9C2670C716;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.String,System.Object>
struct Node_t10DBE1D4BC33585FD167BB6DF0B025576B0E9D67;
// System.Linq.OrderedEnumerable`1<UnityEngine.TextCore.Glyph>
struct OrderedEnumerable_1_t74025962247394906BC6FFC85D56A202E80C491B;
// System.Linq.OrderedEnumerable`1<TMPro.KerningPair>
struct OrderedEnumerable_1_t42FEEB33251CD88D3F9CAADEDAAC3C366ED5B9BD;
// System.Linq.OrderedEnumerable`1<TMPro.TMP_Character>
struct OrderedEnumerable_1_tCBE1B7C95C27D5E748DFD87440C0569CBF550386;
// System.Linq.OrderedEnumerable`1<TMPro.TMP_GlyphPairAdjustmentRecord>
struct OrderedEnumerable_1_tF0B6ED24DACA4F2BB14FF65FE0828E6DF4CDAD39;
// System.Linq.OrderedEnumerable`1<TMPro.TMP_SpriteCharacter>
struct OrderedEnumerable_1_tE9EC40DABA2096A6E3BC89E9840436080C30EE1A;
// System.Linq.OrderedEnumerable`1<TMPro.TMP_SpriteGlyph>
struct OrderedEnumerable_1_t93C67EDF9A876BC9259E04D289EE02BD0967D6E5;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct Tables_tDD5EB59BC8DA5F64A320A7C33C2ECB6D0BE0F2C5;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Guid,System.Int32>
struct Tables_t15E671C7BBEAEEA447C12909CF62DFE243E683F3;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,System.Object>
struct Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187;
// System.Tuple`2<System.Guid,System.Int32>
struct Tuple_2_t8E5EA6D651EAD4ED55B00756D00172A86B79BC85;
// System.Collections.Generic.KeyValuePair`2<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>[]
struct KeyValuePair_2U5BU5D_t08BBAE891532BAF0A18751ADEC259327275AD852;
// System.Collections.Generic.KeyValuePair`2<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>[]
struct KeyValuePair_2U5BU5D_t7C77623B14756C1248CD1E08EC8B208D006F4779;
// System.Collections.Generic.KeyValuePair`2<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>[]
struct KeyValuePair_2U5BU5D_t41D79C697779E4256F431D671867F11D7F97DD05;
// System.Collections.Generic.KeyValuePair`2<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>[]
struct KeyValuePair_2U5BU5D_t846D4293DC382D66CC433B5865BE8576AAFBB317;
// System.Collections.Generic.KeyValuePair`2<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>[]
struct KeyValuePair_2U5BU5D_tD44A699253E2039536150D5E95DBCA7890A5275B;
// System.Collections.Generic.KeyValuePair`2<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>[]
struct KeyValuePair_2U5BU5D_tE5DFE931DC0E5340396C3AF6905475898BA2D51D;
// System.Collections.Generic.KeyValuePair`2<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>[]
struct KeyValuePair_2U5BU5D_t872604A297DE4E772CC965D859CE6AEB3CC704D1;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>[]
struct KeyValuePair_2U5BU5D_t0A92B953AB9F7D154C564CCAD00E879F2538D4FB;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>[]
struct KeyValuePair_2U5BU5D_t256E15D38E772A81962813F57D6EF9B13AD8610C;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>>[]
struct KeyValuePair_2U5BU5D_t5E7BBB367D6A549709DFA43D60CF92CEB678A11E;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>[]
struct KeyValuePair_2U5BU5D_tEC97CC5809905EB5C8F04F5F7C04A92F39740197;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Tuple`2<System.Guid,System.Int32>>[]
struct KeyValuePair_2U5BU5D_tCFEBE9FE9FD13FFD3E4D0AD6AD4041A187BBE149;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>[]
struct KeyValuePair_2U5BU5D_tA97D178F25732408D4AC6B5F926A9EDED5F8E000;
// System.Collections.Generic.KeyValuePair`2<System.Threading.IAsyncLocal,System.Object>[]
struct KeyValuePair_2U5BU5D_t147065F7F9E7B00A87140ABA43FA2F3FAA4589C8;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>[]
struct KeyValuePair_2U5BU5D_t0581955D004736ED8BF3EF33452BB24A9946E5D4;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Guid,System.Tuple`2<System.Guid,System.Int32>>[]
struct NodeU5BU5D_tAD7E68EF7B8F7755854CE00DFF0D77511C0209F9;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Guid,System.Int32>[]
struct NodeU5BU5D_tF99AEA7E19FAD2BCDB67D9B7C2660FE43ED0B030;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>[]
struct NodeU5BU5D_t2B6E67D38479F47416115BC716F8A30AA49B8520;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.String,System.Object>[]
struct NodeU5BU5D_tF58E966F256D9D67B6E26B3933D907CA6E0BB1A7;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.TextCore.Glyph[]
struct GlyphU5BU5D_tDC8ECA36264C4DC872F3D9429BD56E9B40300E4B;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// TMPro.KerningPair[]
struct KerningPairU5BU5D_t31BFB1BD0CB0170D6FCBFA90CAE39EE1CBED51E2;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
// TMPro.TMP_Character[]
struct TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F;
// TMPro.TMP_GlyphPairAdjustmentRecord[]
struct TMP_GlyphPairAdjustmentRecordU5BU5D_t40B7FD5D8CF8C16283FC2006397E153B1BD7E7F8;
// TMPro.TMP_SpriteCharacter[]
struct TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC;
// TMPro.TMP_SpriteGlyph[]
struct TMP_SpriteGlyphU5BU5D_t1EF7A4A23C0C332C610687A2216900DB989B88E7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.TextCore.Glyph
struct Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1;
// TMPro.KerningPair
struct KerningPair_t86851B62BD57903968C233D4A2504AD606853408;
// System.Runtime.Serialization.MemberHolder
struct MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_GlyphPairAdjustmentRecord
struct TMP_GlyphPairAdjustmentRecord_t79F65D973582F66AF3787F0C63E6E6575C8E0C10;
// TMPro.TMP_SpriteCharacter
struct TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE;
// TMPro.TMP_SpriteGlyph
struct TMP_SpriteGlyph_t5DF3D3BFFC0D0A72ABEBA3490F804B591BF1F25D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026;
// TMPro.FloatTween/FloatTweenCallback
struct FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper;
struct IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E;
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_t2C43A7E52B7CC8D1B2DA6DD4EC3E72A84A4CF8F2;
struct IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C;
struct IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D;
struct IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2;
struct IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct NOVTABLE IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mD5886CE3E4920A01936A06BA1915CF30037129CB(IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m9DF4E847B615A86C716939BC2C5FE61C8E517348(IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_mD27969D80A6AA31B8C41D824318BA5044197404F(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct NOVTABLE IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m108CBA2BE6D19F6A961970FF1AC3DE4761942818(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m9773816D15B923B84BCE4CB70D52BBB55D61421B(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8071D5CC72DC722A092D03B8725B40398F216758(IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>>
struct NOVTABLE IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m86DE4489A430066D4958BD2839105D891E5521D7(IIterator_1_t2C43A7E52B7CC8D1B2DA6DD4EC3E72A84A4CF8F2** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct NOVTABLE IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D(IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Object>
struct NOVTABLE IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mC226A587D3EB776EBAAF655FFB36C67B1A315D65(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mEEF9E99289AFB12AE3EA4C207B17A8F0052B66AE(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mD49CF5C044925DD6600120A2307BBF30958B4202(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m70A333EC79569FEF37E249F09CF4EA8483414F97(IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___first0, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Object>
struct NOVTABLE IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mFECCD940A7D68107BB0D6C67A2BBECE78943D6D5(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m4BF7BBA7856FCFD7BF3C6F0FC997BED33C075E40(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m225F1E1DFB1343F7F815367DF0253A12C3880B27(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m317C7F2261C5FBB98B7A44D9EED35046F3CF0B40(IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mC380A9B641DBFE89F175BCDF70F3140B8BBD1205(Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m80FB84D1D708198A748E25B1AB73E9443AFFB371(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mF09BD1BF6BDA5086E34300D695CBB63AD5CE7A42() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tDD5EB59BC8DA5F64A320A7C33C2ECB6D0BE0F2C5 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1, ____tables_0)); }
	inline Tables_tDD5EB59BC8DA5F64A320A7C33C2ECB6D0BE0F2C5 * get__tables_0() const { return ____tables_0; }
	inline Tables_tDD5EB59BC8DA5F64A320A7C33C2ECB6D0BE0F2C5 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tDD5EB59BC8DA5F64A320A7C33C2ECB6D0BE0F2C5 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Int32>
struct ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t15E671C7BBEAEEA447C12909CF62DFE243E683F3 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310, ____tables_0)); }
	inline Tables_t15E671C7BBEAEEA447C12909CF62DFE243E683F3 * get__tables_0() const { return ____tables_0; }
	inline Tables_t15E671C7BBEAEEA447C12909CF62DFE243E683F3 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t15E671C7BBEAEEA447C12909CF62DFE243E683F3 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165, ____tables_0)); }
	inline Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4 * get__tables_0() const { return ____tables_0; }
	inline Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t4B48A8F7FB765A619CCE496E8A22A744848620A4 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Object>
struct ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6, ____tables_0)); }
	inline Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187 * get__tables_0() const { return ____tables_0; }
	inline Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tBDD2060C8DC2D320235E7B06B38BE96D4A905187 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct ConstantSplittableMap_2_t8E780838004D653D1024A3EDAB4364D014FBF25B  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t08BBAE891532BAF0A18751ADEC259327275AD852* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t8E780838004D653D1024A3EDAB4364D014FBF25B, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t08BBAE891532BAF0A18751ADEC259327275AD852* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t08BBAE891532BAF0A18751ADEC259327275AD852** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t08BBAE891532BAF0A18751ADEC259327275AD852* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t8E780838004D653D1024A3EDAB4364D014FBF25B, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t8E780838004D653D1024A3EDAB4364D014FBF25B, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t8E780838004D653D1024A3EDAB4364D014FBF25B_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tFC5E21C6C8782BC287C8B0C4CB03DF5751F91AD0 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t8E780838004D653D1024A3EDAB4364D014FBF25B_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tFC5E21C6C8782BC287C8B0C4CB03DF5751F91AD0 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tFC5E21C6C8782BC287C8B0C4CB03DF5751F91AD0 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tFC5E21C6C8782BC287C8B0C4CB03DF5751F91AD0 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct ConstantSplittableMap_2_t48022D1234259822AA7F0DCE13526E9D0AC52862  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t7C77623B14756C1248CD1E08EC8B208D006F4779* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t48022D1234259822AA7F0DCE13526E9D0AC52862, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t7C77623B14756C1248CD1E08EC8B208D006F4779* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t7C77623B14756C1248CD1E08EC8B208D006F4779** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t7C77623B14756C1248CD1E08EC8B208D006F4779* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t48022D1234259822AA7F0DCE13526E9D0AC52862, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t48022D1234259822AA7F0DCE13526E9D0AC52862, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t48022D1234259822AA7F0DCE13526E9D0AC52862_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t03194E7D2DB79A8C13325854A6F897A97DE95CFA * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t48022D1234259822AA7F0DCE13526E9D0AC52862_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t03194E7D2DB79A8C13325854A6F897A97DE95CFA * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t03194E7D2DB79A8C13325854A6F897A97DE95CFA ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t03194E7D2DB79A8C13325854A6F897A97DE95CFA * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct ConstantSplittableMap_2_tA1FCD15A6F19BF78544CE7A4808BD7DAF2DD3F2E  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t41D79C697779E4256F431D671867F11D7F97DD05* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tA1FCD15A6F19BF78544CE7A4808BD7DAF2DD3F2E, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t41D79C697779E4256F431D671867F11D7F97DD05* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t41D79C697779E4256F431D671867F11D7F97DD05** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t41D79C697779E4256F431D671867F11D7F97DD05* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tA1FCD15A6F19BF78544CE7A4808BD7DAF2DD3F2E, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tA1FCD15A6F19BF78544CE7A4808BD7DAF2DD3F2E, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tA1FCD15A6F19BF78544CE7A4808BD7DAF2DD3F2E_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tCE80B36BCD7AF178DEB3987C7897C0857C185D07 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tA1FCD15A6F19BF78544CE7A4808BD7DAF2DD3F2E_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tCE80B36BCD7AF178DEB3987C7897C0857C185D07 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tCE80B36BCD7AF178DEB3987C7897C0857C185D07 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tCE80B36BCD7AF178DEB3987C7897C0857C185D07 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct ConstantSplittableMap_2_tF1641175C77CD1AB08CDC693616D543D26E7B1FA  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t846D4293DC382D66CC433B5865BE8576AAFBB317* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tF1641175C77CD1AB08CDC693616D543D26E7B1FA, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t846D4293DC382D66CC433B5865BE8576AAFBB317* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t846D4293DC382D66CC433B5865BE8576AAFBB317** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t846D4293DC382D66CC433B5865BE8576AAFBB317* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tF1641175C77CD1AB08CDC693616D543D26E7B1FA, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tF1641175C77CD1AB08CDC693616D543D26E7B1FA, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tF1641175C77CD1AB08CDC693616D543D26E7B1FA_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tFB05E23A3B4957527A0D93DB63B56E7F6879CA7C * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tF1641175C77CD1AB08CDC693616D543D26E7B1FA_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tFB05E23A3B4957527A0D93DB63B56E7F6879CA7C * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tFB05E23A3B4957527A0D93DB63B56E7F6879CA7C ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tFB05E23A3B4957527A0D93DB63B56E7F6879CA7C * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct ConstantSplittableMap_2_t2F25E24F536739213036C28CC983F4F31453B8BA  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_tD44A699253E2039536150D5E95DBCA7890A5275B* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2F25E24F536739213036C28CC983F4F31453B8BA, ___items_1)); }
	inline KeyValuePair_2U5BU5D_tD44A699253E2039536150D5E95DBCA7890A5275B* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_tD44A699253E2039536150D5E95DBCA7890A5275B** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_tD44A699253E2039536150D5E95DBCA7890A5275B* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2F25E24F536739213036C28CC983F4F31453B8BA, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2F25E24F536739213036C28CC983F4F31453B8BA, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t2F25E24F536739213036C28CC983F4F31453B8BA_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t429491AA1D71796BFA9C1C8C51BB5F13B076260B * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2F25E24F536739213036C28CC983F4F31453B8BA_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t429491AA1D71796BFA9C1C8C51BB5F13B076260B * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t429491AA1D71796BFA9C1C8C51BB5F13B076260B ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t429491AA1D71796BFA9C1C8C51BB5F13B076260B * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct ConstantSplittableMap_2_tA8BE9FEEDBAF63D2A1CDE07FF43FA5187A498879  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_tE5DFE931DC0E5340396C3AF6905475898BA2D51D* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tA8BE9FEEDBAF63D2A1CDE07FF43FA5187A498879, ___items_1)); }
	inline KeyValuePair_2U5BU5D_tE5DFE931DC0E5340396C3AF6905475898BA2D51D* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_tE5DFE931DC0E5340396C3AF6905475898BA2D51D** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_tE5DFE931DC0E5340396C3AF6905475898BA2D51D* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tA8BE9FEEDBAF63D2A1CDE07FF43FA5187A498879, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tA8BE9FEEDBAF63D2A1CDE07FF43FA5187A498879, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tA8BE9FEEDBAF63D2A1CDE07FF43FA5187A498879_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t42C43560797DF8EE0E01A58A20BBCE6E0BF2A60D * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tA8BE9FEEDBAF63D2A1CDE07FF43FA5187A498879_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t42C43560797DF8EE0E01A58A20BBCE6E0BF2A60D * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t42C43560797DF8EE0E01A58A20BBCE6E0BF2A60D ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t42C43560797DF8EE0E01A58A20BBCE6E0BF2A60D * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>
struct ConstantSplittableMap_2_t079B9B32AFB88E161F7CE0AAF53E0DAA534EB02B  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t872604A297DE4E772CC965D859CE6AEB3CC704D1* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t079B9B32AFB88E161F7CE0AAF53E0DAA534EB02B, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t872604A297DE4E772CC965D859CE6AEB3CC704D1* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t872604A297DE4E772CC965D859CE6AEB3CC704D1** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t872604A297DE4E772CC965D859CE6AEB3CC704D1* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t079B9B32AFB88E161F7CE0AAF53E0DAA534EB02B, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t079B9B32AFB88E161F7CE0AAF53E0DAA534EB02B, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t079B9B32AFB88E161F7CE0AAF53E0DAA534EB02B_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t80D02691D93DFA36E2A5B1346185D67AD7260273 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t079B9B32AFB88E161F7CE0AAF53E0DAA534EB02B_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t80D02691D93DFA36E2A5B1346185D67AD7260273 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t80D02691D93DFA36E2A5B1346185D67AD7260273 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t80D02691D93DFA36E2A5B1346185D67AD7260273 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ConstantSplittableMap_2_t7BB687EA876B074BF227AA2CB9E221003F3F04FA  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t0A92B953AB9F7D154C564CCAD00E879F2538D4FB* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t7BB687EA876B074BF227AA2CB9E221003F3F04FA, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t0A92B953AB9F7D154C564CCAD00E879F2538D4FB* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t0A92B953AB9F7D154C564CCAD00E879F2538D4FB** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t0A92B953AB9F7D154C564CCAD00E879F2538D4FB* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t7BB687EA876B074BF227AA2CB9E221003F3F04FA, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t7BB687EA876B074BF227AA2CB9E221003F3F04FA, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t7BB687EA876B074BF227AA2CB9E221003F3F04FA_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t6190B959DA8128810423EB4579EC0820B756EA5A * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t7BB687EA876B074BF227AA2CB9E221003F3F04FA_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t6190B959DA8128810423EB4579EC0820B756EA5A * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t6190B959DA8128810423EB4579EC0820B756EA5A ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t6190B959DA8128810423EB4579EC0820B756EA5A * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct ConstantSplittableMap_2_t8B314A4FA91AFC0499AF2DE00CE0A0D3A145B2BF  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t256E15D38E772A81962813F57D6EF9B13AD8610C* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t8B314A4FA91AFC0499AF2DE00CE0A0D3A145B2BF, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t256E15D38E772A81962813F57D6EF9B13AD8610C* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t256E15D38E772A81962813F57D6EF9B13AD8610C** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t256E15D38E772A81962813F57D6EF9B13AD8610C* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t8B314A4FA91AFC0499AF2DE00CE0A0D3A145B2BF, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t8B314A4FA91AFC0499AF2DE00CE0A0D3A145B2BF, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t8B314A4FA91AFC0499AF2DE00CE0A0D3A145B2BF_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t01B5BC219DC78E4120C91395C983D7F0CA09418C * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t8B314A4FA91AFC0499AF2DE00CE0A0D3A145B2BF_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t01B5BC219DC78E4120C91395C983D7F0CA09418C * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t01B5BC219DC78E4120C91395C983D7F0CA09418C ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t01B5BC219DC78E4120C91395C983D7F0CA09418C * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct ConstantSplittableMap_2_tFF5FF33EE7CF7AAFBE1D37C69DB9D4149682AE21  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t5E7BBB367D6A549709DFA43D60CF92CEB678A11E* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tFF5FF33EE7CF7AAFBE1D37C69DB9D4149682AE21, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t5E7BBB367D6A549709DFA43D60CF92CEB678A11E* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t5E7BBB367D6A549709DFA43D60CF92CEB678A11E** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t5E7BBB367D6A549709DFA43D60CF92CEB678A11E* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tFF5FF33EE7CF7AAFBE1D37C69DB9D4149682AE21, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tFF5FF33EE7CF7AAFBE1D37C69DB9D4149682AE21, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tFF5FF33EE7CF7AAFBE1D37C69DB9D4149682AE21_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tAD6F75A1896E5F3111A3B3DF07FF01F6622CCB97 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tFF5FF33EE7CF7AAFBE1D37C69DB9D4149682AE21_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tAD6F75A1896E5F3111A3B3DF07FF01F6622CCB97 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tAD6F75A1896E5F3111A3B3DF07FF01F6622CCB97 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tAD6F75A1896E5F3111A3B3DF07FF01F6622CCB97 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<UnityEngine.UI.Graphic,System.Int32>
struct ConstantSplittableMap_2_tB477424743B1A61D71DEA9571EEC32D7A15B7E3E  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_tEC97CC5809905EB5C8F04F5F7C04A92F39740197* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tB477424743B1A61D71DEA9571EEC32D7A15B7E3E, ___items_1)); }
	inline KeyValuePair_2U5BU5D_tEC97CC5809905EB5C8F04F5F7C04A92F39740197* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_tEC97CC5809905EB5C8F04F5F7C04A92F39740197** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_tEC97CC5809905EB5C8F04F5F7C04A92F39740197* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tB477424743B1A61D71DEA9571EEC32D7A15B7E3E, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tB477424743B1A61D71DEA9571EEC32D7A15B7E3E, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tB477424743B1A61D71DEA9571EEC32D7A15B7E3E_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tDE2538699709B5FFA52FE047910D5EC668F22A9A * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tB477424743B1A61D71DEA9571EEC32D7A15B7E3E_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tDE2538699709B5FFA52FE047910D5EC668F22A9A * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tDE2538699709B5FFA52FE047910D5EC668F22A9A ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tDE2538699709B5FFA52FE047910D5EC668F22A9A * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct ConstantSplittableMap_2_t64C618C5E16C56443B61FEBE7C5067F74FFA2884  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_tCFEBE9FE9FD13FFD3E4D0AD6AD4041A187BBE149* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t64C618C5E16C56443B61FEBE7C5067F74FFA2884, ___items_1)); }
	inline KeyValuePair_2U5BU5D_tCFEBE9FE9FD13FFD3E4D0AD6AD4041A187BBE149* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_tCFEBE9FE9FD13FFD3E4D0AD6AD4041A187BBE149** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_tCFEBE9FE9FD13FFD3E4D0AD6AD4041A187BBE149* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t64C618C5E16C56443B61FEBE7C5067F74FFA2884, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t64C618C5E16C56443B61FEBE7C5067F74FFA2884, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t64C618C5E16C56443B61FEBE7C5067F74FFA2884_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t6F02B672B9FBAAC02703EA4A857048972EB36391 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t64C618C5E16C56443B61FEBE7C5067F74FFA2884_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t6F02B672B9FBAAC02703EA4A857048972EB36391 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t6F02B672B9FBAAC02703EA4A857048972EB36391 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t6F02B672B9FBAAC02703EA4A857048972EB36391 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Int32>
struct ConstantSplittableMap_2_tFD13C0EDD41F8A7FBD9AD13B12701440A13F1B16  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_tA97D178F25732408D4AC6B5F926A9EDED5F8E000* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tFD13C0EDD41F8A7FBD9AD13B12701440A13F1B16, ___items_1)); }
	inline KeyValuePair_2U5BU5D_tA97D178F25732408D4AC6B5F926A9EDED5F8E000* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_tA97D178F25732408D4AC6B5F926A9EDED5F8E000** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_tA97D178F25732408D4AC6B5F926A9EDED5F8E000* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tFD13C0EDD41F8A7FBD9AD13B12701440A13F1B16, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tFD13C0EDD41F8A7FBD9AD13B12701440A13F1B16, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tFD13C0EDD41F8A7FBD9AD13B12701440A13F1B16_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tC2E19323B76E1DCA688D61AD686DDA96D4FA4C99 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tFD13C0EDD41F8A7FBD9AD13B12701440A13F1B16_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tC2E19323B76E1DCA688D61AD686DDA96D4FA4C99 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tC2E19323B76E1DCA688D61AD686DDA96D4FA4C99 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tC2E19323B76E1DCA688D61AD686DDA96D4FA4C99 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Threading.IAsyncLocal,System.Object>
struct ConstantSplittableMap_2_t2DA5985CBF21FE1B30E6EEF9A28F36629F4F73AC  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t147065F7F9E7B00A87140ABA43FA2F3FAA4589C8* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2DA5985CBF21FE1B30E6EEF9A28F36629F4F73AC, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t147065F7F9E7B00A87140ABA43FA2F3FAA4589C8* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t147065F7F9E7B00A87140ABA43FA2F3FAA4589C8** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t147065F7F9E7B00A87140ABA43FA2F3FAA4589C8* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2DA5985CBF21FE1B30E6EEF9A28F36629F4F73AC, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2DA5985CBF21FE1B30E6EEF9A28F36629F4F73AC, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t2DA5985CBF21FE1B30E6EEF9A28F36629F4F73AC_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t732DEE80657F865891FDE84B085FB84B089E7AD7 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2DA5985CBF21FE1B30E6EEF9A28F36629F4F73AC_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t732DEE80657F865891FDE84B085FB84B089E7AD7 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t732DEE80657F865891FDE84B085FB84B089E7AD7 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t732DEE80657F865891FDE84B085FB84B089E7AD7 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<UnityEngine.UI.ICanvasElement,System.Int32>
struct ConstantSplittableMap_2_tC78822B27BB0A6390E198E284A40AF44E3657585  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t0581955D004736ED8BF3EF33452BB24A9946E5D4* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tC78822B27BB0A6390E198E284A40AF44E3657585, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t0581955D004736ED8BF3EF33452BB24A9946E5D4* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t0581955D004736ED8BF3EF33452BB24A9946E5D4** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t0581955D004736ED8BF3EF33452BB24A9946E5D4* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tC78822B27BB0A6390E198E284A40AF44E3657585, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tC78822B27BB0A6390E198E284A40AF44E3657585, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tC78822B27BB0A6390E198E284A40AF44E3657585_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tD932A84792F7E355153E10F08816ABE9F6392EEB * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tC78822B27BB0A6390E198E284A40AF44E3657585_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tD932A84792F7E355153E10F08816ABE9F6392EEB * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tD932A84792F7E355153E10F08816ABE9F6392EEB ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tD932A84792F7E355153E10F08816ABE9F6392EEB * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


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

// System.Linq.Buffer`1<UnityEngine.TextCore.Glyph>
struct Buffer_1_tCF60117A3226F4129B69A50BC2A9673CDF2C46BD 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	GlyphU5BU5D_tDC8ECA36264C4DC872F3D9429BD56E9B40300E4B* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_tCF60117A3226F4129B69A50BC2A9673CDF2C46BD, ___items_0)); }
	inline GlyphU5BU5D_tDC8ECA36264C4DC872F3D9429BD56E9B40300E4B* get_items_0() const { return ___items_0; }
	inline GlyphU5BU5D_tDC8ECA36264C4DC872F3D9429BD56E9B40300E4B** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(GlyphU5BU5D_tDC8ECA36264C4DC872F3D9429BD56E9B40300E4B* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_tCF60117A3226F4129B69A50BC2A9673CDF2C46BD, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Linq.Buffer`1<TMPro.KerningPair>
struct Buffer_1_tD52183E94D8C0BF4D3A7A24BB50F254698E14705 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	KerningPairU5BU5D_t31BFB1BD0CB0170D6FCBFA90CAE39EE1CBED51E2* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_tD52183E94D8C0BF4D3A7A24BB50F254698E14705, ___items_0)); }
	inline KerningPairU5BU5D_t31BFB1BD0CB0170D6FCBFA90CAE39EE1CBED51E2* get_items_0() const { return ___items_0; }
	inline KerningPairU5BU5D_t31BFB1BD0CB0170D6FCBFA90CAE39EE1CBED51E2** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(KerningPairU5BU5D_t31BFB1BD0CB0170D6FCBFA90CAE39EE1CBED51E2* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_tD52183E94D8C0BF4D3A7A24BB50F254698E14705, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Linq.Buffer`1<TMPro.TMP_Character>
struct Buffer_1_t8D3BF8285DCD9400AD56B994A604CF86C4514FFF 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_t8D3BF8285DCD9400AD56B994A604CF86C4514FFF, ___items_0)); }
	inline TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F* get_items_0() const { return ___items_0; }
	inline TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_t8D3BF8285DCD9400AD56B994A604CF86C4514FFF, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Linq.Buffer`1<TMPro.TMP_GlyphPairAdjustmentRecord>
struct Buffer_1_tB5AEDE86576DA21370641144B80D17B7EAD08175 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	TMP_GlyphPairAdjustmentRecordU5BU5D_t40B7FD5D8CF8C16283FC2006397E153B1BD7E7F8* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_tB5AEDE86576DA21370641144B80D17B7EAD08175, ___items_0)); }
	inline TMP_GlyphPairAdjustmentRecordU5BU5D_t40B7FD5D8CF8C16283FC2006397E153B1BD7E7F8* get_items_0() const { return ___items_0; }
	inline TMP_GlyphPairAdjustmentRecordU5BU5D_t40B7FD5D8CF8C16283FC2006397E153B1BD7E7F8** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(TMP_GlyphPairAdjustmentRecordU5BU5D_t40B7FD5D8CF8C16283FC2006397E153B1BD7E7F8* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_tB5AEDE86576DA21370641144B80D17B7EAD08175, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Linq.Buffer`1<TMPro.TMP_SpriteCharacter>
struct Buffer_1_t2F432E6C3E51B128C3011FD8B7CB69A34E442A1E 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_t2F432E6C3E51B128C3011FD8B7CB69A34E442A1E, ___items_0)); }
	inline TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC* get_items_0() const { return ___items_0; }
	inline TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_t2F432E6C3E51B128C3011FD8B7CB69A34E442A1E, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Linq.Buffer`1<TMPro.TMP_SpriteGlyph>
struct Buffer_1_tB15C3FA81CAEAC7738EA6C2A8FDFB8A5E9718428 
{
public:
	// TElement[] System.Linq.Buffer`1::items
	TMP_SpriteGlyphU5BU5D_t1EF7A4A23C0C332C610687A2216900DB989B88E7* ___items_0;
	// System.Int32 System.Linq.Buffer`1::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Buffer_1_tB15C3FA81CAEAC7738EA6C2A8FDFB8A5E9718428, ___items_0)); }
	inline TMP_SpriteGlyphU5BU5D_t1EF7A4A23C0C332C610687A2216900DB989B88E7* get_items_0() const { return ___items_0; }
	inline TMP_SpriteGlyphU5BU5D_t1EF7A4A23C0C332C610687A2216900DB989B88E7** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(TMP_SpriteGlyphU5BU5D_t1EF7A4A23C0C332C610687A2216900DB989B88E7* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Buffer_1_tB15C3FA81CAEAC7738EA6C2A8FDFB8A5E9718428, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct KeyValuePair_2_tF02277B70EF978D90E1CA2F432DD3636A23E3AEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF02277B70EF978D90E1CA2F432DD3636A23E3AEE, ___key_0)); }
	inline MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB * get_key_0() const { return ___key_0; }
	inline MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(MemberHolder_t726EF5DD7EFEAC217E964548470CFC7D88E149EB * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF02277B70EF978D90E1CA2F432DD3636A23E3AEE, ___value_1)); }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* get_value_1() const { return ___value_1; }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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

// TMPro.FloatTween
struct FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97 
{
public:
	// TMPro.FloatTween/FloatTweenCallback TMPro.FloatTween::m_Target
	FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * ___m_Target_0;
	// System.Single TMPro.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single TMPro.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single TMPro.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean TMPro.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_Target_0)); }
	inline FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.FloatTween
struct FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshaled_pinvoke
{
	FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of TMPro.FloatTween
struct FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97_marshaled_com
{
	FloatTweenCallback_tFA05DE1963C7BD69C06DEAD6FFA6C107A9E1D949 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};

// UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228 
{
public:
	// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_Target_0)); }
	inline FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshaled_pinvoke
{
	FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228_marshaled_com
{
	FloatTweenCallback_t56E4D48C62B03C68A69708463C2CCF8E02BBFB23 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
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


// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.TextCore.Glyph>
struct U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_t74025962247394906BC6FFC85D56A202E80C491B * ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__1
	Buffer_1_tCF60117A3226F4129B69A50BC2A9673CDF2C46BD  ___U3CbufferU3E5__1_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__2
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CmapU3E5__2_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596, ___U3CU3E2__current_1)); }
	inline Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596, ___U3CU3E4__this_2)); }
	inline OrderedEnumerable_1_t74025962247394906BC6FFC85D56A202E80C491B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OrderedEnumerable_1_t74025962247394906BC6FFC85D56A202E80C491B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OrderedEnumerable_1_t74025962247394906BC6FFC85D56A202E80C491B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbufferU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596, ___U3CbufferU3E5__1_3)); }
	inline Buffer_1_tCF60117A3226F4129B69A50BC2A9673CDF2C46BD  get_U3CbufferU3E5__1_3() const { return ___U3CbufferU3E5__1_3; }
	inline Buffer_1_tCF60117A3226F4129B69A50BC2A9673CDF2C46BD * get_address_of_U3CbufferU3E5__1_3() { return &___U3CbufferU3E5__1_3; }
	inline void set_U3CbufferU3E5__1_3(Buffer_1_tCF60117A3226F4129B69A50BC2A9673CDF2C46BD  value)
	{
		___U3CbufferU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CbufferU3E5__1_3))->___items_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CmapU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596, ___U3CmapU3E5__2_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CmapU3E5__2_4() const { return ___U3CmapU3E5__2_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CmapU3E5__2_4() { return &___U3CmapU3E5__2_4; }
	inline void set_U3CmapU3E5__2_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CmapU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmapU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.KerningPair>
struct U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	KerningPair_t86851B62BD57903968C233D4A2504AD606853408 * ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_t42FEEB33251CD88D3F9CAADEDAAC3C366ED5B9BD * ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__1
	Buffer_1_tD52183E94D8C0BF4D3A7A24BB50F254698E14705  ___U3CbufferU3E5__1_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__2
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CmapU3E5__2_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60, ___U3CU3E2__current_1)); }
	inline KerningPair_t86851B62BD57903968C233D4A2504AD606853408 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KerningPair_t86851B62BD57903968C233D4A2504AD606853408 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KerningPair_t86851B62BD57903968C233D4A2504AD606853408 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60, ___U3CU3E4__this_2)); }
	inline OrderedEnumerable_1_t42FEEB33251CD88D3F9CAADEDAAC3C366ED5B9BD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OrderedEnumerable_1_t42FEEB33251CD88D3F9CAADEDAAC3C366ED5B9BD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OrderedEnumerable_1_t42FEEB33251CD88D3F9CAADEDAAC3C366ED5B9BD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbufferU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60, ___U3CbufferU3E5__1_3)); }
	inline Buffer_1_tD52183E94D8C0BF4D3A7A24BB50F254698E14705  get_U3CbufferU3E5__1_3() const { return ___U3CbufferU3E5__1_3; }
	inline Buffer_1_tD52183E94D8C0BF4D3A7A24BB50F254698E14705 * get_address_of_U3CbufferU3E5__1_3() { return &___U3CbufferU3E5__1_3; }
	inline void set_U3CbufferU3E5__1_3(Buffer_1_tD52183E94D8C0BF4D3A7A24BB50F254698E14705  value)
	{
		___U3CbufferU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CbufferU3E5__1_3))->___items_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CmapU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60, ___U3CmapU3E5__2_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CmapU3E5__2_4() const { return ___U3CmapU3E5__2_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CmapU3E5__2_4() { return &___U3CmapU3E5__2_4; }
	inline void set_U3CmapU3E5__2_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CmapU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmapU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_Character>
struct U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_tCBE1B7C95C27D5E748DFD87440C0569CBF550386 * ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__1
	Buffer_1_t8D3BF8285DCD9400AD56B994A604CF86C4514FFF  ___U3CbufferU3E5__1_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__2
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CmapU3E5__2_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719, ___U3CU3E2__current_1)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719, ___U3CU3E4__this_2)); }
	inline OrderedEnumerable_1_tCBE1B7C95C27D5E748DFD87440C0569CBF550386 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OrderedEnumerable_1_tCBE1B7C95C27D5E748DFD87440C0569CBF550386 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OrderedEnumerable_1_tCBE1B7C95C27D5E748DFD87440C0569CBF550386 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbufferU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719, ___U3CbufferU3E5__1_3)); }
	inline Buffer_1_t8D3BF8285DCD9400AD56B994A604CF86C4514FFF  get_U3CbufferU3E5__1_3() const { return ___U3CbufferU3E5__1_3; }
	inline Buffer_1_t8D3BF8285DCD9400AD56B994A604CF86C4514FFF * get_address_of_U3CbufferU3E5__1_3() { return &___U3CbufferU3E5__1_3; }
	inline void set_U3CbufferU3E5__1_3(Buffer_1_t8D3BF8285DCD9400AD56B994A604CF86C4514FFF  value)
	{
		___U3CbufferU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CbufferU3E5__1_3))->___items_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CmapU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719, ___U3CmapU3E5__2_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CmapU3E5__2_4() const { return ___U3CmapU3E5__2_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CmapU3E5__2_4() { return &___U3CmapU3E5__2_4; }
	inline void set_U3CmapU3E5__2_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CmapU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmapU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_GlyphPairAdjustmentRecord>
struct U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	TMP_GlyphPairAdjustmentRecord_t79F65D973582F66AF3787F0C63E6E6575C8E0C10 * ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_tF0B6ED24DACA4F2BB14FF65FE0828E6DF4CDAD39 * ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__1
	Buffer_1_tB5AEDE86576DA21370641144B80D17B7EAD08175  ___U3CbufferU3E5__1_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__2
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CmapU3E5__2_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA, ___U3CU3E2__current_1)); }
	inline TMP_GlyphPairAdjustmentRecord_t79F65D973582F66AF3787F0C63E6E6575C8E0C10 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline TMP_GlyphPairAdjustmentRecord_t79F65D973582F66AF3787F0C63E6E6575C8E0C10 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(TMP_GlyphPairAdjustmentRecord_t79F65D973582F66AF3787F0C63E6E6575C8E0C10 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA, ___U3CU3E4__this_2)); }
	inline OrderedEnumerable_1_tF0B6ED24DACA4F2BB14FF65FE0828E6DF4CDAD39 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OrderedEnumerable_1_tF0B6ED24DACA4F2BB14FF65FE0828E6DF4CDAD39 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OrderedEnumerable_1_tF0B6ED24DACA4F2BB14FF65FE0828E6DF4CDAD39 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbufferU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA, ___U3CbufferU3E5__1_3)); }
	inline Buffer_1_tB5AEDE86576DA21370641144B80D17B7EAD08175  get_U3CbufferU3E5__1_3() const { return ___U3CbufferU3E5__1_3; }
	inline Buffer_1_tB5AEDE86576DA21370641144B80D17B7EAD08175 * get_address_of_U3CbufferU3E5__1_3() { return &___U3CbufferU3E5__1_3; }
	inline void set_U3CbufferU3E5__1_3(Buffer_1_tB5AEDE86576DA21370641144B80D17B7EAD08175  value)
	{
		___U3CbufferU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CbufferU3E5__1_3))->___items_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CmapU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA, ___U3CmapU3E5__2_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CmapU3E5__2_4() const { return ___U3CmapU3E5__2_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CmapU3E5__2_4() { return &___U3CmapU3E5__2_4; }
	inline void set_U3CmapU3E5__2_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CmapU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmapU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_SpriteCharacter>
struct U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_tE9EC40DABA2096A6E3BC89E9840436080C30EE1A * ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__1
	Buffer_1_t2F432E6C3E51B128C3011FD8B7CB69A34E442A1E  ___U3CbufferU3E5__1_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__2
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CmapU3E5__2_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89, ___U3CU3E2__current_1)); }
	inline TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89, ___U3CU3E4__this_2)); }
	inline OrderedEnumerable_1_tE9EC40DABA2096A6E3BC89E9840436080C30EE1A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OrderedEnumerable_1_tE9EC40DABA2096A6E3BC89E9840436080C30EE1A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OrderedEnumerable_1_tE9EC40DABA2096A6E3BC89E9840436080C30EE1A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbufferU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89, ___U3CbufferU3E5__1_3)); }
	inline Buffer_1_t2F432E6C3E51B128C3011FD8B7CB69A34E442A1E  get_U3CbufferU3E5__1_3() const { return ___U3CbufferU3E5__1_3; }
	inline Buffer_1_t2F432E6C3E51B128C3011FD8B7CB69A34E442A1E * get_address_of_U3CbufferU3E5__1_3() { return &___U3CbufferU3E5__1_3; }
	inline void set_U3CbufferU3E5__1_3(Buffer_1_t2F432E6C3E51B128C3011FD8B7CB69A34E442A1E  value)
	{
		___U3CbufferU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CbufferU3E5__1_3))->___items_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CmapU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89, ___U3CmapU3E5__2_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CmapU3E5__2_4() const { return ___U3CmapU3E5__2_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CmapU3E5__2_4() { return &___U3CmapU3E5__2_4; }
	inline void set_U3CmapU3E5__2_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CmapU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmapU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_SpriteGlyph>
struct U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>2__current
	TMP_SpriteGlyph_t5DF3D3BFFC0D0A72ABEBA3490F804B591BF1F25D * ___U3CU3E2__current_1;
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<>4__this
	OrderedEnumerable_1_t93C67EDF9A876BC9259E04D289EE02BD0967D6E5 * ___U3CU3E4__this_2;
	// System.Linq.Buffer`1<TElement> System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<buffer>5__1
	Buffer_1_tB15C3FA81CAEAC7738EA6C2A8FDFB8A5E9718428  ___U3CbufferU3E5__1_3;
	// System.Int32[] System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<map>5__2
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CmapU3E5__2_4;
	// System.Int32 System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A, ___U3CU3E2__current_1)); }
	inline TMP_SpriteGlyph_t5DF3D3BFFC0D0A72ABEBA3490F804B591BF1F25D * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline TMP_SpriteGlyph_t5DF3D3BFFC0D0A72ABEBA3490F804B591BF1F25D ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(TMP_SpriteGlyph_t5DF3D3BFFC0D0A72ABEBA3490F804B591BF1F25D * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A, ___U3CU3E4__this_2)); }
	inline OrderedEnumerable_1_t93C67EDF9A876BC9259E04D289EE02BD0967D6E5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OrderedEnumerable_1_t93C67EDF9A876BC9259E04D289EE02BD0967D6E5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OrderedEnumerable_1_t93C67EDF9A876BC9259E04D289EE02BD0967D6E5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbufferU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A, ___U3CbufferU3E5__1_3)); }
	inline Buffer_1_tB15C3FA81CAEAC7738EA6C2A8FDFB8A5E9718428  get_U3CbufferU3E5__1_3() const { return ___U3CbufferU3E5__1_3; }
	inline Buffer_1_tB15C3FA81CAEAC7738EA6C2A8FDFB8A5E9718428 * get_address_of_U3CbufferU3E5__1_3() { return &___U3CbufferU3E5__1_3; }
	inline void set_U3CbufferU3E5__1_3(Buffer_1_tB15C3FA81CAEAC7738EA6C2A8FDFB8A5E9718428  value)
	{
		___U3CbufferU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CbufferU3E5__1_3))->___items_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CmapU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A, ___U3CmapU3E5__2_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CmapU3E5__2_4() const { return ___U3CmapU3E5__2_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CmapU3E5__2_4() { return &___U3CmapU3E5__2_4; }
	inline void set_U3CmapU3E5__2_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CmapU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmapU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<>2__current
	KeyValuePair_2_tF02277B70EF978D90E1CA2F432DD3636A23E3AEE  ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<>4__this
	ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165 * ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<buckets>5__1
	NodeU5BU5D_t2B6E67D38479F47416115BC716F8A30AA49B8520* ___U3CbucketsU3E5__1_3;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<current>5__2
	Node_t35EAA0BA762A7E66EB36F41D56A4CC9C2670C716 * ___U3CcurrentU3E5__2_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tF02277B70EF978D90E1CA2F432DD3636A23E3AEE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tF02277B70EF978D90E1CA2F432DD3636A23E3AEE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tF02277B70EF978D90E1CA2F432DD3636A23E3AEE  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9, ___U3CU3E4__this_2)); }
	inline ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbucketsU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9, ___U3CbucketsU3E5__1_3)); }
	inline NodeU5BU5D_t2B6E67D38479F47416115BC716F8A30AA49B8520* get_U3CbucketsU3E5__1_3() const { return ___U3CbucketsU3E5__1_3; }
	inline NodeU5BU5D_t2B6E67D38479F47416115BC716F8A30AA49B8520** get_address_of_U3CbucketsU3E5__1_3() { return &___U3CbucketsU3E5__1_3; }
	inline void set_U3CbucketsU3E5__1_3(NodeU5BU5D_t2B6E67D38479F47416115BC716F8A30AA49B8520* value)
	{
		___U3CbucketsU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbucketsU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9, ___U3CcurrentU3E5__2_4)); }
	inline Node_t35EAA0BA762A7E66EB36F41D56A4CC9C2670C716 * get_U3CcurrentU3E5__2_4() const { return ___U3CcurrentU3E5__2_4; }
	inline Node_t35EAA0BA762A7E66EB36F41D56A4CC9C2670C716 ** get_address_of_U3CcurrentU3E5__2_4() { return &___U3CcurrentU3E5__2_4; }
	inline void set_U3CcurrentU3E5__2_4(Node_t35EAA0BA762A7E66EB36F41D56A4CC9C2670C716 * value)
	{
		___U3CcurrentU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32<System.String,System.Object>
struct U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<>2__current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<>4__this
	ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6 * ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<buckets>5__1
	NodeU5BU5D_tF58E966F256D9D67B6E26B3933D907CA6E0BB1A7* ___U3CbucketsU3E5__1_3;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<current>5__2
	Node_t10DBE1D4BC33585FD167BB6DF0B025576B0E9D67 * ___U3CcurrentU3E5__2_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290, ___U3CU3E4__this_2)); }
	inline ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbucketsU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290, ___U3CbucketsU3E5__1_3)); }
	inline NodeU5BU5D_tF58E966F256D9D67B6E26B3933D907CA6E0BB1A7* get_U3CbucketsU3E5__1_3() const { return ___U3CbucketsU3E5__1_3; }
	inline NodeU5BU5D_tF58E966F256D9D67B6E26B3933D907CA6E0BB1A7** get_address_of_U3CbucketsU3E5__1_3() { return &___U3CbucketsU3E5__1_3; }
	inline void set_U3CbucketsU3E5__1_3(NodeU5BU5D_tF58E966F256D9D67B6E26B3933D907CA6E0BB1A7* value)
	{
		___U3CbucketsU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbucketsU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290, ___U3CcurrentU3E5__2_4)); }
	inline Node_t10DBE1D4BC33585FD167BB6DF0B025576B0E9D67 * get_U3CcurrentU3E5__2_4() const { return ___U3CcurrentU3E5__2_4; }
	inline Node_t10DBE1D4BC33585FD167BB6DF0B025576B0E9D67 ** get_address_of_U3CcurrentU3E5__2_4() { return &___U3CcurrentU3E5__2_4; }
	inline void set_U3CcurrentU3E5__2_4(Node_t10DBE1D4BC33585FD167BB6DF0B025576B0E9D67 * value)
	{
		___U3CcurrentU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// TMPro.TweenRunner`1/<Start>d__2<TMPro.FloatTween>
struct U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TweenRunner`1/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TweenRunner`1/<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T TMPro.TweenRunner`1/<Start>d__2::tweenInfo
	FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97  ___tweenInfo_2;
	// System.Single TMPro.TweenRunner`1/<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E, ___tweenInfo_2)); }
	inline FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(FloatTween_t5A586E52817A19AA6B977C2E775A83AB391BBC97  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::tweenInfo
	FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12, ___tweenInfo_2)); }
	inline FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(FloatTween_tFC6A79CB4DD9D51D99523093925F926E12D2F228  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};

// Windows.Foundation.Collections.IMapView`2<System.Guid,System.Int32>
struct NOVTABLE IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m8BA42B864F6C257CAF439CE9100A97CEE92D724E(Guid_t  ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mD73D070366AE35969606856EC6DCE120156A04C6(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mDBE6CAD4DC9F39869E13AF1FB63DAC74067469B4(Guid_t  ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD6707386A8CE8C51DA82754F5FEB54A97C534D79(IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___first0, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Guid,System.Int32>
struct NOVTABLE IMap_2_t75BDDB1CFEAC14E79B70B14045B988FAF9452816 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m5A2C6329228538B3BF494DDCE75894E45C227006(Guid_t  ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mB95CF8DDB7BC957A2D29CCAF524A4DEB324B6A6B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m14675BEA8F14DE9A11D7120490357CE9E0E2B186(Guid_t  ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mB29A5BFB8C664366432EFA898B5EB6CB29DBF7DA(IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m3A6AFEFD6A9D612698EA64C485D9C32A28B60866(Guid_t  ___key0, int32_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m9D2145EC9500E960251BCF88A1F98EE285E5C38D(Guid_t  ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m6EDE8265C25BA4410FBD18F11D17E5E3E8905889() = 0;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct KeyValuePair_2_t0D8BB321ADA14A285171438A42B078E8A12B2D82 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Tuple_2_t8E5EA6D651EAD4ED55B00756D00172A86B79BC85 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0D8BB321ADA14A285171438A42B078E8A12B2D82, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0D8BB321ADA14A285171438A42B078E8A12B2D82, ___value_1)); }
	inline Tuple_2_t8E5EA6D651EAD4ED55B00756D00172A86B79BC85 * get_value_1() const { return ___value_1; }
	inline Tuple_2_t8E5EA6D651EAD4ED55B00756D00172A86B79BC85 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Tuple_2_t8E5EA6D651EAD4ED55B00756D00172A86B79BC85 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>
struct KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// Windows.Foundation.AsyncStatus
struct AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27, ___value___2)); }
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

// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode
struct ColorTweenMode_tC8254CFED9F320A1B7A452159F60A143952DFE19 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorTweenMode_tC8254CFED9F320A1B7A452159F60A143952DFE19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<>2__current
	KeyValuePair_2_t0D8BB321ADA14A285171438A42B078E8A12B2D82  ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<>4__this
	ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1 * ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<buckets>5__1
	NodeU5BU5D_tAD7E68EF7B8F7755854CE00DFF0D77511C0209F9* ___U3CbucketsU3E5__1_3;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<current>5__2
	Node_t2A395D6F315EF31861C8781D05747A139D42C4ED * ___U3CcurrentU3E5__2_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_t0D8BB321ADA14A285171438A42B078E8A12B2D82  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_t0D8BB321ADA14A285171438A42B078E8A12B2D82 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_t0D8BB321ADA14A285171438A42B078E8A12B2D82  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C, ___U3CU3E4__this_2)); }
	inline ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbucketsU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C, ___U3CbucketsU3E5__1_3)); }
	inline NodeU5BU5D_tAD7E68EF7B8F7755854CE00DFF0D77511C0209F9* get_U3CbucketsU3E5__1_3() const { return ___U3CbucketsU3E5__1_3; }
	inline NodeU5BU5D_tAD7E68EF7B8F7755854CE00DFF0D77511C0209F9** get_address_of_U3CbucketsU3E5__1_3() { return &___U3CbucketsU3E5__1_3; }
	inline void set_U3CbucketsU3E5__1_3(NodeU5BU5D_tAD7E68EF7B8F7755854CE00DFF0D77511C0209F9* value)
	{
		___U3CbucketsU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbucketsU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C, ___U3CcurrentU3E5__2_4)); }
	inline Node_t2A395D6F315EF31861C8781D05747A139D42C4ED * get_U3CcurrentU3E5__2_4() const { return ___U3CcurrentU3E5__2_4; }
	inline Node_t2A395D6F315EF31861C8781D05747A139D42C4ED ** get_address_of_U3CcurrentU3E5__2_4() { return &___U3CcurrentU3E5__2_4; }
	inline void set_U3CcurrentU3E5__2_4(Node_t2A395D6F315EF31861C8781D05747A139D42C4ED * value)
	{
		___U3CcurrentU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32<System.Guid,System.Int32>
struct U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<>2__current
	KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242  ___U3CU3E2__current_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<>4__this
	ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310 * ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<buckets>5__1
	NodeU5BU5D_tF99AEA7E19FAD2BCDB67D9B7C2660FE43ED0B030* ___U3CbucketsU3E5__1_3;
	// System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<current>5__2
	Node_t6304F0CBAF4DD23958B25964545594CC97066AAA * ___U3CcurrentU3E5__2_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F, ___U3CU3E4__this_2)); }
	inline ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbucketsU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F, ___U3CbucketsU3E5__1_3)); }
	inline NodeU5BU5D_tF99AEA7E19FAD2BCDB67D9B7C2660FE43ED0B030* get_U3CbucketsU3E5__1_3() const { return ___U3CbucketsU3E5__1_3; }
	inline NodeU5BU5D_tF99AEA7E19FAD2BCDB67D9B7C2660FE43ED0B030** get_address_of_U3CbucketsU3E5__1_3() { return &___U3CbucketsU3E5__1_3; }
	inline void set_U3CbucketsU3E5__1_3(NodeU5BU5D_tF99AEA7E19FAD2BCDB67D9B7C2660FE43ED0B030* value)
	{
		___U3CbucketsU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbucketsU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F, ___U3CcurrentU3E5__2_4)); }
	inline Node_t6304F0CBAF4DD23958B25964545594CC97066AAA * get_U3CcurrentU3E5__2_4() const { return ___U3CcurrentU3E5__2_4; }
	inline Node_t6304F0CBAF4DD23958B25964545594CC97066AAA ** get_address_of_U3CcurrentU3E5__2_4() { return &___U3CcurrentU3E5__2_4; }
	inline void set_U3CcurrentU3E5__2_4(Node_t6304F0CBAF4DD23958B25964545594CC97066AAA * value)
	{
		___U3CcurrentU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339 
{
public:
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_Target_0)); }
	inline ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_StartColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_TargetColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshaled_pinvoke
{
	ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * ___m_Target_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_StartColor_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339_marshaled_com
{
	ColorTweenCallback_tFD140F68C9A5F1C9799A2A82FA463C4EF56F9026 * ___m_Target_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_StartColor_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
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

// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::tweenInfo
	ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388, ___tweenInfo_2)); }
	inline ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(ColorTween_tB608DC1CF7A7F226B0D4DD8B269798F27CECE339  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_m5A2C6329228538B3BF494DDCE75894E45C227006_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, int32_t* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mB95CF8DDB7BC957A2D29CCAF524A4DEB324B6A6B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m14675BEA8F14DE9A11D7120490357CE9E0E2B186_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_mB29A5BFB8C664366432EFA898B5EB6CB29DBF7DA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m3A6AFEFD6A9D612698EA64C485D9C32A28B60866_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, int32_t ___value1, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m9D2145EC9500E960251BCF88A1F98EE285E5C38D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0);
il2cpp_hresult_t IMap_2_Clear_m6EDE8265C25BA4410FBD18F11D17E5E3E8905889_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m86DE4489A430066D4958BD2839105D891E5521D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t2C43A7E52B7CC8D1B2DA6DD4EC3E72A84A4CF8F2** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m8BA42B864F6C257CAF439CE9100A97CEE92D724E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, int32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mD73D070366AE35969606856EC6DCE120156A04C6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mDBE6CAD4DC9F39869E13AF1FB63DAC74067469B4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mD6707386A8CE8C51DA82754F5FEB54A97C534D79_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___first0, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___second1);
il2cpp_hresult_t IMap_2_Lookup_mFECCD940A7D68107BB0D6C67A2BBECE78943D6D5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m4BF7BBA7856FCFD7BF3C6F0FC997BED33C075E40_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m225F1E1DFB1343F7F815367DF0253A12C3880B27_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m317C7F2261C5FBB98B7A44D9EED35046F3CF0B40_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mC380A9B641DBFE89F175BCDF70F3140B8BBD1205_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m80FB84D1D708198A748E25B1AB73E9443AFFB371_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0);
il2cpp_hresult_t IMap_2_Clear_mF09BD1BF6BDA5086E34300D695CBB63AD5CE7A42_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mC226A587D3EB776EBAAF655FFB36C67B1A315D65_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mEEF9E99289AFB12AE3EA4C207B17A8F0052B66AE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mD49CF5C044925DD6600120A2307BBF30958B4202_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m70A333EC79569FEF37E249F09CF4EA8483414F97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___first0, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___second1);

// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared (AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);

// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242 (AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE (AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061 *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<UnityEngine.TextCore.Glyph>
struct U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t6FD4DB4BBE45786CF4639008AAA2C71A2D808596_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.KerningPair>
struct U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t320DF8DB8526F290B7B46D56F87EC01EDFBF2F60_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_Character>
struct U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_tDE4E30C0042F8CE346DEDEC5946E64F7A5727719_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_GlyphPairAdjustmentRecord>
struct U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_tE18074015310D0235B614A47B4DDCAFE5542E7AA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_SpriteCharacter>
struct U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t2F13A250F562DD9E0DCD595E985A72B9DEC3FA89_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1<TMPro.TMP_SpriteGlyph>
struct U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__1_t6BD815791DA019B6F5BD980F9FD2B624C87FAA9A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__32_t3DFE5EDEFB691F490BF5C9FFBCCF05560BA6346C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32<System.Guid,System.Int32>
struct U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__32_t6515A509989099E89B0952BA64E15E91858A473F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__32_t464E615E6E1CD6D7FCE42014138845A7772B69A9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32<System.String,System.Object>
struct U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__32_t6BCBE06A81F4B9E1EB5EAC1DE8FBA9008EB4C290_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__2_tFB5B68ACD6B72236226A4DBFF90660409B533388_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TweenRunner`1/<Start>d__2<TMPro.FloatTween>
struct U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__2_t304FCFAB5A6C91579B348828B88BB294DCACC83E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__2_t9789962C60DA327F6B025DE2DD46F8C4CE6A5B12_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D * __thisValue = (AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061 * __thisValue = (AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061 *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tDF072DAF918ADC52D045027EC70E3A3C2C8FAAD1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Int32>
struct ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_ComCallableWrapper>, IMap_2_t75BDDB1CFEAC14E79B70B14045B988FAF9452816, IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D
{
	inline ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMap_2_t75BDDB1CFEAC14E79B70B14045B988FAF9452816::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t75BDDB1CFEAC14E79B70B14045B988FAF9452816*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_t75BDDB1CFEAC14E79B70B14045B988FAF9452816::IID;
		interfaceIds[1] = IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m5A2C6329228538B3BF494DDCE75894E45C227006(Guid_t  ___key0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m5A2C6329228538B3BF494DDCE75894E45C227006_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mB95CF8DDB7BC957A2D29CCAF524A4DEB324B6A6B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mB95CF8DDB7BC957A2D29CCAF524A4DEB324B6A6B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m14675BEA8F14DE9A11D7120490357CE9E0E2B186(Guid_t  ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m14675BEA8F14DE9A11D7120490357CE9E0E2B186_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mB29A5BFB8C664366432EFA898B5EB6CB29DBF7DA(IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_mB29A5BFB8C664366432EFA898B5EB6CB29DBF7DA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m3A6AFEFD6A9D612698EA64C485D9C32A28B60866(Guid_t  ___key0, int32_t ___value1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m3A6AFEFD6A9D612698EA64C485D9C32A28B60866_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, ___value1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m9D2145EC9500E960251BCF88A1F98EE285E5C38D(Guid_t  ___key0) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m9D2145EC9500E960251BCF88A1F98EE285E5C38D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m6EDE8265C25BA4410FBD18F11D17E5E3E8905889() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m6EDE8265C25BA4410FBD18F11D17E5E3E8905889_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m86DE4489A430066D4958BD2839105D891E5521D7(IIterator_1_t2C43A7E52B7CC8D1B2DA6DD4EC3E72A84A4CF8F2** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m86DE4489A430066D4958BD2839105D891E5521D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m8BA42B864F6C257CAF439CE9100A97CEE92D724E(Guid_t  ___key0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m8BA42B864F6C257CAF439CE9100A97CEE92D724E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mD73D070366AE35969606856EC6DCE120156A04C6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mD73D070366AE35969606856EC6DCE120156A04C6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mDBE6CAD4DC9F39869E13AF1FB63DAC74067469B4(Guid_t  ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mDBE6CAD4DC9F39869E13AF1FB63DAC74067469B4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD6707386A8CE8C51DA82754F5FEB54A97C534D79(IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___first0, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___second1) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mD6707386A8CE8C51DA82754F5FEB54A97C534D79_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___first0, ___second1);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t940A7CB77900DD1C87C82C36F7FF4C018D5F7310_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tCDD3E713B9FAC2A37A5798DD000C2A440AAA5165_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Object>
struct ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper>, IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B, IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2
{
	inline ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_t0569C10E27A2AB7F415E6620B7D9ABA3DB4BB41B::IID;
		interfaceIds[1] = IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mFECCD940A7D68107BB0D6C67A2BBECE78943D6D5(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_mFECCD940A7D68107BB0D6C67A2BBECE78943D6D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m4BF7BBA7856FCFD7BF3C6F0FC997BED33C075E40(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m4BF7BBA7856FCFD7BF3C6F0FC997BED33C075E40_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m225F1E1DFB1343F7F815367DF0253A12C3880B27(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m225F1E1DFB1343F7F815367DF0253A12C3880B27_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m317C7F2261C5FBB98B7A44D9EED35046F3CF0B40(IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m317C7F2261C5FBB98B7A44D9EED35046F3CF0B40_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mC380A9B641DBFE89F175BCDF70F3140B8BBD1205(Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mC380A9B641DBFE89F175BCDF70F3140B8BBD1205_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, ___value1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m80FB84D1D708198A748E25B1AB73E9443AFFB371(Il2CppHString ___key0) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m80FB84D1D708198A748E25B1AB73E9443AFFB371_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mF09BD1BF6BDA5086E34300D695CBB63AD5CE7A42() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_mF09BD1BF6BDA5086E34300D695CBB63AD5CE7A42_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D(IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mC226A587D3EB776EBAAF655FFB36C67B1A315D65(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mC226A587D3EB776EBAAF655FFB36C67B1A315D65_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mEEF9E99289AFB12AE3EA4C207B17A8F0052B66AE(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mEEF9E99289AFB12AE3EA4C207B17A8F0052B66AE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mD49CF5C044925DD6600120A2307BBF30958B4202(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mD49CF5C044925DD6600120A2307BBF30958B4202_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m70A333EC79569FEF37E249F09CF4EA8483414F97(IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___first0, IMapView_2_tC9A1BEC7F087C45A751B8DB1DE4D18A5CDA6A3E2** ___second1) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m70A333EC79569FEF37E249F09CF4EA8483414F97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___first0, ___second1);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t13240966755EF1F500D38962BE5A4F63478363D6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct ConstantSplittableMap_2_t8E780838004D653D1024A3EDAB4364D014FBF25B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t8E780838004D653D1024A3EDAB4364D014FBF25B_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_t8E780838004D653D1024A3EDAB4364D014FBF25B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t8E780838004D653D1024A3EDAB4364D014FBF25B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_t8E780838004D653D1024A3EDAB4364D014FBF25B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_t8E780838004D653D1024A3EDAB4364D014FBF25B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_t8E780838004D653D1024A3EDAB4364D014FBF25B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct ConstantSplittableMap_2_t48022D1234259822AA7F0DCE13526E9D0AC52862_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t48022D1234259822AA7F0DCE13526E9D0AC52862_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_t48022D1234259822AA7F0DCE13526E9D0AC52862_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t48022D1234259822AA7F0DCE13526E9D0AC52862_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_t48022D1234259822AA7F0DCE13526E9D0AC52862(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_t48022D1234259822AA7F0DCE13526E9D0AC52862_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_t48022D1234259822AA7F0DCE13526E9D0AC52862_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct ConstantSplittableMap_2_tA1FCD15A6F19BF78544CE7A4808BD7DAF2DD3F2E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tA1FCD15A6F19BF78544CE7A4808BD7DAF2DD3F2E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_tA1FCD15A6F19BF78544CE7A4808BD7DAF2DD3F2E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tA1FCD15A6F19BF78544CE7A4808BD7DAF2DD3F2E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_tA1FCD15A6F19BF78544CE7A4808BD7DAF2DD3F2E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_tA1FCD15A6F19BF78544CE7A4808BD7DAF2DD3F2E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_tA1FCD15A6F19BF78544CE7A4808BD7DAF2DD3F2E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct ConstantSplittableMap_2_tF1641175C77CD1AB08CDC693616D543D26E7B1FA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tF1641175C77CD1AB08CDC693616D543D26E7B1FA_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_tF1641175C77CD1AB08CDC693616D543D26E7B1FA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tF1641175C77CD1AB08CDC693616D543D26E7B1FA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_tF1641175C77CD1AB08CDC693616D543D26E7B1FA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_tF1641175C77CD1AB08CDC693616D543D26E7B1FA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_tF1641175C77CD1AB08CDC693616D543D26E7B1FA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct ConstantSplittableMap_2_t2F25E24F536739213036C28CC983F4F31453B8BA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t2F25E24F536739213036C28CC983F4F31453B8BA_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_t2F25E24F536739213036C28CC983F4F31453B8BA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t2F25E24F536739213036C28CC983F4F31453B8BA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_t2F25E24F536739213036C28CC983F4F31453B8BA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_t2F25E24F536739213036C28CC983F4F31453B8BA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_t2F25E24F536739213036C28CC983F4F31453B8BA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct ConstantSplittableMap_2_tA8BE9FEEDBAF63D2A1CDE07FF43FA5187A498879_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tA8BE9FEEDBAF63D2A1CDE07FF43FA5187A498879_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_tA8BE9FEEDBAF63D2A1CDE07FF43FA5187A498879_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tA8BE9FEEDBAF63D2A1CDE07FF43FA5187A498879_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_tA8BE9FEEDBAF63D2A1CDE07FF43FA5187A498879(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_tA8BE9FEEDBAF63D2A1CDE07FF43FA5187A498879_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_tA8BE9FEEDBAF63D2A1CDE07FF43FA5187A498879_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>
struct ConstantSplittableMap_2_t079B9B32AFB88E161F7CE0AAF53E0DAA534EB02B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t079B9B32AFB88E161F7CE0AAF53E0DAA534EB02B_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_t079B9B32AFB88E161F7CE0AAF53E0DAA534EB02B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t079B9B32AFB88E161F7CE0AAF53E0DAA534EB02B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_t079B9B32AFB88E161F7CE0AAF53E0DAA534EB02B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_t079B9B32AFB88E161F7CE0AAF53E0DAA534EB02B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_t079B9B32AFB88E161F7CE0AAF53E0DAA534EB02B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ConstantSplittableMap_2_t7BB687EA876B074BF227AA2CB9E221003F3F04FA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t7BB687EA876B074BF227AA2CB9E221003F3F04FA_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_t7BB687EA876B074BF227AA2CB9E221003F3F04FA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t7BB687EA876B074BF227AA2CB9E221003F3F04FA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_t7BB687EA876B074BF227AA2CB9E221003F3F04FA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_t7BB687EA876B074BF227AA2CB9E221003F3F04FA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_t7BB687EA876B074BF227AA2CB9E221003F3F04FA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct ConstantSplittableMap_2_t8B314A4FA91AFC0499AF2DE00CE0A0D3A145B2BF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t8B314A4FA91AFC0499AF2DE00CE0A0D3A145B2BF_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_t8B314A4FA91AFC0499AF2DE00CE0A0D3A145B2BF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t8B314A4FA91AFC0499AF2DE00CE0A0D3A145B2BF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_t8B314A4FA91AFC0499AF2DE00CE0A0D3A145B2BF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_t8B314A4FA91AFC0499AF2DE00CE0A0D3A145B2BF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_t8B314A4FA91AFC0499AF2DE00CE0A0D3A145B2BF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct ConstantSplittableMap_2_tFF5FF33EE7CF7AAFBE1D37C69DB9D4149682AE21_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tFF5FF33EE7CF7AAFBE1D37C69DB9D4149682AE21_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_tFF5FF33EE7CF7AAFBE1D37C69DB9D4149682AE21_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tFF5FF33EE7CF7AAFBE1D37C69DB9D4149682AE21_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_tFF5FF33EE7CF7AAFBE1D37C69DB9D4149682AE21(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_tFF5FF33EE7CF7AAFBE1D37C69DB9D4149682AE21_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_tFF5FF33EE7CF7AAFBE1D37C69DB9D4149682AE21_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<UnityEngine.UI.Graphic,System.Int32>
struct ConstantSplittableMap_2_tB477424743B1A61D71DEA9571EEC32D7A15B7E3E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tB477424743B1A61D71DEA9571EEC32D7A15B7E3E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_tB477424743B1A61D71DEA9571EEC32D7A15B7E3E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tB477424743B1A61D71DEA9571EEC32D7A15B7E3E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_tB477424743B1A61D71DEA9571EEC32D7A15B7E3E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_tB477424743B1A61D71DEA9571EEC32D7A15B7E3E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_tB477424743B1A61D71DEA9571EEC32D7A15B7E3E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct ConstantSplittableMap_2_t64C618C5E16C56443B61FEBE7C5067F74FFA2884_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t64C618C5E16C56443B61FEBE7C5067F74FFA2884_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_t64C618C5E16C56443B61FEBE7C5067F74FFA2884_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t64C618C5E16C56443B61FEBE7C5067F74FFA2884_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_t64C618C5E16C56443B61FEBE7C5067F74FFA2884(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_t64C618C5E16C56443B61FEBE7C5067F74FFA2884_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_t64C618C5E16C56443B61FEBE7C5067F74FFA2884_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Int32>
struct ConstantSplittableMap_2_tFD13C0EDD41F8A7FBD9AD13B12701440A13F1B16_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tFD13C0EDD41F8A7FBD9AD13B12701440A13F1B16_ComCallableWrapper>, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D, IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_tFD13C0EDD41F8A7FBD9AD13B12701440A13F1B16_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tFD13C0EDD41F8A7FBD9AD13B12701440A13F1B16_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D::IID;
		interfaceIds[1] = IIterable_1_t1A5E333D12640BC7AB143CBE013FDE40AFB4F475::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m8BA42B864F6C257CAF439CE9100A97CEE92D724E(Guid_t  ___key0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m8BA42B864F6C257CAF439CE9100A97CEE92D724E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mD73D070366AE35969606856EC6DCE120156A04C6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mD73D070366AE35969606856EC6DCE120156A04C6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mDBE6CAD4DC9F39869E13AF1FB63DAC74067469B4(Guid_t  ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mDBE6CAD4DC9F39869E13AF1FB63DAC74067469B4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD6707386A8CE8C51DA82754F5FEB54A97C534D79(IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___first0, IMapView_2_t9A58F4156E13C5BBE7909B211D8219AA55795F2D** ___second1) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mD6707386A8CE8C51DA82754F5FEB54A97C534D79_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___first0, ___second1);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m86DE4489A430066D4958BD2839105D891E5521D7(IIterator_1_t2C43A7E52B7CC8D1B2DA6DD4EC3E72A84A4CF8F2** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m86DE4489A430066D4958BD2839105D891E5521D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_tFD13C0EDD41F8A7FBD9AD13B12701440A13F1B16(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_tFD13C0EDD41F8A7FBD9AD13B12701440A13F1B16_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_tFD13C0EDD41F8A7FBD9AD13B12701440A13F1B16_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Threading.IAsyncLocal,System.Object>
struct ConstantSplittableMap_2_t2DA5985CBF21FE1B30E6EEF9A28F36629F4F73AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t2DA5985CBF21FE1B30E6EEF9A28F36629F4F73AC_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_t2DA5985CBF21FE1B30E6EEF9A28F36629F4F73AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_t2DA5985CBF21FE1B30E6EEF9A28F36629F4F73AC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_t2DA5985CBF21FE1B30E6EEF9A28F36629F4F73AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_t2DA5985CBF21FE1B30E6EEF9A28F36629F4F73AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_t2DA5985CBF21FE1B30E6EEF9A28F36629F4F73AC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<UnityEngine.UI.ICanvasElement,System.Int32>
struct ConstantSplittableMap_2_tC78822B27BB0A6390E198E284A40AF44E3657585_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tC78822B27BB0A6390E198E284A40AF44E3657585_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ConstantSplittableMap_2_tC78822B27BB0A6390E198E284A40AF44E3657585_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConstantSplittableMap_2_tC78822B27BB0A6390E198E284A40AF44E3657585_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConstantSplittableMap_2_tC78822B27BB0A6390E198E284A40AF44E3657585(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConstantSplittableMap_2_tC78822B27BB0A6390E198E284A40AF44E3657585_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConstantSplittableMap_2_tC78822B27BB0A6390E198E284A40AF44E3657585_ComCallableWrapper(obj));
}
