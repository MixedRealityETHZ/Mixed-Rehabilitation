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


// Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2/CacheEntry<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>
struct CacheEntry_tE1A674DF9072A82F38578B2ECC7785F622242F24;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2/CacheEntry<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>>
struct Dictionary_2_t208A629F09A8F96CBC24F6200395B0DB28DABF8E;
// System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>
struct LinkedListNode_1_tA9E76E2DD79830DCAB99E3C728D4A803DD0EADF9;
// System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>
struct LinkedListNode_1_t1EE431E7910117B41B9AFB2E3D2C2F1DEECF03AF;
// System.Collections.Generic.KeyValuePair`2<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>[]
struct KeyValuePair_2U5BU5D_t872604A297DE4E772CC965D859CE6AEB3CC704D1;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality,Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings>[]
struct KeyValuePair_2U5BU5D_t1CABB5E6B03C807FA23EFA2156EF9375F90C74BB;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>[]
struct KeyValuePair_2U5BU5D_t0A92B953AB9F7D154C564CCAD00E879F2538D4FB;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>[]
struct KeyValuePair_2U5BU5D_t256E15D38E772A81962813F57D6EF9B13AD8610C;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>>[]
struct KeyValuePair_2U5BU5D_t5E7BBB367D6A549709DFA43D60CF92CEB678A11E;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Int32>[]
struct KeyValuePair_2U5BU5D_t59796AFB2A514BB75B21B18E27AF9ADC7259F809;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>[]
struct KeyValuePair_2U5BU5D_tEC97CC5809905EB5C8F04F5F7C04A92F39740197;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Tuple`2<System.Guid,System.Int32>>[]
struct KeyValuePair_2U5BU5D_tCFEBE9FE9FD13FFD3E4D0AD6AD4041A187BBE149;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>[]
struct KeyValuePair_2U5BU5D_tA97D178F25732408D4AC6B5F926A9EDED5F8E000;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>[]
struct KeyValuePair_2U5BU5D_tE95174DC75A7946DA93121F09D8541F535AAB77E;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Matrix4x4>[]
struct KeyValuePair_2U5BU5D_t81E1473601C1A9A09A4A894C847FE88CE2E6CC09;
// System.Collections.Generic.KeyValuePair`2<System.Threading.IAsyncLocal,System.Object>[]
struct KeyValuePair_2U5BU5D_t147065F7F9E7B00A87140ABA43FA2F3FAA4589C8;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>[]
struct KeyValuePair_2U5BU5D_t0581955D004736ED8BF3EF33452BB24A9946E5D4;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.IClipper,System.Int32>[]
struct KeyValuePair_2U5BU5D_t58D6B030DE84A705043CDA563D81A99DD63AE98B;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3>[]
struct KeyValuePair_2U5BU5D_tE9E5EA3CF9F0054DA635C07A8DB9F325705F157A;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>>[]
struct KeyValuePair_2U5BU5D_tC4D3145F53481122DBEF91DE66187268D967E40C;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t75E33B7DE9F0187F5F1967FECE21DDA12B8ABE48;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.DefaultPrimaryPointerSelector/PointerInfo>[]
struct KeyValuePair_2U5BU5D_tC17EFCF0AC13E6BE8A79B23CA243C186B36B8DC9;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityService>>[]
struct KeyValuePair_2U5BU5D_t14B28C31D88E06313D9A3140F60BDB0EB2511A3A;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.UI.BoundsControl.IProximityEffectObjectProvider,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.BoundsControl.ProximityEffect/ObjectProximityInfo>>[]
struct KeyValuePair_2U5BU5D_t7D7F2841EEA203C1274BE4C62B9357C95A2E8100;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.InputAction,UnityEngine.InputSystem.UI.InputSystemUIInputModule/InputActionReferenceState>[]
struct KeyValuePair_2U5BU5D_t73765302ECAB9AA1AB6A63F6B3E68EB12DFBAEBD;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.InputControl,System.Single>[]
struct KeyValuePair_2U5BU5D_tAC7898A878E463B4BEBE2F0635E295F43BBDF3CC;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>[]
struct KeyValuePair_2U5BU5D_tF6C291A50B1E1CB80D5B27EB399087C7373FD968;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2/CacheEntry<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>>[]
struct KeyValuePair_2U5BU5D_tE398D60DD1FFFFBAD5210870EB6036E1FCA8FF05;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.SceneUnderstanding.SceneQuad,Microsoft.MixedReality.SceneUnderstanding.SceneObject>>[]
struct KeyValuePair_2U5BU5D_t8B432354DB73C84BA878746AE9A12B980EA8D098;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t0CE22F880802B0F487E3F09AA6E7383AE9CBE7E7;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>[]
struct KeyValuePair_2U5BU5D_tE26FC64F14618965D1E8143FA99A78FE3A8478F0;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Globalization.CultureInfo>[]
struct KeyValuePair_2U5BU5D_t72FDE86F24D5B90AF8112B5EC9C423F614C4FFFA;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>[]
struct KeyValuePair_2U5BU5D_tE972B24958E4935B4203B00878BAA651F70E6282;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Guid>[]
struct KeyValuePair_2U5BU5D_t6570DC20FE32950C80D179C37D883143C9463959;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.InputSystem.InputDevice>[]
struct KeyValuePair_2U5BU5D_t182CB50EE5149ABBF62B0FD0997F759394E8F6B0;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2C4165C9DA1797DB8A5C9C8262F2CE9550B0619A;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Material>[]
struct KeyValuePair_2U5BU5D_tD363F2E8CD4364B647B44FEF3FD5659CA8805E33;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>[]
struct KeyValuePair_2U5BU5D_t3A8CDD9086D391C01BDAA0F8B0FF00AA98F40CCB;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>[]
struct KeyValuePair_2U5BU5D_tA6F3B044BA7B13910CFF819C07AD85852B8C581C;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject>[]
struct KeyValuePair_2U5BU5D_tE7AC3CB2E5ABFB794C4FEBBB191A88E7C66C2266;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>[]
struct KeyValuePair_2U5BU5D_tC8994E617660C5319F93B16924250F799D9EAFE9;
// System.Collections.Generic.KeyValuePair`2<System.Int32,TMPro.TMP_ColorGradient>[]
struct KeyValuePair_2U5BU5D_tAAC3E0452EA9B53C085C875B2DC226BB804CC3CD;
// System.Collections.Generic.KeyValuePair`2<System.Int32,TMPro.TMP_FontAsset>[]
struct KeyValuePair_2U5BU5D_t0861AE22D08AD6DA7687B06F6AA7BB30FB86EA85;
// System.Collections.Generic.KeyValuePair`2<System.Int32,TMPro.TMP_SpriteAsset>[]
struct KeyValuePair_2U5BU5D_tAB5AD7E29B895A375AA8445FAAF0F2F68F358D2C;
// System.Collections.Generic.KeyValuePair`2<System.Int32,TMPro.TMP_Style>[]
struct KeyValuePair_2U5BU5D_tD69EFAA34972A98DFDF8E6903B20724908C8E363;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Threading.Tasks.Task>[]
struct KeyValuePair_2U5BU5D_t827BC33C22F6ECB895E98D03D4DA71133E6BE10A;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeType>[]
struct KeyValuePair_2U5BU5D_t300155870AB7952A7F0C791DB20CBAB0D8C8D9F8;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>[]
struct KeyValuePair_2U5BU5D_tC5D74CF5192118F7DF710FBCA766756B53256E3E;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>[]
struct KeyValuePair_2U5BU5D_tFBC4F44ACCBE5EF3DCA7F8A45AA27DA433218B50;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>[]
struct KeyValuePair_2U5BU5D_tCA519E1B14E66BC41521DCB56371CE6676A45DD3;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>[]
struct KeyValuePair_2U5BU5D_t71FC5847270E0A5B9C0F79F1CA79A603B169C0E4;
// System.Collections.Generic.KeyValuePair`2<System.Int64,TMPro.TMP_MaterialManager/FallbackMaterial>[]
struct KeyValuePair_2U5BU5D_t7DC0E5773FF3312AEB17D810E055BB860B14ECF5;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>[]
struct KeyValuePair_2U5BU5D_tFE37FB407F1E4BD6BF564BF830091BC8208754B9;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>[]
struct KeyValuePair_2U5BU5D_t80850930EE6948E3E401E1D9B2302D9300420D25;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>[]
struct KeyValuePair_2U5BU5D_t9C604432257FDC9B4957B9C2597BD9F066B4B541;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>[]
struct KeyValuePair_2U5BU5D_t92691A462C62FD0669A3982AE001A631A7CB5F9E;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>[]
struct KeyValuePair_2U5BU5D_t38C455DEA72AEB13B965A37919C8949075F03060;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>[]
struct KeyValuePair_2U5BU5D_t5C5FD3ADE1949E05DEF3DCDE6A5CC55ED2035074;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout>[]
struct KeyValuePair_2U5BU5D_t728F0A9B9BA5B29DAE767BED39156096DC29712B;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.KeyCode,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.InputAction>[]
struct KeyValuePair_2U5BU5D_tD7E82A35B917B467B3ACE4E33D23ABD4C072FB6C;
// System.Collections.Generic.KeyValuePair`2<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>[]
struct KeyValuePair_2U5BU5D_t045F78BAEAECC5D68764C842C8DA671063AD4CC5;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Mesh,Microsoft.MixedReality.Toolkit.Utilities.MeshSmoother/MeshReference>[]
struct KeyValuePair_2U5BU5D_t7EC66A680110BB5FEF22C0D17B7196ACA92D5ADB;
// System.Collections.Generic.KeyValuePair`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>[]
struct KeyValuePair_2U5BU5D_t28B10C39811E11D9136B8F82AEB7778B8C29F91A;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>[]
struct KeyValuePair_2U5BU5D_tAA9F5F64825A8F555D7AC0D5E623D613DC7E1B04;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.UI.PinchSlider,Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane>[]
struct KeyValuePair_2U5BU5D_t6637BAFA74D0582A498D55552AA0704B432E6865;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.RenderMode,UnityEngine.Material>[]
struct KeyValuePair_2U5BU5D_t2039382B4D4D86C577366B2874B2490D8801538C;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>[]
struct KeyValuePair_2U5BU5D_tAF1220ED6DC665E866AD2FC07F81024964C7B30A;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Renderer,Microsoft.MixedReality.Toolkit.Rendering.MaterialInstance>[]
struct KeyValuePair_2U5BU5D_t7AC2F2833423BAD5A207704AF821EAF56CCD5181;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.RenderMode,UnityEngine.Material>>[]
struct KeyValuePair_2U5BU5D_t507FCC5DC41592562738F595457373D0F12C9E34;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Int32>>[]
struct KeyValuePair_2U5BU5D_t087FA9282A67EBE1802BB1F4BCC6A94037C7096E;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding>>[]
struct KeyValuePair_2U5BU5D_t36A0CB5B04BC9551C2D37A5A5C5DABFE363ABC22;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>[]
struct KeyValuePair_2U5BU5D_t5DF32CA0E479535BE20BD18AB4CD01A474FB0318;
// System.Collections.Generic.KeyValuePair`2<System.String,System.WeakReference`1<WinRT.DllModule>>[]
struct KeyValuePair_2U5BU5D_tEA49BD5FB32846A1CD940941B6A82A6B07EBC49E;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Globalization.CultureInfo>[]
struct KeyValuePair_2U5BU5D_tDDF13360AA0523ADAC69EA7664500A65B4AB375B;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>[]
struct KeyValuePair_2U5BU5D_t517018738344E63178B722A76BD5B6CE0E21C6B8;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>[]
struct KeyValuePair_2U5BU5D_tF7436DC92C15D09AFBF8DF63FD9AEB59984F17DF;
// System.Collections.Generic.KeyValuePair`2<System.String,Microsoft.MixedReality.Toolkit.Utilities.GameObjectManagement.GameObjectCreator>[]
struct KeyValuePair_2U5BU5D_tB44ADC2AD7A096D29310FEFDFE5B3784BDB128E1;
// System.Collections.Generic.KeyValuePair`2<System.String,Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController>[]
struct KeyValuePair_2U5BU5D_t0D0C862572ED7653CE89F4075E77C3D419418007;
// System.Collections.Generic.KeyValuePair`2<System.String,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.InputAction>[]
struct KeyValuePair_2U5BU5D_tF4273D4E92F78D5BE25E73D973B23C9C577EBB14;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_tA68F714495CC387B9B61D053469DAAFAF1FF4322;
// System.Collections.Generic.KeyValuePair`2<System.String,System.LocalDataStoreSlot>[]
struct KeyValuePair_2U5BU5D_t4D7197CFE3FFD8123B3EA01951DDCB2C40FB1A36;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Resources.ResourceLocator>[]
struct KeyValuePair_2U5BU5D_tB833778B42E8520536164756DB31335CA1E6DC99;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Resources.ResourceSet>[]
struct KeyValuePair_2U5BU5D_t681646D45A7A1A0AC0FCEB61A4B4C85F55E2127A;
// System.Collections.Generic.KeyValuePair`2<System.String,Mono.Globalization.Unicode.SimpleCollator>[]
struct KeyValuePair_2U5BU5D_t2B4C5BB36EB7509C6A3BC25974B9900C961B81FF;
// System.Collections.Generic.KeyValuePair`2<System.String,Windows.Perception.Spatial.SpatialAnchor>[]
struct KeyValuePair_2U5BU5D_t25EB38757E2C014777E15FDA6CAC32DAD3A9C851;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Sprite>[]
struct KeyValuePair_2U5BU5D_tCBB1E5AD161B87907E9D4D5FCAEF1AAFD157020F;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Texture2D>[]
struct KeyValuePair_2U5BU5D_t1C0B3335EF7463FE3FC25D78AC6C568814F05FCC;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Type>[]
struct KeyValuePair_2U5BU5D_tBDABFF051CA8BF0A3BCCBC91D67DB67A6D6D9464;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7A9E570BB87A21F48E7E9D5CBD48A70FCC37CC1F;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Events.UnityEvent>[]
struct KeyValuePair_2U5BU5D_t4C2D518F2C3C49DCCB1460A4E6931FBFD16FDBFA;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UriParser>[]
struct KeyValuePair_2U5BU5D_t274949AA38180C35953C76176780FDDB0D71A85D;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>[]
struct KeyValuePair_2U5BU5D_tC22E1B72386C22EB5D51D2212CB0ADF519ACB940;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>[]
struct KeyValuePair_2U5BU5D_t0BF9C68957D3B815727D7CB98E914FC7A8BA2F1B;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>[]
struct KeyValuePair_2U5BU5D_tAA28C1C8416EDCFE54DE8ED50CA549DFD8D33CCD;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>[]
struct KeyValuePair_2U5BU5D_t41A668276F3ABED533DF2181C859F49634A2E450;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionType>[]
struct KeyValuePair_2U5BU5D_t43EB7095087A5C299A060B089C072DEECF982CCD;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.UI.ThemeStateProperty,Microsoft.MixedReality.Toolkit.UI.ThemePropertyValue>[]
struct KeyValuePair_2U5BU5D_tC45E7E9B4D93C236FD2C2189AC3A2FBC2460DDEC;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>[]
struct KeyValuePair_2U5BU5D_tFCC6E358A881E6CB9EFBEB213AC9428C6391F803;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>[]
struct KeyValuePair_2U5BU5D_tF8A3D4E8CD91D4551E5735309E452E812838B6A0;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>[]
struct KeyValuePair_2U5BU5D_tAF0560847A34113358EA866E7B4981A1118E865D;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct KeyValuePair_2U5BU5D_t436AC9DAB184EFD2D75D99A27071CF1B97DFB50A;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Single>[]
struct KeyValuePair_2U5BU5D_tB7E308A2EF99E9CCF71792307D851FF4353031DF;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform>[]
struct KeyValuePair_2U5BU5D_t3BBE11F2BD38748DA3FCB176B390AC28515F1F2D;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>[]
struct KeyValuePair_2U5BU5D_tF106747F16B6DD312645C2D18599E05E3A194085;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.IMixedRealityService,Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar>>>[]
struct KeyValuePair_2U5BU5D_tFD55381BBABC0C0168B784C09F22E2E36B3AD76D;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Type>>[]
struct KeyValuePair_2U5BU5D_t01E71626981F310B4DE2D4A9649F69CD5BD43165;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>[]
struct KeyValuePair_2U5BU5D_t89735119D8BEEFEBBE98656F8A62002FF7054F61;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.WeakReference`1<Microsoft.MixedReality.Toolkit.IMixedRealityService>>[]
struct KeyValuePair_2U5BU5D_t198B1850C6F44D2945B435B01A549B6BA82CA0E8;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.AttributeUsageAttribute>[]
struct KeyValuePair_2U5BU5D_tBF185F2DFFF281FB8BD06AE42E4B0E1CF6A6FFD6;
// System.Collections.Generic.KeyValuePair`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>[]
struct KeyValuePair_2U5BU5D_tBAE1C2C5776C8CF5DB533784E474A60A87171B2B;
// System.Collections.Generic.KeyValuePair`2<System.Type,UnityEngine.ISubsystem>[]
struct KeyValuePair_2U5BU5D_t37E9A4D455BE59B03E47E86AFBD51517711B1123;
// System.Collections.Generic.KeyValuePair`2<System.Type,Microsoft.MixedReality.Toolkit.Utilities.Facades.ServiceFacade>[]
struct KeyValuePair_2U5BU5D_t920478456E6F776AF38D729C5E7CDB22F2FF0310;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>[]
struct KeyValuePair_2U5BU5D_tC9000E0F5D015D7AC8431817AD48A83193DF999A;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.MonoCustomAttrs/AttributeInfo>[]
struct KeyValuePair_2U5BU5D_t22AE782829AED70ED3B03B15CD82B0476B4BBD4C;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>[]
struct KeyValuePair_2U5BU5D_tF1D9AB8AB0AA9DE242470646B413F26C5095B466;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.TextCore.Glyph>[]
struct KeyValuePair_2U5BU5D_t2234AB2F467D5B5743D1CD2F39CF6EF4F77B459D;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>[]
struct KeyValuePair_2U5BU5D_tF7CB8B8E71FC917703565D46AAB505FD25274303;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerMediator>[]
struct KeyValuePair_2U5BU5D_tFE8899C48BD5E34EA460A08EDA7F039A3E97AB13;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t94115C473E3C9319D17B3A7F840EB37647911A5E;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,TMPro.TMP_Character>[]
struct KeyValuePair_2U5BU5D_t6E42ECBCAB838D44D8D114367E3BF6A41D0BC53F;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,TMPro.TMP_GlyphPairAdjustmentRecord>[]
struct KeyValuePair_2U5BU5D_t0B6A6755E33E9EDEFE95A80D3ED9115E1F98BE57;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,TMPro.TMP_SpriteCharacter>[]
struct KeyValuePair_2U5BU5D_t584D4E5406CCB5770619A3E1FD6C9E04C285370A;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,TMPro.TMP_SpriteGlyph>[]
struct KeyValuePair_2U5BU5D_tF7F6A22EDB055A4F67D4F53EB653060CD2E4052D;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,UnityEngine.Vector3>[]
struct KeyValuePair_2U5BU5D_t0A220D2ABCE1DFF2838FB6ACD24807F83F6F35D4;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData>[]
struct KeyValuePair_2U5BU5D_tD19AE40D29D8004B28D0C4969A68ED745DC62C9B;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom/HandPanData>[]
struct KeyValuePair_2U5BU5D_t0D351D67F0D2A75F654F266D95221623CE0D9F69;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,Microsoft.MixedReality.Toolkit.UI.ManipulationHandler/PointerData>[]
struct KeyValuePair_2U5BU5D_t6E9889E40F2C32B694E4DF54438088BF8D41F1D0;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,UnityEngine.GameObject>[]
struct KeyValuePair_2U5BU5D_t6CFE49F75EBAB475EE48101B2CDA31B05B41037C;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.String>[]
struct KeyValuePair_2U5BU5D_t15E32F03AD18365D96750D0B5FA976E2B4B9D3F6;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector3>>>[]
struct KeyValuePair_2U5BU5D_t17FB900845710954709F43348663CD2E8E418640;
// System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose>[]
struct KeyValuePair_2U5BU5D_tF5735DA09BEAA2B9E62074925D59F9C77A7850AF;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>[]
struct KeyValuePair_2U5BU5D_tB072B466461D8BCA266E6481D37BDD78FA8D4CC3;
// System.Collections.Generic.KeyValuePair`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>[]
struct KeyValuePair_2U5BU5D_tA1CC60C2A8578B44096E62ACBE1293DCF1506102;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// Windows.Perception.Spatial.SpatialAnchor
struct SpatialAnchor_t2BA429CD43B439A85C74EDF056B0D39973DF71E1;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct ISpatialAnchor_tCFEBFF71958B01F5F1513B576905D8B1F95A2A55;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Boolean>
struct NOVTABLE IKeyValuePair_2_t04A9E1FDA761BB38505D5D4DE053C9E7C7E313EE : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m50A1F94CB4E740FB5885019E6728EAE5C1D508D2(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m0A77CFCA5DD2A31DB112E29FEB20300B493DE98D(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Char>
struct NOVTABLE IKeyValuePair_2_tF41461EE4923BD10C0AAB7279C508FB800B405A7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m442A81AD9966A66E28AC0706E2A59E0B65491814(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m42282FC1709DB540C465F0BFEDE058CB7270F123(Il2CppChar* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int32>
struct NOVTABLE IKeyValuePair_2_t4C1069D28D4329332E473B891CA9976F45BC62AF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mBE3F439B4EECBFB5DE1B1A4CAFA35792919B992D(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mB918D157087406EF2EF862B63CB97B37F9AD69C6(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int64>
struct NOVTABLE IKeyValuePair_2_t9960147AD76B4914DE92B795541831D11BA9C04A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mD48E9BD7315408D4FA4A1AAA460D7DC03F52B24D(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m478C062D877B6FECD7B7D83CCBCECCD5F4A830F8(int64_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.String>
struct NOVTABLE IKeyValuePair_2_t5B46C8C7B715ABBB6486959A4E14012AE997F85E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mB5355D55FBB3FC7FEE2EB2BCBA9B681818683C44(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m0945F06186882DCB23474CF5F8F01893B6F9F459(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Int32>
struct NOVTABLE IKeyValuePair_2_t4CF782598AE973FA3BBCC0424B73C8A9ED005438 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2A32DB8C39F47F43CB48DEDDC56E9C8300157CA7(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3A6A850D8FBBC6600EA7267723057A6048C6E587(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Object>
struct NOVTABLE IKeyValuePair_2_tDE2517DAB62DE15BCFE4D61044BAA34510A3C848 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mBA4EC2E87E487F1E5EEAAA360E0A45FBAAD506B7(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mBE1A71A5467E5F6B26FA03FBC7C941C1CF3AE6FF(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,Windows.Perception.Spatial.SpatialAnchor>
struct NOVTABLE IKeyValuePair_2_t6CFB972C4FC75BDED5143ACFFBADA6FA55D8ECA2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m06450AAE1A7EDAD2B3FDC9FC70B6A49441E99FCA(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3F2DC560D5FC7913856F25FFD5AA973A8A3CAB90(ISpatialAnchor_tCFEBFF71958B01F5F1513B576905D8B1F95A2A55** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.String>
struct NOVTABLE IKeyValuePair_2_tEDBDD3E04BC3B923E7F6B0B31642B07BEEA21F14 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m0CF7F99AE719D65BBD579BEBDC21328A8A48EAD8(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mC704C838F021ADFD875BC09AA47821233BE19F66(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.UInt32>
struct NOVTABLE IKeyValuePair_2_t798A73D20AB090AD56D81ACDCF39615287229B96 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mE9BAD8C954B39CB4B5A34EFB9125A7E4A8D43FA5(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m9DBF5E9D5C4E6627D99EA625E32B4C760AFBCA0C(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Boolean>
struct NOVTABLE IKeyValuePair_2_t10E217EC75F5AA6467591B2F915545F1B3AF3DC3 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m53706DB04E25F9EA97B17A77487D7B0B27DDEA30(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mAFCEB82342294C7AF605E02479588644A34454C4(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Int32>
struct NOVTABLE IKeyValuePair_2_t6A93234ED39771E30C7A27AECCFBF97B98C6FF73 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m78C6B50E88EBFFB04C86E93E95A2674C41138678(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3716B3BA7EC3D4C1ADBFF9ACA363E6B914DDD2DD(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.UInt64,System.String>
struct NOVTABLE IKeyValuePair_2_t51D5D6E12BDDBD6858CFB48930E150F90EED31E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m670AA2931DD9FAFE336E0490A72DA3808815BD44(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mD5984382A59F8F3FF63AFE0B6E598CFAB4362494(Il2CppHString* comReturnValue) = 0;
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
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>
struct LRUCache_2_t000B565F6A5B9666CF57BB89CF23A01B9C412B63  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2/CacheEntry<TKey,TValue>> Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2::keyToEntryTable
	Dictionary_2_t208A629F09A8F96CBC24F6200395B0DB28DABF8E * ___keyToEntryTable_0;
	// Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2/CacheEntry<TKey,TValue> Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2::leastRecentEntry
	CacheEntry_tE1A674DF9072A82F38578B2ECC7785F622242F24 * ___leastRecentEntry_1;
	// Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2/CacheEntry<TKey,TValue> Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2::mostRecentEntry
	CacheEntry_tE1A674DF9072A82F38578B2ECC7785F622242F24 * ___mostRecentEntry_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2::<Capacity>k__BackingField
	int32_t ___U3CCapacityU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2::<System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly>k__BackingField
	bool ___U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_keyToEntryTable_0() { return static_cast<int32_t>(offsetof(LRUCache_2_t000B565F6A5B9666CF57BB89CF23A01B9C412B63, ___keyToEntryTable_0)); }
	inline Dictionary_2_t208A629F09A8F96CBC24F6200395B0DB28DABF8E * get_keyToEntryTable_0() const { return ___keyToEntryTable_0; }
	inline Dictionary_2_t208A629F09A8F96CBC24F6200395B0DB28DABF8E ** get_address_of_keyToEntryTable_0() { return &___keyToEntryTable_0; }
	inline void set_keyToEntryTable_0(Dictionary_2_t208A629F09A8F96CBC24F6200395B0DB28DABF8E * value)
	{
		___keyToEntryTable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyToEntryTable_0), (void*)value);
	}

	inline static int32_t get_offset_of_leastRecentEntry_1() { return static_cast<int32_t>(offsetof(LRUCache_2_t000B565F6A5B9666CF57BB89CF23A01B9C412B63, ___leastRecentEntry_1)); }
	inline CacheEntry_tE1A674DF9072A82F38578B2ECC7785F622242F24 * get_leastRecentEntry_1() const { return ___leastRecentEntry_1; }
	inline CacheEntry_tE1A674DF9072A82F38578B2ECC7785F622242F24 ** get_address_of_leastRecentEntry_1() { return &___leastRecentEntry_1; }
	inline void set_leastRecentEntry_1(CacheEntry_tE1A674DF9072A82F38578B2ECC7785F622242F24 * value)
	{
		___leastRecentEntry_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leastRecentEntry_1), (void*)value);
	}

	inline static int32_t get_offset_of_mostRecentEntry_2() { return static_cast<int32_t>(offsetof(LRUCache_2_t000B565F6A5B9666CF57BB89CF23A01B9C412B63, ___mostRecentEntry_2)); }
	inline CacheEntry_tE1A674DF9072A82F38578B2ECC7785F622242F24 * get_mostRecentEntry_2() const { return ___mostRecentEntry_2; }
	inline CacheEntry_tE1A674DF9072A82F38578B2ECC7785F622242F24 ** get_address_of_mostRecentEntry_2() { return &___mostRecentEntry_2; }
	inline void set_mostRecentEntry_2(CacheEntry_tE1A674DF9072A82F38578B2ECC7785F622242F24 * value)
	{
		___mostRecentEntry_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mostRecentEntry_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCapacityU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LRUCache_2_t000B565F6A5B9666CF57BB89CF23A01B9C412B63, ___U3CCapacityU3Ek__BackingField_3)); }
	inline int32_t get_U3CCapacityU3Ek__BackingField_3() const { return ___U3CCapacityU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CCapacityU3Ek__BackingField_3() { return &___U3CCapacityU3Ek__BackingField_3; }
	inline void set_U3CCapacityU3Ek__BackingField_3(int32_t value)
	{
		___U3CCapacityU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LRUCache_2_t000B565F6A5B9666CF57BB89CF23A01B9C412B63, ___U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4)); }
	inline bool get_U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4() const { return ___U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4() { return &___U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4; }
	inline void set_U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4(bool value)
	{
		___U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4 = value;
	}
};


// System.Collections.Generic.LinkedList`1<System.Action`1<System.Boolean>>
struct LinkedList_1_tF75A3C6809F95D0D158E53D43E1CA8E162FDC919  : public RuntimeObject
{
public:
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_tA9E76E2DD79830DCAB99E3C728D4A803DD0EADF9 * ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject * ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_4;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(LinkedList_1_tF75A3C6809F95D0D158E53D43E1CA8E162FDC919, ___head_0)); }
	inline LinkedListNode_1_tA9E76E2DD79830DCAB99E3C728D4A803DD0EADF9 * get_head_0() const { return ___head_0; }
	inline LinkedListNode_1_tA9E76E2DD79830DCAB99E3C728D4A803DD0EADF9 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(LinkedListNode_1_tA9E76E2DD79830DCAB99E3C728D4A803DD0EADF9 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(LinkedList_1_tF75A3C6809F95D0D158E53D43E1CA8E162FDC919, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(LinkedList_1_tF75A3C6809F95D0D158E53D43E1CA8E162FDC919, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(LinkedList_1_tF75A3C6809F95D0D158E53D43E1CA8E162FDC919, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}

	inline static int32_t get_offset_of__siInfo_4() { return static_cast<int32_t>(offsetof(LinkedList_1_tF75A3C6809F95D0D158E53D43E1CA8E162FDC919, ____siInfo_4)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_4() const { return ____siInfo_4; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_4() { return &____siInfo_4; }
	inline void set__siInfo_4(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_4), (void*)value);
	}
};


// System.Collections.Generic.LinkedList`1<System.Action`1<UnityEngine.Object>>
struct LinkedList_1_t32E0165C0996F5A11300494207CDFCFBBD56A1FD  : public RuntimeObject
{
public:
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::head
	LinkedListNode_1_t1EE431E7910117B41B9AFB2E3D2C2F1DEECF03AF * ___head_0;
	// System.Int32 System.Collections.Generic.LinkedList`1::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Generic.LinkedList`1::version
	int32_t ___version_2;
	// System.Object System.Collections.Generic.LinkedList`1::_syncRoot
	RuntimeObject * ____syncRoot_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_4;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(LinkedList_1_t32E0165C0996F5A11300494207CDFCFBBD56A1FD, ___head_0)); }
	inline LinkedListNode_1_t1EE431E7910117B41B9AFB2E3D2C2F1DEECF03AF * get_head_0() const { return ___head_0; }
	inline LinkedListNode_1_t1EE431E7910117B41B9AFB2E3D2C2F1DEECF03AF ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(LinkedListNode_1_t1EE431E7910117B41B9AFB2E3D2C2F1DEECF03AF * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(LinkedList_1_t32E0165C0996F5A11300494207CDFCFBBD56A1FD, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(LinkedList_1_t32E0165C0996F5A11300494207CDFCFBBD56A1FD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(LinkedList_1_t32E0165C0996F5A11300494207CDFCFBBD56A1FD, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}

	inline static int32_t get_offset_of__siInfo_4() { return static_cast<int32_t>(offsetof(LinkedList_1_t32E0165C0996F5A11300494207CDFCFBBD56A1FD, ____siInfo_4)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_4() const { return ____siInfo_4; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_4() { return &____siInfo_4; }
	inline void set__siInfo_4(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_4), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>
struct KeyValuePairEnumerator_tC15305C0260289E87DEC77E6FEF95F2D6B46114D 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t872604A297DE4E772CC965D859CE6AEB3CC704D1* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC15305C0260289E87DEC77E6FEF95F2D6B46114D, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t872604A297DE4E772CC965D859CE6AEB3CC704D1* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t872604A297DE4E772CC965D859CE6AEB3CC704D1** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t872604A297DE4E772CC965D859CE6AEB3CC704D1* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC15305C0260289E87DEC77E6FEF95F2D6B46114D, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC15305C0260289E87DEC77E6FEF95F2D6B46114D, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC15305C0260289E87DEC77E6FEF95F2D6B46114D, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality,Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings>
struct KeyValuePairEnumerator_tF7942B455533DC63ED1AA03577C307E805A5627D 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t1CABB5E6B03C807FA23EFA2156EF9375F90C74BB* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF7942B455533DC63ED1AA03577C307E805A5627D, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t1CABB5E6B03C807FA23EFA2156EF9375F90C74BB* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t1CABB5E6B03C807FA23EFA2156EF9375F90C74BB** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t1CABB5E6B03C807FA23EFA2156EF9375F90C74BB* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF7942B455533DC63ED1AA03577C307E805A5627D, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF7942B455533DC63ED1AA03577C307E805A5627D, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF7942B455533DC63ED1AA03577C307E805A5627D, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct KeyValuePairEnumerator_tDC089A230DE08037C711C7E665E7B41D1DF82114 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t0A92B953AB9F7D154C564CCAD00E879F2538D4FB* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tDC089A230DE08037C711C7E665E7B41D1DF82114, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t0A92B953AB9F7D154C564CCAD00E879F2538D4FB* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t0A92B953AB9F7D154C564CCAD00E879F2538D4FB** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t0A92B953AB9F7D154C564CCAD00E879F2538D4FB* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tDC089A230DE08037C711C7E665E7B41D1DF82114, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tDC089A230DE08037C711C7E665E7B41D1DF82114, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tDC089A230DE08037C711C7E665E7B41D1DF82114, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct KeyValuePairEnumerator_t150A36DABF061EC39AED47DA28DBAEBFF16915EB 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t256E15D38E772A81962813F57D6EF9B13AD8610C* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t150A36DABF061EC39AED47DA28DBAEBFF16915EB, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t256E15D38E772A81962813F57D6EF9B13AD8610C* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t256E15D38E772A81962813F57D6EF9B13AD8610C** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t256E15D38E772A81962813F57D6EF9B13AD8610C* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t150A36DABF061EC39AED47DA28DBAEBFF16915EB, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t150A36DABF061EC39AED47DA28DBAEBFF16915EB, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t150A36DABF061EC39AED47DA28DBAEBFF16915EB, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct KeyValuePairEnumerator_tC4A37D101BE32AD9F8C566EA1CF131F45042A5D0 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t5E7BBB367D6A549709DFA43D60CF92CEB678A11E* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC4A37D101BE32AD9F8C566EA1CF131F45042A5D0, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t5E7BBB367D6A549709DFA43D60CF92CEB678A11E* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t5E7BBB367D6A549709DFA43D60CF92CEB678A11E** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t5E7BBB367D6A549709DFA43D60CF92CEB678A11E* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC4A37D101BE32AD9F8C566EA1CF131F45042A5D0, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC4A37D101BE32AD9F8C566EA1CF131F45042A5D0, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC4A37D101BE32AD9F8C566EA1CF131F45042A5D0, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.GameObject,System.Int32>
struct KeyValuePairEnumerator_t54512B6F3689BC8D43BB2190A2B0604394A2EDC2 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t59796AFB2A514BB75B21B18E27AF9ADC7259F809* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t54512B6F3689BC8D43BB2190A2B0604394A2EDC2, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t59796AFB2A514BB75B21B18E27AF9ADC7259F809* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t59796AFB2A514BB75B21B18E27AF9ADC7259F809** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t59796AFB2A514BB75B21B18E27AF9ADC7259F809* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t54512B6F3689BC8D43BB2190A2B0604394A2EDC2, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t54512B6F3689BC8D43BB2190A2B0604394A2EDC2, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t54512B6F3689BC8D43BB2190A2B0604394A2EDC2, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.UI.Graphic,System.Int32>
struct KeyValuePairEnumerator_tC60EA3785FA7244E119D29B1E9C5436D5CA37432 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tEC97CC5809905EB5C8F04F5F7C04A92F39740197* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC60EA3785FA7244E119D29B1E9C5436D5CA37432, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tEC97CC5809905EB5C8F04F5F7C04A92F39740197* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tEC97CC5809905EB5C8F04F5F7C04A92F39740197** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tEC97CC5809905EB5C8F04F5F7C04A92F39740197* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC60EA3785FA7244E119D29B1E9C5436D5CA37432, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC60EA3785FA7244E119D29B1E9C5436D5CA37432, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC60EA3785FA7244E119D29B1E9C5436D5CA37432, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct KeyValuePairEnumerator_t8484EC33D10E58FDC93B759557C2861A7FF9DDBC 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tCFEBE9FE9FD13FFD3E4D0AD6AD4041A187BBE149* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t8484EC33D10E58FDC93B759557C2861A7FF9DDBC, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tCFEBE9FE9FD13FFD3E4D0AD6AD4041A187BBE149* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tCFEBE9FE9FD13FFD3E4D0AD6AD4041A187BBE149** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tCFEBE9FE9FD13FFD3E4D0AD6AD4041A187BBE149* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t8484EC33D10E58FDC93B759557C2861A7FF9DDBC, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t8484EC33D10E58FDC93B759557C2861A7FF9DDBC, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t8484EC33D10E58FDC93B759557C2861A7FF9DDBC, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Guid,System.Int32>
struct KeyValuePairEnumerator_tA91F5B2DCA8E54F5F117D6790D1D0B142A206B3D 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tA97D178F25732408D4AC6B5F926A9EDED5F8E000* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA91F5B2DCA8E54F5F117D6790D1D0B142A206B3D, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tA97D178F25732408D4AC6B5F926A9EDED5F8E000* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tA97D178F25732408D4AC6B5F926A9EDED5F8E000** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tA97D178F25732408D4AC6B5F926A9EDED5F8E000* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA91F5B2DCA8E54F5F117D6790D1D0B142A206B3D, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA91F5B2DCA8E54F5F117D6790D1D0B142A206B3D, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA91F5B2DCA8E54F5F117D6790D1D0B142A206B3D, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>
struct KeyValuePairEnumerator_t4AFCE0CC36BBC2562D1C1FC0A78108B82510BF9E 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tE95174DC75A7946DA93121F09D8541F535AAB77E* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4AFCE0CC36BBC2562D1C1FC0A78108B82510BF9E, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tE95174DC75A7946DA93121F09D8541F535AAB77E* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tE95174DC75A7946DA93121F09D8541F535AAB77E** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tE95174DC75A7946DA93121F09D8541F535AAB77E* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4AFCE0CC36BBC2562D1C1FC0A78108B82510BF9E, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4AFCE0CC36BBC2562D1C1FC0A78108B82510BF9E, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4AFCE0CC36BBC2562D1C1FC0A78108B82510BF9E, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Matrix4x4>
struct KeyValuePairEnumerator_t88C9A822348C0ABF12894BF0E3A4E9FBBE97D8E2 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t81E1473601C1A9A09A4A894C847FE88CE2E6CC09* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t88C9A822348C0ABF12894BF0E3A4E9FBBE97D8E2, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t81E1473601C1A9A09A4A894C847FE88CE2E6CC09* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t81E1473601C1A9A09A4A894C847FE88CE2E6CC09** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t81E1473601C1A9A09A4A894C847FE88CE2E6CC09* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t88C9A822348C0ABF12894BF0E3A4E9FBBE97D8E2, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t88C9A822348C0ABF12894BF0E3A4E9FBBE97D8E2, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t88C9A822348C0ABF12894BF0E3A4E9FBBE97D8E2, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Threading.IAsyncLocal,System.Object>
struct KeyValuePairEnumerator_t8D17E031CF5DB983C16CE57EB89FAB19219B23A6 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t147065F7F9E7B00A87140ABA43FA2F3FAA4589C8* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t8D17E031CF5DB983C16CE57EB89FAB19219B23A6, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t147065F7F9E7B00A87140ABA43FA2F3FAA4589C8* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t147065F7F9E7B00A87140ABA43FA2F3FAA4589C8** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t147065F7F9E7B00A87140ABA43FA2F3FAA4589C8* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t8D17E031CF5DB983C16CE57EB89FAB19219B23A6, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t8D17E031CF5DB983C16CE57EB89FAB19219B23A6, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t8D17E031CF5DB983C16CE57EB89FAB19219B23A6, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>
struct KeyValuePairEnumerator_t71B3CAA7CCDE9C715627D14EEB9A776F83162CE5 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t0581955D004736ED8BF3EF33452BB24A9946E5D4* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t71B3CAA7CCDE9C715627D14EEB9A776F83162CE5, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t0581955D004736ED8BF3EF33452BB24A9946E5D4* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t0581955D004736ED8BF3EF33452BB24A9946E5D4** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t0581955D004736ED8BF3EF33452BB24A9946E5D4* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t71B3CAA7CCDE9C715627D14EEB9A776F83162CE5, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t71B3CAA7CCDE9C715627D14EEB9A776F83162CE5, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t71B3CAA7CCDE9C715627D14EEB9A776F83162CE5, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.UI.IClipper,System.Int32>
struct KeyValuePairEnumerator_tF090915A0B34081BD3D950483CD89CCFAAFE2072 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t58D6B030DE84A705043CDA563D81A99DD63AE98B* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF090915A0B34081BD3D950483CD89CCFAAFE2072, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t58D6B030DE84A705043CDA563D81A99DD63AE98B* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t58D6B030DE84A705043CDA563D81A99DD63AE98B** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t58D6B030DE84A705043CDA563D81A99DD63AE98B* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF090915A0B34081BD3D950483CD89CCFAAFE2072, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF090915A0B34081BD3D950483CD89CCFAAFE2072, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF090915A0B34081BD3D950483CD89CCFAAFE2072, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3>
struct KeyValuePairEnumerator_t07D7DF56C9A03B1C87EE1AFEFB6EEB51336CECFF 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tE9E5EA3CF9F0054DA635C07A8DB9F325705F157A* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t07D7DF56C9A03B1C87EE1AFEFB6EEB51336CECFF, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tE9E5EA3CF9F0054DA635C07A8DB9F325705F157A* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tE9E5EA3CF9F0054DA635C07A8DB9F325705F157A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tE9E5EA3CF9F0054DA635C07A8DB9F325705F157A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t07D7DF56C9A03B1C87EE1AFEFB6EEB51336CECFF, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t07D7DF56C9A03B1C87EE1AFEFB6EEB51336CECFF, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t07D7DF56C9A03B1C87EE1AFEFB6EEB51336CECFF, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>>
struct KeyValuePairEnumerator_tF47C64E845FF843F00E798E14B427AE28EE4BD55 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tC4D3145F53481122DBEF91DE66187268D967E40C* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF47C64E845FF843F00E798E14B427AE28EE4BD55, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tC4D3145F53481122DBEF91DE66187268D967E40C* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tC4D3145F53481122DBEF91DE66187268D967E40C** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tC4D3145F53481122DBEF91DE66187268D967E40C* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF47C64E845FF843F00E798E14B427AE28EE4BD55, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF47C64E845FF843F00E798E14B427AE28EE4BD55, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF47C64E845FF843F00E798E14B427AE28EE4BD55, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct KeyValuePairEnumerator_tBA45BCF6E15D1D73B8D372DB4AAEBD2DAAB67B87 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t75E33B7DE9F0187F5F1967FECE21DDA12B8ABE48* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBA45BCF6E15D1D73B8D372DB4AAEBD2DAAB67B87, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t75E33B7DE9F0187F5F1967FECE21DDA12B8ABE48* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t75E33B7DE9F0187F5F1967FECE21DDA12B8ABE48** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t75E33B7DE9F0187F5F1967FECE21DDA12B8ABE48* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBA45BCF6E15D1D73B8D372DB4AAEBD2DAAB67B87, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBA45BCF6E15D1D73B8D372DB4AAEBD2DAAB67B87, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBA45BCF6E15D1D73B8D372DB4AAEBD2DAAB67B87, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.DefaultPrimaryPointerSelector/PointerInfo>
struct KeyValuePairEnumerator_t356F768E7A21B72EE52C8A7F4DE45766CCC79D44 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tC17EFCF0AC13E6BE8A79B23CA243C186B36B8DC9* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t356F768E7A21B72EE52C8A7F4DE45766CCC79D44, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tC17EFCF0AC13E6BE8A79B23CA243C186B36B8DC9* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tC17EFCF0AC13E6BE8A79B23CA243C186B36B8DC9** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tC17EFCF0AC13E6BE8A79B23CA243C186B36B8DC9* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t356F768E7A21B72EE52C8A7F4DE45766CCC79D44, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t356F768E7A21B72EE52C8A7F4DE45766CCC79D44, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t356F768E7A21B72EE52C8A7F4DE45766CCC79D44, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityService>>
struct KeyValuePairEnumerator_t076FA0D885639D39CFADA060C6ECE49FC2E376CD 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t14B28C31D88E06313D9A3140F60BDB0EB2511A3A* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t076FA0D885639D39CFADA060C6ECE49FC2E376CD, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t14B28C31D88E06313D9A3140F60BDB0EB2511A3A* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t14B28C31D88E06313D9A3140F60BDB0EB2511A3A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t14B28C31D88E06313D9A3140F60BDB0EB2511A3A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t076FA0D885639D39CFADA060C6ECE49FC2E376CD, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t076FA0D885639D39CFADA060C6ECE49FC2E376CD, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t076FA0D885639D39CFADA060C6ECE49FC2E376CD, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.UI.BoundsControl.IProximityEffectObjectProvider,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.BoundsControl.ProximityEffect/ObjectProximityInfo>>
struct KeyValuePairEnumerator_tA717E2566EDDF1F64696AEE525D665458EA90FD6 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t7D7F2841EEA203C1274BE4C62B9357C95A2E8100* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA717E2566EDDF1F64696AEE525D665458EA90FD6, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t7D7F2841EEA203C1274BE4C62B9357C95A2E8100* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t7D7F2841EEA203C1274BE4C62B9357C95A2E8100** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t7D7F2841EEA203C1274BE4C62B9357C95A2E8100* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA717E2566EDDF1F64696AEE525D665458EA90FD6, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA717E2566EDDF1F64696AEE525D665458EA90FD6, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA717E2566EDDF1F64696AEE525D665458EA90FD6, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.InputAction,UnityEngine.InputSystem.UI.InputSystemUIInputModule/InputActionReferenceState>
struct KeyValuePairEnumerator_t70DC9A3C2BFDB1926D2F6455E0F5B22B826E212A 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t73765302ECAB9AA1AB6A63F6B3E68EB12DFBAEBD* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t70DC9A3C2BFDB1926D2F6455E0F5B22B826E212A, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t73765302ECAB9AA1AB6A63F6B3E68EB12DFBAEBD* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t73765302ECAB9AA1AB6A63F6B3E68EB12DFBAEBD** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t73765302ECAB9AA1AB6A63F6B3E68EB12DFBAEBD* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t70DC9A3C2BFDB1926D2F6455E0F5B22B826E212A, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t70DC9A3C2BFDB1926D2F6455E0F5B22B826E212A, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t70DC9A3C2BFDB1926D2F6455E0F5B22B826E212A, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.InputControl,System.Single>
struct KeyValuePairEnumerator_t4627304985249D84C68C9789006F9BE79DD562D5 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tAC7898A878E463B4BEBE2F0635E295F43BBDF3CC* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4627304985249D84C68C9789006F9BE79DD562D5, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tAC7898A878E463B4BEBE2F0635E295F43BBDF3CC* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tAC7898A878E463B4BEBE2F0635E295F43BBDF3CC** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tAC7898A878E463B4BEBE2F0635E295F43BBDF3CC* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4627304985249D84C68C9789006F9BE79DD562D5, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4627304985249D84C68C9789006F9BE79DD562D5, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4627304985249D84C68C9789006F9BE79DD562D5, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct KeyValuePairEnumerator_tDDCF4C0AEFA4F0F1A64442A2A3119BC813F847C4 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tF6C291A50B1E1CB80D5B27EB399087C7373FD968* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tDDCF4C0AEFA4F0F1A64442A2A3119BC813F847C4, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tF6C291A50B1E1CB80D5B27EB399087C7373FD968* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tF6C291A50B1E1CB80D5B27EB399087C7373FD968** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tF6C291A50B1E1CB80D5B27EB399087C7373FD968* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tDDCF4C0AEFA4F0F1A64442A2A3119BC813F847C4, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tDDCF4C0AEFA4F0F1A64442A2A3119BC813F847C4, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tDDCF4C0AEFA4F0F1A64442A2A3119BC813F847C4, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2/CacheEntry<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>>
struct KeyValuePairEnumerator_t541D7233336DDF9260139579A5AA9C7F9DB7101D 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tE398D60DD1FFFFBAD5210870EB6036E1FCA8FF05* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t541D7233336DDF9260139579A5AA9C7F9DB7101D, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tE398D60DD1FFFFBAD5210870EB6036E1FCA8FF05* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tE398D60DD1FFFFBAD5210870EB6036E1FCA8FF05** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tE398D60DD1FFFFBAD5210870EB6036E1FCA8FF05* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t541D7233336DDF9260139579A5AA9C7F9DB7101D, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t541D7233336DDF9260139579A5AA9C7F9DB7101D, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t541D7233336DDF9260139579A5AA9C7F9DB7101D, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Tuple`2<Microsoft.MixedReality.SceneUnderstanding.SceneQuad,Microsoft.MixedReality.SceneUnderstanding.SceneObject>>
struct KeyValuePairEnumerator_t61480DC7D21940A6CD21427699CD393E9A7B0A14 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t8B432354DB73C84BA878746AE9A12B980EA8D098* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t61480DC7D21940A6CD21427699CD393E9A7B0A14, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t8B432354DB73C84BA878746AE9A12B980EA8D098* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t8B432354DB73C84BA878746AE9A12B980EA8D098** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t8B432354DB73C84BA878746AE9A12B980EA8D098* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t61480DC7D21940A6CD21427699CD393E9A7B0A14, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t61480DC7D21940A6CD21427699CD393E9A7B0A14, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t61480DC7D21940A6CD21427699CD393E9A7B0A14, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Boolean>
struct KeyValuePairEnumerator_t06543FFB5EF0565924E1AB89CA0EB292BC43341C 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t0CE22F880802B0F487E3F09AA6E7383AE9CBE7E7* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t06543FFB5EF0565924E1AB89CA0EB292BC43341C, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t0CE22F880802B0F487E3F09AA6E7383AE9CBE7E7* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t0CE22F880802B0F487E3F09AA6E7383AE9CBE7E7** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t0CE22F880802B0F487E3F09AA6E7383AE9CBE7E7* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t06543FFB5EF0565924E1AB89CA0EB292BC43341C, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t06543FFB5EF0565924E1AB89CA0EB292BC43341C, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t06543FFB5EF0565924E1AB89CA0EB292BC43341C, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Char>
struct KeyValuePairEnumerator_t2403ECCC7C85631BB8CF8F91182095B670ED7AA6 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tE26FC64F14618965D1E8143FA99A78FE3A8478F0* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t2403ECCC7C85631BB8CF8F91182095B670ED7AA6, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tE26FC64F14618965D1E8143FA99A78FE3A8478F0* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tE26FC64F14618965D1E8143FA99A78FE3A8478F0** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tE26FC64F14618965D1E8143FA99A78FE3A8478F0* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t2403ECCC7C85631BB8CF8F91182095B670ED7AA6, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t2403ECCC7C85631BB8CF8F91182095B670ED7AA6, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t2403ECCC7C85631BB8CF8F91182095B670ED7AA6, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Globalization.CultureInfo>
struct KeyValuePairEnumerator_tD99DDC84CAD72F850864AAC52DBB16AF1E67D3F8 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t72FDE86F24D5B90AF8112B5EC9C423F614C4FFFA* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD99DDC84CAD72F850864AAC52DBB16AF1E67D3F8, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t72FDE86F24D5B90AF8112B5EC9C423F614C4FFFA* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t72FDE86F24D5B90AF8112B5EC9C423F614C4FFFA** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t72FDE86F24D5B90AF8112B5EC9C423F614C4FFFA* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD99DDC84CAD72F850864AAC52DBB16AF1E67D3F8, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD99DDC84CAD72F850864AAC52DBB16AF1E67D3F8, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD99DDC84CAD72F850864AAC52DBB16AF1E67D3F8, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,UnityEngine.GameObject>
struct KeyValuePairEnumerator_tFFB8DE1691C5207DCAF6B06C29942D345E380B0A 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tE972B24958E4935B4203B00878BAA651F70E6282* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tFFB8DE1691C5207DCAF6B06C29942D345E380B0A, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tE972B24958E4935B4203B00878BAA651F70E6282* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tE972B24958E4935B4203B00878BAA651F70E6282** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tE972B24958E4935B4203B00878BAA651F70E6282* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tFFB8DE1691C5207DCAF6B06C29942D345E380B0A, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tFFB8DE1691C5207DCAF6B06C29942D345E380B0A, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tFFB8DE1691C5207DCAF6B06C29942D345E380B0A, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Guid>
struct KeyValuePairEnumerator_tB6CEBF85BA99B6C78CE33BD3ACB41F5B9A674D37 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t6570DC20FE32950C80D179C37D883143C9463959* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB6CEBF85BA99B6C78CE33BD3ACB41F5B9A674D37, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t6570DC20FE32950C80D179C37D883143C9463959* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t6570DC20FE32950C80D179C37D883143C9463959** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t6570DC20FE32950C80D179C37D883143C9463959* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB6CEBF85BA99B6C78CE33BD3ACB41F5B9A674D37, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB6CEBF85BA99B6C78CE33BD3ACB41F5B9A674D37, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB6CEBF85BA99B6C78CE33BD3ACB41F5B9A674D37, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,UnityEngine.InputSystem.InputDevice>
struct KeyValuePairEnumerator_tB34574071945BD379E728FB36BCF5982CCCB46F4 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t182CB50EE5149ABBF62B0FD0997F759394E8F6B0* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB34574071945BD379E728FB36BCF5982CCCB46F4, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t182CB50EE5149ABBF62B0FD0997F759394E8F6B0* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t182CB50EE5149ABBF62B0FD0997F759394E8F6B0** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t182CB50EE5149ABBF62B0FD0997F759394E8F6B0* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB34574071945BD379E728FB36BCF5982CCCB46F4, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB34574071945BD379E728FB36BCF5982CCCB46F4, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB34574071945BD379E728FB36BCF5982CCCB46F4, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Int32>
struct KeyValuePairEnumerator_tBFF2DD706D4883DDDCEC24C460CB4DFE91A48950 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBFF2DD706D4883DDDCEC24C460CB4DFE91A48950, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBFF2DD706D4883DDDCEC24C460CB4DFE91A48950, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBFF2DD706D4883DDDCEC24C460CB4DFE91A48950, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBFF2DD706D4883DDDCEC24C460CB4DFE91A48950, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Int64>
struct KeyValuePairEnumerator_tE03145922CAF33F6D04E9E5FF0AFD6026576EC62 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t2C4165C9DA1797DB8A5C9C8262F2CE9550B0619A* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE03145922CAF33F6D04E9E5FF0AFD6026576EC62, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t2C4165C9DA1797DB8A5C9C8262F2CE9550B0619A* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t2C4165C9DA1797DB8A5C9C8262F2CE9550B0619A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t2C4165C9DA1797DB8A5C9C8262F2CE9550B0619A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE03145922CAF33F6D04E9E5FF0AFD6026576EC62, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE03145922CAF33F6D04E9E5FF0AFD6026576EC62, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE03145922CAF33F6D04E9E5FF0AFD6026576EC62, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,UnityEngine.Material>
struct KeyValuePairEnumerator_t451BDF682FE8EBF8A9D59487A91DA3340A0D8284 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tD363F2E8CD4364B647B44FEF3FD5659CA8805E33* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t451BDF682FE8EBF8A9D59487A91DA3340A0D8284, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tD363F2E8CD4364B647B44FEF3FD5659CA8805E33* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tD363F2E8CD4364B647B44FEF3FD5659CA8805E33** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tD363F2E8CD4364B647B44FEF3FD5659CA8805E33* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t451BDF682FE8EBF8A9D59487A91DA3340A0D8284, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t451BDF682FE8EBF8A9D59487A91DA3340A0D8284, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t451BDF682FE8EBF8A9D59487A91DA3340A0D8284, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct KeyValuePairEnumerator_tDADE03C82CDE840B72AEFFF28820EE39CFEB5665 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t3A8CDD9086D391C01BDAA0F8B0FF00AA98F40CCB* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tDADE03C82CDE840B72AEFFF28820EE39CFEB5665, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t3A8CDD9086D391C01BDAA0F8B0FF00AA98F40CCB* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t3A8CDD9086D391C01BDAA0F8B0FF00AA98F40CCB** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t3A8CDD9086D391C01BDAA0F8B0FF00AA98F40CCB* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tDADE03C82CDE840B72AEFFF28820EE39CFEB5665, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tDADE03C82CDE840B72AEFFF28820EE39CFEB5665, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tDADE03C82CDE840B72AEFFF28820EE39CFEB5665, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct KeyValuePairEnumerator_tFBE87FA78F1BCC1BC6FCB66855E53017F520AA42 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tA6F3B044BA7B13910CFF819C07AD85852B8C581C* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tFBE87FA78F1BCC1BC6FCB66855E53017F520AA42, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tA6F3B044BA7B13910CFF819C07AD85852B8C581C* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tA6F3B044BA7B13910CFF819C07AD85852B8C581C** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tA6F3B044BA7B13910CFF819C07AD85852B8C581C* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tFBE87FA78F1BCC1BC6FCB66855E53017F520AA42, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tFBE87FA78F1BCC1BC6FCB66855E53017F520AA42, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tFBE87FA78F1BCC1BC6FCB66855E53017F520AA42, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject>
struct KeyValuePairEnumerator_t86917E80439824BD7F8CB8685595D35DE03318F1 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tE7AC3CB2E5ABFB794C4FEBBB191A88E7C66C2266* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t86917E80439824BD7F8CB8685595D35DE03318F1, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tE7AC3CB2E5ABFB794C4FEBBB191A88E7C66C2266* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tE7AC3CB2E5ABFB794C4FEBBB191A88E7C66C2266** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tE7AC3CB2E5ABFB794C4FEBBB191A88E7C66C2266* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t86917E80439824BD7F8CB8685595D35DE03318F1, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t86917E80439824BD7F8CB8685595D35DE03318F1, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t86917E80439824BD7F8CB8685595D35DE03318F1, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.String>
struct KeyValuePairEnumerator_t797E2D524E3BBDB7D9868E4417A714C327425F70 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tC8994E617660C5319F93B16924250F799D9EAFE9* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t797E2D524E3BBDB7D9868E4417A714C327425F70, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tC8994E617660C5319F93B16924250F799D9EAFE9* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tC8994E617660C5319F93B16924250F799D9EAFE9** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tC8994E617660C5319F93B16924250F799D9EAFE9* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t797E2D524E3BBDB7D9868E4417A714C327425F70, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t797E2D524E3BBDB7D9868E4417A714C327425F70, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t797E2D524E3BBDB7D9868E4417A714C327425F70, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,TMPro.TMP_ColorGradient>
struct KeyValuePairEnumerator_t459C98D31C0E5B6DF12D2A38AFF4D7056F792737 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tAAC3E0452EA9B53C085C875B2DC226BB804CC3CD* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t459C98D31C0E5B6DF12D2A38AFF4D7056F792737, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tAAC3E0452EA9B53C085C875B2DC226BB804CC3CD* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tAAC3E0452EA9B53C085C875B2DC226BB804CC3CD** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tAAC3E0452EA9B53C085C875B2DC226BB804CC3CD* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t459C98D31C0E5B6DF12D2A38AFF4D7056F792737, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t459C98D31C0E5B6DF12D2A38AFF4D7056F792737, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t459C98D31C0E5B6DF12D2A38AFF4D7056F792737, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,TMPro.TMP_FontAsset>
struct KeyValuePairEnumerator_tBA97F1C066F794E2F86A5D5A4342502A7C330C60 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t0861AE22D08AD6DA7687B06F6AA7BB30FB86EA85* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBA97F1C066F794E2F86A5D5A4342502A7C330C60, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t0861AE22D08AD6DA7687B06F6AA7BB30FB86EA85* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t0861AE22D08AD6DA7687B06F6AA7BB30FB86EA85** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t0861AE22D08AD6DA7687B06F6AA7BB30FB86EA85* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBA97F1C066F794E2F86A5D5A4342502A7C330C60, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBA97F1C066F794E2F86A5D5A4342502A7C330C60, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBA97F1C066F794E2F86A5D5A4342502A7C330C60, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,TMPro.TMP_SpriteAsset>
struct KeyValuePairEnumerator_t3806D1D869D579D581AC01892357BB96EEA91D5F 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tAB5AD7E29B895A375AA8445FAAF0F2F68F358D2C* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3806D1D869D579D581AC01892357BB96EEA91D5F, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tAB5AD7E29B895A375AA8445FAAF0F2F68F358D2C* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tAB5AD7E29B895A375AA8445FAAF0F2F68F358D2C** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tAB5AD7E29B895A375AA8445FAAF0F2F68F358D2C* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3806D1D869D579D581AC01892357BB96EEA91D5F, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3806D1D869D579D581AC01892357BB96EEA91D5F, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3806D1D869D579D581AC01892357BB96EEA91D5F, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,TMPro.TMP_Style>
struct KeyValuePairEnumerator_t3AAE43E0CA6D2F3F03D27CE426D900727B3FAC33 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tD69EFAA34972A98DFDF8E6903B20724908C8E363* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3AAE43E0CA6D2F3F03D27CE426D900727B3FAC33, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tD69EFAA34972A98DFDF8E6903B20724908C8E363* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tD69EFAA34972A98DFDF8E6903B20724908C8E363** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tD69EFAA34972A98DFDF8E6903B20724908C8E363* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3AAE43E0CA6D2F3F03D27CE426D900727B3FAC33, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3AAE43E0CA6D2F3F03D27CE426D900727B3FAC33, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3AAE43E0CA6D2F3F03D27CE426D900727B3FAC33, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Threading.Tasks.Task>
struct KeyValuePairEnumerator_t21957ACE204A9EA28B0CCADE617659F7305EB3EE 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t827BC33C22F6ECB895E98D03D4DA71133E6BE10A* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t21957ACE204A9EA28B0CCADE617659F7305EB3EE, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t827BC33C22F6ECB895E98D03D4DA71133E6BE10A* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t827BC33C22F6ECB895E98D03D4DA71133E6BE10A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t827BC33C22F6ECB895E98D03D4DA71133E6BE10A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t21957ACE204A9EA28B0CCADE617659F7305EB3EE, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t21957ACE204A9EA28B0CCADE617659F7305EB3EE, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t21957ACE204A9EA28B0CCADE617659F7305EB3EE, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.TimeType>
struct KeyValuePairEnumerator_tD72B8F6634657F501EAD66BFC5E755AC27024690 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t300155870AB7952A7F0C791DB20CBAB0D8C8D9F8* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD72B8F6634657F501EAD66BFC5E755AC27024690, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t300155870AB7952A7F0C791DB20CBAB0D8C8D9F8* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t300155870AB7952A7F0C791DB20CBAB0D8C8D9F8** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t300155870AB7952A7F0C791DB20CBAB0D8C8D9F8* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD72B8F6634657F501EAD66BFC5E755AC27024690, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD72B8F6634657F501EAD66BFC5E755AC27024690, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD72B8F6634657F501EAD66BFC5E755AC27024690, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>
struct KeyValuePairEnumerator_tCA8B692EA96CC320662EE1F670DC641716C077B4 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tC5D74CF5192118F7DF710FBCA766756B53256E3E* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tCA8B692EA96CC320662EE1F670DC641716C077B4, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tC5D74CF5192118F7DF710FBCA766756B53256E3E* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tC5D74CF5192118F7DF710FBCA766756B53256E3E** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tC5D74CF5192118F7DF710FBCA766756B53256E3E* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tCA8B692EA96CC320662EE1F670DC641716C077B4, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tCA8B692EA96CC320662EE1F670DC641716C077B4, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tCA8B692EA96CC320662EE1F670DC641716C077B4, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct KeyValuePairEnumerator_tB2D30E8C4BF04CC711ECBC5176D998B2AA47D8A9 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tFBC4F44ACCBE5EF3DCA7F8A45AA27DA433218B50* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB2D30E8C4BF04CC711ECBC5176D998B2AA47D8A9, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tFBC4F44ACCBE5EF3DCA7F8A45AA27DA433218B50* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tFBC4F44ACCBE5EF3DCA7F8A45AA27DA433218B50** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tFBC4F44ACCBE5EF3DCA7F8A45AA27DA433218B50* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB2D30E8C4BF04CC711ECBC5176D998B2AA47D8A9, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB2D30E8C4BF04CC711ECBC5176D998B2AA47D8A9, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB2D30E8C4BF04CC711ECBC5176D998B2AA47D8A9, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyValuePairEnumerator_t2F593DF71AB4F3AB6AEB2CF1C774AF14D8144B2F 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tCA519E1B14E66BC41521DCB56371CE6676A45DD3* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t2F593DF71AB4F3AB6AEB2CF1C774AF14D8144B2F, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tCA519E1B14E66BC41521DCB56371CE6676A45DD3* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tCA519E1B14E66BC41521DCB56371CE6676A45DD3** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tCA519E1B14E66BC41521DCB56371CE6676A45DD3* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t2F593DF71AB4F3AB6AEB2CF1C774AF14D8144B2F, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t2F593DF71AB4F3AB6AEB2CF1C774AF14D8144B2F, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t2F593DF71AB4F3AB6AEB2CF1C774AF14D8144B2F, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct KeyValuePairEnumerator_tCF781AC81063035A2F94C27431B4522AE6B24E6C 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t71FC5847270E0A5B9C0F79F1CA79A603B169C0E4* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tCF781AC81063035A2F94C27431B4522AE6B24E6C, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t71FC5847270E0A5B9C0F79F1CA79A603B169C0E4* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t71FC5847270E0A5B9C0F79F1CA79A603B169C0E4** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t71FC5847270E0A5B9C0F79F1CA79A603B169C0E4* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tCF781AC81063035A2F94C27431B4522AE6B24E6C, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tCF781AC81063035A2F94C27431B4522AE6B24E6C, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tCF781AC81063035A2F94C27431B4522AE6B24E6C, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int64,TMPro.TMP_MaterialManager/FallbackMaterial>
struct KeyValuePairEnumerator_tAA8182F2A92C1A1497A4CF711BF1C8C52EBB0C20 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t7DC0E5773FF3312AEB17D810E055BB860B14ECF5* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tAA8182F2A92C1A1497A4CF711BF1C8C52EBB0C20, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t7DC0E5773FF3312AEB17D810E055BB860B14ECF5* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t7DC0E5773FF3312AEB17D810E055BB860B14ECF5** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t7DC0E5773FF3312AEB17D810E055BB860B14ECF5* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tAA8182F2A92C1A1497A4CF711BF1C8C52EBB0C20, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tAA8182F2A92C1A1497A4CF711BF1C8C52EBB0C20, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tAA8182F2A92C1A1497A4CF711BF1C8C52EBB0C20, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct KeyValuePairEnumerator_tD954C44629C85B04E5A5F4B8AA6E724811EBF8FE 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tFE37FB407F1E4BD6BF564BF830091BC8208754B9* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD954C44629C85B04E5A5F4B8AA6E724811EBF8FE, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tFE37FB407F1E4BD6BF564BF830091BC8208754B9* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tFE37FB407F1E4BD6BF564BF830091BC8208754B9** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tFE37FB407F1E4BD6BF564BF830091BC8208754B9* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD954C44629C85B04E5A5F4B8AA6E724811EBF8FE, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD954C44629C85B04E5A5F4B8AA6E724811EBF8FE, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD954C44629C85B04E5A5F4B8AA6E724811EBF8FE, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct KeyValuePairEnumerator_t225A07D73281E9FD054B4C539F77606CBE948F26 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t80850930EE6948E3E401E1D9B2302D9300420D25* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t225A07D73281E9FD054B4C539F77606CBE948F26, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t80850930EE6948E3E401E1D9B2302D9300420D25* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t80850930EE6948E3E401E1D9B2302D9300420D25** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t80850930EE6948E3E401E1D9B2302D9300420D25* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t225A07D73281E9FD054B4C539F77606CBE948F26, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t225A07D73281E9FD054B4C539F77606CBE948F26, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t225A07D73281E9FD054B4C539F77606CBE948F26, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct KeyValuePairEnumerator_t4BFCA1D836BB74F35DB06177401D01EC36567A80 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t9C604432257FDC9B4957B9C2597BD9F066B4B541* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4BFCA1D836BB74F35DB06177401D01EC36567A80, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t9C604432257FDC9B4957B9C2597BD9F066B4B541* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t9C604432257FDC9B4957B9C2597BD9F066B4B541** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t9C604432257FDC9B4957B9C2597BD9F066B4B541* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4BFCA1D836BB74F35DB06177401D01EC36567A80, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4BFCA1D836BB74F35DB06177401D01EC36567A80, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4BFCA1D836BB74F35DB06177401D01EC36567A80, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct KeyValuePairEnumerator_t0DD206B5E227CD388E59CB4104CE89BBA855797E 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t92691A462C62FD0669A3982AE001A631A7CB5F9E* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0DD206B5E227CD388E59CB4104CE89BBA855797E, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t92691A462C62FD0669A3982AE001A631A7CB5F9E* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t92691A462C62FD0669A3982AE001A631A7CB5F9E** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t92691A462C62FD0669A3982AE001A631A7CB5F9E* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0DD206B5E227CD388E59CB4104CE89BBA855797E, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0DD206B5E227CD388E59CB4104CE89BBA855797E, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0DD206B5E227CD388E59CB4104CE89BBA855797E, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct KeyValuePairEnumerator_t0FAA8C866D22D0EB217E1C98033EB515258426A1 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t38C455DEA72AEB13B965A37919C8949075F03060* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0FAA8C866D22D0EB217E1C98033EB515258426A1, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t38C455DEA72AEB13B965A37919C8949075F03060* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t38C455DEA72AEB13B965A37919C8949075F03060** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t38C455DEA72AEB13B965A37919C8949075F03060* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0FAA8C866D22D0EB217E1C98033EB515258426A1, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0FAA8C866D22D0EB217E1C98033EB515258426A1, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0FAA8C866D22D0EB217E1C98033EB515258426A1, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct KeyValuePairEnumerator_tF71A3EC39D1CEE18D36989672BA83A7FBFEAD82E 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t5C5FD3ADE1949E05DEF3DCDE6A5CC55ED2035074* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF71A3EC39D1CEE18D36989672BA83A7FBFEAD82E, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t5C5FD3ADE1949E05DEF3DCDE6A5CC55ED2035074* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t5C5FD3ADE1949E05DEF3DCDE6A5CC55ED2035074** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t5C5FD3ADE1949E05DEF3DCDE6A5CC55ED2035074* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF71A3EC39D1CEE18D36989672BA83A7FBFEAD82E, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF71A3EC39D1CEE18D36989672BA83A7FBFEAD82E, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF71A3EC39D1CEE18D36989672BA83A7FBFEAD82E, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout>
struct KeyValuePairEnumerator_t24340D454C38975E3C3DB4AB952B3F297329D81C 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t728F0A9B9BA5B29DAE767BED39156096DC29712B* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t24340D454C38975E3C3DB4AB952B3F297329D81C, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t728F0A9B9BA5B29DAE767BED39156096DC29712B* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t728F0A9B9BA5B29DAE767BED39156096DC29712B** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t728F0A9B9BA5B29DAE767BED39156096DC29712B* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t24340D454C38975E3C3DB4AB952B3F297329D81C, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t24340D454C38975E3C3DB4AB952B3F297329D81C, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t24340D454C38975E3C3DB4AB952B3F297329D81C, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.KeyCode,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.InputAction>
struct KeyValuePairEnumerator_t10E4819890AC4CDD029AEB26EFE6A14778D878CF 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tD7E82A35B917B467B3ACE4E33D23ABD4C072FB6C* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t10E4819890AC4CDD029AEB26EFE6A14778D878CF, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tD7E82A35B917B467B3ACE4E33D23ABD4C072FB6C* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tD7E82A35B917B467B3ACE4E33D23ABD4C072FB6C** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tD7E82A35B917B467B3ACE4E33D23ABD4C072FB6C* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t10E4819890AC4CDD029AEB26EFE6A14778D878CF, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t10E4819890AC4CDD029AEB26EFE6A14778D878CF, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t10E4819890AC4CDD029AEB26EFE6A14778D878CF, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct KeyValuePairEnumerator_t90E32A8D3EE2584017F61BE8C1A58C870B46D1A3 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t045F78BAEAECC5D68764C842C8DA671063AD4CC5* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t90E32A8D3EE2584017F61BE8C1A58C870B46D1A3, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t045F78BAEAECC5D68764C842C8DA671063AD4CC5* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t045F78BAEAECC5D68764C842C8DA671063AD4CC5** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t045F78BAEAECC5D68764C842C8DA671063AD4CC5* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t90E32A8D3EE2584017F61BE8C1A58C870B46D1A3, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t90E32A8D3EE2584017F61BE8C1A58C870B46D1A3, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t90E32A8D3EE2584017F61BE8C1A58C870B46D1A3, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Mesh,Microsoft.MixedReality.Toolkit.Utilities.MeshSmoother/MeshReference>
struct KeyValuePairEnumerator_t51386F5E69F8CB58D70F1E4FAA82BECBAECB3E00 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t7EC66A680110BB5FEF22C0D17B7196ACA92D5ADB* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t51386F5E69F8CB58D70F1E4FAA82BECBAECB3E00, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t7EC66A680110BB5FEF22C0D17B7196ACA92D5ADB* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t7EC66A680110BB5FEF22C0D17B7196ACA92D5ADB** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t7EC66A680110BB5FEF22C0D17B7196ACA92D5ADB* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t51386F5E69F8CB58D70F1E4FAA82BECBAECB3E00, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t51386F5E69F8CB58D70F1E4FAA82BECBAECB3E00, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t51386F5E69F8CB58D70F1E4FAA82BECBAECB3E00, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>
struct KeyValuePairEnumerator_t275E15FF8526D1016AC3A65138EE99F751B627BB 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t28B10C39811E11D9136B8F82AEB7778B8C29F91A* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t275E15FF8526D1016AC3A65138EE99F751B627BB, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t28B10C39811E11D9136B8F82AEB7778B8C29F91A* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t28B10C39811E11D9136B8F82AEB7778B8C29F91A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t28B10C39811E11D9136B8F82AEB7778B8C29F91A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t275E15FF8526D1016AC3A65138EE99F751B627BB, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t275E15FF8526D1016AC3A65138EE99F751B627BB, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t275E15FF8526D1016AC3A65138EE99F751B627BB, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct KeyValuePairEnumerator_t0B9049F2BFB6456E6C4B76DFA344A08EE31430A7 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tAA9F5F64825A8F555D7AC0D5E623D613DC7E1B04* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0B9049F2BFB6456E6C4B76DFA344A08EE31430A7, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tAA9F5F64825A8F555D7AC0D5E623D613DC7E1B04* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tAA9F5F64825A8F555D7AC0D5E623D613DC7E1B04** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tAA9F5F64825A8F555D7AC0D5E623D613DC7E1B04* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0B9049F2BFB6456E6C4B76DFA344A08EE31430A7, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0B9049F2BFB6456E6C4B76DFA344A08EE31430A7, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0B9049F2BFB6456E6C4B76DFA344A08EE31430A7, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.UI.PinchSlider,Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane>
struct KeyValuePairEnumerator_t44B0856AA2F8BB999F384D7E239B2A3EB70A609F 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t6637BAFA74D0582A498D55552AA0704B432E6865* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t44B0856AA2F8BB999F384D7E239B2A3EB70A609F, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t6637BAFA74D0582A498D55552AA0704B432E6865* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t6637BAFA74D0582A498D55552AA0704B432E6865** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t6637BAFA74D0582A498D55552AA0704B432E6865* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t44B0856AA2F8BB999F384D7E239B2A3EB70A609F, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t44B0856AA2F8BB999F384D7E239B2A3EB70A609F, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t44B0856AA2F8BB999F384D7E239B2A3EB70A609F, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.RenderMode,UnityEngine.Material>
struct KeyValuePairEnumerator_tD779DAAEA74BC14DD33BEA9E63780FE4E8329FC7 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t2039382B4D4D86C577366B2874B2490D8801538C* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD779DAAEA74BC14DD33BEA9E63780FE4E8329FC7, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t2039382B4D4D86C577366B2874B2490D8801538C* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t2039382B4D4D86C577366B2874B2490D8801538C** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t2039382B4D4D86C577366B2874B2490D8801538C* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD779DAAEA74BC14DD33BEA9E63780FE4E8329FC7, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD779DAAEA74BC14DD33BEA9E63780FE4E8329FC7, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD779DAAEA74BC14DD33BEA9E63780FE4E8329FC7, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>
struct KeyValuePairEnumerator_tE062AFB758967ABB165458094FEBBC3C3F7180F5 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tAF1220ED6DC665E866AD2FC07F81024964C7B30A* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE062AFB758967ABB165458094FEBBC3C3F7180F5, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tAF1220ED6DC665E866AD2FC07F81024964C7B30A* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tAF1220ED6DC665E866AD2FC07F81024964C7B30A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tAF1220ED6DC665E866AD2FC07F81024964C7B30A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE062AFB758967ABB165458094FEBBC3C3F7180F5, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE062AFB758967ABB165458094FEBBC3C3F7180F5, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE062AFB758967ABB165458094FEBBC3C3F7180F5, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Renderer,Microsoft.MixedReality.Toolkit.Rendering.MaterialInstance>
struct KeyValuePairEnumerator_t8F1961D8CE0F6D55312E1BF05BF1D3CE87492D5C 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t7AC2F2833423BAD5A207704AF821EAF56CCD5181* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t8F1961D8CE0F6D55312E1BF05BF1D3CE87492D5C, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t7AC2F2833423BAD5A207704AF821EAF56CCD5181* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t7AC2F2833423BAD5A207704AF821EAF56CCD5181** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t7AC2F2833423BAD5A207704AF821EAF56CCD5181* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t8F1961D8CE0F6D55312E1BF05BF1D3CE87492D5C, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t8F1961D8CE0F6D55312E1BF05BF1D3CE87492D5C, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t8F1961D8CE0F6D55312E1BF05BF1D3CE87492D5C, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.RenderMode,UnityEngine.Material>>
struct KeyValuePairEnumerator_t89637FBA2AB8D234D3BDF54553061249D5943304 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t507FCC5DC41592562738F595457373D0F12C9E34* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t89637FBA2AB8D234D3BDF54553061249D5943304, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t507FCC5DC41592562738F595457373D0F12C9E34* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t507FCC5DC41592562738F595457373D0F12C9E34** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t507FCC5DC41592562738F595457373D0F12C9E34* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t89637FBA2AB8D234D3BDF54553061249D5943304, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t89637FBA2AB8D234D3BDF54553061249D5943304, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t89637FBA2AB8D234D3BDF54553061249D5943304, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Collections.Generic.List`1<System.Int32>>
struct KeyValuePairEnumerator_t42E6061C35F9732F2B02D24F658E48824796245F 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t087FA9282A67EBE1802BB1F4BCC6A94037C7096E* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t42E6061C35F9732F2B02D24F658E48824796245F, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t087FA9282A67EBE1802BB1F4BCC6A94037C7096E* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t087FA9282A67EBE1802BB1F4BCC6A94037C7096E** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t087FA9282A67EBE1802BB1F4BCC6A94037C7096E* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t42E6061C35F9732F2B02D24F658E48824796245F, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t42E6061C35F9732F2B02D24F658E48824796245F, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t42E6061C35F9732F2B02D24F658E48824796245F, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Collections.Generic.List`1<UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding>>
struct KeyValuePairEnumerator_tA94E81BAD48E3FF15880581D73BDF32A50BA3CC1 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t36A0CB5B04BC9551C2D37A5A5C5DABFE363ABC22* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA94E81BAD48E3FF15880581D73BDF32A50BA3CC1, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t36A0CB5B04BC9551C2D37A5A5C5DABFE363ABC22* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t36A0CB5B04BC9551C2D37A5A5C5DABFE363ABC22** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t36A0CB5B04BC9551C2D37A5A5C5DABFE363ABC22* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA94E81BAD48E3FF15880581D73BDF32A50BA3CC1, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA94E81BAD48E3FF15880581D73BDF32A50BA3CC1, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA94E81BAD48E3FF15880581D73BDF32A50BA3CC1, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct KeyValuePairEnumerator_tE4149D151D04C681BF54F94D02A08DD25A7EAEF6 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t5DF32CA0E479535BE20BD18AB4CD01A474FB0318* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE4149D151D04C681BF54F94D02A08DD25A7EAEF6, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t5DF32CA0E479535BE20BD18AB4CD01A474FB0318* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t5DF32CA0E479535BE20BD18AB4CD01A474FB0318** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t5DF32CA0E479535BE20BD18AB4CD01A474FB0318* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE4149D151D04C681BF54F94D02A08DD25A7EAEF6, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE4149D151D04C681BF54F94D02A08DD25A7EAEF6, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE4149D151D04C681BF54F94D02A08DD25A7EAEF6, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.WeakReference`1<WinRT.DllModule>>
struct KeyValuePairEnumerator_t046F0B224D83F4D36EB24B3B4066464E04DCC4A7 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tEA49BD5FB32846A1CD940941B6A82A6B07EBC49E* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t046F0B224D83F4D36EB24B3B4066464E04DCC4A7, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tEA49BD5FB32846A1CD940941B6A82A6B07EBC49E* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tEA49BD5FB32846A1CD940941B6A82A6B07EBC49E** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tEA49BD5FB32846A1CD940941B6A82A6B07EBC49E* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t046F0B224D83F4D36EB24B3B4066464E04DCC4A7, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t046F0B224D83F4D36EB24B3B4066464E04DCC4A7, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t046F0B224D83F4D36EB24B3B4066464E04DCC4A7, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Globalization.CultureInfo>
struct KeyValuePairEnumerator_tF4635403BB4F94836FE13A2E37D1DBDA3E37E12D 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tDDF13360AA0523ADAC69EA7664500A65B4AB375B* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF4635403BB4F94836FE13A2E37D1DBDA3E37E12D, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tDDF13360AA0523ADAC69EA7664500A65B4AB375B* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tDDF13360AA0523ADAC69EA7664500A65B4AB375B** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tDDF13360AA0523ADAC69EA7664500A65B4AB375B* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF4635403BB4F94836FE13A2E37D1DBDA3E37E12D, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF4635403BB4F94836FE13A2E37D1DBDA3E37E12D, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF4635403BB4F94836FE13A2E37D1DBDA3E37E12D, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.GUIStyle>
struct KeyValuePairEnumerator_tCA85338FA686FC49A0D4EB7833197ABE4F90C080 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t517018738344E63178B722A76BD5B6CE0E21C6B8* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tCA85338FA686FC49A0D4EB7833197ABE4F90C080, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t517018738344E63178B722A76BD5B6CE0E21C6B8* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t517018738344E63178B722A76BD5B6CE0E21C6B8** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t517018738344E63178B722A76BD5B6CE0E21C6B8* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tCA85338FA686FC49A0D4EB7833197ABE4F90C080, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tCA85338FA686FC49A0D4EB7833197ABE4F90C080, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tCA85338FA686FC49A0D4EB7833197ABE4F90C080, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.GameObject>
struct KeyValuePairEnumerator_tAA2D36029596064DFEA098DA662FFB3E2C8E49BC 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tF7436DC92C15D09AFBF8DF63FD9AEB59984F17DF* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tAA2D36029596064DFEA098DA662FFB3E2C8E49BC, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tF7436DC92C15D09AFBF8DF63FD9AEB59984F17DF* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tF7436DC92C15D09AFBF8DF63FD9AEB59984F17DF** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tF7436DC92C15D09AFBF8DF63FD9AEB59984F17DF* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tAA2D36029596064DFEA098DA662FFB3E2C8E49BC, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tAA2D36029596064DFEA098DA662FFB3E2C8E49BC, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tAA2D36029596064DFEA098DA662FFB3E2C8E49BC, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,Microsoft.MixedReality.Toolkit.Utilities.GameObjectManagement.GameObjectCreator>
struct KeyValuePairEnumerator_tA92746FB1D58EDD1AFE94F96A1A8F0D6A09BD608 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tB44ADC2AD7A096D29310FEFDFE5B3784BDB128E1* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA92746FB1D58EDD1AFE94F96A1A8F0D6A09BD608, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tB44ADC2AD7A096D29310FEFDFE5B3784BDB128E1* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tB44ADC2AD7A096D29310FEFDFE5B3784BDB128E1** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tB44ADC2AD7A096D29310FEFDFE5B3784BDB128E1* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA92746FB1D58EDD1AFE94F96A1A8F0D6A09BD608, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA92746FB1D58EDD1AFE94F96A1A8F0D6A09BD608, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA92746FB1D58EDD1AFE94F96A1A8F0D6A09BD608, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController>
struct KeyValuePairEnumerator_t3073D573B3FE8FD28BCA42DE46AA7396CF61F1B2 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t0D0C862572ED7653CE89F4075E77C3D419418007* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3073D573B3FE8FD28BCA42DE46AA7396CF61F1B2, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t0D0C862572ED7653CE89F4075E77C3D419418007* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t0D0C862572ED7653CE89F4075E77C3D419418007** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t0D0C862572ED7653CE89F4075E77C3D419418007* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3073D573B3FE8FD28BCA42DE46AA7396CF61F1B2, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3073D573B3FE8FD28BCA42DE46AA7396CF61F1B2, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3073D573B3FE8FD28BCA42DE46AA7396CF61F1B2, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.InputAction>
struct KeyValuePairEnumerator_tB12F0D62548A92CF95ED23CCA7C1DD5F6DB8F418 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tF4273D4E92F78D5BE25E73D973B23C9C577EBB14* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB12F0D62548A92CF95ED23CCA7C1DD5F6DB8F418, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tF4273D4E92F78D5BE25E73D973B23C9C577EBB14* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tF4273D4E92F78D5BE25E73D973B23C9C577EBB14** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tF4273D4E92F78D5BE25E73D973B23C9C577EBB14* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB12F0D62548A92CF95ED23CCA7C1DD5F6DB8F418, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB12F0D62548A92CF95ED23CCA7C1DD5F6DB8F418, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB12F0D62548A92CF95ED23CCA7C1DD5F6DB8F418, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Int32>
struct KeyValuePairEnumerator_tBF6C8ABEA9E80CC4C384D74CA0086845FC0C0955 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tA68F714495CC387B9B61D053469DAAFAF1FF4322* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBF6C8ABEA9E80CC4C384D74CA0086845FC0C0955, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tA68F714495CC387B9B61D053469DAAFAF1FF4322* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tA68F714495CC387B9B61D053469DAAFAF1FF4322** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tA68F714495CC387B9B61D053469DAAFAF1FF4322* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBF6C8ABEA9E80CC4C384D74CA0086845FC0C0955, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBF6C8ABEA9E80CC4C384D74CA0086845FC0C0955, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBF6C8ABEA9E80CC4C384D74CA0086845FC0C0955, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.LocalDataStoreSlot>
struct KeyValuePairEnumerator_t325987A86C779622CCD101E8B94B7AD5B35A8F60 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t4D7197CFE3FFD8123B3EA01951DDCB2C40FB1A36* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t325987A86C779622CCD101E8B94B7AD5B35A8F60, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t4D7197CFE3FFD8123B3EA01951DDCB2C40FB1A36* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t4D7197CFE3FFD8123B3EA01951DDCB2C40FB1A36** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t4D7197CFE3FFD8123B3EA01951DDCB2C40FB1A36* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t325987A86C779622CCD101E8B94B7AD5B35A8F60, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t325987A86C779622CCD101E8B94B7AD5B35A8F60, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t325987A86C779622CCD101E8B94B7AD5B35A8F60, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Object>
struct KeyValuePairEnumerator_t071FD5A5B9A6D1D470057C6D583C15E4E270C34A 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t071FD5A5B9A6D1D470057C6D583C15E4E270C34A, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t071FD5A5B9A6D1D470057C6D583C15E4E270C34A, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t071FD5A5B9A6D1D470057C6D583C15E4E270C34A, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t071FD5A5B9A6D1D470057C6D583C15E4E270C34A, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Resources.ResourceLocator>
struct KeyValuePairEnumerator_t0F8189AD5BA238A344CD5881CEB74667A10B11ED 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tB833778B42E8520536164756DB31335CA1E6DC99* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0F8189AD5BA238A344CD5881CEB74667A10B11ED, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tB833778B42E8520536164756DB31335CA1E6DC99* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tB833778B42E8520536164756DB31335CA1E6DC99** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tB833778B42E8520536164756DB31335CA1E6DC99* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0F8189AD5BA238A344CD5881CEB74667A10B11ED, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0F8189AD5BA238A344CD5881CEB74667A10B11ED, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0F8189AD5BA238A344CD5881CEB74667A10B11ED, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Resources.ResourceSet>
struct KeyValuePairEnumerator_tA9E8EFE6BC3AA13BEB665B98F3FE3DD65C99B84F 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t681646D45A7A1A0AC0FCEB61A4B4C85F55E2127A* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA9E8EFE6BC3AA13BEB665B98F3FE3DD65C99B84F, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t681646D45A7A1A0AC0FCEB61A4B4C85F55E2127A* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t681646D45A7A1A0AC0FCEB61A4B4C85F55E2127A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t681646D45A7A1A0AC0FCEB61A4B4C85F55E2127A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA9E8EFE6BC3AA13BEB665B98F3FE3DD65C99B84F, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA9E8EFE6BC3AA13BEB665B98F3FE3DD65C99B84F, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA9E8EFE6BC3AA13BEB665B98F3FE3DD65C99B84F, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,Mono.Globalization.Unicode.SimpleCollator>
struct KeyValuePairEnumerator_t635DCEC837D7F53965DDCDCDF89F23D08CFB4BFC 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t2B4C5BB36EB7509C6A3BC25974B9900C961B81FF* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t635DCEC837D7F53965DDCDCDF89F23D08CFB4BFC, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t2B4C5BB36EB7509C6A3BC25974B9900C961B81FF* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t2B4C5BB36EB7509C6A3BC25974B9900C961B81FF** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t2B4C5BB36EB7509C6A3BC25974B9900C961B81FF* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t635DCEC837D7F53965DDCDCDF89F23D08CFB4BFC, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t635DCEC837D7F53965DDCDCDF89F23D08CFB4BFC, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t635DCEC837D7F53965DDCDCDF89F23D08CFB4BFC, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,Windows.Perception.Spatial.SpatialAnchor>
struct KeyValuePairEnumerator_t5F9A5FF65DD9A39E58D6C9C70BC3E2D05A2BEEDD 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t25EB38757E2C014777E15FDA6CAC32DAD3A9C851* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t5F9A5FF65DD9A39E58D6C9C70BC3E2D05A2BEEDD, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t25EB38757E2C014777E15FDA6CAC32DAD3A9C851* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t25EB38757E2C014777E15FDA6CAC32DAD3A9C851** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t25EB38757E2C014777E15FDA6CAC32DAD3A9C851* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t5F9A5FF65DD9A39E58D6C9C70BC3E2D05A2BEEDD, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t5F9A5FF65DD9A39E58D6C9C70BC3E2D05A2BEEDD, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t5F9A5FF65DD9A39E58D6C9C70BC3E2D05A2BEEDD, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.Sprite>
struct KeyValuePairEnumerator_t9A6A7377AA28B699E5D69CBAB542C5A8FE7388B2 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tCBB1E5AD161B87907E9D4D5FCAEF1AAFD157020F* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t9A6A7377AA28B699E5D69CBAB542C5A8FE7388B2, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tCBB1E5AD161B87907E9D4D5FCAEF1AAFD157020F* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tCBB1E5AD161B87907E9D4D5FCAEF1AAFD157020F** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tCBB1E5AD161B87907E9D4D5FCAEF1AAFD157020F* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t9A6A7377AA28B699E5D69CBAB542C5A8FE7388B2, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t9A6A7377AA28B699E5D69CBAB542C5A8FE7388B2, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t9A6A7377AA28B699E5D69CBAB542C5A8FE7388B2, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.String>
struct KeyValuePairEnumerator_t0A80CA52CB22DC07962B25009F08158C18780222 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0A80CA52CB22DC07962B25009F08158C18780222, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0A80CA52CB22DC07962B25009F08158C18780222, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0A80CA52CB22DC07962B25009F08158C18780222, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0A80CA52CB22DC07962B25009F08158C18780222, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.Texture2D>
struct KeyValuePairEnumerator_tF2D86CD25B3943058F55C660E352FB3F27C928AF 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t1C0B3335EF7463FE3FC25D78AC6C568814F05FCC* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF2D86CD25B3943058F55C660E352FB3F27C928AF, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t1C0B3335EF7463FE3FC25D78AC6C568814F05FCC* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t1C0B3335EF7463FE3FC25D78AC6C568814F05FCC** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t1C0B3335EF7463FE3FC25D78AC6C568814F05FCC* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF2D86CD25B3943058F55C660E352FB3F27C928AF, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF2D86CD25B3943058F55C660E352FB3F27C928AF, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF2D86CD25B3943058F55C660E352FB3F27C928AF, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Type>
struct KeyValuePairEnumerator_t1CBEA2E48AD428CE29A68EC265EC8F29C4B98B91 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tBDABFF051CA8BF0A3BCCBC91D67DB67A6D6D9464* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t1CBEA2E48AD428CE29A68EC265EC8F29C4B98B91, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tBDABFF051CA8BF0A3BCCBC91D67DB67A6D6D9464* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tBDABFF051CA8BF0A3BCCBC91D67DB67A6D6D9464** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tBDABFF051CA8BF0A3BCCBC91D67DB67A6D6D9464* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t1CBEA2E48AD428CE29A68EC265EC8F29C4B98B91, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t1CBEA2E48AD428CE29A68EC265EC8F29C4B98B91, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t1CBEA2E48AD428CE29A68EC265EC8F29C4B98B91, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.UInt32>
struct KeyValuePairEnumerator_t007A6069E983BD9543DF1A7428013F4BE89766AF 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t7A9E570BB87A21F48E7E9D5CBD48A70FCC37CC1F* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t007A6069E983BD9543DF1A7428013F4BE89766AF, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t7A9E570BB87A21F48E7E9D5CBD48A70FCC37CC1F* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t7A9E570BB87A21F48E7E9D5CBD48A70FCC37CC1F** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t7A9E570BB87A21F48E7E9D5CBD48A70FCC37CC1F* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t007A6069E983BD9543DF1A7428013F4BE89766AF, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t007A6069E983BD9543DF1A7428013F4BE89766AF, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t007A6069E983BD9543DF1A7428013F4BE89766AF, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.Events.UnityEvent>
struct KeyValuePairEnumerator_t4E56860CD799B4D7111C6374D5CE10C868293D42 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t4C2D518F2C3C49DCCB1460A4E6931FBFD16FDBFA* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4E56860CD799B4D7111C6374D5CE10C868293D42, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t4C2D518F2C3C49DCCB1460A4E6931FBFD16FDBFA* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t4C2D518F2C3C49DCCB1460A4E6931FBFD16FDBFA** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t4C2D518F2C3C49DCCB1460A4E6931FBFD16FDBFA* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4E56860CD799B4D7111C6374D5CE10C868293D42, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4E56860CD799B4D7111C6374D5CE10C868293D42, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4E56860CD799B4D7111C6374D5CE10C868293D42, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.UriParser>
struct KeyValuePairEnumerator_t7B58288FC0AB1B34DF40CDB41D0A1D2CEF9F2024 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t274949AA38180C35953C76176780FDDB0D71A85D* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t7B58288FC0AB1B34DF40CDB41D0A1D2CEF9F2024, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t274949AA38180C35953C76176780FDDB0D71A85D* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t274949AA38180C35953C76176780FDDB0D71A85D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t274949AA38180C35953C76176780FDDB0D71A85D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t7B58288FC0AB1B34DF40CDB41D0A1D2CEF9F2024, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t7B58288FC0AB1B34DF40CDB41D0A1D2CEF9F2024, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t7B58288FC0AB1B34DF40CDB41D0A1D2CEF9F2024, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct KeyValuePairEnumerator_tF5F850E1D9BA8B6A9DFD472937CF681059F78A26 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tC22E1B72386C22EB5D51D2212CB0ADF519ACB940* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF5F850E1D9BA8B6A9DFD472937CF681059F78A26, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tC22E1B72386C22EB5D51D2212CB0ADF519ACB940* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tC22E1B72386C22EB5D51D2212CB0ADF519ACB940** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tC22E1B72386C22EB5D51D2212CB0ADF519ACB940* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF5F850E1D9BA8B6A9DFD472937CF681059F78A26, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF5F850E1D9BA8B6A9DFD472937CF681059F78A26, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF5F850E1D9BA8B6A9DFD472937CF681059F78A26, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct KeyValuePairEnumerator_t118D2C9F98E6EAC3B58C7133A5B024E3DF0D2BC3 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t0BF9C68957D3B815727D7CB98E914FC7A8BA2F1B* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t118D2C9F98E6EAC3B58C7133A5B024E3DF0D2BC3, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t0BF9C68957D3B815727D7CB98E914FC7A8BA2F1B* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t0BF9C68957D3B815727D7CB98E914FC7A8BA2F1B** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t0BF9C68957D3B815727D7CB98E914FC7A8BA2F1B* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t118D2C9F98E6EAC3B58C7133A5B024E3DF0D2BC3, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t118D2C9F98E6EAC3B58C7133A5B024E3DF0D2BC3, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t118D2C9F98E6EAC3B58C7133A5B024E3DF0D2BC3, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>
struct KeyValuePairEnumerator_t3DB51236BE8856DD02F34E62268F00B5CB0B820B 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tAA28C1C8416EDCFE54DE8ED50CA549DFD8D33CCD* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3DB51236BE8856DD02F34E62268F00B5CB0B820B, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tAA28C1C8416EDCFE54DE8ED50CA549DFD8D33CCD* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tAA28C1C8416EDCFE54DE8ED50CA549DFD8D33CCD** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tAA28C1C8416EDCFE54DE8ED50CA549DFD8D33CCD* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3DB51236BE8856DD02F34E62268F00B5CB0B820B, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3DB51236BE8856DD02F34E62268F00B5CB0B820B, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3DB51236BE8856DD02F34E62268F00B5CB0B820B, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>
struct KeyValuePairEnumerator_t4AFD793680291E561E35835961ED90CF2C242928 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t41A668276F3ABED533DF2181C859F49634A2E450* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4AFD793680291E561E35835961ED90CF2C242928, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t41A668276F3ABED533DF2181C859F49634A2E450* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t41A668276F3ABED533DF2181C859F49634A2E450** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t41A668276F3ABED533DF2181C859F49634A2E450* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4AFD793680291E561E35835961ED90CF2C242928, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4AFD793680291E561E35835961ED90CF2C242928, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4AFD793680291E561E35835961ED90CF2C242928, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionType>
struct KeyValuePairEnumerator_tBA5D46FD672B487180AC69F15459F0041A9FE95E 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t43EB7095087A5C299A060B089C072DEECF982CCD* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBA5D46FD672B487180AC69F15459F0041A9FE95E, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t43EB7095087A5C299A060B089C072DEECF982CCD* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t43EB7095087A5C299A060B089C072DEECF982CCD** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t43EB7095087A5C299A060B089C072DEECF982CCD* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBA5D46FD672B487180AC69F15459F0041A9FE95E, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBA5D46FD672B487180AC69F15459F0041A9FE95E, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBA5D46FD672B487180AC69F15459F0041A9FE95E, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.UI.ThemeStateProperty,Microsoft.MixedReality.Toolkit.UI.ThemePropertyValue>
struct KeyValuePairEnumerator_tBD214A16C2682A93F88813A7116D7A4ECEC26915 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tC45E7E9B4D93C236FD2C2189AC3A2FBC2460DDEC* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBD214A16C2682A93F88813A7116D7A4ECEC26915, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tC45E7E9B4D93C236FD2C2189AC3A2FBC2460DDEC* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tC45E7E9B4D93C236FD2C2189AC3A2FBC2460DDEC** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tC45E7E9B4D93C236FD2C2189AC3A2FBC2460DDEC* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBD214A16C2682A93F88813A7116D7A4ECEC26915, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBD214A16C2682A93F88813A7116D7A4ECEC26915, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBD214A16C2682A93F88813A7116D7A4ECEC26915, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct KeyValuePairEnumerator_t4698AB94628297C4BC0245820215FBA3B11BED57 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tFCC6E358A881E6CB9EFBEB213AC9428C6391F803* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4698AB94628297C4BC0245820215FBA3B11BED57, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tFCC6E358A881E6CB9EFBEB213AC9428C6391F803* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tFCC6E358A881E6CB9EFBEB213AC9428C6391F803** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tFCC6E358A881E6CB9EFBEB213AC9428C6391F803* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4698AB94628297C4BC0245820215FBA3B11BED57, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4698AB94628297C4BC0245820215FBA3B11BED57, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4698AB94628297C4BC0245820215FBA3B11BED57, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct KeyValuePairEnumerator_t12E82BB83392B06191C49940CB45AEFF664CDF28 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tF8A3D4E8CD91D4551E5735309E452E812838B6A0* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t12E82BB83392B06191C49940CB45AEFF664CDF28, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tF8A3D4E8CD91D4551E5735309E452E812838B6A0* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tF8A3D4E8CD91D4551E5735309E452E812838B6A0** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tF8A3D4E8CD91D4551E5735309E452E812838B6A0* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t12E82BB83392B06191C49940CB45AEFF664CDF28, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t12E82BB83392B06191C49940CB45AEFF664CDF28, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t12E82BB83392B06191C49940CB45AEFF664CDF28, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct KeyValuePairEnumerator_t2360051C7073E4CB658F36CEE1AB77FBC2D29ED4 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tAF0560847A34113358EA866E7B4981A1118E865D* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t2360051C7073E4CB658F36CEE1AB77FBC2D29ED4, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tAF0560847A34113358EA866E7B4981A1118E865D* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tAF0560847A34113358EA866E7B4981A1118E865D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tAF0560847A34113358EA866E7B4981A1118E865D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t2360051C7073E4CB658F36CEE1AB77FBC2D29ED4, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t2360051C7073E4CB658F36CEE1AB77FBC2D29ED4, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t2360051C7073E4CB658F36CEE1AB77FBC2D29ED4, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyValuePairEnumerator_tE3EB7EDAF0F86B9E492E82E4EB9123E340CE3CFD 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t436AC9DAB184EFD2D75D99A27071CF1B97DFB50A* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE3EB7EDAF0F86B9E492E82E4EB9123E340CE3CFD, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t436AC9DAB184EFD2D75D99A27071CF1B97DFB50A* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t436AC9DAB184EFD2D75D99A27071CF1B97DFB50A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t436AC9DAB184EFD2D75D99A27071CF1B97DFB50A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE3EB7EDAF0F86B9E492E82E4EB9123E340CE3CFD, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE3EB7EDAF0F86B9E492E82E4EB9123E340CE3CFD, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE3EB7EDAF0F86B9E492E82E4EB9123E340CE3CFD, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Single>
struct KeyValuePairEnumerator_tA850AE0AFA0DAE1AA8021BB5FCC4C1626B9BB22D 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tB7E308A2EF99E9CCF71792307D851FF4353031DF* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA850AE0AFA0DAE1AA8021BB5FCC4C1626B9BB22D, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tB7E308A2EF99E9CCF71792307D851FF4353031DF* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tB7E308A2EF99E9CCF71792307D851FF4353031DF** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tB7E308A2EF99E9CCF71792307D851FF4353031DF* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA850AE0AFA0DAE1AA8021BB5FCC4C1626B9BB22D, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA850AE0AFA0DAE1AA8021BB5FCC4C1626B9BB22D, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA850AE0AFA0DAE1AA8021BB5FCC4C1626B9BB22D, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform>
struct KeyValuePairEnumerator_t60A6F5F93C3CECB3435AD44D5D65D15B142C9702 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t3BBE11F2BD38748DA3FCB176B390AC28515F1F2D* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t60A6F5F93C3CECB3435AD44D5D65D15B142C9702, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t3BBE11F2BD38748DA3FCB176B390AC28515F1F2D* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t3BBE11F2BD38748DA3FCB176B390AC28515F1F2D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t3BBE11F2BD38748DA3FCB176B390AC28515F1F2D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t60A6F5F93C3CECB3435AD44D5D65D15B142C9702, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t60A6F5F93C3CECB3435AD44D5D65D15B142C9702, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t60A6F5F93C3CECB3435AD44D5D65D15B142C9702, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct KeyValuePairEnumerator_t24A5836A11C78BCB4E87F45687E7C5839EBBA080 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tF106747F16B6DD312645C2D18599E05E3A194085* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t24A5836A11C78BCB4E87F45687E7C5839EBBA080, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tF106747F16B6DD312645C2D18599E05E3A194085* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tF106747F16B6DD312645C2D18599E05E3A194085** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tF106747F16B6DD312645C2D18599E05E3A194085* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t24A5836A11C78BCB4E87F45687E7C5839EBBA080, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t24A5836A11C78BCB4E87F45687E7C5839EBBA080, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t24A5836A11C78BCB4E87F45687E7C5839EBBA080, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.IMixedRealityService,Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar>>>
struct KeyValuePairEnumerator_t0E5CDE96FCB79103CDEBF866ED514C5206003C46 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tFD55381BBABC0C0168B784C09F22E2E36B3AD76D* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0E5CDE96FCB79103CDEBF866ED514C5206003C46, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tFD55381BBABC0C0168B784C09F22E2E36B3AD76D* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tFD55381BBABC0C0168B784C09F22E2E36B3AD76D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tFD55381BBABC0C0168B784C09F22E2E36B3AD76D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0E5CDE96FCB79103CDEBF866ED514C5206003C46, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0E5CDE96FCB79103CDEBF866ED514C5206003C46, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0E5CDE96FCB79103CDEBF866ED514C5206003C46, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.Collections.Generic.List`1<System.Type>>
struct KeyValuePairEnumerator_tB7163A507F1615F15FF964B71B0F92F84481DF25 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t01E71626981F310B4DE2D4A9649F69CD5BD43165* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB7163A507F1615F15FF964B71B0F92F84481DF25, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t01E71626981F310B4DE2D4A9649F69CD5BD43165* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t01E71626981F310B4DE2D4A9649F69CD5BD43165** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t01E71626981F310B4DE2D4A9649F69CD5BD43165* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB7163A507F1615F15FF964B71B0F92F84481DF25, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB7163A507F1615F15FF964B71B0F92F84481DF25, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tB7163A507F1615F15FF964B71B0F92F84481DF25, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct KeyValuePairEnumerator_t29C25CE81373AF3332BFF35302D095A4113145F8 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t89735119D8BEEFEBBE98656F8A62002FF7054F61* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t29C25CE81373AF3332BFF35302D095A4113145F8, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t89735119D8BEEFEBBE98656F8A62002FF7054F61* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t89735119D8BEEFEBBE98656F8A62002FF7054F61** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t89735119D8BEEFEBBE98656F8A62002FF7054F61* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t29C25CE81373AF3332BFF35302D095A4113145F8, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t29C25CE81373AF3332BFF35302D095A4113145F8, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t29C25CE81373AF3332BFF35302D095A4113145F8, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.WeakReference`1<Microsoft.MixedReality.Toolkit.IMixedRealityService>>
struct KeyValuePairEnumerator_t08B7245C8C76ECF136EC92C2AD3A169F83FB8F78 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t198B1850C6F44D2945B435B01A549B6BA82CA0E8* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t08B7245C8C76ECF136EC92C2AD3A169F83FB8F78, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t198B1850C6F44D2945B435B01A549B6BA82CA0E8* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t198B1850C6F44D2945B435B01A549B6BA82CA0E8** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t198B1850C6F44D2945B435B01A549B6BA82CA0E8* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t08B7245C8C76ECF136EC92C2AD3A169F83FB8F78, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t08B7245C8C76ECF136EC92C2AD3A169F83FB8F78, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t08B7245C8C76ECF136EC92C2AD3A169F83FB8F78, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.AttributeUsageAttribute>
struct KeyValuePairEnumerator_tA55FBE107D95C54AAE54B0385BE48B4C22BB6768 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tBF185F2DFFF281FB8BD06AE42E4B0E1CF6A6FFD6* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA55FBE107D95C54AAE54B0385BE48B4C22BB6768, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tBF185F2DFFF281FB8BD06AE42E4B0E1CF6A6FFD6* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tBF185F2DFFF281FB8BD06AE42E4B0E1CF6A6FFD6** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tBF185F2DFFF281FB8BD06AE42E4B0E1CF6A6FFD6* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA55FBE107D95C54AAE54B0385BE48B4C22BB6768, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA55FBE107D95C54AAE54B0385BE48B4C22BB6768, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tA55FBE107D95C54AAE54B0385BE48B4C22BB6768, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>
struct KeyValuePairEnumerator_t1F6A3033890E16A86FCB3FA91F3AC194EA76936A 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tBAE1C2C5776C8CF5DB533784E474A60A87171B2B* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t1F6A3033890E16A86FCB3FA91F3AC194EA76936A, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tBAE1C2C5776C8CF5DB533784E474A60A87171B2B* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tBAE1C2C5776C8CF5DB533784E474A60A87171B2B** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tBAE1C2C5776C8CF5DB533784E474A60A87171B2B* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t1F6A3033890E16A86FCB3FA91F3AC194EA76936A, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t1F6A3033890E16A86FCB3FA91F3AC194EA76936A, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t1F6A3033890E16A86FCB3FA91F3AC194EA76936A, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,UnityEngine.ISubsystem>
struct KeyValuePairEnumerator_tE5B4AB46805F8D1810357D7C41E0AE0994A2ECAC 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t37E9A4D455BE59B03E47E86AFBD51517711B1123* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE5B4AB46805F8D1810357D7C41E0AE0994A2ECAC, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t37E9A4D455BE59B03E47E86AFBD51517711B1123* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t37E9A4D455BE59B03E47E86AFBD51517711B1123** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t37E9A4D455BE59B03E47E86AFBD51517711B1123* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE5B4AB46805F8D1810357D7C41E0AE0994A2ECAC, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE5B4AB46805F8D1810357D7C41E0AE0994A2ECAC, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE5B4AB46805F8D1810357D7C41E0AE0994A2ECAC, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,Microsoft.MixedReality.Toolkit.Utilities.Facades.ServiceFacade>
struct KeyValuePairEnumerator_tC54893F7F0DAFFDD598B239DDE475DF12FA58BF7 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t920478456E6F776AF38D729C5E7CDB22F2FF0310* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC54893F7F0DAFFDD598B239DDE475DF12FA58BF7, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t920478456E6F776AF38D729C5E7CDB22F2FF0310* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t920478456E6F776AF38D729C5E7CDB22F2FF0310** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t920478456E6F776AF38D729C5E7CDB22F2FF0310* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC54893F7F0DAFFDD598B239DDE475DF12FA58BF7, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC54893F7F0DAFFDD598B239DDE475DF12FA58BF7, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC54893F7F0DAFFDD598B239DDE475DF12FA58BF7, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct KeyValuePairEnumerator_tAF6845CE8C61783E2635DDF085117EF210F0AF20 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tC9000E0F5D015D7AC8431817AD48A83193DF999A* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tAF6845CE8C61783E2635DDF085117EF210F0AF20, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tC9000E0F5D015D7AC8431817AD48A83193DF999A* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tC9000E0F5D015D7AC8431817AD48A83193DF999A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tC9000E0F5D015D7AC8431817AD48A83193DF999A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tAF6845CE8C61783E2635DDF085117EF210F0AF20, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tAF6845CE8C61783E2635DDF085117EF210F0AF20, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tAF6845CE8C61783E2635DDF085117EF210F0AF20, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.MonoCustomAttrs/AttributeInfo>
struct KeyValuePairEnumerator_tBFB39BAB07E943677FDD6669EF7443B39313A3BA 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t22AE782829AED70ED3B03B15CD82B0476B4BBD4C* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBFB39BAB07E943677FDD6669EF7443B39313A3BA, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t22AE782829AED70ED3B03B15CD82B0476B4BBD4C* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t22AE782829AED70ED3B03B15CD82B0476B4BBD4C** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t22AE782829AED70ED3B03B15CD82B0476B4BBD4C* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBFB39BAB07E943677FDD6669EF7443B39313A3BA, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBFB39BAB07E943677FDD6669EF7443B39313A3BA, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBFB39BAB07E943677FDD6669EF7443B39313A3BA, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,System.Boolean>
struct KeyValuePairEnumerator_t3D50C54EB2F419603011F948893B54BF0C4A12C3 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tF1D9AB8AB0AA9DE242470646B413F26C5095B466* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3D50C54EB2F419603011F948893B54BF0C4A12C3, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tF1D9AB8AB0AA9DE242470646B413F26C5095B466* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tF1D9AB8AB0AA9DE242470646B413F26C5095B466** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tF1D9AB8AB0AA9DE242470646B413F26C5095B466* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3D50C54EB2F419603011F948893B54BF0C4A12C3, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3D50C54EB2F419603011F948893B54BF0C4A12C3, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3D50C54EB2F419603011F948893B54BF0C4A12C3, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,UnityEngine.TextCore.Glyph>
struct KeyValuePairEnumerator_tD01758B4FEDB8B14452AA492CAA4D29DAED8989D 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t2234AB2F467D5B5743D1CD2F39CF6EF4F77B459D* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD01758B4FEDB8B14452AA492CAA4D29DAED8989D, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t2234AB2F467D5B5743D1CD2F39CF6EF4F77B459D* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t2234AB2F467D5B5743D1CD2F39CF6EF4F77B459D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t2234AB2F467D5B5743D1CD2F39CF6EF4F77B459D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD01758B4FEDB8B14452AA492CAA4D29DAED8989D, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD01758B4FEDB8B14452AA492CAA4D29DAED8989D, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD01758B4FEDB8B14452AA492CAA4D29DAED8989D, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct KeyValuePairEnumerator_t9500F9D97349F2746C4663CBCC76B64416841912 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tF7CB8B8E71FC917703565D46AAB505FD25274303* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t9500F9D97349F2746C4663CBCC76B64416841912, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tF7CB8B8E71FC917703565D46AAB505FD25274303* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tF7CB8B8E71FC917703565D46AAB505FD25274303** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tF7CB8B8E71FC917703565D46AAB505FD25274303* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t9500F9D97349F2746C4663CBCC76B64416841912, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t9500F9D97349F2746C4663CBCC76B64416841912, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t9500F9D97349F2746C4663CBCC76B64416841912, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerMediator>
struct KeyValuePairEnumerator_t088B7F0120ADBB1B463B0CFE016F282D977457B0 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tFE8899C48BD5E34EA460A08EDA7F039A3E97AB13* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t088B7F0120ADBB1B463B0CFE016F282D977457B0, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tFE8899C48BD5E34EA460A08EDA7F039A3E97AB13* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tFE8899C48BD5E34EA460A08EDA7F039A3E97AB13** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tFE8899C48BD5E34EA460A08EDA7F039A3E97AB13* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t088B7F0120ADBB1B463B0CFE016F282D977457B0, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t088B7F0120ADBB1B463B0CFE016F282D977457B0, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t088B7F0120ADBB1B463B0CFE016F282D977457B0, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,System.Int32>
struct KeyValuePairEnumerator_t30A969FC1DAE5CCE82F322C88C22B492B101A1E1 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t94115C473E3C9319D17B3A7F840EB37647911A5E* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t30A969FC1DAE5CCE82F322C88C22B492B101A1E1, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t94115C473E3C9319D17B3A7F840EB37647911A5E* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t94115C473E3C9319D17B3A7F840EB37647911A5E** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t94115C473E3C9319D17B3A7F840EB37647911A5E* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t30A969FC1DAE5CCE82F322C88C22B492B101A1E1, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t30A969FC1DAE5CCE82F322C88C22B492B101A1E1, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t30A969FC1DAE5CCE82F322C88C22B492B101A1E1, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,TMPro.TMP_Character>
struct KeyValuePairEnumerator_tFA3AD2A6E08AB75BB0ACB86E5AE840189CA81AE2 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t6E42ECBCAB838D44D8D114367E3BF6A41D0BC53F* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tFA3AD2A6E08AB75BB0ACB86E5AE840189CA81AE2, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t6E42ECBCAB838D44D8D114367E3BF6A41D0BC53F* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t6E42ECBCAB838D44D8D114367E3BF6A41D0BC53F** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t6E42ECBCAB838D44D8D114367E3BF6A41D0BC53F* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tFA3AD2A6E08AB75BB0ACB86E5AE840189CA81AE2, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tFA3AD2A6E08AB75BB0ACB86E5AE840189CA81AE2, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tFA3AD2A6E08AB75BB0ACB86E5AE840189CA81AE2, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,TMPro.TMP_GlyphPairAdjustmentRecord>
struct KeyValuePairEnumerator_t805919B3CFCC00851F36CEA57293088EFE99D243 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t0B6A6755E33E9EDEFE95A80D3ED9115E1F98BE57* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t805919B3CFCC00851F36CEA57293088EFE99D243, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t0B6A6755E33E9EDEFE95A80D3ED9115E1F98BE57* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t0B6A6755E33E9EDEFE95A80D3ED9115E1F98BE57** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t0B6A6755E33E9EDEFE95A80D3ED9115E1F98BE57* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t805919B3CFCC00851F36CEA57293088EFE99D243, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t805919B3CFCC00851F36CEA57293088EFE99D243, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t805919B3CFCC00851F36CEA57293088EFE99D243, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,TMPro.TMP_SpriteCharacter>
struct KeyValuePairEnumerator_t3B8947DCC81FDBC6DCED80C2C613E780B08064A2 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t584D4E5406CCB5770619A3E1FD6C9E04C285370A* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3B8947DCC81FDBC6DCED80C2C613E780B08064A2, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t584D4E5406CCB5770619A3E1FD6C9E04C285370A* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t584D4E5406CCB5770619A3E1FD6C9E04C285370A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t584D4E5406CCB5770619A3E1FD6C9E04C285370A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3B8947DCC81FDBC6DCED80C2C613E780B08064A2, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3B8947DCC81FDBC6DCED80C2C613E780B08064A2, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t3B8947DCC81FDBC6DCED80C2C613E780B08064A2, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,TMPro.TMP_SpriteGlyph>
struct KeyValuePairEnumerator_t4782917F422363B0D56039DD943523070CB12811 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tF7F6A22EDB055A4F67D4F53EB653060CD2E4052D* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4782917F422363B0D56039DD943523070CB12811, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tF7F6A22EDB055A4F67D4F53EB653060CD2E4052D* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tF7F6A22EDB055A4F67D4F53EB653060CD2E4052D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tF7F6A22EDB055A4F67D4F53EB653060CD2E4052D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4782917F422363B0D56039DD943523070CB12811, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4782917F422363B0D56039DD943523070CB12811, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t4782917F422363B0D56039DD943523070CB12811, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,UnityEngine.Vector3>
struct KeyValuePairEnumerator_tC91F109F277486CD63652B7EA98AAEF776EDCCAF 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t0A220D2ABCE1DFF2838FB6ACD24807F83F6F35D4* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC91F109F277486CD63652B7EA98AAEF776EDCCAF, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t0A220D2ABCE1DFF2838FB6ACD24807F83F6F35D4* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t0A220D2ABCE1DFF2838FB6ACD24807F83F6F35D4** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t0A220D2ABCE1DFF2838FB6ACD24807F83F6F35D4* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC91F109F277486CD63652B7EA98AAEF776EDCCAF, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC91F109F277486CD63652B7EA98AAEF776EDCCAF, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tC91F109F277486CD63652B7EA98AAEF776EDCCAF, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData>
struct KeyValuePairEnumerator_t53221D952A7337E7AEAFCF8EA1BE5AB396EB33CC 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tD19AE40D29D8004B28D0C4969A68ED745DC62C9B* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t53221D952A7337E7AEAFCF8EA1BE5AB396EB33CC, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tD19AE40D29D8004B28D0C4969A68ED745DC62C9B* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tD19AE40D29D8004B28D0C4969A68ED745DC62C9B** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tD19AE40D29D8004B28D0C4969A68ED745DC62C9B* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t53221D952A7337E7AEAFCF8EA1BE5AB396EB33CC, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t53221D952A7337E7AEAFCF8EA1BE5AB396EB33CC, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t53221D952A7337E7AEAFCF8EA1BE5AB396EB33CC, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom/HandPanData>
struct KeyValuePairEnumerator_tF1E54D5B61D3E536D18EF50D7EFFAFBF72CAF869 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t0D351D67F0D2A75F654F266D95221623CE0D9F69* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF1E54D5B61D3E536D18EF50D7EFFAFBF72CAF869, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t0D351D67F0D2A75F654F266D95221623CE0D9F69* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t0D351D67F0D2A75F654F266D95221623CE0D9F69** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t0D351D67F0D2A75F654F266D95221623CE0D9F69* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF1E54D5B61D3E536D18EF50D7EFFAFBF72CAF869, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF1E54D5B61D3E536D18EF50D7EFFAFBF72CAF869, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tF1E54D5B61D3E536D18EF50D7EFFAFBF72CAF869, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,Microsoft.MixedReality.Toolkit.UI.ManipulationHandler/PointerData>
struct KeyValuePairEnumerator_tBB351391175E3DF181FD7778303F740A10F37B70 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t6E9889E40F2C32B694E4DF54438088BF8D41F1D0* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBB351391175E3DF181FD7778303F740A10F37B70, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t6E9889E40F2C32B694E4DF54438088BF8D41F1D0* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t6E9889E40F2C32B694E4DF54438088BF8D41F1D0** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t6E9889E40F2C32B694E4DF54438088BF8D41F1D0* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBB351391175E3DF181FD7778303F740A10F37B70, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBB351391175E3DF181FD7778303F740A10F37B70, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tBB351391175E3DF181FD7778303F740A10F37B70, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt64,UnityEngine.GameObject>
struct KeyValuePairEnumerator_t6322DEAB5DE4A7F04273B7D90935C1DAC34C3CE9 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t6CFE49F75EBAB475EE48101B2CDA31B05B41037C* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t6322DEAB5DE4A7F04273B7D90935C1DAC34C3CE9, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t6CFE49F75EBAB475EE48101B2CDA31B05B41037C* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t6CFE49F75EBAB475EE48101B2CDA31B05B41037C** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t6CFE49F75EBAB475EE48101B2CDA31B05B41037C* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t6322DEAB5DE4A7F04273B7D90935C1DAC34C3CE9, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t6322DEAB5DE4A7F04273B7D90935C1DAC34C3CE9, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t6322DEAB5DE4A7F04273B7D90935C1DAC34C3CE9, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt64,System.String>
struct KeyValuePairEnumerator_tD2A8CF3BAD2AA8C4E5E0444A106ADB4113EFEDE5 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t15E32F03AD18365D96750D0B5FA976E2B4B9D3F6* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD2A8CF3BAD2AA8C4E5E0444A106ADB4113EFEDE5, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t15E32F03AD18365D96750D0B5FA976E2B4B9D3F6* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t15E32F03AD18365D96750D0B5FA976E2B4B9D3F6** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t15E32F03AD18365D96750D0B5FA976E2B4B9D3F6* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD2A8CF3BAD2AA8C4E5E0444A106ADB4113EFEDE5, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD2A8CF3BAD2AA8C4E5E0444A106ADB4113EFEDE5, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tD2A8CF3BAD2AA8C4E5E0444A106ADB4113EFEDE5, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Vector3,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector3>>>
struct KeyValuePairEnumerator_tE9A3080793292818B4CAE1DA000D12735540F5A5 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_t17FB900845710954709F43348663CD2E8E418640* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE9A3080793292818B4CAE1DA000D12735540F5A5, ____array_0)); }
	inline KeyValuePair_2U5BU5D_t17FB900845710954709F43348663CD2E8E418640* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_t17FB900845710954709F43348663CD2E8E418640** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_t17FB900845710954709F43348663CD2E8E418640* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE9A3080793292818B4CAE1DA000D12735540F5A5, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE9A3080793292818B4CAE1DA000D12735540F5A5, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tE9A3080793292818B4CAE1DA000D12735540F5A5, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose>
struct KeyValuePairEnumerator_tEF01F09629141B979C37F0CD846C2F640E054D9F 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tF5735DA09BEAA2B9E62074925D59F9C77A7850AF* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tEF01F09629141B979C37F0CD846C2F640E054D9F, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tF5735DA09BEAA2B9E62074925D59F9C77A7850AF* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tF5735DA09BEAA2B9E62074925D59F9C77A7850AF** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tF5735DA09BEAA2B9E62074925D59F9C77A7850AF* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tEF01F09629141B979C37F0CD846C2F640E054D9F, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tEF01F09629141B979C37F0CD846C2F640E054D9F, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_tEF01F09629141B979C37F0CD846C2F640E054D9F, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>
struct KeyValuePairEnumerator_t93D8C12563FC03DF9B978E1A0E4DEF03A8D145C1 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tB072B466461D8BCA266E6481D37BDD78FA8D4CC3* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t93D8C12563FC03DF9B978E1A0E4DEF03A8D145C1, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tB072B466461D8BCA266E6481D37BDD78FA8D4CC3* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tB072B466461D8BCA266E6481D37BDD78FA8D4CC3** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tB072B466461D8BCA266E6481D37BDD78FA8D4CC3* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t93D8C12563FC03DF9B978E1A0E4DEF03A8D145C1, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t93D8C12563FC03DF9B978E1A0E4DEF03A8D145C1, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t93D8C12563FC03DF9B978E1A0E4DEF03A8D145C1, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct KeyValuePairEnumerator_t0C1E147123A3E78A4054A23EAC10D6BA9C918A0E 
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_array
	KeyValuePair_2U5BU5D_tA1CC60C2A8578B44096E62ACBE1293DCF1506102* ____array_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_start
	int32_t ____start_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_end
	int32_t ____end_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator::_current
	int32_t ____current_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0C1E147123A3E78A4054A23EAC10D6BA9C918A0E, ____array_0)); }
	inline KeyValuePair_2U5BU5D_tA1CC60C2A8578B44096E62ACBE1293DCF1506102* get__array_0() const { return ____array_0; }
	inline KeyValuePair_2U5BU5D_tA1CC60C2A8578B44096E62ACBE1293DCF1506102** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(KeyValuePair_2U5BU5D_tA1CC60C2A8578B44096E62ACBE1293DCF1506102* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0C1E147123A3E78A4054A23EAC10D6BA9C918A0E, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0C1E147123A3E78A4054A23EAC10D6BA9C918A0E, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(KeyValuePairEnumerator_t0C1E147123A3E78A4054A23EAC10D6BA9C918A0E, ____current_3)); }
	inline int32_t get__current_3() const { return ____current_3; }
	inline int32_t* get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(int32_t value)
	{
		____current_3 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>
struct KeyValuePair_2_t239694BB713649B9F5326D1A5BC3143EA54316B3 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t239694BB713649B9F5326D1A5BC3143EA54316B3, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t239694BB713649B9F5326D1A5BC3143EA54316B3, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>
struct KeyValuePair_2_t1E4C4AAA2E07F40196F2EBEC29A6D137D0A9D265 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Il2CppChar ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1E4C4AAA2E07F40196F2EBEC29A6D137D0A9D265, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1E4C4AAA2E07F40196F2EBEC29A6D137D0A9D265, ___value_1)); }
	inline Il2CppChar get_value_1() const { return ___value_1; }
	inline Il2CppChar* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Il2CppChar value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>
struct KeyValuePair_2_tE8FA5EF9EFE23FF7AB54968FA25D3487B37D4D28 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE8FA5EF9EFE23FF7AB54968FA25D3487B37D4D28, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE8FA5EF9EFE23FF7AB54968FA25D3487B37D4D28, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>
struct KeyValuePair_2_t0505D58092A4AC6F3EC91B69335683ABC01B49FB 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0505D58092A4AC6F3EC91B69335683ABC01B49FB, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0505D58092A4AC6F3EC91B69335683ABC01B49FB, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Type>
struct KeyValuePair_2_t3FF0769A9CE1A16ED9C6BC28C447546256DDADA6 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3FF0769A9CE1A16ED9C6BC28C447546256DDADA6, ___key_0)); }
	inline int64_t get_key_0() const { return ___key_0; }
	inline int64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3FF0769A9CE1A16ED9C6BC28C447546256DDADA6, ___value_1)); }
	inline Type_t * get_value_1() const { return ___value_1; }
	inline Type_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Type_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
struct KeyValuePair_2_tF1F5F2CCD4CEED0C61C52B9C8CF788B48C872E69 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF1F5F2CCD4CEED0C61C52B9C8CF788B48C872E69, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF1F5F2CCD4CEED0C61C52B9C8CF788B48C872E69, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
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


// System.Collections.Generic.KeyValuePair`2<System.String,Windows.Perception.Spatial.SpatialAnchor>
struct KeyValuePair_2_tFAB02BF9A53145527FD8936ED307C7E3F8C4ED7F 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	SpatialAnchor_t2BA429CD43B439A85C74EDF056B0D39973DF71E1 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFAB02BF9A53145527FD8936ED307C7E3F8C4ED7F, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFAB02BF9A53145527FD8936ED307C7E3F8C4ED7F, ___value_1)); }
	inline SpatialAnchor_t2BA429CD43B439A85C74EDF056B0D39973DF71E1 * get_value_1() const { return ___value_1; }
	inline SpatialAnchor_t2BA429CD43B439A85C74EDF056B0D39973DF71E1 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(SpatialAnchor_t2BA429CD43B439A85C74EDF056B0D39973DF71E1 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Type>
struct KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0, ___value_1)); }
	inline Type_t * get_value_1() const { return ___value_1; }
	inline Type_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Type_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
struct KeyValuePair_2_t24B97016684F3CE7820EEAC98281DED41F84C30C 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t24B97016684F3CE7820EEAC98281DED41F84C30C, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t24B97016684F3CE7820EEAC98281DED41F84C30C, ___value_1)); }
	inline uint32_t get_value_1() const { return ___value_1; }
	inline uint32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(uint32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>
struct KeyValuePair_2_t504EC26DD47F99A8C06286072D44FAA1ABD0CD93 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t504EC26DD47F99A8C06286072D44FAA1ABD0CD93, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t504EC26DD47F99A8C06286072D44FAA1ABD0CD93, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>
struct KeyValuePair_2_t1C899E1D384EB1A82B398076E49CE2B74F0CE329 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1C899E1D384EB1A82B398076E49CE2B74F0CE329, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1C899E1D384EB1A82B398076E49CE2B74F0CE329, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.String>
struct KeyValuePair_2_tB28B34FCDB212D405F2CFB67C4C44A71745D6C91 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB28B34FCDB212D405F2CFB67C4C44A71745D6C91, ___key_0)); }
	inline uint64_t get_key_0() const { return ___key_0; }
	inline uint64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB28B34FCDB212D405F2CFB67C4C44A71745D6C91, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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

// Windows.Foundation.Collections.IKeyValuePair`2<System.Guid,System.Int32>
struct NOVTABLE IKeyValuePair_2_t0C9A973F7D56980FFE71F9C288978292C1EF55A1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m49C2E144B5EE9F44BC15D99BA161EEAB6A043E91(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m4649B985474CF9CF424FDA5E3A4A20525D756CAB(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Guid>
struct NOVTABLE IKeyValuePair_2_t5A2EAE078874C07991FF945FD70EA74DB26BF208 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mD94227A0F8DA16A88E4E5DA42BC14324FB45BE27(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m6495B56B850066A1BCEEF7D1D47A5BA5B10E205B(Guid_t * comReturnValue) = 0;
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


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Guid>
struct KeyValuePair_2_tFFF3CD393655640E494F508F2E2BF0B8D1021B67 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Guid_t  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFFF3CD393655640E494F508F2E2BF0B8D1021B67, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFFF3CD393655640E494F508F2E2BF0B8D1021B67, ___value_1)); }
	inline Guid_t  get_value_1() const { return ___value_1; }
	inline Guid_t * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Guid_t  value)
	{
		___value_1 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};

// Windows.Foundation.Collections.IKeyValuePair`2<System.Int64,System.Type>
struct NOVTABLE IKeyValuePair_2_tD93562FBE3D1112107B883FF6959662A512CF78A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mBDA1D0BBF2590975BE23F199481491D5DB6EB308(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mB790D49B826CBA483FB090562BEF98F549F4B050(Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Type>
struct NOVTABLE IKeyValuePair_2_t55B306B809C622EFA7852CCC3A9FB700983F992E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mA3912673CAE16CD0D1F7A6C956FF7C99DEB285F8(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m2C202D882AC2378732F048CE9738B8FD428DD8A3(Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IKeyValuePair_2_get_Key_m49C2E144B5EE9F44BC15D99BA161EEAB6A043E91_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t * comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_m4649B985474CF9CF424FDA5E3A4A20525D756CAB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_m50A1F94CB4E740FB5885019E6728EAE5C1D508D2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_m0A77CFCA5DD2A31DB112E29FEB20300B493DE98D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_m442A81AD9966A66E28AC0706E2A59E0B65491814_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_m42282FC1709DB540C465F0BFEDE058CB7270F123_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppChar* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_mD94227A0F8DA16A88E4E5DA42BC14324FB45BE27_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_m6495B56B850066A1BCEEF7D1D47A5BA5B10E205B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t * comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_mBE3F439B4EECBFB5DE1B1A4CAFA35792919B992D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_mB918D157087406EF2EF862B63CB97B37F9AD69C6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_mD48E9BD7315408D4FA4A1AAA460D7DC03F52B24D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_m478C062D877B6FECD7B7D83CCBCECCD5F4A830F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_mB5355D55FBB3FC7FEE2EB2BCBA9B681818683C44_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_m0945F06186882DCB23474CF5F8F01893B6F9F459_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_mBDA1D0BBF2590975BE23F199481491D5DB6EB308_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_mB790D49B826CBA483FB090562BEF98F549F4B050_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2A32DB8C39F47F43CB48DEDDC56E9C8300157CA7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_m3A6A850D8FBBC6600EA7267723057A6048C6E587_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_mBA4EC2E87E487F1E5EEAAA360E0A45FBAAD506B7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_mBE1A71A5467E5F6B26FA03FBC7C941C1CF3AE6FF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_m06450AAE1A7EDAD2B3FDC9FC70B6A49441E99FCA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_m3F2DC560D5FC7913856F25FFD5AA973A8A3CAB90_ComCallableWrapperProjectedMethod(RuntimeObject* __this, ISpatialAnchor_tCFEBFF71958B01F5F1513B576905D8B1F95A2A55** comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_m0CF7F99AE719D65BBD579BEBDC21328A8A48EAD8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_mC704C838F021ADFD875BC09AA47821233BE19F66_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_mA3912673CAE16CD0D1F7A6C956FF7C99DEB285F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_m2C202D882AC2378732F048CE9738B8FD428DD8A3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_mE9BAD8C954B39CB4B5A34EFB9125A7E4A8D43FA5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_m9DBF5E9D5C4E6627D99EA625E32B4C760AFBCA0C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_m53706DB04E25F9EA97B17A77487D7B0B27DDEA30_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_mAFCEB82342294C7AF605E02479588644A34454C4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_m78C6B50E88EBFFB04C86E93E95A2674C41138678_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_m3716B3BA7EC3D4C1ADBFF9ACA363E6B914DDD2DD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Key_m670AA2931DD9FAFE336E0490A72DA3808815BD44_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint64_t* comReturnValue);
il2cpp_hresult_t IKeyValuePair_2_get_Value_mD5984382A59F8F3FF63AFE0B6E598CFAB4362494_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);



// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>
struct KeyValuePairEnumerator_tC15305C0260289E87DEC77E6FEF95F2D6B46114D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tC15305C0260289E87DEC77E6FEF95F2D6B46114D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tC15305C0260289E87DEC77E6FEF95F2D6B46114D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tC15305C0260289E87DEC77E6FEF95F2D6B46114D_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tC15305C0260289E87DEC77E6FEF95F2D6B46114D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tC15305C0260289E87DEC77E6FEF95F2D6B46114D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tC15305C0260289E87DEC77E6FEF95F2D6B46114D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality,Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings>
struct KeyValuePairEnumerator_tF7942B455533DC63ED1AA03577C307E805A5627D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF7942B455533DC63ED1AA03577C307E805A5627D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tF7942B455533DC63ED1AA03577C307E805A5627D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF7942B455533DC63ED1AA03577C307E805A5627D_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tF7942B455533DC63ED1AA03577C307E805A5627D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tF7942B455533DC63ED1AA03577C307E805A5627D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tF7942B455533DC63ED1AA03577C307E805A5627D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct KeyValuePairEnumerator_tDC089A230DE08037C711C7E665E7B41D1DF82114_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tDC089A230DE08037C711C7E665E7B41D1DF82114_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tDC089A230DE08037C711C7E665E7B41D1DF82114_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tDC089A230DE08037C711C7E665E7B41D1DF82114_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tDC089A230DE08037C711C7E665E7B41D1DF82114(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tDC089A230DE08037C711C7E665E7B41D1DF82114_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tDC089A230DE08037C711C7E665E7B41D1DF82114_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct KeyValuePairEnumerator_t150A36DABF061EC39AED47DA28DBAEBFF16915EB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t150A36DABF061EC39AED47DA28DBAEBFF16915EB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t150A36DABF061EC39AED47DA28DBAEBFF16915EB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t150A36DABF061EC39AED47DA28DBAEBFF16915EB_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t150A36DABF061EC39AED47DA28DBAEBFF16915EB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t150A36DABF061EC39AED47DA28DBAEBFF16915EB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t150A36DABF061EC39AED47DA28DBAEBFF16915EB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct KeyValuePairEnumerator_tC4A37D101BE32AD9F8C566EA1CF131F45042A5D0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tC4A37D101BE32AD9F8C566EA1CF131F45042A5D0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tC4A37D101BE32AD9F8C566EA1CF131F45042A5D0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tC4A37D101BE32AD9F8C566EA1CF131F45042A5D0_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tC4A37D101BE32AD9F8C566EA1CF131F45042A5D0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tC4A37D101BE32AD9F8C566EA1CF131F45042A5D0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tC4A37D101BE32AD9F8C566EA1CF131F45042A5D0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.GameObject,System.Int32>
struct KeyValuePairEnumerator_t54512B6F3689BC8D43BB2190A2B0604394A2EDC2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t54512B6F3689BC8D43BB2190A2B0604394A2EDC2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t54512B6F3689BC8D43BB2190A2B0604394A2EDC2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t54512B6F3689BC8D43BB2190A2B0604394A2EDC2_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t54512B6F3689BC8D43BB2190A2B0604394A2EDC2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t54512B6F3689BC8D43BB2190A2B0604394A2EDC2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t54512B6F3689BC8D43BB2190A2B0604394A2EDC2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.UI.Graphic,System.Int32>
struct KeyValuePairEnumerator_tC60EA3785FA7244E119D29B1E9C5436D5CA37432_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tC60EA3785FA7244E119D29B1E9C5436D5CA37432_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tC60EA3785FA7244E119D29B1E9C5436D5CA37432_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tC60EA3785FA7244E119D29B1E9C5436D5CA37432_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tC60EA3785FA7244E119D29B1E9C5436D5CA37432(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tC60EA3785FA7244E119D29B1E9C5436D5CA37432_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tC60EA3785FA7244E119D29B1E9C5436D5CA37432_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct KeyValuePairEnumerator_t8484EC33D10E58FDC93B759557C2861A7FF9DDBC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t8484EC33D10E58FDC93B759557C2861A7FF9DDBC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t8484EC33D10E58FDC93B759557C2861A7FF9DDBC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t8484EC33D10E58FDC93B759557C2861A7FF9DDBC_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t8484EC33D10E58FDC93B759557C2861A7FF9DDBC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t8484EC33D10E58FDC93B759557C2861A7FF9DDBC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t8484EC33D10E58FDC93B759557C2861A7FF9DDBC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Guid,System.Int32>
struct KeyValuePairEnumerator_tA91F5B2DCA8E54F5F117D6790D1D0B142A206B3D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA91F5B2DCA8E54F5F117D6790D1D0B142A206B3D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tA91F5B2DCA8E54F5F117D6790D1D0B142A206B3D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA91F5B2DCA8E54F5F117D6790D1D0B142A206B3D_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tA91F5B2DCA8E54F5F117D6790D1D0B142A206B3D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tA91F5B2DCA8E54F5F117D6790D1D0B142A206B3D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tA91F5B2DCA8E54F5F117D6790D1D0B142A206B3D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>
struct KeyValuePairEnumerator_t4AFCE0CC36BBC2562D1C1FC0A78108B82510BF9E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4AFCE0CC36BBC2562D1C1FC0A78108B82510BF9E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t4AFCE0CC36BBC2562D1C1FC0A78108B82510BF9E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4AFCE0CC36BBC2562D1C1FC0A78108B82510BF9E_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t4AFCE0CC36BBC2562D1C1FC0A78108B82510BF9E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t4AFCE0CC36BBC2562D1C1FC0A78108B82510BF9E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t4AFCE0CC36BBC2562D1C1FC0A78108B82510BF9E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Matrix4x4>
struct KeyValuePairEnumerator_t88C9A822348C0ABF12894BF0E3A4E9FBBE97D8E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t88C9A822348C0ABF12894BF0E3A4E9FBBE97D8E2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t88C9A822348C0ABF12894BF0E3A4E9FBBE97D8E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t88C9A822348C0ABF12894BF0E3A4E9FBBE97D8E2_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t88C9A822348C0ABF12894BF0E3A4E9FBBE97D8E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t88C9A822348C0ABF12894BF0E3A4E9FBBE97D8E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t88C9A822348C0ABF12894BF0E3A4E9FBBE97D8E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Threading.IAsyncLocal,System.Object>
struct KeyValuePairEnumerator_t8D17E031CF5DB983C16CE57EB89FAB19219B23A6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t8D17E031CF5DB983C16CE57EB89FAB19219B23A6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t8D17E031CF5DB983C16CE57EB89FAB19219B23A6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t8D17E031CF5DB983C16CE57EB89FAB19219B23A6_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t8D17E031CF5DB983C16CE57EB89FAB19219B23A6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t8D17E031CF5DB983C16CE57EB89FAB19219B23A6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t8D17E031CF5DB983C16CE57EB89FAB19219B23A6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>
struct KeyValuePairEnumerator_t71B3CAA7CCDE9C715627D14EEB9A776F83162CE5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t71B3CAA7CCDE9C715627D14EEB9A776F83162CE5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t71B3CAA7CCDE9C715627D14EEB9A776F83162CE5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t71B3CAA7CCDE9C715627D14EEB9A776F83162CE5_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t71B3CAA7CCDE9C715627D14EEB9A776F83162CE5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t71B3CAA7CCDE9C715627D14EEB9A776F83162CE5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t71B3CAA7CCDE9C715627D14EEB9A776F83162CE5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.UI.IClipper,System.Int32>
struct KeyValuePairEnumerator_tF090915A0B34081BD3D950483CD89CCFAAFE2072_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF090915A0B34081BD3D950483CD89CCFAAFE2072_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tF090915A0B34081BD3D950483CD89CCFAAFE2072_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF090915A0B34081BD3D950483CD89CCFAAFE2072_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tF090915A0B34081BD3D950483CD89CCFAAFE2072(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tF090915A0B34081BD3D950483CD89CCFAAFE2072_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tF090915A0B34081BD3D950483CD89CCFAAFE2072_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3>
struct KeyValuePairEnumerator_t07D7DF56C9A03B1C87EE1AFEFB6EEB51336CECFF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t07D7DF56C9A03B1C87EE1AFEFB6EEB51336CECFF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t07D7DF56C9A03B1C87EE1AFEFB6EEB51336CECFF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t07D7DF56C9A03B1C87EE1AFEFB6EEB51336CECFF_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t07D7DF56C9A03B1C87EE1AFEFB6EEB51336CECFF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t07D7DF56C9A03B1C87EE1AFEFB6EEB51336CECFF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t07D7DF56C9A03B1C87EE1AFEFB6EEB51336CECFF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>>
struct KeyValuePairEnumerator_tF47C64E845FF843F00E798E14B427AE28EE4BD55_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF47C64E845FF843F00E798E14B427AE28EE4BD55_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tF47C64E845FF843F00E798E14B427AE28EE4BD55_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF47C64E845FF843F00E798E14B427AE28EE4BD55_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tF47C64E845FF843F00E798E14B427AE28EE4BD55(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tF47C64E845FF843F00E798E14B427AE28EE4BD55_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tF47C64E845FF843F00E798E14B427AE28EE4BD55_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct KeyValuePairEnumerator_tBA45BCF6E15D1D73B8D372DB4AAEBD2DAAB67B87_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBA45BCF6E15D1D73B8D372DB4AAEBD2DAAB67B87_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tBA45BCF6E15D1D73B8D372DB4AAEBD2DAAB67B87_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBA45BCF6E15D1D73B8D372DB4AAEBD2DAAB67B87_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tBA45BCF6E15D1D73B8D372DB4AAEBD2DAAB67B87(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tBA45BCF6E15D1D73B8D372DB4AAEBD2DAAB67B87_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tBA45BCF6E15D1D73B8D372DB4AAEBD2DAAB67B87_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.DefaultPrimaryPointerSelector/PointerInfo>
struct KeyValuePairEnumerator_t356F768E7A21B72EE52C8A7F4DE45766CCC79D44_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t356F768E7A21B72EE52C8A7F4DE45766CCC79D44_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t356F768E7A21B72EE52C8A7F4DE45766CCC79D44_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t356F768E7A21B72EE52C8A7F4DE45766CCC79D44_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t356F768E7A21B72EE52C8A7F4DE45766CCC79D44(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t356F768E7A21B72EE52C8A7F4DE45766CCC79D44_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t356F768E7A21B72EE52C8A7F4DE45766CCC79D44_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityService>>
struct KeyValuePairEnumerator_t076FA0D885639D39CFADA060C6ECE49FC2E376CD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t076FA0D885639D39CFADA060C6ECE49FC2E376CD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t076FA0D885639D39CFADA060C6ECE49FC2E376CD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t076FA0D885639D39CFADA060C6ECE49FC2E376CD_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t076FA0D885639D39CFADA060C6ECE49FC2E376CD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t076FA0D885639D39CFADA060C6ECE49FC2E376CD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t076FA0D885639D39CFADA060C6ECE49FC2E376CD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.UI.BoundsControl.IProximityEffectObjectProvider,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.BoundsControl.ProximityEffect/ObjectProximityInfo>>
struct KeyValuePairEnumerator_tA717E2566EDDF1F64696AEE525D665458EA90FD6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA717E2566EDDF1F64696AEE525D665458EA90FD6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tA717E2566EDDF1F64696AEE525D665458EA90FD6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA717E2566EDDF1F64696AEE525D665458EA90FD6_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tA717E2566EDDF1F64696AEE525D665458EA90FD6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tA717E2566EDDF1F64696AEE525D665458EA90FD6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tA717E2566EDDF1F64696AEE525D665458EA90FD6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.InputAction,UnityEngine.InputSystem.UI.InputSystemUIInputModule/InputActionReferenceState>
struct KeyValuePairEnumerator_t70DC9A3C2BFDB1926D2F6455E0F5B22B826E212A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t70DC9A3C2BFDB1926D2F6455E0F5B22B826E212A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t70DC9A3C2BFDB1926D2F6455E0F5B22B826E212A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t70DC9A3C2BFDB1926D2F6455E0F5B22B826E212A_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t70DC9A3C2BFDB1926D2F6455E0F5B22B826E212A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t70DC9A3C2BFDB1926D2F6455E0F5B22B826E212A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t70DC9A3C2BFDB1926D2F6455E0F5B22B826E212A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.InputControl,System.Single>
struct KeyValuePairEnumerator_t4627304985249D84C68C9789006F9BE79DD562D5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4627304985249D84C68C9789006F9BE79DD562D5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t4627304985249D84C68C9789006F9BE79DD562D5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4627304985249D84C68C9789006F9BE79DD562D5_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t4627304985249D84C68C9789006F9BE79DD562D5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t4627304985249D84C68C9789006F9BE79DD562D5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t4627304985249D84C68C9789006F9BE79DD562D5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct KeyValuePairEnumerator_tDDCF4C0AEFA4F0F1A64442A2A3119BC813F847C4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tDDCF4C0AEFA4F0F1A64442A2A3119BC813F847C4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tDDCF4C0AEFA4F0F1A64442A2A3119BC813F847C4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tDDCF4C0AEFA4F0F1A64442A2A3119BC813F847C4_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tDDCF4C0AEFA4F0F1A64442A2A3119BC813F847C4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tDDCF4C0AEFA4F0F1A64442A2A3119BC813F847C4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tDDCF4C0AEFA4F0F1A64442A2A3119BC813F847C4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2/CacheEntry<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>>
struct KeyValuePairEnumerator_t541D7233336DDF9260139579A5AA9C7F9DB7101D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t541D7233336DDF9260139579A5AA9C7F9DB7101D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t541D7233336DDF9260139579A5AA9C7F9DB7101D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t541D7233336DDF9260139579A5AA9C7F9DB7101D_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t541D7233336DDF9260139579A5AA9C7F9DB7101D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t541D7233336DDF9260139579A5AA9C7F9DB7101D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t541D7233336DDF9260139579A5AA9C7F9DB7101D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Tuple`2<Microsoft.MixedReality.SceneUnderstanding.SceneQuad,Microsoft.MixedReality.SceneUnderstanding.SceneObject>>
struct KeyValuePairEnumerator_t61480DC7D21940A6CD21427699CD393E9A7B0A14_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t61480DC7D21940A6CD21427699CD393E9A7B0A14_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t61480DC7D21940A6CD21427699CD393E9A7B0A14_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t61480DC7D21940A6CD21427699CD393E9A7B0A14_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t61480DC7D21940A6CD21427699CD393E9A7B0A14(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t61480DC7D21940A6CD21427699CD393E9A7B0A14_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t61480DC7D21940A6CD21427699CD393E9A7B0A14_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Boolean>
struct KeyValuePairEnumerator_t06543FFB5EF0565924E1AB89CA0EB292BC43341C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t06543FFB5EF0565924E1AB89CA0EB292BC43341C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t06543FFB5EF0565924E1AB89CA0EB292BC43341C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t06543FFB5EF0565924E1AB89CA0EB292BC43341C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t06543FFB5EF0565924E1AB89CA0EB292BC43341C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t06543FFB5EF0565924E1AB89CA0EB292BC43341C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t06543FFB5EF0565924E1AB89CA0EB292BC43341C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Char>
struct KeyValuePairEnumerator_t2403ECCC7C85631BB8CF8F91182095B670ED7AA6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t2403ECCC7C85631BB8CF8F91182095B670ED7AA6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t2403ECCC7C85631BB8CF8F91182095B670ED7AA6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t2403ECCC7C85631BB8CF8F91182095B670ED7AA6_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t2403ECCC7C85631BB8CF8F91182095B670ED7AA6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t2403ECCC7C85631BB8CF8F91182095B670ED7AA6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t2403ECCC7C85631BB8CF8F91182095B670ED7AA6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Globalization.CultureInfo>
struct KeyValuePairEnumerator_tD99DDC84CAD72F850864AAC52DBB16AF1E67D3F8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tD99DDC84CAD72F850864AAC52DBB16AF1E67D3F8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tD99DDC84CAD72F850864AAC52DBB16AF1E67D3F8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tD99DDC84CAD72F850864AAC52DBB16AF1E67D3F8_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tD99DDC84CAD72F850864AAC52DBB16AF1E67D3F8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tD99DDC84CAD72F850864AAC52DBB16AF1E67D3F8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tD99DDC84CAD72F850864AAC52DBB16AF1E67D3F8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,UnityEngine.GameObject>
struct KeyValuePairEnumerator_tFFB8DE1691C5207DCAF6B06C29942D345E380B0A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tFFB8DE1691C5207DCAF6B06C29942D345E380B0A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tFFB8DE1691C5207DCAF6B06C29942D345E380B0A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tFFB8DE1691C5207DCAF6B06C29942D345E380B0A_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tFFB8DE1691C5207DCAF6B06C29942D345E380B0A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tFFB8DE1691C5207DCAF6B06C29942D345E380B0A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tFFB8DE1691C5207DCAF6B06C29942D345E380B0A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Guid>
struct KeyValuePairEnumerator_tB6CEBF85BA99B6C78CE33BD3ACB41F5B9A674D37_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tB6CEBF85BA99B6C78CE33BD3ACB41F5B9A674D37_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tB6CEBF85BA99B6C78CE33BD3ACB41F5B9A674D37_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tB6CEBF85BA99B6C78CE33BD3ACB41F5B9A674D37_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tB6CEBF85BA99B6C78CE33BD3ACB41F5B9A674D37(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tB6CEBF85BA99B6C78CE33BD3ACB41F5B9A674D37_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tB6CEBF85BA99B6C78CE33BD3ACB41F5B9A674D37_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,UnityEngine.InputSystem.InputDevice>
struct KeyValuePairEnumerator_tB34574071945BD379E728FB36BCF5982CCCB46F4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tB34574071945BD379E728FB36BCF5982CCCB46F4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tB34574071945BD379E728FB36BCF5982CCCB46F4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tB34574071945BD379E728FB36BCF5982CCCB46F4_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tB34574071945BD379E728FB36BCF5982CCCB46F4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tB34574071945BD379E728FB36BCF5982CCCB46F4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tB34574071945BD379E728FB36BCF5982CCCB46F4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Int32>
struct KeyValuePairEnumerator_tBFF2DD706D4883DDDCEC24C460CB4DFE91A48950_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBFF2DD706D4883DDDCEC24C460CB4DFE91A48950_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tBFF2DD706D4883DDDCEC24C460CB4DFE91A48950_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBFF2DD706D4883DDDCEC24C460CB4DFE91A48950_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tBFF2DD706D4883DDDCEC24C460CB4DFE91A48950(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tBFF2DD706D4883DDDCEC24C460CB4DFE91A48950_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tBFF2DD706D4883DDDCEC24C460CB4DFE91A48950_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Int64>
struct KeyValuePairEnumerator_tE03145922CAF33F6D04E9E5FF0AFD6026576EC62_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tE03145922CAF33F6D04E9E5FF0AFD6026576EC62_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tE03145922CAF33F6D04E9E5FF0AFD6026576EC62_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tE03145922CAF33F6D04E9E5FF0AFD6026576EC62_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tE03145922CAF33F6D04E9E5FF0AFD6026576EC62(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tE03145922CAF33F6D04E9E5FF0AFD6026576EC62_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tE03145922CAF33F6D04E9E5FF0AFD6026576EC62_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,UnityEngine.Material>
struct KeyValuePairEnumerator_t451BDF682FE8EBF8A9D59487A91DA3340A0D8284_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t451BDF682FE8EBF8A9D59487A91DA3340A0D8284_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t451BDF682FE8EBF8A9D59487A91DA3340A0D8284_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t451BDF682FE8EBF8A9D59487A91DA3340A0D8284_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t451BDF682FE8EBF8A9D59487A91DA3340A0D8284(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t451BDF682FE8EBF8A9D59487A91DA3340A0D8284_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t451BDF682FE8EBF8A9D59487A91DA3340A0D8284_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct KeyValuePairEnumerator_tDADE03C82CDE840B72AEFFF28820EE39CFEB5665_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tDADE03C82CDE840B72AEFFF28820EE39CFEB5665_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tDADE03C82CDE840B72AEFFF28820EE39CFEB5665_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tDADE03C82CDE840B72AEFFF28820EE39CFEB5665_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tDADE03C82CDE840B72AEFFF28820EE39CFEB5665(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tDADE03C82CDE840B72AEFFF28820EE39CFEB5665_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tDADE03C82CDE840B72AEFFF28820EE39CFEB5665_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct KeyValuePairEnumerator_tFBE87FA78F1BCC1BC6FCB66855E53017F520AA42_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tFBE87FA78F1BCC1BC6FCB66855E53017F520AA42_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tFBE87FA78F1BCC1BC6FCB66855E53017F520AA42_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tFBE87FA78F1BCC1BC6FCB66855E53017F520AA42_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tFBE87FA78F1BCC1BC6FCB66855E53017F520AA42(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tFBE87FA78F1BCC1BC6FCB66855E53017F520AA42_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tFBE87FA78F1BCC1BC6FCB66855E53017F520AA42_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject>
struct KeyValuePairEnumerator_t86917E80439824BD7F8CB8685595D35DE03318F1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t86917E80439824BD7F8CB8685595D35DE03318F1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t86917E80439824BD7F8CB8685595D35DE03318F1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t86917E80439824BD7F8CB8685595D35DE03318F1_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t86917E80439824BD7F8CB8685595D35DE03318F1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t86917E80439824BD7F8CB8685595D35DE03318F1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t86917E80439824BD7F8CB8685595D35DE03318F1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.String>
struct KeyValuePairEnumerator_t797E2D524E3BBDB7D9868E4417A714C327425F70_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t797E2D524E3BBDB7D9868E4417A714C327425F70_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t797E2D524E3BBDB7D9868E4417A714C327425F70_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t797E2D524E3BBDB7D9868E4417A714C327425F70_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t797E2D524E3BBDB7D9868E4417A714C327425F70(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t797E2D524E3BBDB7D9868E4417A714C327425F70_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t797E2D524E3BBDB7D9868E4417A714C327425F70_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,TMPro.TMP_ColorGradient>
struct KeyValuePairEnumerator_t459C98D31C0E5B6DF12D2A38AFF4D7056F792737_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t459C98D31C0E5B6DF12D2A38AFF4D7056F792737_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t459C98D31C0E5B6DF12D2A38AFF4D7056F792737_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t459C98D31C0E5B6DF12D2A38AFF4D7056F792737_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t459C98D31C0E5B6DF12D2A38AFF4D7056F792737(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t459C98D31C0E5B6DF12D2A38AFF4D7056F792737_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t459C98D31C0E5B6DF12D2A38AFF4D7056F792737_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,TMPro.TMP_FontAsset>
struct KeyValuePairEnumerator_tBA97F1C066F794E2F86A5D5A4342502A7C330C60_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBA97F1C066F794E2F86A5D5A4342502A7C330C60_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tBA97F1C066F794E2F86A5D5A4342502A7C330C60_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBA97F1C066F794E2F86A5D5A4342502A7C330C60_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tBA97F1C066F794E2F86A5D5A4342502A7C330C60(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tBA97F1C066F794E2F86A5D5A4342502A7C330C60_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tBA97F1C066F794E2F86A5D5A4342502A7C330C60_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,TMPro.TMP_SpriteAsset>
struct KeyValuePairEnumerator_t3806D1D869D579D581AC01892357BB96EEA91D5F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t3806D1D869D579D581AC01892357BB96EEA91D5F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t3806D1D869D579D581AC01892357BB96EEA91D5F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t3806D1D869D579D581AC01892357BB96EEA91D5F_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t3806D1D869D579D581AC01892357BB96EEA91D5F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t3806D1D869D579D581AC01892357BB96EEA91D5F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t3806D1D869D579D581AC01892357BB96EEA91D5F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,TMPro.TMP_Style>
struct KeyValuePairEnumerator_t3AAE43E0CA6D2F3F03D27CE426D900727B3FAC33_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t3AAE43E0CA6D2F3F03D27CE426D900727B3FAC33_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t3AAE43E0CA6D2F3F03D27CE426D900727B3FAC33_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t3AAE43E0CA6D2F3F03D27CE426D900727B3FAC33_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t3AAE43E0CA6D2F3F03D27CE426D900727B3FAC33(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t3AAE43E0CA6D2F3F03D27CE426D900727B3FAC33_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t3AAE43E0CA6D2F3F03D27CE426D900727B3FAC33_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.Threading.Tasks.Task>
struct KeyValuePairEnumerator_t21957ACE204A9EA28B0CCADE617659F7305EB3EE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t21957ACE204A9EA28B0CCADE617659F7305EB3EE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t21957ACE204A9EA28B0CCADE617659F7305EB3EE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t21957ACE204A9EA28B0CCADE617659F7305EB3EE_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t21957ACE204A9EA28B0CCADE617659F7305EB3EE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t21957ACE204A9EA28B0CCADE617659F7305EB3EE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t21957ACE204A9EA28B0CCADE617659F7305EB3EE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,System.TimeType>
struct KeyValuePairEnumerator_tD72B8F6634657F501EAD66BFC5E755AC27024690_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tD72B8F6634657F501EAD66BFC5E755AC27024690_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tD72B8F6634657F501EAD66BFC5E755AC27024690_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tD72B8F6634657F501EAD66BFC5E755AC27024690_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tD72B8F6634657F501EAD66BFC5E755AC27024690(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tD72B8F6634657F501EAD66BFC5E755AC27024690_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tD72B8F6634657F501EAD66BFC5E755AC27024690_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>
struct KeyValuePairEnumerator_tCA8B692EA96CC320662EE1F670DC641716C077B4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tCA8B692EA96CC320662EE1F670DC641716C077B4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tCA8B692EA96CC320662EE1F670DC641716C077B4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tCA8B692EA96CC320662EE1F670DC641716C077B4_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tCA8B692EA96CC320662EE1F670DC641716C077B4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tCA8B692EA96CC320662EE1F670DC641716C077B4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tCA8B692EA96CC320662EE1F670DC641716C077B4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct KeyValuePairEnumerator_tB2D30E8C4BF04CC711ECBC5176D998B2AA47D8A9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tB2D30E8C4BF04CC711ECBC5176D998B2AA47D8A9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tB2D30E8C4BF04CC711ECBC5176D998B2AA47D8A9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tB2D30E8C4BF04CC711ECBC5176D998B2AA47D8A9_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tB2D30E8C4BF04CC711ECBC5176D998B2AA47D8A9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tB2D30E8C4BF04CC711ECBC5176D998B2AA47D8A9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tB2D30E8C4BF04CC711ECBC5176D998B2AA47D8A9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyValuePairEnumerator_t2F593DF71AB4F3AB6AEB2CF1C774AF14D8144B2F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t2F593DF71AB4F3AB6AEB2CF1C774AF14D8144B2F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t2F593DF71AB4F3AB6AEB2CF1C774AF14D8144B2F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t2F593DF71AB4F3AB6AEB2CF1C774AF14D8144B2F_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t2F593DF71AB4F3AB6AEB2CF1C774AF14D8144B2F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t2F593DF71AB4F3AB6AEB2CF1C774AF14D8144B2F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t2F593DF71AB4F3AB6AEB2CF1C774AF14D8144B2F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct KeyValuePairEnumerator_tCF781AC81063035A2F94C27431B4522AE6B24E6C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tCF781AC81063035A2F94C27431B4522AE6B24E6C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tCF781AC81063035A2F94C27431B4522AE6B24E6C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tCF781AC81063035A2F94C27431B4522AE6B24E6C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tCF781AC81063035A2F94C27431B4522AE6B24E6C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tCF781AC81063035A2F94C27431B4522AE6B24E6C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tCF781AC81063035A2F94C27431B4522AE6B24E6C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Int64,TMPro.TMP_MaterialManager/FallbackMaterial>
struct KeyValuePairEnumerator_tAA8182F2A92C1A1497A4CF711BF1C8C52EBB0C20_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tAA8182F2A92C1A1497A4CF711BF1C8C52EBB0C20_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tAA8182F2A92C1A1497A4CF711BF1C8C52EBB0C20_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tAA8182F2A92C1A1497A4CF711BF1C8C52EBB0C20_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tAA8182F2A92C1A1497A4CF711BF1C8C52EBB0C20(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tAA8182F2A92C1A1497A4CF711BF1C8C52EBB0C20_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tAA8182F2A92C1A1497A4CF711BF1C8C52EBB0C20_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct KeyValuePairEnumerator_tD954C44629C85B04E5A5F4B8AA6E724811EBF8FE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tD954C44629C85B04E5A5F4B8AA6E724811EBF8FE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tD954C44629C85B04E5A5F4B8AA6E724811EBF8FE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tD954C44629C85B04E5A5F4B8AA6E724811EBF8FE_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tD954C44629C85B04E5A5F4B8AA6E724811EBF8FE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tD954C44629C85B04E5A5F4B8AA6E724811EBF8FE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tD954C44629C85B04E5A5F4B8AA6E724811EBF8FE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct KeyValuePairEnumerator_t225A07D73281E9FD054B4C539F77606CBE948F26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t225A07D73281E9FD054B4C539F77606CBE948F26_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t225A07D73281E9FD054B4C539F77606CBE948F26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t225A07D73281E9FD054B4C539F77606CBE948F26_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t225A07D73281E9FD054B4C539F77606CBE948F26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t225A07D73281E9FD054B4C539F77606CBE948F26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t225A07D73281E9FD054B4C539F77606CBE948F26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct KeyValuePairEnumerator_t4BFCA1D836BB74F35DB06177401D01EC36567A80_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4BFCA1D836BB74F35DB06177401D01EC36567A80_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t4BFCA1D836BB74F35DB06177401D01EC36567A80_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4BFCA1D836BB74F35DB06177401D01EC36567A80_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t4BFCA1D836BB74F35DB06177401D01EC36567A80(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t4BFCA1D836BB74F35DB06177401D01EC36567A80_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t4BFCA1D836BB74F35DB06177401D01EC36567A80_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct KeyValuePairEnumerator_t0DD206B5E227CD388E59CB4104CE89BBA855797E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0DD206B5E227CD388E59CB4104CE89BBA855797E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t0DD206B5E227CD388E59CB4104CE89BBA855797E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0DD206B5E227CD388E59CB4104CE89BBA855797E_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t0DD206B5E227CD388E59CB4104CE89BBA855797E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t0DD206B5E227CD388E59CB4104CE89BBA855797E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t0DD206B5E227CD388E59CB4104CE89BBA855797E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct KeyValuePairEnumerator_t0FAA8C866D22D0EB217E1C98033EB515258426A1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0FAA8C866D22D0EB217E1C98033EB515258426A1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t0FAA8C866D22D0EB217E1C98033EB515258426A1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0FAA8C866D22D0EB217E1C98033EB515258426A1_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t0FAA8C866D22D0EB217E1C98033EB515258426A1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t0FAA8C866D22D0EB217E1C98033EB515258426A1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t0FAA8C866D22D0EB217E1C98033EB515258426A1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct KeyValuePairEnumerator_tF71A3EC39D1CEE18D36989672BA83A7FBFEAD82E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF71A3EC39D1CEE18D36989672BA83A7FBFEAD82E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tF71A3EC39D1CEE18D36989672BA83A7FBFEAD82E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF71A3EC39D1CEE18D36989672BA83A7FBFEAD82E_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tF71A3EC39D1CEE18D36989672BA83A7FBFEAD82E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tF71A3EC39D1CEE18D36989672BA83A7FBFEAD82E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tF71A3EC39D1CEE18D36989672BA83A7FBFEAD82E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout>
struct KeyValuePairEnumerator_t24340D454C38975E3C3DB4AB952B3F297329D81C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t24340D454C38975E3C3DB4AB952B3F297329D81C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t24340D454C38975E3C3DB4AB952B3F297329D81C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t24340D454C38975E3C3DB4AB952B3F297329D81C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t24340D454C38975E3C3DB4AB952B3F297329D81C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t24340D454C38975E3C3DB4AB952B3F297329D81C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t24340D454C38975E3C3DB4AB952B3F297329D81C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.KeyCode,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.InputAction>
struct KeyValuePairEnumerator_t10E4819890AC4CDD029AEB26EFE6A14778D878CF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t10E4819890AC4CDD029AEB26EFE6A14778D878CF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t10E4819890AC4CDD029AEB26EFE6A14778D878CF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t10E4819890AC4CDD029AEB26EFE6A14778D878CF_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t10E4819890AC4CDD029AEB26EFE6A14778D878CF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t10E4819890AC4CDD029AEB26EFE6A14778D878CF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t10E4819890AC4CDD029AEB26EFE6A14778D878CF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]>
struct KeyValuePairEnumerator_t90E32A8D3EE2584017F61BE8C1A58C870B46D1A3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t90E32A8D3EE2584017F61BE8C1A58C870B46D1A3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t90E32A8D3EE2584017F61BE8C1A58C870B46D1A3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t90E32A8D3EE2584017F61BE8C1A58C870B46D1A3_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t90E32A8D3EE2584017F61BE8C1A58C870B46D1A3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t90E32A8D3EE2584017F61BE8C1A58C870B46D1A3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t90E32A8D3EE2584017F61BE8C1A58C870B46D1A3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Mesh,Microsoft.MixedReality.Toolkit.Utilities.MeshSmoother/MeshReference>
struct KeyValuePairEnumerator_t51386F5E69F8CB58D70F1E4FAA82BECBAECB3E00_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t51386F5E69F8CB58D70F1E4FAA82BECBAECB3E00_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t51386F5E69F8CB58D70F1E4FAA82BECBAECB3E00_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t51386F5E69F8CB58D70F1E4FAA82BECBAECB3E00_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t51386F5E69F8CB58D70F1E4FAA82BECBAECB3E00(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t51386F5E69F8CB58D70F1E4FAA82BECBAECB3E00_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t51386F5E69F8CB58D70F1E4FAA82BECBAECB3E00_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>
struct KeyValuePairEnumerator_t275E15FF8526D1016AC3A65138EE99F751B627BB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t275E15FF8526D1016AC3A65138EE99F751B627BB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t275E15FF8526D1016AC3A65138EE99F751B627BB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t275E15FF8526D1016AC3A65138EE99F751B627BB_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t275E15FF8526D1016AC3A65138EE99F751B627BB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t275E15FF8526D1016AC3A65138EE99F751B627BB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t275E15FF8526D1016AC3A65138EE99F751B627BB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct KeyValuePairEnumerator_t0B9049F2BFB6456E6C4B76DFA344A08EE31430A7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0B9049F2BFB6456E6C4B76DFA344A08EE31430A7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t0B9049F2BFB6456E6C4B76DFA344A08EE31430A7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0B9049F2BFB6456E6C4B76DFA344A08EE31430A7_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t0B9049F2BFB6456E6C4B76DFA344A08EE31430A7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t0B9049F2BFB6456E6C4B76DFA344A08EE31430A7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t0B9049F2BFB6456E6C4B76DFA344A08EE31430A7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.UI.PinchSlider,Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane>
struct KeyValuePairEnumerator_t44B0856AA2F8BB999F384D7E239B2A3EB70A609F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t44B0856AA2F8BB999F384D7E239B2A3EB70A609F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t44B0856AA2F8BB999F384D7E239B2A3EB70A609F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t44B0856AA2F8BB999F384D7E239B2A3EB70A609F_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t44B0856AA2F8BB999F384D7E239B2A3EB70A609F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t44B0856AA2F8BB999F384D7E239B2A3EB70A609F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t44B0856AA2F8BB999F384D7E239B2A3EB70A609F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.RenderMode,UnityEngine.Material>
struct KeyValuePairEnumerator_tD779DAAEA74BC14DD33BEA9E63780FE4E8329FC7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tD779DAAEA74BC14DD33BEA9E63780FE4E8329FC7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tD779DAAEA74BC14DD33BEA9E63780FE4E8329FC7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tD779DAAEA74BC14DD33BEA9E63780FE4E8329FC7_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tD779DAAEA74BC14DD33BEA9E63780FE4E8329FC7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tD779DAAEA74BC14DD33BEA9E63780FE4E8329FC7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tD779DAAEA74BC14DD33BEA9E63780FE4E8329FC7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>
struct KeyValuePairEnumerator_tE062AFB758967ABB165458094FEBBC3C3F7180F5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tE062AFB758967ABB165458094FEBBC3C3F7180F5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tE062AFB758967ABB165458094FEBBC3C3F7180F5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tE062AFB758967ABB165458094FEBBC3C3F7180F5_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tE062AFB758967ABB165458094FEBBC3C3F7180F5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tE062AFB758967ABB165458094FEBBC3C3F7180F5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tE062AFB758967ABB165458094FEBBC3C3F7180F5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Renderer,Microsoft.MixedReality.Toolkit.Rendering.MaterialInstance>
struct KeyValuePairEnumerator_t8F1961D8CE0F6D55312E1BF05BF1D3CE87492D5C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t8F1961D8CE0F6D55312E1BF05BF1D3CE87492D5C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t8F1961D8CE0F6D55312E1BF05BF1D3CE87492D5C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t8F1961D8CE0F6D55312E1BF05BF1D3CE87492D5C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t8F1961D8CE0F6D55312E1BF05BF1D3CE87492D5C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t8F1961D8CE0F6D55312E1BF05BF1D3CE87492D5C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t8F1961D8CE0F6D55312E1BF05BF1D3CE87492D5C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind,System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.RenderMode,UnityEngine.Material>>
struct KeyValuePairEnumerator_t89637FBA2AB8D234D3BDF54553061249D5943304_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t89637FBA2AB8D234D3BDF54553061249D5943304_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t89637FBA2AB8D234D3BDF54553061249D5943304_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t89637FBA2AB8D234D3BDF54553061249D5943304_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t89637FBA2AB8D234D3BDF54553061249D5943304(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t89637FBA2AB8D234D3BDF54553061249D5943304_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t89637FBA2AB8D234D3BDF54553061249D5943304_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Collections.Generic.List`1<System.Int32>>
struct KeyValuePairEnumerator_t42E6061C35F9732F2B02D24F658E48824796245F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t42E6061C35F9732F2B02D24F658E48824796245F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t42E6061C35F9732F2B02D24F658E48824796245F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t42E6061C35F9732F2B02D24F658E48824796245F_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t42E6061C35F9732F2B02D24F658E48824796245F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t42E6061C35F9732F2B02D24F658E48824796245F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t42E6061C35F9732F2B02D24F658E48824796245F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Collections.Generic.List`1<UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding>>
struct KeyValuePairEnumerator_tA94E81BAD48E3FF15880581D73BDF32A50BA3CC1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA94E81BAD48E3FF15880581D73BDF32A50BA3CC1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tA94E81BAD48E3FF15880581D73BDF32A50BA3CC1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA94E81BAD48E3FF15880581D73BDF32A50BA3CC1_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tA94E81BAD48E3FF15880581D73BDF32A50BA3CC1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tA94E81BAD48E3FF15880581D73BDF32A50BA3CC1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tA94E81BAD48E3FF15880581D73BDF32A50BA3CC1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct KeyValuePairEnumerator_tE4149D151D04C681BF54F94D02A08DD25A7EAEF6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tE4149D151D04C681BF54F94D02A08DD25A7EAEF6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tE4149D151D04C681BF54F94D02A08DD25A7EAEF6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tE4149D151D04C681BF54F94D02A08DD25A7EAEF6_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tE4149D151D04C681BF54F94D02A08DD25A7EAEF6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tE4149D151D04C681BF54F94D02A08DD25A7EAEF6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tE4149D151D04C681BF54F94D02A08DD25A7EAEF6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.WeakReference`1<WinRT.DllModule>>
struct KeyValuePairEnumerator_t046F0B224D83F4D36EB24B3B4066464E04DCC4A7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t046F0B224D83F4D36EB24B3B4066464E04DCC4A7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t046F0B224D83F4D36EB24B3B4066464E04DCC4A7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t046F0B224D83F4D36EB24B3B4066464E04DCC4A7_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t046F0B224D83F4D36EB24B3B4066464E04DCC4A7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t046F0B224D83F4D36EB24B3B4066464E04DCC4A7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t046F0B224D83F4D36EB24B3B4066464E04DCC4A7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Globalization.CultureInfo>
struct KeyValuePairEnumerator_tF4635403BB4F94836FE13A2E37D1DBDA3E37E12D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF4635403BB4F94836FE13A2E37D1DBDA3E37E12D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tF4635403BB4F94836FE13A2E37D1DBDA3E37E12D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF4635403BB4F94836FE13A2E37D1DBDA3E37E12D_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tF4635403BB4F94836FE13A2E37D1DBDA3E37E12D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tF4635403BB4F94836FE13A2E37D1DBDA3E37E12D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tF4635403BB4F94836FE13A2E37D1DBDA3E37E12D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.GUIStyle>
struct KeyValuePairEnumerator_tCA85338FA686FC49A0D4EB7833197ABE4F90C080_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tCA85338FA686FC49A0D4EB7833197ABE4F90C080_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tCA85338FA686FC49A0D4EB7833197ABE4F90C080_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tCA85338FA686FC49A0D4EB7833197ABE4F90C080_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tCA85338FA686FC49A0D4EB7833197ABE4F90C080(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tCA85338FA686FC49A0D4EB7833197ABE4F90C080_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tCA85338FA686FC49A0D4EB7833197ABE4F90C080_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.GameObject>
struct KeyValuePairEnumerator_tAA2D36029596064DFEA098DA662FFB3E2C8E49BC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tAA2D36029596064DFEA098DA662FFB3E2C8E49BC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tAA2D36029596064DFEA098DA662FFB3E2C8E49BC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tAA2D36029596064DFEA098DA662FFB3E2C8E49BC_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tAA2D36029596064DFEA098DA662FFB3E2C8E49BC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tAA2D36029596064DFEA098DA662FFB3E2C8E49BC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tAA2D36029596064DFEA098DA662FFB3E2C8E49BC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,Microsoft.MixedReality.Toolkit.Utilities.GameObjectManagement.GameObjectCreator>
struct KeyValuePairEnumerator_tA92746FB1D58EDD1AFE94F96A1A8F0D6A09BD608_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA92746FB1D58EDD1AFE94F96A1A8F0D6A09BD608_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tA92746FB1D58EDD1AFE94F96A1A8F0D6A09BD608_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA92746FB1D58EDD1AFE94F96A1A8F0D6A09BD608_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tA92746FB1D58EDD1AFE94F96A1A8F0D6A09BD608(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tA92746FB1D58EDD1AFE94F96A1A8F0D6A09BD608_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tA92746FB1D58EDD1AFE94F96A1A8F0D6A09BD608_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController>
struct KeyValuePairEnumerator_t3073D573B3FE8FD28BCA42DE46AA7396CF61F1B2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t3073D573B3FE8FD28BCA42DE46AA7396CF61F1B2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t3073D573B3FE8FD28BCA42DE46AA7396CF61F1B2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t3073D573B3FE8FD28BCA42DE46AA7396CF61F1B2_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t3073D573B3FE8FD28BCA42DE46AA7396CF61F1B2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t3073D573B3FE8FD28BCA42DE46AA7396CF61F1B2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t3073D573B3FE8FD28BCA42DE46AA7396CF61F1B2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.InputAction>
struct KeyValuePairEnumerator_tB12F0D62548A92CF95ED23CCA7C1DD5F6DB8F418_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tB12F0D62548A92CF95ED23CCA7C1DD5F6DB8F418_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tB12F0D62548A92CF95ED23CCA7C1DD5F6DB8F418_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tB12F0D62548A92CF95ED23CCA7C1DD5F6DB8F418_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tB12F0D62548A92CF95ED23CCA7C1DD5F6DB8F418(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tB12F0D62548A92CF95ED23CCA7C1DD5F6DB8F418_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tB12F0D62548A92CF95ED23CCA7C1DD5F6DB8F418_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Int32>
struct KeyValuePairEnumerator_tBF6C8ABEA9E80CC4C384D74CA0086845FC0C0955_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBF6C8ABEA9E80CC4C384D74CA0086845FC0C0955_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tBF6C8ABEA9E80CC4C384D74CA0086845FC0C0955_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBF6C8ABEA9E80CC4C384D74CA0086845FC0C0955_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tBF6C8ABEA9E80CC4C384D74CA0086845FC0C0955(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tBF6C8ABEA9E80CC4C384D74CA0086845FC0C0955_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tBF6C8ABEA9E80CC4C384D74CA0086845FC0C0955_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.LocalDataStoreSlot>
struct KeyValuePairEnumerator_t325987A86C779622CCD101E8B94B7AD5B35A8F60_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t325987A86C779622CCD101E8B94B7AD5B35A8F60_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t325987A86C779622CCD101E8B94B7AD5B35A8F60_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t325987A86C779622CCD101E8B94B7AD5B35A8F60_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t325987A86C779622CCD101E8B94B7AD5B35A8F60(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t325987A86C779622CCD101E8B94B7AD5B35A8F60_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t325987A86C779622CCD101E8B94B7AD5B35A8F60_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Object>
struct KeyValuePairEnumerator_t071FD5A5B9A6D1D470057C6D583C15E4E270C34A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t071FD5A5B9A6D1D470057C6D583C15E4E270C34A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t071FD5A5B9A6D1D470057C6D583C15E4E270C34A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t071FD5A5B9A6D1D470057C6D583C15E4E270C34A_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t071FD5A5B9A6D1D470057C6D583C15E4E270C34A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t071FD5A5B9A6D1D470057C6D583C15E4E270C34A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t071FD5A5B9A6D1D470057C6D583C15E4E270C34A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Resources.ResourceLocator>
struct KeyValuePairEnumerator_t0F8189AD5BA238A344CD5881CEB74667A10B11ED_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0F8189AD5BA238A344CD5881CEB74667A10B11ED_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t0F8189AD5BA238A344CD5881CEB74667A10B11ED_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0F8189AD5BA238A344CD5881CEB74667A10B11ED_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t0F8189AD5BA238A344CD5881CEB74667A10B11ED(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t0F8189AD5BA238A344CD5881CEB74667A10B11ED_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t0F8189AD5BA238A344CD5881CEB74667A10B11ED_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Resources.ResourceSet>
struct KeyValuePairEnumerator_tA9E8EFE6BC3AA13BEB665B98F3FE3DD65C99B84F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA9E8EFE6BC3AA13BEB665B98F3FE3DD65C99B84F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tA9E8EFE6BC3AA13BEB665B98F3FE3DD65C99B84F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA9E8EFE6BC3AA13BEB665B98F3FE3DD65C99B84F_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tA9E8EFE6BC3AA13BEB665B98F3FE3DD65C99B84F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tA9E8EFE6BC3AA13BEB665B98F3FE3DD65C99B84F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tA9E8EFE6BC3AA13BEB665B98F3FE3DD65C99B84F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,Mono.Globalization.Unicode.SimpleCollator>
struct KeyValuePairEnumerator_t635DCEC837D7F53965DDCDCDF89F23D08CFB4BFC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t635DCEC837D7F53965DDCDCDF89F23D08CFB4BFC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t635DCEC837D7F53965DDCDCDF89F23D08CFB4BFC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t635DCEC837D7F53965DDCDCDF89F23D08CFB4BFC_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t635DCEC837D7F53965DDCDCDF89F23D08CFB4BFC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t635DCEC837D7F53965DDCDCDF89F23D08CFB4BFC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t635DCEC837D7F53965DDCDCDF89F23D08CFB4BFC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,Windows.Perception.Spatial.SpatialAnchor>
struct KeyValuePairEnumerator_t5F9A5FF65DD9A39E58D6C9C70BC3E2D05A2BEEDD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t5F9A5FF65DD9A39E58D6C9C70BC3E2D05A2BEEDD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t5F9A5FF65DD9A39E58D6C9C70BC3E2D05A2BEEDD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t5F9A5FF65DD9A39E58D6C9C70BC3E2D05A2BEEDD_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t5F9A5FF65DD9A39E58D6C9C70BC3E2D05A2BEEDD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t5F9A5FF65DD9A39E58D6C9C70BC3E2D05A2BEEDD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t5F9A5FF65DD9A39E58D6C9C70BC3E2D05A2BEEDD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.Sprite>
struct KeyValuePairEnumerator_t9A6A7377AA28B699E5D69CBAB542C5A8FE7388B2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t9A6A7377AA28B699E5D69CBAB542C5A8FE7388B2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t9A6A7377AA28B699E5D69CBAB542C5A8FE7388B2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t9A6A7377AA28B699E5D69CBAB542C5A8FE7388B2_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t9A6A7377AA28B699E5D69CBAB542C5A8FE7388B2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t9A6A7377AA28B699E5D69CBAB542C5A8FE7388B2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t9A6A7377AA28B699E5D69CBAB542C5A8FE7388B2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.String>
struct KeyValuePairEnumerator_t0A80CA52CB22DC07962B25009F08158C18780222_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0A80CA52CB22DC07962B25009F08158C18780222_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t0A80CA52CB22DC07962B25009F08158C18780222_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0A80CA52CB22DC07962B25009F08158C18780222_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t0A80CA52CB22DC07962B25009F08158C18780222(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t0A80CA52CB22DC07962B25009F08158C18780222_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t0A80CA52CB22DC07962B25009F08158C18780222_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.Texture2D>
struct KeyValuePairEnumerator_tF2D86CD25B3943058F55C660E352FB3F27C928AF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF2D86CD25B3943058F55C660E352FB3F27C928AF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tF2D86CD25B3943058F55C660E352FB3F27C928AF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF2D86CD25B3943058F55C660E352FB3F27C928AF_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tF2D86CD25B3943058F55C660E352FB3F27C928AF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tF2D86CD25B3943058F55C660E352FB3F27C928AF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tF2D86CD25B3943058F55C660E352FB3F27C928AF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.Type>
struct KeyValuePairEnumerator_t1CBEA2E48AD428CE29A68EC265EC8F29C4B98B91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t1CBEA2E48AD428CE29A68EC265EC8F29C4B98B91_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t1CBEA2E48AD428CE29A68EC265EC8F29C4B98B91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t1CBEA2E48AD428CE29A68EC265EC8F29C4B98B91_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t1CBEA2E48AD428CE29A68EC265EC8F29C4B98B91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t1CBEA2E48AD428CE29A68EC265EC8F29C4B98B91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t1CBEA2E48AD428CE29A68EC265EC8F29C4B98B91_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.UInt32>
struct KeyValuePairEnumerator_t007A6069E983BD9543DF1A7428013F4BE89766AF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t007A6069E983BD9543DF1A7428013F4BE89766AF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t007A6069E983BD9543DF1A7428013F4BE89766AF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t007A6069E983BD9543DF1A7428013F4BE89766AF_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t007A6069E983BD9543DF1A7428013F4BE89766AF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t007A6069E983BD9543DF1A7428013F4BE89766AF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t007A6069E983BD9543DF1A7428013F4BE89766AF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.Events.UnityEvent>
struct KeyValuePairEnumerator_t4E56860CD799B4D7111C6374D5CE10C868293D42_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4E56860CD799B4D7111C6374D5CE10C868293D42_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t4E56860CD799B4D7111C6374D5CE10C868293D42_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4E56860CD799B4D7111C6374D5CE10C868293D42_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t4E56860CD799B4D7111C6374D5CE10C868293D42(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t4E56860CD799B4D7111C6374D5CE10C868293D42_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t4E56860CD799B4D7111C6374D5CE10C868293D42_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,System.UriParser>
struct KeyValuePairEnumerator_t7B58288FC0AB1B34DF40CDB41D0A1D2CEF9F2024_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t7B58288FC0AB1B34DF40CDB41D0A1D2CEF9F2024_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t7B58288FC0AB1B34DF40CDB41D0A1D2CEF9F2024_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t7B58288FC0AB1B34DF40CDB41D0A1D2CEF9F2024_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t7B58288FC0AB1B34DF40CDB41D0A1D2CEF9F2024(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t7B58288FC0AB1B34DF40CDB41D0A1D2CEF9F2024_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t7B58288FC0AB1B34DF40CDB41D0A1D2CEF9F2024_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct KeyValuePairEnumerator_tF5F850E1D9BA8B6A9DFD472937CF681059F78A26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF5F850E1D9BA8B6A9DFD472937CF681059F78A26_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tF5F850E1D9BA8B6A9DFD472937CF681059F78A26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF5F850E1D9BA8B6A9DFD472937CF681059F78A26_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tF5F850E1D9BA8B6A9DFD472937CF681059F78A26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tF5F850E1D9BA8B6A9DFD472937CF681059F78A26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tF5F850E1D9BA8B6A9DFD472937CF681059F78A26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct KeyValuePairEnumerator_t118D2C9F98E6EAC3B58C7133A5B024E3DF0D2BC3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t118D2C9F98E6EAC3B58C7133A5B024E3DF0D2BC3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t118D2C9F98E6EAC3B58C7133A5B024E3DF0D2BC3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t118D2C9F98E6EAC3B58C7133A5B024E3DF0D2BC3_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t118D2C9F98E6EAC3B58C7133A5B024E3DF0D2BC3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t118D2C9F98E6EAC3B58C7133A5B024E3DF0D2BC3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t118D2C9F98E6EAC3B58C7133A5B024E3DF0D2BC3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate>
struct KeyValuePairEnumerator_t3DB51236BE8856DD02F34E62268F00B5CB0B820B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t3DB51236BE8856DD02F34E62268F00B5CB0B820B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t3DB51236BE8856DD02F34E62268F00B5CB0B820B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t3DB51236BE8856DD02F34E62268F00B5CB0B820B_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t3DB51236BE8856DD02F34E62268F00B5CB0B820B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t3DB51236BE8856DD02F34E62268F00B5CB0B820B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t3DB51236BE8856DD02F34E62268F00B5CB0B820B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate>
struct KeyValuePairEnumerator_t4AFD793680291E561E35835961ED90CF2C242928_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4AFD793680291E561E35835961ED90CF2C242928_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t4AFD793680291E561E35835961ED90CF2C242928_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4AFD793680291E561E35835961ED90CF2C242928_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t4AFD793680291E561E35835961ED90CF2C242928(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t4AFD793680291E561E35835961ED90CF2C242928_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t4AFD793680291E561E35835961ED90CF2C242928_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.String,UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature/ActionType>
struct KeyValuePairEnumerator_tBA5D46FD672B487180AC69F15459F0041A9FE95E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBA5D46FD672B487180AC69F15459F0041A9FE95E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tBA5D46FD672B487180AC69F15459F0041A9FE95E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBA5D46FD672B487180AC69F15459F0041A9FE95E_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tBA5D46FD672B487180AC69F15459F0041A9FE95E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tBA5D46FD672B487180AC69F15459F0041A9FE95E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tBA5D46FD672B487180AC69F15459F0041A9FE95E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.UI.ThemeStateProperty,Microsoft.MixedReality.Toolkit.UI.ThemePropertyValue>
struct KeyValuePairEnumerator_tBD214A16C2682A93F88813A7116D7A4ECEC26915_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBD214A16C2682A93F88813A7116D7A4ECEC26915_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tBD214A16C2682A93F88813A7116D7A4ECEC26915_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBD214A16C2682A93F88813A7116D7A4ECEC26915_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tBD214A16C2682A93F88813A7116D7A4ECEC26915(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tBD214A16C2682A93F88813A7116D7A4ECEC26915_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tBD214A16C2682A93F88813A7116D7A4ECEC26915_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct KeyValuePairEnumerator_t4698AB94628297C4BC0245820215FBA3B11BED57_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4698AB94628297C4BC0245820215FBA3B11BED57_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t4698AB94628297C4BC0245820215FBA3B11BED57_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4698AB94628297C4BC0245820215FBA3B11BED57_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t4698AB94628297C4BC0245820215FBA3B11BED57(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t4698AB94628297C4BC0245820215FBA3B11BED57_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t4698AB94628297C4BC0245820215FBA3B11BED57_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct KeyValuePairEnumerator_t12E82BB83392B06191C49940CB45AEFF664CDF28_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t12E82BB83392B06191C49940CB45AEFF664CDF28_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t12E82BB83392B06191C49940CB45AEFF664CDF28_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t12E82BB83392B06191C49940CB45AEFF664CDF28_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t12E82BB83392B06191C49940CB45AEFF664CDF28(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t12E82BB83392B06191C49940CB45AEFF664CDF28_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t12E82BB83392B06191C49940CB45AEFF664CDF28_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct KeyValuePairEnumerator_t2360051C7073E4CB658F36CEE1AB77FBC2D29ED4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t2360051C7073E4CB658F36CEE1AB77FBC2D29ED4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t2360051C7073E4CB658F36CEE1AB77FBC2D29ED4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t2360051C7073E4CB658F36CEE1AB77FBC2D29ED4_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t2360051C7073E4CB658F36CEE1AB77FBC2D29ED4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t2360051C7073E4CB658F36CEE1AB77FBC2D29ED4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t2360051C7073E4CB658F36CEE1AB77FBC2D29ED4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyValuePairEnumerator_tE3EB7EDAF0F86B9E492E82E4EB9123E340CE3CFD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tE3EB7EDAF0F86B9E492E82E4EB9123E340CE3CFD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tE3EB7EDAF0F86B9E492E82E4EB9123E340CE3CFD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tE3EB7EDAF0F86B9E492E82E4EB9123E340CE3CFD_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tE3EB7EDAF0F86B9E492E82E4EB9123E340CE3CFD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tE3EB7EDAF0F86B9E492E82E4EB9123E340CE3CFD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tE3EB7EDAF0F86B9E492E82E4EB9123E340CE3CFD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,System.Single>
struct KeyValuePairEnumerator_tA850AE0AFA0DAE1AA8021BB5FCC4C1626B9BB22D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA850AE0AFA0DAE1AA8021BB5FCC4C1626B9BB22D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tA850AE0AFA0DAE1AA8021BB5FCC4C1626B9BB22D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA850AE0AFA0DAE1AA8021BB5FCC4C1626B9BB22D_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tA850AE0AFA0DAE1AA8021BB5FCC4C1626B9BB22D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tA850AE0AFA0DAE1AA8021BB5FCC4C1626B9BB22D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tA850AE0AFA0DAE1AA8021BB5FCC4C1626B9BB22D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform>
struct KeyValuePairEnumerator_t60A6F5F93C3CECB3435AD44D5D65D15B142C9702_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t60A6F5F93C3CECB3435AD44D5D65D15B142C9702_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t60A6F5F93C3CECB3435AD44D5D65D15B142C9702_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t60A6F5F93C3CECB3435AD44D5D65D15B142C9702_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t60A6F5F93C3CECB3435AD44D5D65D15B142C9702(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t60A6F5F93C3CECB3435AD44D5D65D15B142C9702_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t60A6F5F93C3CECB3435AD44D5D65D15B142C9702_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct KeyValuePairEnumerator_t24A5836A11C78BCB4E87F45687E7C5839EBBA080_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t24A5836A11C78BCB4E87F45687E7C5839EBBA080_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t24A5836A11C78BCB4E87F45687E7C5839EBBA080_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t24A5836A11C78BCB4E87F45687E7C5839EBBA080_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t24A5836A11C78BCB4E87F45687E7C5839EBBA080(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t24A5836A11C78BCB4E87F45687E7C5839EBBA080_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t24A5836A11C78BCB4E87F45687E7C5839EBBA080_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<Microsoft.MixedReality.Toolkit.IMixedRealityService,Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar>>>
struct KeyValuePairEnumerator_t0E5CDE96FCB79103CDEBF866ED514C5206003C46_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0E5CDE96FCB79103CDEBF866ED514C5206003C46_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t0E5CDE96FCB79103CDEBF866ED514C5206003C46_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0E5CDE96FCB79103CDEBF866ED514C5206003C46_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t0E5CDE96FCB79103CDEBF866ED514C5206003C46(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t0E5CDE96FCB79103CDEBF866ED514C5206003C46_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t0E5CDE96FCB79103CDEBF866ED514C5206003C46_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.Collections.Generic.List`1<System.Type>>
struct KeyValuePairEnumerator_tB7163A507F1615F15FF964B71B0F92F84481DF25_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tB7163A507F1615F15FF964B71B0F92F84481DF25_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tB7163A507F1615F15FF964B71B0F92F84481DF25_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tB7163A507F1615F15FF964B71B0F92F84481DF25_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tB7163A507F1615F15FF964B71B0F92F84481DF25(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tB7163A507F1615F15FF964B71B0F92F84481DF25_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tB7163A507F1615F15FF964B71B0F92F84481DF25_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct KeyValuePairEnumerator_t29C25CE81373AF3332BFF35302D095A4113145F8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t29C25CE81373AF3332BFF35302D095A4113145F8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t29C25CE81373AF3332BFF35302D095A4113145F8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t29C25CE81373AF3332BFF35302D095A4113145F8_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t29C25CE81373AF3332BFF35302D095A4113145F8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t29C25CE81373AF3332BFF35302D095A4113145F8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t29C25CE81373AF3332BFF35302D095A4113145F8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.WeakReference`1<Microsoft.MixedReality.Toolkit.IMixedRealityService>>
struct KeyValuePairEnumerator_t08B7245C8C76ECF136EC92C2AD3A169F83FB8F78_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t08B7245C8C76ECF136EC92C2AD3A169F83FB8F78_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t08B7245C8C76ECF136EC92C2AD3A169F83FB8F78_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t08B7245C8C76ECF136EC92C2AD3A169F83FB8F78_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t08B7245C8C76ECF136EC92C2AD3A169F83FB8F78(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t08B7245C8C76ECF136EC92C2AD3A169F83FB8F78_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t08B7245C8C76ECF136EC92C2AD3A169F83FB8F78_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.AttributeUsageAttribute>
struct KeyValuePairEnumerator_tA55FBE107D95C54AAE54B0385BE48B4C22BB6768_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA55FBE107D95C54AAE54B0385BE48B4C22BB6768_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tA55FBE107D95C54AAE54B0385BE48B4C22BB6768_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tA55FBE107D95C54AAE54B0385BE48B4C22BB6768_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tA55FBE107D95C54AAE54B0385BE48B4C22BB6768(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tA55FBE107D95C54AAE54B0385BE48B4C22BB6768_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tA55FBE107D95C54AAE54B0385BE48B4C22BB6768_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>
struct KeyValuePairEnumerator_t1F6A3033890E16A86FCB3FA91F3AC194EA76936A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t1F6A3033890E16A86FCB3FA91F3AC194EA76936A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t1F6A3033890E16A86FCB3FA91F3AC194EA76936A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t1F6A3033890E16A86FCB3FA91F3AC194EA76936A_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t1F6A3033890E16A86FCB3FA91F3AC194EA76936A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t1F6A3033890E16A86FCB3FA91F3AC194EA76936A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t1F6A3033890E16A86FCB3FA91F3AC194EA76936A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,UnityEngine.ISubsystem>
struct KeyValuePairEnumerator_tE5B4AB46805F8D1810357D7C41E0AE0994A2ECAC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tE5B4AB46805F8D1810357D7C41E0AE0994A2ECAC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tE5B4AB46805F8D1810357D7C41E0AE0994A2ECAC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tE5B4AB46805F8D1810357D7C41E0AE0994A2ECAC_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tE5B4AB46805F8D1810357D7C41E0AE0994A2ECAC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tE5B4AB46805F8D1810357D7C41E0AE0994A2ECAC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tE5B4AB46805F8D1810357D7C41E0AE0994A2ECAC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,Microsoft.MixedReality.Toolkit.Utilities.Facades.ServiceFacade>
struct KeyValuePairEnumerator_tC54893F7F0DAFFDD598B239DDE475DF12FA58BF7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tC54893F7F0DAFFDD598B239DDE475DF12FA58BF7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tC54893F7F0DAFFDD598B239DDE475DF12FA58BF7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tC54893F7F0DAFFDD598B239DDE475DF12FA58BF7_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tC54893F7F0DAFFDD598B239DDE475DF12FA58BF7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tC54893F7F0DAFFDD598B239DDE475DF12FA58BF7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tC54893F7F0DAFFDD598B239DDE475DF12FA58BF7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct KeyValuePairEnumerator_tAF6845CE8C61783E2635DDF085117EF210F0AF20_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tAF6845CE8C61783E2635DDF085117EF210F0AF20_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tAF6845CE8C61783E2635DDF085117EF210F0AF20_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tAF6845CE8C61783E2635DDF085117EF210F0AF20_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tAF6845CE8C61783E2635DDF085117EF210F0AF20(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tAF6845CE8C61783E2635DDF085117EF210F0AF20_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tAF6845CE8C61783E2635DDF085117EF210F0AF20_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Type,System.MonoCustomAttrs/AttributeInfo>
struct KeyValuePairEnumerator_tBFB39BAB07E943677FDD6669EF7443B39313A3BA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBFB39BAB07E943677FDD6669EF7443B39313A3BA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tBFB39BAB07E943677FDD6669EF7443B39313A3BA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBFB39BAB07E943677FDD6669EF7443B39313A3BA_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tBFB39BAB07E943677FDD6669EF7443B39313A3BA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tBFB39BAB07E943677FDD6669EF7443B39313A3BA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tBFB39BAB07E943677FDD6669EF7443B39313A3BA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,System.Boolean>
struct KeyValuePairEnumerator_t3D50C54EB2F419603011F948893B54BF0C4A12C3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t3D50C54EB2F419603011F948893B54BF0C4A12C3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t3D50C54EB2F419603011F948893B54BF0C4A12C3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t3D50C54EB2F419603011F948893B54BF0C4A12C3_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t3D50C54EB2F419603011F948893B54BF0C4A12C3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t3D50C54EB2F419603011F948893B54BF0C4A12C3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t3D50C54EB2F419603011F948893B54BF0C4A12C3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,UnityEngine.TextCore.Glyph>
struct KeyValuePairEnumerator_tD01758B4FEDB8B14452AA492CAA4D29DAED8989D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tD01758B4FEDB8B14452AA492CAA4D29DAED8989D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tD01758B4FEDB8B14452AA492CAA4D29DAED8989D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tD01758B4FEDB8B14452AA492CAA4D29DAED8989D_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tD01758B4FEDB8B14452AA492CAA4D29DAED8989D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tD01758B4FEDB8B14452AA492CAA4D29DAED8989D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tD01758B4FEDB8B14452AA492CAA4D29DAED8989D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct KeyValuePairEnumerator_t9500F9D97349F2746C4663CBCC76B64416841912_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t9500F9D97349F2746C4663CBCC76B64416841912_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t9500F9D97349F2746C4663CBCC76B64416841912_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t9500F9D97349F2746C4663CBCC76B64416841912_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t9500F9D97349F2746C4663CBCC76B64416841912(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t9500F9D97349F2746C4663CBCC76B64416841912_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t9500F9D97349F2746C4663CBCC76B64416841912_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerMediator>
struct KeyValuePairEnumerator_t088B7F0120ADBB1B463B0CFE016F282D977457B0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t088B7F0120ADBB1B463B0CFE016F282D977457B0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t088B7F0120ADBB1B463B0CFE016F282D977457B0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t088B7F0120ADBB1B463B0CFE016F282D977457B0_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t088B7F0120ADBB1B463B0CFE016F282D977457B0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t088B7F0120ADBB1B463B0CFE016F282D977457B0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t088B7F0120ADBB1B463B0CFE016F282D977457B0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,System.Int32>
struct KeyValuePairEnumerator_t30A969FC1DAE5CCE82F322C88C22B492B101A1E1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t30A969FC1DAE5CCE82F322C88C22B492B101A1E1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t30A969FC1DAE5CCE82F322C88C22B492B101A1E1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t30A969FC1DAE5CCE82F322C88C22B492B101A1E1_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t30A969FC1DAE5CCE82F322C88C22B492B101A1E1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t30A969FC1DAE5CCE82F322C88C22B492B101A1E1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t30A969FC1DAE5CCE82F322C88C22B492B101A1E1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,TMPro.TMP_Character>
struct KeyValuePairEnumerator_tFA3AD2A6E08AB75BB0ACB86E5AE840189CA81AE2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tFA3AD2A6E08AB75BB0ACB86E5AE840189CA81AE2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tFA3AD2A6E08AB75BB0ACB86E5AE840189CA81AE2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tFA3AD2A6E08AB75BB0ACB86E5AE840189CA81AE2_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tFA3AD2A6E08AB75BB0ACB86E5AE840189CA81AE2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tFA3AD2A6E08AB75BB0ACB86E5AE840189CA81AE2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tFA3AD2A6E08AB75BB0ACB86E5AE840189CA81AE2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,TMPro.TMP_GlyphPairAdjustmentRecord>
struct KeyValuePairEnumerator_t805919B3CFCC00851F36CEA57293088EFE99D243_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t805919B3CFCC00851F36CEA57293088EFE99D243_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t805919B3CFCC00851F36CEA57293088EFE99D243_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t805919B3CFCC00851F36CEA57293088EFE99D243_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t805919B3CFCC00851F36CEA57293088EFE99D243(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t805919B3CFCC00851F36CEA57293088EFE99D243_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t805919B3CFCC00851F36CEA57293088EFE99D243_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,TMPro.TMP_SpriteCharacter>
struct KeyValuePairEnumerator_t3B8947DCC81FDBC6DCED80C2C613E780B08064A2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t3B8947DCC81FDBC6DCED80C2C613E780B08064A2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t3B8947DCC81FDBC6DCED80C2C613E780B08064A2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t3B8947DCC81FDBC6DCED80C2C613E780B08064A2_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t3B8947DCC81FDBC6DCED80C2C613E780B08064A2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t3B8947DCC81FDBC6DCED80C2C613E780B08064A2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t3B8947DCC81FDBC6DCED80C2C613E780B08064A2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,TMPro.TMP_SpriteGlyph>
struct KeyValuePairEnumerator_t4782917F422363B0D56039DD943523070CB12811_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4782917F422363B0D56039DD943523070CB12811_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t4782917F422363B0D56039DD943523070CB12811_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t4782917F422363B0D56039DD943523070CB12811_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t4782917F422363B0D56039DD943523070CB12811(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t4782917F422363B0D56039DD943523070CB12811_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t4782917F422363B0D56039DD943523070CB12811_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,UnityEngine.Vector3>
struct KeyValuePairEnumerator_tC91F109F277486CD63652B7EA98AAEF776EDCCAF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tC91F109F277486CD63652B7EA98AAEF776EDCCAF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tC91F109F277486CD63652B7EA98AAEF776EDCCAF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tC91F109F277486CD63652B7EA98AAEF776EDCCAF_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tC91F109F277486CD63652B7EA98AAEF776EDCCAF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tC91F109F277486CD63652B7EA98AAEF776EDCCAF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tC91F109F277486CD63652B7EA98AAEF776EDCCAF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData>
struct KeyValuePairEnumerator_t53221D952A7337E7AEAFCF8EA1BE5AB396EB33CC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t53221D952A7337E7AEAFCF8EA1BE5AB396EB33CC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t53221D952A7337E7AEAFCF8EA1BE5AB396EB33CC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t53221D952A7337E7AEAFCF8EA1BE5AB396EB33CC_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t53221D952A7337E7AEAFCF8EA1BE5AB396EB33CC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t53221D952A7337E7AEAFCF8EA1BE5AB396EB33CC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t53221D952A7337E7AEAFCF8EA1BE5AB396EB33CC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,Microsoft.MixedReality.Toolkit.UI.HandInteractionPanZoom/HandPanData>
struct KeyValuePairEnumerator_tF1E54D5B61D3E536D18EF50D7EFFAFBF72CAF869_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF1E54D5B61D3E536D18EF50D7EFFAFBF72CAF869_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tF1E54D5B61D3E536D18EF50D7EFFAFBF72CAF869_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tF1E54D5B61D3E536D18EF50D7EFFAFBF72CAF869_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tF1E54D5B61D3E536D18EF50D7EFFAFBF72CAF869(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tF1E54D5B61D3E536D18EF50D7EFFAFBF72CAF869_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tF1E54D5B61D3E536D18EF50D7EFFAFBF72CAF869_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt32,Microsoft.MixedReality.Toolkit.UI.ManipulationHandler/PointerData>
struct KeyValuePairEnumerator_tBB351391175E3DF181FD7778303F740A10F37B70_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBB351391175E3DF181FD7778303F740A10F37B70_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tBB351391175E3DF181FD7778303F740A10F37B70_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tBB351391175E3DF181FD7778303F740A10F37B70_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tBB351391175E3DF181FD7778303F740A10F37B70(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tBB351391175E3DF181FD7778303F740A10F37B70_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tBB351391175E3DF181FD7778303F740A10F37B70_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt64,UnityEngine.GameObject>
struct KeyValuePairEnumerator_t6322DEAB5DE4A7F04273B7D90935C1DAC34C3CE9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t6322DEAB5DE4A7F04273B7D90935C1DAC34C3CE9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t6322DEAB5DE4A7F04273B7D90935C1DAC34C3CE9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t6322DEAB5DE4A7F04273B7D90935C1DAC34C3CE9_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t6322DEAB5DE4A7F04273B7D90935C1DAC34C3CE9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t6322DEAB5DE4A7F04273B7D90935C1DAC34C3CE9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t6322DEAB5DE4A7F04273B7D90935C1DAC34C3CE9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.UInt64,System.String>
struct KeyValuePairEnumerator_tD2A8CF3BAD2AA8C4E5E0444A106ADB4113EFEDE5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tD2A8CF3BAD2AA8C4E5E0444A106ADB4113EFEDE5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tD2A8CF3BAD2AA8C4E5E0444A106ADB4113EFEDE5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tD2A8CF3BAD2AA8C4E5E0444A106ADB4113EFEDE5_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tD2A8CF3BAD2AA8C4E5E0444A106ADB4113EFEDE5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tD2A8CF3BAD2AA8C4E5E0444A106ADB4113EFEDE5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tD2A8CF3BAD2AA8C4E5E0444A106ADB4113EFEDE5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Vector3,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector3>>>
struct KeyValuePairEnumerator_tE9A3080793292818B4CAE1DA000D12735540F5A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tE9A3080793292818B4CAE1DA000D12735540F5A5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tE9A3080793292818B4CAE1DA000D12735540F5A5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tE9A3080793292818B4CAE1DA000D12735540F5A5_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tE9A3080793292818B4CAE1DA000D12735540F5A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tE9A3080793292818B4CAE1DA000D12735540F5A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tE9A3080793292818B4CAE1DA000D12735540F5A5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose>
struct KeyValuePairEnumerator_tEF01F09629141B979C37F0CD846C2F640E054D9F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tEF01F09629141B979C37F0CD846C2F640E054D9F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_tEF01F09629141B979C37F0CD846C2F640E054D9F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_tEF01F09629141B979C37F0CD846C2F640E054D9F_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_tEF01F09629141B979C37F0CD846C2F640E054D9F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_tEF01F09629141B979C37F0CD846C2F640E054D9F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_tEF01F09629141B979C37F0CD846C2F640E054D9F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>
struct KeyValuePairEnumerator_t93D8C12563FC03DF9B978E1A0E4DEF03A8D145C1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t93D8C12563FC03DF9B978E1A0E4DEF03A8D145C1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t93D8C12563FC03DF9B978E1A0E4DEF03A8D145C1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t93D8C12563FC03DF9B978E1A0E4DEF03A8D145C1_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t93D8C12563FC03DF9B978E1A0E4DEF03A8D145C1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t93D8C12563FC03DF9B978E1A0E4DEF03A8D145C1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t93D8C12563FC03DF9B978E1A0E4DEF03A8D145C1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairEnumerator<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct KeyValuePairEnumerator_t0C1E147123A3E78A4054A23EAC10D6BA9C918A0E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0C1E147123A3E78A4054A23EAC10D6BA9C918A0E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyValuePairEnumerator_t0C1E147123A3E78A4054A23EAC10D6BA9C918A0E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePairEnumerator_t0C1E147123A3E78A4054A23EAC10D6BA9C918A0E_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePairEnumerator_t0C1E147123A3E78A4054A23EAC10D6BA9C918A0E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePairEnumerator_t0C1E147123A3E78A4054A23EAC10D6BA9C918A0E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePairEnumerator_t0C1E147123A3E78A4054A23EAC10D6BA9C918A0E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>
struct KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242_ComCallableWrapper>, IKeyValuePair_2_t0C9A973F7D56980FFE71F9C288978292C1EF55A1
{
	inline KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_t0C9A973F7D56980FFE71F9C288978292C1EF55A1::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_t0C9A973F7D56980FFE71F9C288978292C1EF55A1*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_t0C9A973F7D56980FFE71F9C288978292C1EF55A1::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m49C2E144B5EE9F44BC15D99BA161EEAB6A043E91(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_m49C2E144B5EE9F44BC15D99BA161EEAB6A043E91_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m4649B985474CF9CF424FDA5E3A4A20525D756CAB(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_m4649B985474CF9CF424FDA5E3A4A20525D756CAB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_tD19B66260C7C9D60E4EA4CE576A9DC5979BBA242_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>
struct KeyValuePair_2_t239694BB713649B9F5326D1A5BC3143EA54316B3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t239694BB713649B9F5326D1A5BC3143EA54316B3_ComCallableWrapper>, IKeyValuePair_2_t04A9E1FDA761BB38505D5D4DE053C9E7C7E313EE
{
	inline KeyValuePair_2_t239694BB713649B9F5326D1A5BC3143EA54316B3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t239694BB713649B9F5326D1A5BC3143EA54316B3_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_t04A9E1FDA761BB38505D5D4DE053C9E7C7E313EE::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_t04A9E1FDA761BB38505D5D4DE053C9E7C7E313EE*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_t04A9E1FDA761BB38505D5D4DE053C9E7C7E313EE::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m50A1F94CB4E740FB5885019E6728EAE5C1D508D2(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_m50A1F94CB4E740FB5885019E6728EAE5C1D508D2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m0A77CFCA5DD2A31DB112E29FEB20300B493DE98D(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_m0A77CFCA5DD2A31DB112E29FEB20300B493DE98D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_t239694BB713649B9F5326D1A5BC3143EA54316B3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_t239694BB713649B9F5326D1A5BC3143EA54316B3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_t239694BB713649B9F5326D1A5BC3143EA54316B3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>
struct KeyValuePair_2_t1E4C4AAA2E07F40196F2EBEC29A6D137D0A9D265_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t1E4C4AAA2E07F40196F2EBEC29A6D137D0A9D265_ComCallableWrapper>, IKeyValuePair_2_tF41461EE4923BD10C0AAB7279C508FB800B405A7
{
	inline KeyValuePair_2_t1E4C4AAA2E07F40196F2EBEC29A6D137D0A9D265_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t1E4C4AAA2E07F40196F2EBEC29A6D137D0A9D265_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_tF41461EE4923BD10C0AAB7279C508FB800B405A7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_tF41461EE4923BD10C0AAB7279C508FB800B405A7*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_tF41461EE4923BD10C0AAB7279C508FB800B405A7::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m442A81AD9966A66E28AC0706E2A59E0B65491814(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_m442A81AD9966A66E28AC0706E2A59E0B65491814_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m42282FC1709DB540C465F0BFEDE058CB7270F123(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_m42282FC1709DB540C465F0BFEDE058CB7270F123_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_t1E4C4AAA2E07F40196F2EBEC29A6D137D0A9D265(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_t1E4C4AAA2E07F40196F2EBEC29A6D137D0A9D265_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_t1E4C4AAA2E07F40196F2EBEC29A6D137D0A9D265_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.Int32,System.Guid>
struct KeyValuePair_2_tFFF3CD393655640E494F508F2E2BF0B8D1021B67_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tFFF3CD393655640E494F508F2E2BF0B8D1021B67_ComCallableWrapper>, IKeyValuePair_2_t5A2EAE078874C07991FF945FD70EA74DB26BF208
{
	inline KeyValuePair_2_tFFF3CD393655640E494F508F2E2BF0B8D1021B67_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tFFF3CD393655640E494F508F2E2BF0B8D1021B67_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_t5A2EAE078874C07991FF945FD70EA74DB26BF208::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_t5A2EAE078874C07991FF945FD70EA74DB26BF208*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_t5A2EAE078874C07991FF945FD70EA74DB26BF208::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mD94227A0F8DA16A88E4E5DA42BC14324FB45BE27(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_mD94227A0F8DA16A88E4E5DA42BC14324FB45BE27_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m6495B56B850066A1BCEEF7D1D47A5BA5B10E205B(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_m6495B56B850066A1BCEEF7D1D47A5BA5B10E205B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_tFFF3CD393655640E494F508F2E2BF0B8D1021B67(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_tFFF3CD393655640E494F508F2E2BF0B8D1021B67_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_tFFF3CD393655640E494F508F2E2BF0B8D1021B67_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB_ComCallableWrapper>, IKeyValuePair_2_t4C1069D28D4329332E473B891CA9976F45BC62AF
{
	inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_t4C1069D28D4329332E473B891CA9976F45BC62AF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_t4C1069D28D4329332E473B891CA9976F45BC62AF*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_t4C1069D28D4329332E473B891CA9976F45BC62AF::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mBE3F439B4EECBFB5DE1B1A4CAFA35792919B992D(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_mBE3F439B4EECBFB5DE1B1A4CAFA35792919B992D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mB918D157087406EF2EF862B63CB97B37F9AD69C6(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_mB918D157087406EF2EF862B63CB97B37F9AD69C6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>
struct KeyValuePair_2_tE8FA5EF9EFE23FF7AB54968FA25D3487B37D4D28_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tE8FA5EF9EFE23FF7AB54968FA25D3487B37D4D28_ComCallableWrapper>, IKeyValuePair_2_t9960147AD76B4914DE92B795541831D11BA9C04A
{
	inline KeyValuePair_2_tE8FA5EF9EFE23FF7AB54968FA25D3487B37D4D28_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tE8FA5EF9EFE23FF7AB54968FA25D3487B37D4D28_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_t9960147AD76B4914DE92B795541831D11BA9C04A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_t9960147AD76B4914DE92B795541831D11BA9C04A*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_t9960147AD76B4914DE92B795541831D11BA9C04A::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mD48E9BD7315408D4FA4A1AAA460D7DC03F52B24D(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_mD48E9BD7315408D4FA4A1AAA460D7DC03F52B24D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m478C062D877B6FECD7B7D83CCBCECCD5F4A830F8(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_m478C062D877B6FECD7B7D83CCBCECCD5F4A830F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_tE8FA5EF9EFE23FF7AB54968FA25D3487B37D4D28(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_tE8FA5EF9EFE23FF7AB54968FA25D3487B37D4D28_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_tE8FA5EF9EFE23FF7AB54968FA25D3487B37D4D28_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>
struct KeyValuePair_2_t0505D58092A4AC6F3EC91B69335683ABC01B49FB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t0505D58092A4AC6F3EC91B69335683ABC01B49FB_ComCallableWrapper>, IKeyValuePair_2_t5B46C8C7B715ABBB6486959A4E14012AE997F85E
{
	inline KeyValuePair_2_t0505D58092A4AC6F3EC91B69335683ABC01B49FB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t0505D58092A4AC6F3EC91B69335683ABC01B49FB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_t5B46C8C7B715ABBB6486959A4E14012AE997F85E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_t5B46C8C7B715ABBB6486959A4E14012AE997F85E*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_t5B46C8C7B715ABBB6486959A4E14012AE997F85E::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mB5355D55FBB3FC7FEE2EB2BCBA9B681818683C44(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_mB5355D55FBB3FC7FEE2EB2BCBA9B681818683C44_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m0945F06186882DCB23474CF5F8F01893B6F9F459(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_m0945F06186882DCB23474CF5F8F01893B6F9F459_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_t0505D58092A4AC6F3EC91B69335683ABC01B49FB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_t0505D58092A4AC6F3EC91B69335683ABC01B49FB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_t0505D58092A4AC6F3EC91B69335683ABC01B49FB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.Int64,System.Type>
struct KeyValuePair_2_t3FF0769A9CE1A16ED9C6BC28C447546256DDADA6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t3FF0769A9CE1A16ED9C6BC28C447546256DDADA6_ComCallableWrapper>, IKeyValuePair_2_tD93562FBE3D1112107B883FF6959662A512CF78A
{
	inline KeyValuePair_2_t3FF0769A9CE1A16ED9C6BC28C447546256DDADA6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t3FF0769A9CE1A16ED9C6BC28C447546256DDADA6_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_tD93562FBE3D1112107B883FF6959662A512CF78A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_tD93562FBE3D1112107B883FF6959662A512CF78A*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_tD93562FBE3D1112107B883FF6959662A512CF78A::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mBDA1D0BBF2590975BE23F199481491D5DB6EB308(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_mBDA1D0BBF2590975BE23F199481491D5DB6EB308_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mB790D49B826CBA483FB090562BEF98F549F4B050(Il2CppWindowsRuntimeTypeName* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_mB790D49B826CBA483FB090562BEF98F549F4B050_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_t3FF0769A9CE1A16ED9C6BC28C447546256DDADA6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_t3FF0769A9CE1A16ED9C6BC28C447546256DDADA6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_t3FF0769A9CE1A16ED9C6BC28C447546256DDADA6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
struct KeyValuePair_2_tF1F5F2CCD4CEED0C61C52B9C8CF788B48C872E69_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tF1F5F2CCD4CEED0C61C52B9C8CF788B48C872E69_ComCallableWrapper>, IKeyValuePair_2_t4CF782598AE973FA3BBCC0424B73C8A9ED005438
{
	inline KeyValuePair_2_tF1F5F2CCD4CEED0C61C52B9C8CF788B48C872E69_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tF1F5F2CCD4CEED0C61C52B9C8CF788B48C872E69_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_t4CF782598AE973FA3BBCC0424B73C8A9ED005438::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_t4CF782598AE973FA3BBCC0424B73C8A9ED005438*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_t4CF782598AE973FA3BBCC0424B73C8A9ED005438::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2A32DB8C39F47F43CB48DEDDC56E9C8300157CA7(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_m2A32DB8C39F47F43CB48DEDDC56E9C8300157CA7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3A6A850D8FBBC6600EA7267723057A6048C6E587(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_m3A6A850D8FBBC6600EA7267723057A6048C6E587_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_tF1F5F2CCD4CEED0C61C52B9C8CF788B48C872E69(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_tF1F5F2CCD4CEED0C61C52B9C8CF788B48C872E69_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_tF1F5F2CCD4CEED0C61C52B9C8CF788B48C872E69_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_ComCallableWrapper>, IKeyValuePair_2_tDE2517DAB62DE15BCFE4D61044BAA34510A3C848
{
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_tDE2517DAB62DE15BCFE4D61044BAA34510A3C848::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_tDE2517DAB62DE15BCFE4D61044BAA34510A3C848*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_tDE2517DAB62DE15BCFE4D61044BAA34510A3C848::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mBA4EC2E87E487F1E5EEAAA360E0A45FBAAD506B7(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_mBA4EC2E87E487F1E5EEAAA360E0A45FBAAD506B7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mBE1A71A5467E5F6B26FA03FBC7C941C1CF3AE6FF(Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_mBE1A71A5467E5F6B26FA03FBC7C941C1CF3AE6FF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.String,Windows.Perception.Spatial.SpatialAnchor>
struct KeyValuePair_2_tFAB02BF9A53145527FD8936ED307C7E3F8C4ED7F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tFAB02BF9A53145527FD8936ED307C7E3F8C4ED7F_ComCallableWrapper>, IKeyValuePair_2_t6CFB972C4FC75BDED5143ACFFBADA6FA55D8ECA2
{
	inline KeyValuePair_2_tFAB02BF9A53145527FD8936ED307C7E3F8C4ED7F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tFAB02BF9A53145527FD8936ED307C7E3F8C4ED7F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_t6CFB972C4FC75BDED5143ACFFBADA6FA55D8ECA2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_t6CFB972C4FC75BDED5143ACFFBADA6FA55D8ECA2*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_t6CFB972C4FC75BDED5143ACFFBADA6FA55D8ECA2::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m06450AAE1A7EDAD2B3FDC9FC70B6A49441E99FCA(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_m06450AAE1A7EDAD2B3FDC9FC70B6A49441E99FCA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3F2DC560D5FC7913856F25FFD5AA973A8A3CAB90(ISpatialAnchor_tCFEBFF71958B01F5F1513B576905D8B1F95A2A55** comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_m3F2DC560D5FC7913856F25FFD5AA973A8A3CAB90_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_tFAB02BF9A53145527FD8936ED307C7E3F8C4ED7F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_tFAB02BF9A53145527FD8936ED307C7E3F8C4ED7F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_tFAB02BF9A53145527FD8936ED307C7E3F8C4ED7F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_ComCallableWrapper>, IKeyValuePair_2_tEDBDD3E04BC3B923E7F6B0B31642B07BEEA21F14
{
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_tEDBDD3E04BC3B923E7F6B0B31642B07BEEA21F14::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_tEDBDD3E04BC3B923E7F6B0B31642B07BEEA21F14*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_tEDBDD3E04BC3B923E7F6B0B31642B07BEEA21F14::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m0CF7F99AE719D65BBD579BEBDC21328A8A48EAD8(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_m0CF7F99AE719D65BBD579BEBDC21328A8A48EAD8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mC704C838F021ADFD875BC09AA47821233BE19F66(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_mC704C838F021ADFD875BC09AA47821233BE19F66_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.String,System.Type>
struct KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0_ComCallableWrapper>, IKeyValuePair_2_t55B306B809C622EFA7852CCC3A9FB700983F992E
{
	inline KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_t55B306B809C622EFA7852CCC3A9FB700983F992E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_t55B306B809C622EFA7852CCC3A9FB700983F992E*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_t55B306B809C622EFA7852CCC3A9FB700983F992E::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mA3912673CAE16CD0D1F7A6C956FF7C99DEB285F8(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_mA3912673CAE16CD0D1F7A6C956FF7C99DEB285F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m2C202D882AC2378732F048CE9738B8FD428DD8A3(Il2CppWindowsRuntimeTypeName* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_m2C202D882AC2378732F048CE9738B8FD428DD8A3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
struct KeyValuePair_2_t24B97016684F3CE7820EEAC98281DED41F84C30C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t24B97016684F3CE7820EEAC98281DED41F84C30C_ComCallableWrapper>, IKeyValuePair_2_t798A73D20AB090AD56D81ACDCF39615287229B96
{
	inline KeyValuePair_2_t24B97016684F3CE7820EEAC98281DED41F84C30C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t24B97016684F3CE7820EEAC98281DED41F84C30C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_t798A73D20AB090AD56D81ACDCF39615287229B96::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_t798A73D20AB090AD56D81ACDCF39615287229B96*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_t798A73D20AB090AD56D81ACDCF39615287229B96::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mE9BAD8C954B39CB4B5A34EFB9125A7E4A8D43FA5(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_mE9BAD8C954B39CB4B5A34EFB9125A7E4A8D43FA5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m9DBF5E9D5C4E6627D99EA625E32B4C760AFBCA0C(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_m9DBF5E9D5C4E6627D99EA625E32B4C760AFBCA0C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_t24B97016684F3CE7820EEAC98281DED41F84C30C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_t24B97016684F3CE7820EEAC98281DED41F84C30C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_t24B97016684F3CE7820EEAC98281DED41F84C30C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>
struct KeyValuePair_2_t504EC26DD47F99A8C06286072D44FAA1ABD0CD93_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t504EC26DD47F99A8C06286072D44FAA1ABD0CD93_ComCallableWrapper>, IKeyValuePair_2_t10E217EC75F5AA6467591B2F915545F1B3AF3DC3
{
	inline KeyValuePair_2_t504EC26DD47F99A8C06286072D44FAA1ABD0CD93_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t504EC26DD47F99A8C06286072D44FAA1ABD0CD93_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_t10E217EC75F5AA6467591B2F915545F1B3AF3DC3::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_t10E217EC75F5AA6467591B2F915545F1B3AF3DC3*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_t10E217EC75F5AA6467591B2F915545F1B3AF3DC3::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m53706DB04E25F9EA97B17A77487D7B0B27DDEA30(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_m53706DB04E25F9EA97B17A77487D7B0B27DDEA30_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mAFCEB82342294C7AF605E02479588644A34454C4(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_mAFCEB82342294C7AF605E02479588644A34454C4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_t504EC26DD47F99A8C06286072D44FAA1ABD0CD93(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_t504EC26DD47F99A8C06286072D44FAA1ABD0CD93_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_t504EC26DD47F99A8C06286072D44FAA1ABD0CD93_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>
struct KeyValuePair_2_t1C899E1D384EB1A82B398076E49CE2B74F0CE329_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t1C899E1D384EB1A82B398076E49CE2B74F0CE329_ComCallableWrapper>, IKeyValuePair_2_t6A93234ED39771E30C7A27AECCFBF97B98C6FF73
{
	inline KeyValuePair_2_t1C899E1D384EB1A82B398076E49CE2B74F0CE329_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_t1C899E1D384EB1A82B398076E49CE2B74F0CE329_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_t6A93234ED39771E30C7A27AECCFBF97B98C6FF73::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_t6A93234ED39771E30C7A27AECCFBF97B98C6FF73*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_t6A93234ED39771E30C7A27AECCFBF97B98C6FF73::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m78C6B50E88EBFFB04C86E93E95A2674C41138678(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_m78C6B50E88EBFFB04C86E93E95A2674C41138678_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3716B3BA7EC3D4C1ADBFF9ACA363E6B914DDD2DD(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_m3716B3BA7EC3D4C1ADBFF9ACA363E6B914DDD2DD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_t1C899E1D384EB1A82B398076E49CE2B74F0CE329(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_t1C899E1D384EB1A82B398076E49CE2B74F0CE329_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_t1C899E1D384EB1A82B398076E49CE2B74F0CE329_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.KeyValuePair`2<System.UInt64,System.String>
struct KeyValuePair_2_tB28B34FCDB212D405F2CFB67C4C44A71745D6C91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tB28B34FCDB212D405F2CFB67C4C44A71745D6C91_ComCallableWrapper>, IKeyValuePair_2_t51D5D6E12BDDBD6858CFB48930E150F90EED31E8
{
	inline KeyValuePair_2_tB28B34FCDB212D405F2CFB67C4C44A71745D6C91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyValuePair_2_tB28B34FCDB212D405F2CFB67C4C44A71745D6C91_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IKeyValuePair_2_t51D5D6E12BDDBD6858CFB48930E150F90EED31E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IKeyValuePair_2_t51D5D6E12BDDBD6858CFB48930E150F90EED31E8*>(this);
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
		interfaceIds[0] = IKeyValuePair_2_t51D5D6E12BDDBD6858CFB48930E150F90EED31E8::IID;

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

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m670AA2931DD9FAFE336E0490A72DA3808815BD44(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Key_m670AA2931DD9FAFE336E0490A72DA3808815BD44_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mD5984382A59F8F3FF63AFE0B6E598CFAB4362494(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IKeyValuePair_2_get_Value_mD5984382A59F8F3FF63AFE0B6E598CFAB4362494_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyValuePair_2_tB28B34FCDB212D405F2CFB67C4C44A71745D6C91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyValuePair_2_tB28B34FCDB212D405F2CFB67C4C44A71745D6C91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyValuePair_2_tB28B34FCDB212D405F2CFB67C4C44A71745D6C91_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>
struct LRUCache_2_t000B565F6A5B9666CF57BB89CF23A01B9C412B63_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LRUCache_2_t000B565F6A5B9666CF57BB89CF23A01B9C412B63_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline LRUCache_2_t000B565F6A5B9666CF57BB89CF23A01B9C412B63_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LRUCache_2_t000B565F6A5B9666CF57BB89CF23A01B9C412B63_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LRUCache_2_t000B565F6A5B9666CF57BB89CF23A01B9C412B63(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LRUCache_2_t000B565F6A5B9666CF57BB89CF23A01B9C412B63_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LRUCache_2_t000B565F6A5B9666CF57BB89CF23A01B9C412B63_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.LinkedList`1<System.Action`1<System.Boolean>>
struct LinkedList_1_tF75A3C6809F95D0D158E53D43E1CA8E162FDC919_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LinkedList_1_tF75A3C6809F95D0D158E53D43E1CA8E162FDC919_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline LinkedList_1_tF75A3C6809F95D0D158E53D43E1CA8E162FDC919_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LinkedList_1_tF75A3C6809F95D0D158E53D43E1CA8E162FDC919_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LinkedList_1_tF75A3C6809F95D0D158E53D43E1CA8E162FDC919(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LinkedList_1_tF75A3C6809F95D0D158E53D43E1CA8E162FDC919_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LinkedList_1_tF75A3C6809F95D0D158E53D43E1CA8E162FDC919_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.LinkedList`1<System.Action`1<UnityEngine.Object>>
struct LinkedList_1_t32E0165C0996F5A11300494207CDFCFBBD56A1FD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LinkedList_1_t32E0165C0996F5A11300494207CDFCFBBD56A1FD_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline LinkedList_1_t32E0165C0996F5A11300494207CDFCFBBD56A1FD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LinkedList_1_t32E0165C0996F5A11300494207CDFCFBBD56A1FD_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LinkedList_1_t32E0165C0996F5A11300494207CDFCFBBD56A1FD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LinkedList_1_t32E0165C0996F5A11300494207CDFCFBBD56A1FD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LinkedList_1_t32E0165C0996F5A11300494207CDFCFBBD56A1FD_ComCallableWrapper(obj));
}
