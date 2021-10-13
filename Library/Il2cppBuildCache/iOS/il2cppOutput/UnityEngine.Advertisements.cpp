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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Int32Enum>
struct Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09;
// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>
struct ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>
struct ConcurrentDictionary_2_tBE4C8F273C9A02233383E9026A4042A14493B438;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.EventHandler`1<UnityEngine.Advertisements.Events.FinishEventArgs>
struct EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<UnityEngine.Advertisements.Events.StartEventArgs>
struct EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C;
// System.Collections.Generic.HashSet`1<UnityEngine.Advertisements.IUnityAdsListener>
struct HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Advertisements.IUnityAdsListener>
struct IEnumerable_1_t7AED856B14177FE6BEB782E90EDAE466F17E6984;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Advertisements.IUnityAdsListener>
struct IEqualityComparer_1_tF4AC49A54C4649C640A1B849715994071A085E62;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t19B34EAD810249AF015A661D23DF1909EADEB101;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>
struct Tables_tABEC929BA9FDFBA04AE46BA0CF6FF73CA20B82EF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Advertisements.IUnityAdsListener>[]
struct SlotU5BU5D_tB9195B3425E56B65DB2D9F7A5D428C6E2BFD0C07;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.Advertisements.Utilities.ApplicationQuit
struct ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Advertisements.Banner
struct Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0;
// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C;
// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8;
// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder
struct BannerPlaceholder_t976E009D31F6ECB3D5B9D99AD84D7E61C9B6B334;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Advertisements.Utilities.CoroutineExecutor
struct CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// UnityEngine.Advertisements.Events.FinishEventArgs
struct FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.GUISettings
struct GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0;
// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Advertisements.IBanner
struct IBanner_t4C8A65288BD66F516365F7836CDFDD8A0E1FF070;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// UnityEngine.Advertisements.INativeBanner
struct INativeBanner_t7CDEE6F3AD8C00E40CB5D1E459E671E3B939EAC1;
// UnityEngine.Advertisements.INativePlatform
struct INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A;
// UnityEngine.Advertisements.Platform.IPlatform
struct IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F;
// UnityEngine.Advertisements.Purchasing.IPurchasingEventSender
struct IPurchasingEventSender_t5BD1BF14735B1D90C025121BAC3FDB6F073CA503;
// UnityEngine.Advertisements.IUnityAdsInitializationListener
struct IUnityAdsInitializationListener_tF3541F5EE9D74500D445E4C4CA7B688318A2ADC1;
// UnityEngine.Advertisements.IUnityAdsListener
struct IUnityAdsListener_tD05C653E78754DB6B30CF7D4A1BB6FBA20EAA232;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA;
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager
struct IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA;
// UnityEngine.Advertisements.Platform.iOS.IosBanner
struct IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1;
// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener
struct IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E;
// UnityEngine.Advertisements.Platform.iOS.IosNativeObject
struct IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD;
// UnityEngine.Advertisements.Platform.iOS.IosPlatform
struct IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF;
// UnityEngine.Advertisements.IosShowListener
struct IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Advertisements.MetaData
struct MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Advertisements.Platform.Platform
struct Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform
struct PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F;
// UnityEngine.Advertisements.Events.StartEventArgs
struct StartEventArgs_t89137A1788A305D836F12314C43763F1CF19AF56;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Advertisements.Utilities.UnityLifecycleManager
struct UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB;
// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner
struct UnsupportedBanner_t7AF5B0FC5900E8DCCA7924298EFD0CCE5C9EE553;
// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform
struct UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D;
// UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7;
// UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826;
// UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4;
// UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765;
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6;
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E;
// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;
// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate
struct UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C;
// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate
struct UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B;
// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate
struct UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB;
// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate
struct UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025;
// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate
struct UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39;
// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate
struct UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE;
// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback
struct InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2;
// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback
struct InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194;
// UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidErrorDelegate
struct UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D;
// UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidFinishDelegate
struct UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95;
// UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidStartDelegate
struct UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61;
// UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsReadyDelegate
struct UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8;
// UnityEngine.Advertisements.IosShowListener/ShowClickCallback
struct ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225;
// UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback
struct ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777;
// UnityEngine.Advertisements.IosShowListener/ShowFailureCallback
struct ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318;
// UnityEngine.Advertisements.IosShowListener/ShowStartCallback
struct ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87;
// UnityEngine.Advertisements.Utilities.Json/Serializer
struct Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6;
// UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E;
// UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62;
// UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3;
// UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6;
// UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingDidInitiatePurchasingCommand
struct unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetProductCatalog
struct unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetPurchasingVersion
struct unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingInitialize
struct unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBanner_t4C8A65288BD66F516365F7836CDFDD8A0E1FF070_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeBanner_t7CDEE6F3AD8C00E40CB5D1E459E671E3B939EAC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsInitializationListener_tF3541F5EE9D74500D445E4C4CA7B688318A2ADC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsListener_tD05C653E78754DB6B30CF7D4A1BB6FBA20EAA232_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartEventArgs_t89137A1788A305D836F12314C43763F1CF19AF56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedBanner_t7AF5B0FC5900E8DCCA7924298EFD0CCE5C9EE553_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral159E98CAE03BDED0522C8ACCFA36B0B1D3F09C67;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3;
IL2CPP_EXTERN_C String_t* _stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75;
IL2CPP_EXTERN_C String_t* _stringLiteral750B47A9E43C9EA610F98792362D027D33B89ECB;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58;
IL2CPP_EXTERN_C String_t* _stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F;
IL2CPP_EXTERN_C String_t* _stringLiteral7D4D542B0104C9893CE06E8E96A04AA1B1200B07;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF5647232AF23A5A9818CCBB98BB0C581B5FF2F;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0;
IL2CPP_EXTERN_C String_t* _stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB8B17C2F23CF76B280EDF692D4E3AEF9A008AB26;
IL2CPP_EXTERN_C String_t* _stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052;
IL2CPP_EXTERN_C String_t* _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE0855C9C91F56F4F5842F4BDBA9C41C9C713AD56;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralFD28190374E8020BFFA63441226A3A4A88D84FA5;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m92CFC219BE1E947209DA9E2AF847D09E48931A05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryAdd_m2A339462EDFC09A31ED19439E15C3558BE5DA5EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryRemove_m94D7B4FA99F9811406BF1B8663EBAF63F512834E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_mBD9A48B039C905A69F17C6B3D82001A52A1EC09B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m2124AB0856E84A1BB72D4908646BC0864EB4B616_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m7D6DCD97A41ED1C842EC52AA9243BEFCB0260510_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m135A350240DE73A3D519DC7C6E6D315B635D6C55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m32BCAE20F3D11E8EC067903258F7048855AEC57D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28_m86D658340CF4FAB202912B5422CC2CD777573120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8_m936E7AA8929B885E17D6F134F9284361E0B346AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8_m3D878055CD24BF43208E2118D45E4ACAC6E393A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mBC3A350ED66A3FC536C328D7D26EF56D03D019A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mED6F73D5A5A4026FC4A57F05F3101BCA801AC192_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosBanner_UnityAdsBannerClick_mA65D35374382B7752906042F40E54AE100339673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosBanner_UnityAdsBannerDidError_m093C3E3B66AF1304225E960108F5DD736FFC48F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosBanner_UnityAdsBannerDidHide_mF9ABA261CF7051F0377E607C52A260FF1A673236_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosBanner_UnityAdsBannerDidLoad_mFEC68685C683484E6BAA3F76B12C61E5B0B83F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosBanner_UnityAdsBannerDidShow_m321FF9813EAC63E78EA6765AE7E24D33064318E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosBanner_UnityAdsBannerDidUnload_m8AAE33F67B340E82EDDCBAB957F609024ADC81C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosInitializationListener_OnInitializationComplete_m7165028F246A814FA7CBBEE3885BC9791BA24555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosInitializationListener_OnInitializationFailed_mE1FCBCE03AA4A47714D971AEF4DB9806CCB17F4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosNativeObject_Get_TisIosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E_m229054BFD26567EA48811D6F0D54D1161EE545B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosPlatform_UnityAdsDidError_m75F8A97597A76D732BF2EC28586302C2AD6C0518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosPlatform_UnityAdsDidFinish_m4D486230CFB4B276945979FB058C18E37A90A974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosPlatform_UnityAdsDidStart_mADDAF7680B98E8D9161E7B7E25B8E4ABA1AEF2DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosPlatform_UnityAdsReady_m59EA9785AE573691825399F7D168F44CECA710AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosShowListener_OnShowClick_m25FF3FFA562E413C4CF7C8E7BA00548AA2EB72D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosShowListener_OnShowComplete_m2DED19EF1FB3063006C282E27E70A90AA2E622A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosShowListener_OnShowFailure_m1BD4CE42328D7740A667FBFA2450A2AB628BAAEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosShowListener_OnShowStart_mF41901AE44ABED7223CAD03EB3ECCC16623EB392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_U3CInitializeU3Eb__30_0_m38DF64A0E307638B35078B530B3E10E27AF481C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_U3CInitializeU3Eb__30_1_mA7D0C27475A5A0841CF16BDFD2DF3AF59C54B5E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_m0F827EA45C9CE1408B1D0516EE0074CEE0D03360_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m6378EA0BB94C5247DA490D48ED2EE9A6F5B856CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m3A0A91DB607F717F9ECA7E2BAC67EF7F2EC465DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PurchasingPlatform_UnityAdsPurchasingInitialize_m83C0904C496FB29D63F189FEAAE447743FB0E96B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Purchasing_Initialize_m19819881D3ED63492E9ED2C6D00C39597AE67E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CUnityAdsBannerDidShowU3Eb__0_mEC53195427234DF19D2BAA4863BBF2279602C625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CUnityAdsBannerDidHideU3Eb__0_mF201AF71686452BEBC4FE7FDB10B32109B50D2C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CUnityAdsBannerClickU3Eb__0_mEC90AFD89CBC8566CFC5753734A1E5090D520E36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CUnityAdsBannerDidLoadU3Eb__0_m3A498D0FC7D2AD894CF7B29251EA66A7C38BFF54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CUnityAdsBannerDidErrorU3Eb__0_mC714875887FE3D697805657AD0BC5005DF34FFAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_0_U3CShowU3Eb__0_m90AAF1944C755ABFD41E936FDD466CCBDD69EEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass40_0_U3CUnityAdsReadyU3Eb__0_m6556FE019E828C55D250BC4696420F0386F1782D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass41_0_U3CUnityAdsDidErrorU3Eb__0_m585A62B075944230A0F08A6DF265405DA218B36D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass42_0_U3CUnityAdsDidStartU3Eb__0_m26D184712D9B8875E0CB1EC6EA136C7DFBE6F4A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass43_0_U3CUnityAdsDidFinishU3Eb__0_m36F0C46E1C534BAF24A35F136726A8AAD1986648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB232AF15354B39DFA425DF6411E0F8087F34CB44 
{
public:

public:
};


// System.Object


// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>
struct ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tABEC929BA9FDFBA04AE46BA0CF6FF73CA20B82EF * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9, ____tables_0)); }
	inline Tables_tABEC929BA9FDFBA04AE46BA0CF6FF73CA20B82EF * get__tables_0() const { return ____tables_0; }
	inline Tables_tABEC929BA9FDFBA04AE46BA0CF6FF73CA20B82EF ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tABEC929BA9FDFBA04AE46BA0CF6FF73CA20B82EF * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.Advertisements.IUnityAdsListener>
struct HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB9195B3425E56B65DB2D9F7A5D428C6E2BFD0C07* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7, ____slots_8)); }
	inline SlotU5BU5D_tB9195B3425E56B65DB2D9F7A5D428C6E2BFD0C07* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tB9195B3425E56B65DB2D9F7A5D428C6E2BFD0C07** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tB9195B3425E56B65DB2D9F7A5D428C6E2BFD0C07* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____array_0)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__array_0() const { return ____array_0; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// UnityEngine.Advertisements.Advertisement
struct Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429  : public RuntimeObject
{
public:

public:
};

struct Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_StaticFields
{
public:
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::s_Platform
	RuntimeObject* ___s_Platform_0;

public:
	inline static int32_t get_offset_of_s_Platform_0() { return static_cast<int32_t>(offsetof(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_StaticFields, ___s_Platform_0)); }
	inline RuntimeObject* get_s_Platform_0() const { return ___s_Platform_0; }
	inline RuntimeObject** get_address_of_s_Platform_0() { return &___s_Platform_0; }
	inline void set_s_Platform_0(RuntimeObject* value)
	{
		___s_Platform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Platform_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Advertisements.Banner
struct Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Banner::<UnityLifecycleManager>k__BackingField
	RuntimeObject* ___U3CUnityLifecycleManagerU3Ek__BackingField_0;
	// UnityEngine.Advertisements.INativeBanner UnityEngine.Advertisements.Banner::m_NativeBanner
	RuntimeObject* ___m_NativeBanner_1;

public:
	inline static int32_t get_offset_of_U3CUnityLifecycleManagerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0, ___U3CUnityLifecycleManagerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUnityLifecycleManagerU3Ek__BackingField_0() const { return ___U3CUnityLifecycleManagerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUnityLifecycleManagerU3Ek__BackingField_0() { return &___U3CUnityLifecycleManagerU3Ek__BackingField_0; }
	inline void set_U3CUnityLifecycleManagerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUnityLifecycleManagerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityLifecycleManagerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_NativeBanner_1() { return static_cast<int32_t>(offsetof(Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0, ___m_NativeBanner_1)); }
	inline RuntimeObject* get_m_NativeBanner_1() const { return ___m_NativeBanner_1; }
	inline RuntimeObject** get_address_of_m_NativeBanner_1() { return &___m_NativeBanner_1; }
	inline void set_m_NativeBanner_1(RuntimeObject* value)
	{
		___m_NativeBanner_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NativeBanner_1), (void*)value);
	}
};


// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::<loadCallback>k__BackingField
	LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * ___U3CloadCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::<errorCallback>k__BackingField
	ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * ___U3CerrorCallbackU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CloadCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C, ___U3CloadCallbackU3Ek__BackingField_0)); }
	inline LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * get_U3CloadCallbackU3Ek__BackingField_0() const { return ___U3CloadCallbackU3Ek__BackingField_0; }
	inline LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E ** get_address_of_U3CloadCallbackU3Ek__BackingField_0() { return &___U3CloadCallbackU3Ek__BackingField_0; }
	inline void set_U3CloadCallbackU3Ek__BackingField_0(LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * value)
	{
		___U3CloadCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloadCallbackU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CerrorCallbackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C, ___U3CerrorCallbackU3Ek__BackingField_1)); }
	inline ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * get_U3CerrorCallbackU3Ek__BackingField_1() const { return ___U3CerrorCallbackU3Ek__BackingField_1; }
	inline ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 ** get_address_of_U3CerrorCallbackU3Ek__BackingField_1() { return &___U3CerrorCallbackU3Ek__BackingField_1; }
	inline void set_U3CerrorCallbackU3Ek__BackingField_1(ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * value)
	{
		___U3CerrorCallbackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CerrorCallbackU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<showCallback>k__BackingField
	BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * ___U3CshowCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<hideCallback>k__BackingField
	BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * ___U3ChideCallbackU3Ek__BackingField_1;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<clickCallback>k__BackingField
	BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * ___U3CclickCallbackU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CshowCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8, ___U3CshowCallbackU3Ek__BackingField_0)); }
	inline BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * get_U3CshowCallbackU3Ek__BackingField_0() const { return ___U3CshowCallbackU3Ek__BackingField_0; }
	inline BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C ** get_address_of_U3CshowCallbackU3Ek__BackingField_0() { return &___U3CshowCallbackU3Ek__BackingField_0; }
	inline void set_U3CshowCallbackU3Ek__BackingField_0(BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * value)
	{
		___U3CshowCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshowCallbackU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChideCallbackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8, ___U3ChideCallbackU3Ek__BackingField_1)); }
	inline BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * get_U3ChideCallbackU3Ek__BackingField_1() const { return ___U3ChideCallbackU3Ek__BackingField_1; }
	inline BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C ** get_address_of_U3ChideCallbackU3Ek__BackingField_1() { return &___U3ChideCallbackU3Ek__BackingField_1; }
	inline void set_U3ChideCallbackU3Ek__BackingField_1(BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * value)
	{
		___U3ChideCallbackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChideCallbackU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CclickCallbackU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8, ___U3CclickCallbackU3Ek__BackingField_2)); }
	inline BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * get_U3CclickCallbackU3Ek__BackingField_2() const { return ___U3CclickCallbackU3Ek__BackingField_2; }
	inline BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C ** get_address_of_U3CclickCallbackU3Ek__BackingField_2() { return &___U3CclickCallbackU3Ek__BackingField_2; }
	inline void set_U3CclickCallbackU3Ek__BackingField_2(BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * value)
	{
		___U3CclickCallbackU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CclickCallbackU3Ek__BackingField_2), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// UnityEngine.Advertisements.Utilities.EnumUtilities
struct EnumUtilities_t8682DCFEA1FE94DB6518B3BD767C84D827E7D7A7  : public RuntimeObject
{
public:

public:
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.iOS.IosBanner
struct IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1  : public RuntimeObject
{
public:

public:
};

struct IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields
{
public:
	// UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.iOS.IosBanner::s_Banner
	RuntimeObject* ___s_Banner_0;
	// UnityEngine.Advertisements.BannerLoadOptions UnityEngine.Advertisements.Platform.iOS.IosBanner::s_BannerLoadOptions
	BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * ___s_BannerLoadOptions_1;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.iOS.IosBanner::s_BannerOptions
	BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * ___s_BannerOptions_2;
	// System.String UnityEngine.Advertisements.Platform.iOS.IosBanner::s_PlacementId
	String_t* ___s_PlacementId_3;

public:
	inline static int32_t get_offset_of_s_Banner_0() { return static_cast<int32_t>(offsetof(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields, ___s_Banner_0)); }
	inline RuntimeObject* get_s_Banner_0() const { return ___s_Banner_0; }
	inline RuntimeObject** get_address_of_s_Banner_0() { return &___s_Banner_0; }
	inline void set_s_Banner_0(RuntimeObject* value)
	{
		___s_Banner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Banner_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_BannerLoadOptions_1() { return static_cast<int32_t>(offsetof(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields, ___s_BannerLoadOptions_1)); }
	inline BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * get_s_BannerLoadOptions_1() const { return ___s_BannerLoadOptions_1; }
	inline BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C ** get_address_of_s_BannerLoadOptions_1() { return &___s_BannerLoadOptions_1; }
	inline void set_s_BannerLoadOptions_1(BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * value)
	{
		___s_BannerLoadOptions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BannerLoadOptions_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_BannerOptions_2() { return static_cast<int32_t>(offsetof(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields, ___s_BannerOptions_2)); }
	inline BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * get_s_BannerOptions_2() const { return ___s_BannerOptions_2; }
	inline BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 ** get_address_of_s_BannerOptions_2() { return &___s_BannerOptions_2; }
	inline void set_s_BannerOptions_2(BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * value)
	{
		___s_BannerOptions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BannerOptions_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PlacementId_3() { return static_cast<int32_t>(offsetof(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields, ___s_PlacementId_3)); }
	inline String_t* get_s_PlacementId_3() const { return ___s_PlacementId_3; }
	inline String_t** get_address_of_s_PlacementId_3() { return &___s_PlacementId_3; }
	inline void set_s_PlacementId_3(String_t* value)
	{
		___s_PlacementId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PlacementId_3), (void*)value);
	}
};


// UnityEngine.Advertisements.Utilities.Json
struct Json_t431E14144D0A3C6EBBC3A98116D4FE81213F2942  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Advertisements.MetaData
struct MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::m_MetaData
	RuntimeObject* ___m_MetaData_0;
	// System.String UnityEngine.Advertisements.MetaData::<category>k__BackingField
	String_t* ___U3CcategoryU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_MetaData_0() { return static_cast<int32_t>(offsetof(MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3, ___m_MetaData_0)); }
	inline RuntimeObject* get_m_MetaData_0() const { return ___m_MetaData_0; }
	inline RuntimeObject** get_address_of_m_MetaData_0() { return &___m_MetaData_0; }
	inline void set_m_MetaData_0(RuntimeObject* value)
	{
		___m_MetaData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MetaData_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcategoryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3, ___U3CcategoryU3Ek__BackingField_1)); }
	inline String_t* get_U3CcategoryU3Ek__BackingField_1() const { return ___U3CcategoryU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CcategoryU3Ek__BackingField_1() { return &___U3CcategoryU3Ek__BackingField_1; }
	inline void set_U3CcategoryU3Ek__BackingField_1(String_t* value)
	{
		___U3CcategoryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcategoryU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Platform
struct Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D  : public RuntimeObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.Events.StartEventArgs> UnityEngine.Advertisements.Platform.Platform::OnStart
	EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * ___OnStart_0;
	// System.EventHandler`1<UnityEngine.Advertisements.Events.FinishEventArgs> UnityEngine.Advertisements.Platform.Platform::OnFinish
	EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * ___OnFinish_1;
	// UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.Platform::<Banner>k__BackingField
	RuntimeObject* ___U3CBannerU3Ek__BackingField_2;
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.Platform::<UnityLifecycleManager>k__BackingField
	RuntimeObject* ___U3CUnityLifecycleManagerU3Ek__BackingField_3;
	// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::<NativePlatform>k__BackingField
	RuntimeObject* ___U3CNativePlatformU3Ek__BackingField_4;
	// System.Boolean UnityEngine.Advertisements.Platform.Platform::<IsShowing>k__BackingField
	bool ___U3CIsShowingU3Ek__BackingField_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.Advertisements.IUnityAdsListener> UnityEngine.Advertisements.Platform.Platform::<Listeners>k__BackingField
	HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * ___U3CListenersU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_OnStart_0() { return static_cast<int32_t>(offsetof(Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D, ___OnStart_0)); }
	inline EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * get_OnStart_0() const { return ___OnStart_0; }
	inline EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C ** get_address_of_OnStart_0() { return &___OnStart_0; }
	inline void set_OnStart_0(EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * value)
	{
		___OnStart_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStart_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnFinish_1() { return static_cast<int32_t>(offsetof(Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D, ___OnFinish_1)); }
	inline EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * get_OnFinish_1() const { return ___OnFinish_1; }
	inline EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 ** get_address_of_OnFinish_1() { return &___OnFinish_1; }
	inline void set_OnFinish_1(EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * value)
	{
		___OnFinish_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFinish_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBannerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D, ___U3CBannerU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CBannerU3Ek__BackingField_2() const { return ___U3CBannerU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CBannerU3Ek__BackingField_2() { return &___U3CBannerU3Ek__BackingField_2; }
	inline void set_U3CBannerU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CBannerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBannerU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnityLifecycleManagerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D, ___U3CUnityLifecycleManagerU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CUnityLifecycleManagerU3Ek__BackingField_3() const { return ___U3CUnityLifecycleManagerU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CUnityLifecycleManagerU3Ek__BackingField_3() { return &___U3CUnityLifecycleManagerU3Ek__BackingField_3; }
	inline void set_U3CUnityLifecycleManagerU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CUnityLifecycleManagerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityLifecycleManagerU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNativePlatformU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D, ___U3CNativePlatformU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CNativePlatformU3Ek__BackingField_4() const { return ___U3CNativePlatformU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CNativePlatformU3Ek__BackingField_4() { return &___U3CNativePlatformU3Ek__BackingField_4; }
	inline void set_U3CNativePlatformU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CNativePlatformU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNativePlatformU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsShowingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D, ___U3CIsShowingU3Ek__BackingField_5)); }
	inline bool get_U3CIsShowingU3Ek__BackingField_5() const { return ___U3CIsShowingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsShowingU3Ek__BackingField_5() { return &___U3CIsShowingU3Ek__BackingField_5; }
	inline void set_U3CIsShowingU3Ek__BackingField_5(bool value)
	{
		___U3CIsShowingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CListenersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D, ___U3CListenersU3Ek__BackingField_6)); }
	inline HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * get_U3CListenersU3Ek__BackingField_6() const { return ___U3CListenersU3Ek__BackingField_6; }
	inline HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 ** get_address_of_U3CListenersU3Ek__BackingField_6() { return &___U3CListenersU3Ek__BackingField_6; }
	inline void set_U3CListenersU3Ek__BackingField_6(HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * value)
	{
		___U3CListenersU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListenersU3Ek__BackingField_6), (void*)value);
	}
};


// UnityEngine.Advertisements.Purchasing.Purchasing
struct Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7  : public RuntimeObject
{
public:

public:
};

struct Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields
{
public:
	// System.Type UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingManagerType
	Type_t * ___s_PurchasingManagerType_0;
	// System.Boolean UnityEngine.Advertisements.Purchasing.Purchasing::s_Initialized
	bool ___s_Initialized_1;
	// System.Reflection.MethodInfo UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingInitiatePurchaseMethodInfo
	MethodInfo_t * ___s_PurchasingInitiatePurchaseMethodInfo_2;
	// System.Reflection.MethodInfo UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingGetPromoVersionMethodInfo
	MethodInfo_t * ___s_PurchasingGetPromoVersionMethodInfo_3;
	// System.Reflection.MethodInfo UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingGetPromoCatalogMethodInfo
	MethodInfo_t * ___s_PurchasingGetPromoCatalogMethodInfo_4;
	// System.String UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingManagerClassName
	String_t* ___s_PurchasingManagerClassName_5;
	// System.String UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingInitiatePurchaseMethodName
	String_t* ___s_PurchasingInitiatePurchaseMethodName_6;
	// System.String UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingGetPromoVersionMethodName
	String_t* ___s_PurchasingGetPromoVersionMethodName_7;
	// System.String UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingGetPromoCatalogMethodName
	String_t* ___s_PurchasingGetPromoCatalogMethodName_8;
	// UnityEngine.Advertisements.Purchasing.IPurchasingEventSender UnityEngine.Advertisements.Purchasing.Purchasing::s_Platform
	RuntimeObject* ___s_Platform_9;

public:
	inline static int32_t get_offset_of_s_PurchasingManagerType_0() { return static_cast<int32_t>(offsetof(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields, ___s_PurchasingManagerType_0)); }
	inline Type_t * get_s_PurchasingManagerType_0() const { return ___s_PurchasingManagerType_0; }
	inline Type_t ** get_address_of_s_PurchasingManagerType_0() { return &___s_PurchasingManagerType_0; }
	inline void set_s_PurchasingManagerType_0(Type_t * value)
	{
		___s_PurchasingManagerType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingManagerType_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_1() { return static_cast<int32_t>(offsetof(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields, ___s_Initialized_1)); }
	inline bool get_s_Initialized_1() const { return ___s_Initialized_1; }
	inline bool* get_address_of_s_Initialized_1() { return &___s_Initialized_1; }
	inline void set_s_Initialized_1(bool value)
	{
		___s_Initialized_1 = value;
	}

	inline static int32_t get_offset_of_s_PurchasingInitiatePurchaseMethodInfo_2() { return static_cast<int32_t>(offsetof(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields, ___s_PurchasingInitiatePurchaseMethodInfo_2)); }
	inline MethodInfo_t * get_s_PurchasingInitiatePurchaseMethodInfo_2() const { return ___s_PurchasingInitiatePurchaseMethodInfo_2; }
	inline MethodInfo_t ** get_address_of_s_PurchasingInitiatePurchaseMethodInfo_2() { return &___s_PurchasingInitiatePurchaseMethodInfo_2; }
	inline void set_s_PurchasingInitiatePurchaseMethodInfo_2(MethodInfo_t * value)
	{
		___s_PurchasingInitiatePurchaseMethodInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingInitiatePurchaseMethodInfo_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PurchasingGetPromoVersionMethodInfo_3() { return static_cast<int32_t>(offsetof(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields, ___s_PurchasingGetPromoVersionMethodInfo_3)); }
	inline MethodInfo_t * get_s_PurchasingGetPromoVersionMethodInfo_3() const { return ___s_PurchasingGetPromoVersionMethodInfo_3; }
	inline MethodInfo_t ** get_address_of_s_PurchasingGetPromoVersionMethodInfo_3() { return &___s_PurchasingGetPromoVersionMethodInfo_3; }
	inline void set_s_PurchasingGetPromoVersionMethodInfo_3(MethodInfo_t * value)
	{
		___s_PurchasingGetPromoVersionMethodInfo_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingGetPromoVersionMethodInfo_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_PurchasingGetPromoCatalogMethodInfo_4() { return static_cast<int32_t>(offsetof(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields, ___s_PurchasingGetPromoCatalogMethodInfo_4)); }
	inline MethodInfo_t * get_s_PurchasingGetPromoCatalogMethodInfo_4() const { return ___s_PurchasingGetPromoCatalogMethodInfo_4; }
	inline MethodInfo_t ** get_address_of_s_PurchasingGetPromoCatalogMethodInfo_4() { return &___s_PurchasingGetPromoCatalogMethodInfo_4; }
	inline void set_s_PurchasingGetPromoCatalogMethodInfo_4(MethodInfo_t * value)
	{
		___s_PurchasingGetPromoCatalogMethodInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingGetPromoCatalogMethodInfo_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_PurchasingManagerClassName_5() { return static_cast<int32_t>(offsetof(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields, ___s_PurchasingManagerClassName_5)); }
	inline String_t* get_s_PurchasingManagerClassName_5() const { return ___s_PurchasingManagerClassName_5; }
	inline String_t** get_address_of_s_PurchasingManagerClassName_5() { return &___s_PurchasingManagerClassName_5; }
	inline void set_s_PurchasingManagerClassName_5(String_t* value)
	{
		___s_PurchasingManagerClassName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingManagerClassName_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_PurchasingInitiatePurchaseMethodName_6() { return static_cast<int32_t>(offsetof(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields, ___s_PurchasingInitiatePurchaseMethodName_6)); }
	inline String_t* get_s_PurchasingInitiatePurchaseMethodName_6() const { return ___s_PurchasingInitiatePurchaseMethodName_6; }
	inline String_t** get_address_of_s_PurchasingInitiatePurchaseMethodName_6() { return &___s_PurchasingInitiatePurchaseMethodName_6; }
	inline void set_s_PurchasingInitiatePurchaseMethodName_6(String_t* value)
	{
		___s_PurchasingInitiatePurchaseMethodName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingInitiatePurchaseMethodName_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_PurchasingGetPromoVersionMethodName_7() { return static_cast<int32_t>(offsetof(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields, ___s_PurchasingGetPromoVersionMethodName_7)); }
	inline String_t* get_s_PurchasingGetPromoVersionMethodName_7() const { return ___s_PurchasingGetPromoVersionMethodName_7; }
	inline String_t** get_address_of_s_PurchasingGetPromoVersionMethodName_7() { return &___s_PurchasingGetPromoVersionMethodName_7; }
	inline void set_s_PurchasingGetPromoVersionMethodName_7(String_t* value)
	{
		___s_PurchasingGetPromoVersionMethodName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingGetPromoVersionMethodName_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_PurchasingGetPromoCatalogMethodName_8() { return static_cast<int32_t>(offsetof(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields, ___s_PurchasingGetPromoCatalogMethodName_8)); }
	inline String_t* get_s_PurchasingGetPromoCatalogMethodName_8() const { return ___s_PurchasingGetPromoCatalogMethodName_8; }
	inline String_t** get_address_of_s_PurchasingGetPromoCatalogMethodName_8() { return &___s_PurchasingGetPromoCatalogMethodName_8; }
	inline void set_s_PurchasingGetPromoCatalogMethodName_8(String_t* value)
	{
		___s_PurchasingGetPromoCatalogMethodName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingGetPromoCatalogMethodName_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_Platform_9() { return static_cast<int32_t>(offsetof(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields, ___s_Platform_9)); }
	inline RuntimeObject* get_s_Platform_9() const { return ___s_Platform_9; }
	inline RuntimeObject** get_address_of_s_Platform_9() { return &___s_Platform_9; }
	inline void set_s_Platform_9(RuntimeObject* value)
	{
		___s_Platform_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Platform_9), (void*)value);
	}
};


// UnityEngine.Advertisements.Purchasing.PurchasingPlatform
struct PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8  : public RuntimeObject
{
public:

public:
};

struct PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_StaticFields
{
public:
	// UnityEngine.Advertisements.Purchasing.PurchasingPlatform UnityEngine.Advertisements.Purchasing.PurchasingPlatform::<Instance>k__BackingField
	PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * ___U3CInstanceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 ** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::<resultCallback>k__BackingField
	Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9 * ___U3CresultCallbackU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.ShowOptions::<gamerSid>k__BackingField
	String_t* ___U3CgamerSidU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CresultCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F, ___U3CresultCallbackU3Ek__BackingField_0)); }
	inline Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9 * get_U3CresultCallbackU3Ek__BackingField_0() const { return ___U3CresultCallbackU3Ek__BackingField_0; }
	inline Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9 ** get_address_of_U3CresultCallbackU3Ek__BackingField_0() { return &___U3CresultCallbackU3Ek__BackingField_0; }
	inline void set_U3CresultCallbackU3Ek__BackingField_0(Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9 * value)
	{
		___U3CresultCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresultCallbackU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgamerSidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F, ___U3CgamerSidU3Ek__BackingField_1)); }
	inline String_t* get_U3CgamerSidU3Ek__BackingField_1() const { return ___U3CgamerSidU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CgamerSidU3Ek__BackingField_1() { return &___U3CgamerSidU3Ek__BackingField_1; }
	inline void set_U3CgamerSidU3Ek__BackingField_1(String_t* value)
	{
		___U3CgamerSidU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgamerSidU3Ek__BackingField_1), (void*)value);
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// UnityEngine.Advertisements.Utilities.UnityLifecycleManager
struct UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.Advertisements.Utilities.CoroutineExecutor UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_CoroutineExecutor
	CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * ___m_CoroutineExecutor_1;
	// UnityEngine.Advertisements.Utilities.ApplicationQuit UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_ApplicationQuit
	ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28 * ___m_ApplicationQuit_2;
	// System.Boolean UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_Disposed
	bool ___m_Disposed_3;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CoroutineExecutor_1() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB, ___m_CoroutineExecutor_1)); }
	inline CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * get_m_CoroutineExecutor_1() const { return ___m_CoroutineExecutor_1; }
	inline CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 ** get_address_of_m_CoroutineExecutor_1() { return &___m_CoroutineExecutor_1; }
	inline void set_m_CoroutineExecutor_1(CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * value)
	{
		___m_CoroutineExecutor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineExecutor_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ApplicationQuit_2() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB, ___m_ApplicationQuit_2)); }
	inline ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28 * get_m_ApplicationQuit_2() const { return ___m_ApplicationQuit_2; }
	inline ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28 ** get_address_of_m_ApplicationQuit_2() { return &___m_ApplicationQuit_2; }
	inline void set_m_ApplicationQuit_2(ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28 * value)
	{
		___m_ApplicationQuit_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ApplicationQuit_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Disposed_3() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB, ___m_Disposed_3)); }
	inline bool get_m_Disposed_3() const { return ___m_Disposed_3; }
	inline bool* get_address_of_m_Disposed_3() { return &___m_Disposed_3; }
	inline void set_m_Disposed_3(bool value)
	{
		___m_Disposed_3 = value;
	}
};


// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner
struct UnsupportedBanner_t7AF5B0FC5900E8DCCA7924298EFD0CCE5C9EE553  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform
struct UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601  : public RuntimeObject
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

// UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0::bannerOptions
	BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * ___bannerOptions_0;

public:
	inline static int32_t get_offset_of_bannerOptions_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D, ___bannerOptions_0)); }
	inline BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * get_bannerOptions_0() const { return ___bannerOptions_0; }
	inline BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 ** get_address_of_bannerOptions_0() { return &___bannerOptions_0; }
	inline void set_bannerOptions_0(BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * value)
	{
		___bannerOptions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerOptions_0), (void*)value);
	}
};


// UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0::bannerOptions
	BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * ___bannerOptions_0;

public:
	inline static int32_t get_offset_of_bannerOptions_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7, ___bannerOptions_0)); }
	inline BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * get_bannerOptions_0() const { return ___bannerOptions_0; }
	inline BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 ** get_address_of_bannerOptions_0() { return &___bannerOptions_0; }
	inline void set_bannerOptions_0(BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * value)
	{
		___bannerOptions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerOptions_0), (void*)value);
	}
};


// UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0::bannerOptions
	BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * ___bannerOptions_0;

public:
	inline static int32_t get_offset_of_bannerOptions_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826, ___bannerOptions_0)); }
	inline BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * get_bannerOptions_0() const { return ___bannerOptions_0; }
	inline BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 ** get_address_of_bannerOptions_0() { return &___bannerOptions_0; }
	inline void set_bannerOptions_0(BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * value)
	{
		___bannerOptions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerOptions_0), (void*)value);
	}
};


// UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerLoadOptions UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0::bannerOptions
	BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * ___bannerOptions_0;

public:
	inline static int32_t get_offset_of_bannerOptions_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4, ___bannerOptions_0)); }
	inline BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * get_bannerOptions_0() const { return ___bannerOptions_0; }
	inline BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C ** get_address_of_bannerOptions_0() { return &___bannerOptions_0; }
	inline void set_bannerOptions_0(BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * value)
	{
		___bannerOptions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerOptions_0), (void*)value);
	}
};


// UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerLoadOptions UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0::bannerOptions
	BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * ___bannerOptions_0;
	// System.String UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_bannerOptions_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765, ___bannerOptions_0)); }
	inline BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * get_bannerOptions_0() const { return ___bannerOptions_0; }
	inline BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C ** get_address_of_bannerOptions_0() { return &___bannerOptions_0; }
	inline void set_bannerOptions_0(BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * value)
	{
		___bannerOptions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerOptions_0), (void*)value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};


// UnityEngine.Advertisements.Utilities.Json/Serializer
struct Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6  : public RuntimeObject
{
public:
	// System.Text.StringBuilder UnityEngine.Advertisements.Utilities.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_0), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.ShowOptions UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass33_0::showOptions
	ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * ___showOptions_0;
	// UnityEngine.Advertisements.Platform.Platform UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass33_0::<>4__this
	Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * ___U3CU3E4__this_1;
	// System.EventHandler`1<UnityEngine.Advertisements.Events.FinishEventArgs> UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass33_0::finishHandler
	EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * ___finishHandler_2;

public:
	inline static int32_t get_offset_of_showOptions_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E, ___showOptions_0)); }
	inline ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * get_showOptions_0() const { return ___showOptions_0; }
	inline ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F ** get_address_of_showOptions_0() { return &___showOptions_0; }
	inline void set_showOptions_0(ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * value)
	{
		___showOptions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___showOptions_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E, ___U3CU3E4__this_1)); }
	inline Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_finishHandler_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E, ___finishHandler_2)); }
	inline EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * get_finishHandler_2() const { return ___finishHandler_2; }
	inline EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 ** get_address_of_finishHandler_2() { return &___finishHandler_2; }
	inline void set_finishHandler_2(EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * value)
	{
		___finishHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___finishHandler_2), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Platform.Platform UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass40_0::<>4__this
	Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass40_0::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62, ___U3CU3E4__this_0)); }
	inline Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Platform.Platform UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass41_0::<>4__this
	Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass41_0::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3, ___U3CU3E4__this_0)); }
	inline Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Platform.Platform UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass42_0::<>4__this
	Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass42_0::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6, ___U3CU3E4__this_0)); }
	inline Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Advertisements.IUnityAdsListener>
struct Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6, ____set_0)); }
	inline HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6, ____current_3)); }
	inline RuntimeObject* get__current_3() const { return ____current_3; }
	inline RuntimeObject** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____set_0)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get__set_0() const { return ____set_0; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.Advertisements.Events.StartEventArgs
struct StartEventArgs_t89137A1788A305D836F12314C43763F1CF19AF56  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String UnityEngine.Advertisements.Events.StartEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StartEventArgs_t89137A1788A305D836F12314C43763F1CF19AF56, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplacementIdU3Ek__BackingField_1), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.Advertisements.BannerPosition
struct BannerPosition_t5E74BE156B17D7C51035FA44B62F7FA063D694CD 
{
public:
	// System.Int32 UnityEngine.Advertisements.BannerPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BannerPosition_t5E74BE156B17D7C51035FA44B62F7FA063D694CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
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


// UnityEngine.Advertisements.Platform.iOS.IosNativeObject
struct IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Advertisements.Platform.iOS.IosNativeObject::m_NativePtr
	intptr_t ___m_NativePtr_1;

public:
	inline static int32_t get_offset_of_m_NativePtr_1() { return static_cast<int32_t>(offsetof(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD, ___m_NativePtr_1)); }
	inline intptr_t get_m_NativePtr_1() const { return ___m_NativePtr_1; }
	inline intptr_t* get_address_of_m_NativePtr_1() { return &___m_NativePtr_1; }
	inline void set_m_NativePtr_1(intptr_t value)
	{
		___m_NativePtr_1 = value;
	}
};

struct IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_StaticFields
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject> UnityEngine.Advertisements.Platform.iOS.IosNativeObject::s_Objects
	ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 * ___s_Objects_0;

public:
	inline static int32_t get_offset_of_s_Objects_0() { return static_cast<int32_t>(offsetof(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_StaticFields, ___s_Objects_0)); }
	inline ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 * get_s_Objects_0() const { return ___s_Objects_0; }
	inline ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 ** get_address_of_s_Objects_0() { return &___s_Objects_0; }
	inline void set_s_Objects_0(ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 * value)
	{
		___s_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Objects_0), (void*)value);
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
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

// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
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


// UnityEngine.ScaleMode
struct ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49 
{
public:
	// System.Int32 UnityEngine.ScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.ShowResult
struct ShowResult_t612CF36187E7BC3628887C4CA55CD5B0BD7854E5 
{
public:
	// System.Int32 UnityEngine.Advertisements.ShowResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShowResult_t612CF36187E7BC3628887C4CA55CD5B0BD7854E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.UnityAdsInitializationError
struct UnityAdsInitializationError_t5FC7ADC006AACF27F0071BFAE222310AD5CA0F85 
{
public:
	// System.Int32 UnityEngine.Advertisements.UnityAdsInitializationError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityAdsInitializationError_t5FC7ADC006AACF27F0071BFAE222310AD5CA0F85, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.UnityAdsShowCompletionState
struct UnityAdsShowCompletionState_t6A658C9E66F269D37D49BF30ABC089C5AEDCC9CD 
{
public:
	// System.Int32 UnityEngine.Advertisements.UnityAdsShowCompletionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityAdsShowCompletionState_t6A658C9E66F269D37D49BF30ABC089C5AEDCC9CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.UnityAdsShowError
struct UnityAdsShowError_tC4A6F21B40B4BCE5589E60591D860DF9293973A2 
{
public:
	// System.Int32 UnityEngine.Advertisements.UnityAdsShowError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityAdsShowError_tC4A6F21B40B4BCE5589E60591D860DF9293973A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Advertisements.Events.FinishEventArgs
struct FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String UnityEngine.Advertisements.Events.FinishEventArgs::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_1;
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.Events.FinishEventArgs::<showResult>k__BackingField
	int32_t ___U3CshowResultU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1, ___U3CplacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_1() const { return ___U3CplacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_1() { return &___U3CplacementIdU3Ek__BackingField_1; }
	inline void set_U3CplacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplacementIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CshowResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1, ___U3CshowResultU3Ek__BackingField_2)); }
	inline int32_t get_U3CshowResultU3Ek__BackingField_2() const { return ___U3CshowResultU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CshowResultU3Ek__BackingField_2() { return &___U3CshowResultU3Ek__BackingField_2; }
	inline void set_U3CshowResultU3Ek__BackingField_2(int32_t value)
	{
		___U3CshowResultU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener
struct IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E  : public IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD
{
public:
	// UnityEngine.Advertisements.IUnityAdsInitializationListener UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::m_UnityAdsInternalListener
	RuntimeObject* ___m_UnityAdsInternalListener_2;
	// UnityEngine.Advertisements.IUnityAdsInitializationListener UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::m_UserListener
	RuntimeObject* ___m_UserListener_3;

public:
	inline static int32_t get_offset_of_m_UnityAdsInternalListener_2() { return static_cast<int32_t>(offsetof(IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E, ___m_UnityAdsInternalListener_2)); }
	inline RuntimeObject* get_m_UnityAdsInternalListener_2() const { return ___m_UnityAdsInternalListener_2; }
	inline RuntimeObject** get_address_of_m_UnityAdsInternalListener_2() { return &___m_UnityAdsInternalListener_2; }
	inline void set_m_UnityAdsInternalListener_2(RuntimeObject* value)
	{
		___m_UnityAdsInternalListener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnityAdsInternalListener_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_UserListener_3() { return static_cast<int32_t>(offsetof(IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E, ___m_UserListener_3)); }
	inline RuntimeObject* get_m_UserListener_3() const { return ___m_UserListener_3; }
	inline RuntimeObject** get_address_of_m_UserListener_3() { return &___m_UserListener_3; }
	inline void set_m_UserListener_3(RuntimeObject* value)
	{
		___m_UserListener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserListener_3), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.iOS.IosPlatform
struct IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF  : public IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD
{
public:

public:
};

struct IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_StaticFields
{
public:
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Platform.iOS.IosPlatform::s_Platform
	RuntimeObject* ___s_Platform_2;

public:
	inline static int32_t get_offset_of_s_Platform_2() { return static_cast<int32_t>(offsetof(IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_StaticFields, ___s_Platform_2)); }
	inline RuntimeObject* get_s_Platform_2() const { return ___s_Platform_2; }
	inline RuntimeObject** get_address_of_s_Platform_2() { return &___s_Platform_2; }
	inline void set_s_Platform_2(RuntimeObject* value)
	{
		___s_Platform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Platform_2), (void*)value);
	}
};


// UnityEngine.Advertisements.IosShowListener
struct IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223  : public IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD
{
public:
	// UnityEngine.Advertisements.IUnityAdsShowListener UnityEngine.Advertisements.IosShowListener::m_UnityAdsInternalListener
	RuntimeObject* ___m_UnityAdsInternalListener_2;
	// UnityEngine.Advertisements.IUnityAdsShowListener UnityEngine.Advertisements.IosShowListener::m_UserListener
	RuntimeObject* ___m_UserListener_3;

public:
	inline static int32_t get_offset_of_m_UnityAdsInternalListener_2() { return static_cast<int32_t>(offsetof(IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223, ___m_UnityAdsInternalListener_2)); }
	inline RuntimeObject* get_m_UnityAdsInternalListener_2() const { return ___m_UnityAdsInternalListener_2; }
	inline RuntimeObject** get_address_of_m_UnityAdsInternalListener_2() { return &___m_UnityAdsInternalListener_2; }
	inline void set_m_UnityAdsInternalListener_2(RuntimeObject* value)
	{
		___m_UnityAdsInternalListener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnityAdsInternalListener_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_UserListener_3() { return static_cast<int32_t>(offsetof(IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223, ___m_UserListener_3)); }
	inline RuntimeObject* get_m_UserListener_3() const { return ___m_UserListener_3; }
	inline RuntimeObject** get_address_of_m_UserListener_3() { return &___m_UserListener_3; }
	inline void set_m_UserListener_3(RuntimeObject* value)
	{
		___m_UserListener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserListener_3), (void*)value);
	}
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
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


// UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Platform.Platform UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass43_0::<>4__this
	Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass43_0::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass43_0::rawShowResult
	int32_t ___rawShowResult_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6, ___U3CU3E4__this_0)); }
	inline Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}

	inline static int32_t get_offset_of_rawShowResult_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6, ___rawShowResult_2)); }
	inline int32_t get_rawShowResult_2() const { return ___rawShowResult_2; }
	inline int32_t* get_address_of_rawShowResult_2() { return &___rawShowResult_2; }
	inline void set_rawShowResult_2(int32_t value)
	{
		___rawShowResult_2 = value;
	}
};


// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UnityEngine.Advertisements.Events.FinishEventArgs>
struct EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UnityEngine.Advertisements.Events.StartEventArgs>
struct EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
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


// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___m_Styles_31;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Font_4)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_box_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_box_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_button_6)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_button_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_toggle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_toggle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_label_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textField_9)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textArea_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_window_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSlider_12)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSlider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumb_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumbExtent_14() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumbExtent_14)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumbExtent_14() const { return ___m_horizontalSliderThumbExtent_14; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumbExtent_14() { return &___m_horizontalSliderThumbExtent_14; }
	inline void set_m_horizontalSliderThumbExtent_14(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumbExtent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumbExtent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_15() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSlider_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSlider_15() const { return ___m_verticalSlider_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSlider_15() { return &___m_verticalSlider_15; }
	inline void set_m_verticalSlider_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSlider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSlider_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_16() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumb_16)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumb_16() const { return ___m_verticalSliderThumb_16; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumb_16() { return &___m_verticalSliderThumb_16; }
	inline void set_m_verticalSliderThumb_16(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumb_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumb_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumbExtent_17() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumbExtent_17)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumbExtent_17() const { return ___m_verticalSliderThumbExtent_17; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumbExtent_17() { return &___m_verticalSliderThumbExtent_17; }
	inline void set_m_verticalSliderThumbExtent_17(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumbExtent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumbExtent_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_SliderMixed_18() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_SliderMixed_18)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SliderMixed_18() const { return ___m_SliderMixed_18; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SliderMixed_18() { return &___m_SliderMixed_18; }
	inline void set_m_SliderMixed_18(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SliderMixed_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SliderMixed_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_19() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbar_19)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbar_19() const { return ___m_horizontalScrollbar_19; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbar_19() { return &___m_horizontalScrollbar_19; }
	inline void set_m_horizontalScrollbar_19(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbar_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbar_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_20() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarThumb_20)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarThumb_20() const { return ___m_horizontalScrollbarThumb_20; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarThumb_20() { return &___m_horizontalScrollbarThumb_20; }
	inline void set_m_horizontalScrollbarThumb_20(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarThumb_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarThumb_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_21() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarLeftButton_21)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarLeftButton_21() const { return ___m_horizontalScrollbarLeftButton_21; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarLeftButton_21() { return &___m_horizontalScrollbarLeftButton_21; }
	inline void set_m_horizontalScrollbarLeftButton_21(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarLeftButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarLeftButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_22() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarRightButton_22)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarRightButton_22() const { return ___m_horizontalScrollbarRightButton_22; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarRightButton_22() { return &___m_horizontalScrollbarRightButton_22; }
	inline void set_m_horizontalScrollbarRightButton_22(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarRightButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarRightButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_23() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbar_23)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbar_23() const { return ___m_verticalScrollbar_23; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbar_23() { return &___m_verticalScrollbar_23; }
	inline void set_m_verticalScrollbar_23(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbar_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbar_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_24() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarThumb_24)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarThumb_24() const { return ___m_verticalScrollbarThumb_24; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarThumb_24() { return &___m_verticalScrollbarThumb_24; }
	inline void set_m_verticalScrollbarThumb_24(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarThumb_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarThumb_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_25() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarUpButton_25)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarUpButton_25() const { return ___m_verticalScrollbarUpButton_25; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarUpButton_25() { return &___m_verticalScrollbarUpButton_25; }
	inline void set_m_verticalScrollbarUpButton_25(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarUpButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarUpButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_26() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarDownButton_26)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarDownButton_26() const { return ___m_verticalScrollbarDownButton_26; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarDownButton_26() { return &___m_verticalScrollbarDownButton_26; }
	inline void set_m_verticalScrollbarDownButton_26(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarDownButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarDownButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollView_27() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_ScrollView_27)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_ScrollView_27() const { return ___m_ScrollView_27; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_ScrollView_27() { return &___m_ScrollView_27; }
	inline void set_m_ScrollView_27(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_ScrollView_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollView_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_28() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_CustomStyles_28)); }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* get_m_CustomStyles_28() const { return ___m_CustomStyles_28; }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70** get_address_of_m_CustomStyles_28() { return &___m_CustomStyles_28; }
	inline void set_m_CustomStyles_28(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* value)
	{
		___m_CustomStyles_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomStyles_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_29() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Settings_29)); }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * get_m_Settings_29() const { return ___m_Settings_29; }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 ** get_address_of_m_Settings_29() { return &___m_Settings_29; }
	inline void set_m_Settings_29(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * value)
	{
		___m_Settings_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Styles_31() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Styles_31)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_m_Styles_31() const { return ___m_Styles_31; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_m_Styles_31() { return &___m_Styles_31; }
	inline void set_m_Styles_31(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___m_Styles_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Styles_31), (void*)value);
	}
};

struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___current_33;

public:
	inline static int32_t get_offset_of_ms_Error_30() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___ms_Error_30)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_ms_Error_30() const { return ___ms_Error_30; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_ms_Error_30() { return &___ms_Error_30; }
	inline void set_ms_Error_30(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___ms_Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_Error_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_32() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___m_SkinChanged_32)); }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * get_m_SkinChanged_32() const { return ___m_SkinChanged_32; }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E ** get_address_of_m_SkinChanged_32() { return &___m_SkinChanged_32; }
	inline void set_m_SkinChanged_32(SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * value)
	{
		___m_SkinChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_current_33() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___current_33)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_current_33() const { return ___current_33; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_current_33() { return &___current_33; }
	inline void set_current_33(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___current_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_33), (void*)value);
	}
};


// System.MemberAccessException
struct MemberAccessException_tD623E47056C7D98D56B63B4B954D4E5E128A30FC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate
struct UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate
struct UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate
struct UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate
struct UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate
struct UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate
struct UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback
struct InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback
struct InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidErrorDelegate
struct UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidFinishDelegate
struct UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidStartDelegate
struct UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsReadyDelegate
struct UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.IosShowListener/ShowClickCallback
struct ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback
struct ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.IosShowListener/ShowFailureCallback
struct ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.IosShowListener/ShowStartCallback
struct ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingDidInitiatePurchasingCommand
struct unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetProductCatalog
struct unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetPurchasingVersion
struct unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingInitialize
struct unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE  : public MulticastDelegate_t
{
public:

public:
};


// System.MissingMemberException
struct MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639  : public MemberAccessException_tD623E47056C7D98D56B63B4B954D4E5E128A30FC
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_17;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_18;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Signature_19;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_MemberName_18() { return static_cast<int32_t>(offsetof(MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639, ___MemberName_18)); }
	inline String_t* get_MemberName_18() const { return ___MemberName_18; }
	inline String_t** get_address_of_MemberName_18() { return &___MemberName_18; }
	inline void set_MemberName_18(String_t* value)
	{
		___MemberName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_18), (void*)value);
	}

	inline static int32_t get_offset_of_Signature_19() { return static_cast<int32_t>(offsetof(MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639, ___Signature_19)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Signature_19() const { return ___Signature_19; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Signature_19() { return &___Signature_19; }
	inline void set_Signature_19(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Signature_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Signature_19), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Advertisements.Utilities.ApplicationQuit
struct ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Advertisements.Utilities.ApplicationQuit::OnApplicationQuitEventHandler
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___OnApplicationQuitEventHandler_4;

public:
	inline static int32_t get_offset_of_OnApplicationQuitEventHandler_4() { return static_cast<int32_t>(offsetof(ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28, ___OnApplicationQuitEventHandler_4)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_OnApplicationQuitEventHandler_4() const { return ___OnApplicationQuitEventHandler_4; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_OnApplicationQuitEventHandler_4() { return &___OnApplicationQuitEventHandler_4; }
	inline void set_OnApplicationQuitEventHandler_4(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___OnApplicationQuitEventHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnApplicationQuitEventHandler_4), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder
struct BannerPlaceholder_t976E009D31F6ECB3D5B9D99AD84D7E61C9B6B334  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::aTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___aTexture_4;
	// UnityEngine.Advertisements.BannerPosition UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BannerPosition
	int32_t ___BannerPosition_5;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BannerOptions
	BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * ___BannerOptions_6;
	// System.Boolean UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::IsShowing
	bool ___IsShowing_7;

public:
	inline static int32_t get_offset_of_aTexture_4() { return static_cast<int32_t>(offsetof(BannerPlaceholder_t976E009D31F6ECB3D5B9D99AD84D7E61C9B6B334, ___aTexture_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_aTexture_4() const { return ___aTexture_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_aTexture_4() { return &___aTexture_4; }
	inline void set_aTexture_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___aTexture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aTexture_4), (void*)value);
	}

	inline static int32_t get_offset_of_BannerPosition_5() { return static_cast<int32_t>(offsetof(BannerPlaceholder_t976E009D31F6ECB3D5B9D99AD84D7E61C9B6B334, ___BannerPosition_5)); }
	inline int32_t get_BannerPosition_5() const { return ___BannerPosition_5; }
	inline int32_t* get_address_of_BannerPosition_5() { return &___BannerPosition_5; }
	inline void set_BannerPosition_5(int32_t value)
	{
		___BannerPosition_5 = value;
	}

	inline static int32_t get_offset_of_BannerOptions_6() { return static_cast<int32_t>(offsetof(BannerPlaceholder_t976E009D31F6ECB3D5B9D99AD84D7E61C9B6B334, ___BannerOptions_6)); }
	inline BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * get_BannerOptions_6() const { return ___BannerOptions_6; }
	inline BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 ** get_address_of_BannerOptions_6() { return &___BannerOptions_6; }
	inline void set_BannerOptions_6(BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * value)
	{
		___BannerOptions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BannerOptions_6), (void*)value);
	}

	inline static int32_t get_offset_of_IsShowing_7() { return static_cast<int32_t>(offsetof(BannerPlaceholder_t976E009D31F6ECB3D5B9D99AD84D7E61C9B6B334, ___IsShowing_7)); }
	inline bool get_IsShowing_7() const { return ___IsShowing_7; }
	inline bool* get_address_of_IsShowing_7() { return &___IsShowing_7; }
	inline void set_IsShowing_7(bool value)
	{
		___IsShowing_7 = value;
	}
};


// UnityEngine.Advertisements.Utilities.CoroutineExecutor
struct CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 UnityEngine.Advertisements.Utilities.CoroutineExecutor::referenceCount
	int32_t ___referenceCount_4;
	// System.Collections.Generic.Queue`1<System.Action> UnityEngine.Advertisements.Utilities.CoroutineExecutor::queue
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * ___queue_5;

public:
	inline static int32_t get_offset_of_referenceCount_4() { return static_cast<int32_t>(offsetof(CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8, ___referenceCount_4)); }
	inline int32_t get_referenceCount_4() const { return ___referenceCount_4; }
	inline int32_t* get_address_of_referenceCount_4() { return &___referenceCount_4; }
	inline void set_referenceCount_4(int32_t value)
	{
		___referenceCount_4 = value;
	}

	inline static int32_t get_offset_of_queue_5() { return static_cast<int32_t>(offsetof(CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8, ___queue_5)); }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * get_queue_5() const { return ___queue_5; }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 ** get_address_of_queue_5() { return &___queue_5; }
	inline void set_queue_5(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * value)
	{
		___queue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_5), (void*)value);
	}
};


// System.MissingMethodException
struct MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41  : public MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639
{
public:
	// System.String System.MissingMethodException::signature
	String_t* ___signature_20;

public:
	inline static int32_t get_offset_of_signature_20() { return static_cast<int32_t>(offsetof(MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41, ___signature_20)); }
	inline String_t* get_signature_20() const { return ___signature_20; }
	inline String_t** get_address_of_signature_20() { return &___signature_20; }
	inline void set_signature_20(String_t* value)
	{
		___signature_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_20), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
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


// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// T UnityEngine.Advertisements.Platform.iOS.IosNativeObject::Get<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IosNativeObject_Get_TisRuntimeObject_m5C24800857598668A96F890C5D621E2617D77ACA_gshared (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>::TryRemove(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_mFDADC68DEA817DB95F593440E581B23F3293C004_gshared (ConcurrentDictionary_2_tBE4C8F273C9A02233383E9026A4042A14493B438 * __this, intptr_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>::TryAdd(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_mFFA7B861D8080925DE4B3F54B08BEF784DA1B79D_gshared (ConcurrentDictionary_2_tBE4C8F273C9A02233383E9026A4042A14493B438 * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m0010F4A5C471A4B1D40F0B7991F747A6C0E265AF_gshared (ConcurrentDictionary_2_tBE4C8F273C9A02233383E9026A4042A14493B438 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9D936778F28043838186FC2037F47460DA7925B9_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A  HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);

// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::CreatePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Advertisement_CreatePlatform_m71249903340CD74515A1A385E86B3E12C5F9B26F (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m9FA168B596AC1FD65615897DDBF66A6A7D185E8D (String_t* ___gameId0, bool ___testMode1, bool ___enablePerPlacementLoad2, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m0DDF9276FAF12F0A1065E76590EAE760852F3423 (String_t* ___gameId0, bool ___testMode1, bool ___enablePerPlacementLoad2, RuntimeObject* ___initializationListener3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_testMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityAdsSettings_get_testMode_mB7505FA841B82FB37A830EB43FE95DAB6FE38824 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager__ctor_m5822FB5D756A7E771C98F99167F4E39A164EEC89 (UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner__ctor_mA47E07719C9C72006E7114C2A3A5D84A7AE025C6 (IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform__ctor_mD09056D2993C762A6A115F8085A5AF9CD8B62618 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Banner::.ctor(UnityEngine.Advertisements.INativeBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_mD7C17C210808E9AADE22AEBE2E3D8A5CE4C4515A (Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * __this, RuntimeObject* ___nativeBanner0, RuntimeObject* ___unityLifecycleManager1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform::.ctor(UnityEngine.Advertisements.INativePlatform,UnityEngine.Advertisements.IBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m95CD2B9F4FFBA9A0173D397ED9972FED96185125 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, RuntimeObject* ___nativePlatform0, RuntimeObject* ___banner1, RuntimeObject* ___unityLifecycleManager2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_m5CBF1E2F1356D35BA196E1FA4DE3AFD1C361F072 (UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner__ctor_m6D6DAD586AB47309D25007D3A7EB49715DAFA6C2 (UnsupportedBanner_t7AF5B0FC5900E8DCCA7924298EFD0CCE5C9EE553 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_Invoke_mFFF1FFE59D8285F8A81350E6D5C4D791F44F6AC9 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mB2944D2E3A01D2C80C2E3ACFB348110A1681FD1A (U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_showCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * BannerOptions_get_showCallback_m4B6507E9558936032DE248611C825074A43568C7_inline (BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Banner::get_UnityLifecycleManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Banner_get_UnityLifecycleManager_mE1420E56855D7DF329BE3C16984ACAAFAC9CC8BA_inline (Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m2596B2A9DB3572F0844EF41FF827FCC533163F46 (U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7 * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_hideCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * BannerOptions_get_hideCallback_m1BB15E9FEFBCF252CF8FCEECB2919C767A73D887_inline (BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m258122D77ABDF0CB62D98AAF3D3A8A4F93A7E10B (U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826 * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_clickCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * BannerOptions_get_clickCallback_m56E6EE03D4360E6D8F4B273556451D8A2BE44F64_inline (BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mA404514F45E29E208E2958E21B333B0ED66267A9 (U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4 * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::get_loadCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * BannerLoadOptions_get_loadCallback_m8D2F618B70D875D6BA94BAFB44A17B21CBDD7DF5_inline (BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mEBD3FEB87010F3A469B824F45BE3531B65262470 (U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765 * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::get_errorCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * BannerLoadOptions_get_errorCallback_mD168B1D1BE035B21EB917A5A6465C2EFBCA450E1_inline (BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA (const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BackgroundTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * BannerPlaceholder_BackgroundTexture_m8EA8956BE24F6DB668E4FEA022C5B68E1B734AEC (int32_t ___width0, int32_t ___height1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F (const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_box_m3877DF429E9B3E7A4ADF39EAAEA4948DD6C38BB0 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::GetBannerRect(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  BannerPlaceholder_GetBannerRect_mB10DDFDACCC78E6A7930BADC06641BE653AFF443 (int32_t ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m2D990F18AA1E71C725D759D25935878C8795BCB7 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_Invoke_m9FB4493693324B08D89AEAF21BC14ABAF11C57C5 (BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, int32_t ___scaleMode2, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mCBAEFC1F48A5BF6E20691EE14024CEBF93705018 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidShow_m321FF9813EAC63E78EA6765AE7E24D33064318E3 (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidHide(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidHide_mF9ABA261CF7051F0377E607C52A260FF1A673236 (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerClick_mA65D35374382B7752906042F40E54AE100339673 (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidError_m093C3E3B66AF1304225E960108F5DD736FFC48F2 (String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidUnload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidUnload_m8AAE33F67B340E82EDDCBAB957F609024ADC81C1 (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidLoad_mFEC68685C683484E6BAA3F76B12C61E5B0B83F9C (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerShowDelegate__ctor_mB01F4CC929DB0BF11407229C58DC726D008799B9 (UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerShowCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerShowCallback_mE5AE355BBF616AEB4BD62E376123B2AA77C38456 (UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerHideDelegate__ctor_m48AAAE01D3AB09566026730479ECA42F453B7766 (UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerHideCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerHideCallback_mB830E8859D3D912D47D386BC0A1EADABAB806CA4 (UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerClickDelegate__ctor_mC946BB51A214F9DF4E453DE8E9256ADE13058D12 (UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerClickCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerClickCallback_m23B120BF15AA7635EBFDC0B552DB9A20482F87F5 (UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerErrorDelegate__ctor_m5030294B00D540E1621667CDAA3A9D41B59186C5 (UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerErrorCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerErrorCallback_mF010A20A0D8078DC33B98248576B33FA8708A9CD (UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerUnloadDelegate__ctor_m2C15895630DBDB6D8DE39149A22F882F1FBD9C2C (UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerUnloadCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerUnloadCallback_mA943C2C69D1933F08F4B2930DA862070E81FB933 (UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerLoadDelegate__ctor_m226DDB079B0B5D40F020B8E9411291D62E285ABB (UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerLoadCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerLoadCallback_mCE1BD558FBF92B6B785209FC02F250A7C4243EED (UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityBannerInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityBannerInitialize_m324B6198B32DA21FC51228ED10D8C309253BE1B7 (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationComplete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationComplete_m7165028F246A814FA7CBBEE3885BC9791BA24555 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationFailed(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationFailed_mE1FCBCE03AA4A47714D971AEF4DB9806CCB17F4D (intptr_t ___ptr0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject__ctor_m5F3E29968928AA6772D607CD85F993FBDF7FD370 (IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitSuccessCallback__ctor_m0EEE2D826BB9EEEE4B9A00B8B4008BA8FBC72E6E (InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitFailureCallback__ctor_m2A8C922C2452B6B14C46328E81366935EAA13423 (InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::InitializationListenerCreate(UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback,UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosInitializationListener_InitializationListenerCreate_m15663F2983DE265C0214750A1E3D747CC3A1382F (InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194 * ___initSuccessCallback0, InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2 * ___initFailureCallback1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::set_NativePtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject_set_NativePtr_mDB10C0F5BB80B63A28977BB84BC20211FA7F4DCE (IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD * __this, intptr_t ___value0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Advertisements.Platform.iOS.IosNativeObject::get_NativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t IosNativeObject_get_NativePtr_m55952C88D580C58372495F9F6F9683115ECA16FE_inline (IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::InitializationListenerDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_InitializationListenerDestroy_m608AA7179359DE454D88DEDFD531FCF74766541D (intptr_t ___ptr0, const RuntimeMethod* method);
// T UnityEngine.Advertisements.Platform.iOS.IosNativeObject::Get<UnityEngine.Advertisements.Platform.iOS.IosInitializationListener>(System.IntPtr)
inline IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * IosNativeObject_Get_TisIosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E_m229054BFD26567EA48811D6F0D54D1161EE545B2 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	return ((  IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * (*) (intptr_t, const RuntimeMethod*))IosNativeObject_Get_TisRuntimeObject_m5C24800857598668A96F890C5D621E2617D77ACA_gshared)(___ptr0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosNativeObject::CheckDisposedAndLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosNativeObject_CheckDisposedAndLogError_m5CA0830CB17F0B4CC0D8994D9279B16255EC7327 (IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationComplete_mFFCFD20FBCE9F5B0D6BF8EF86078DA18569F375A (IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationFailed_mB51FBCD266AC424876EC7CD05B189D03042B4DE3 (IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>::TryRemove(!0,!1&)
inline bool ConcurrentDictionary_2_TryRemove_m94D7B4FA99F9811406BF1B8663EBAF63F512834E (ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 * __this, intptr_t ___key0, IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 *, intptr_t, IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD **, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_mFDADC68DEA817DB95F593440E581B23F3293C004_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>::TryAdd(!0,!1)
inline bool ConcurrentDictionary_2_TryAdd_m2A339462EDFC09A31ED19439E15C3558BE5DA5EF (ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 * __this, intptr_t ___key0, IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 *, intptr_t, IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD *, const RuntimeMethod*))ConcurrentDictionary_2_TryAdd_mFFA7B861D8080925DE4B3F54B08BEF784DA1B79D_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::BridgeTransfer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject_BridgeTransfer_m9D249DCAE81B11660371DCE474E486F7BA99E342 (intptr_t ___x0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.IntPtr,UnityEngine.Advertisements.Platform.iOS.IosNativeObject>::.ctor()
inline void ConcurrentDictionary_2__ctor_mBD9A48B039C905A69F17C6B3D82001A52A1EC09B (ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 * __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 *, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m0010F4A5C471A4B1D40F0B7991F747A6C0E265AF_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsReady_m59EA9785AE573691825399F7D168F44CECA710AD (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsDidError(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsDidError_m75F8A97597A76D732BF2EC28586302C2AD6C0518 (int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsDidStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsDidStart_mADDAF7680B98E8D9161E7B7E25B8E4ABA1AEF2DF (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsDidFinish(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsDidFinish_m4D486230CFB4B276945979FB058C18E37A90A974 (String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsReadyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsReadyDelegate__ctor_m69FD51A73902DDF57F5EA8A60F38180B8A2DED45 (UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetReadyCallback(UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsReadyDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetReadyCallback_mAE34F94248250D0083417EA5D957E807E437563A (UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidErrorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsDidErrorDelegate__ctor_m67EC37FE3D0ABA25A7C33AC029A2F9C6C4D5B271 (UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetDidErrorCallback(UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidErrorDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetDidErrorCallback_m03C32CEB47C3CC92D1C83F93338FF1669B260F0D (UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidStartDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsDidStartDelegate__ctor_mA75C24D725320A16845F928D73997B7B485182AA (UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetDidStartCallback(UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidStartDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetDidStartCallback_m76FD06ADC0F9AB4B5669A3958D02DD6C2A806E49 (UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidFinishDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsDidFinishDelegate__ctor_mC5C16F8D8122844D28E9163A7445A586E152B892 (UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetDidFinishCallback(UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidFinishDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetDidFinishCallback_mB9F526B0CFB4AD69E448EA14D5D2FE2B9ABB1FCB (UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform__ctor_mAB82A0104035B56F3BAA5FD32FEC419FCB64C2F6 (PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_Initialize_m20529FE385966230350594410E5D19ED2D647D2B (PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::.ctor(UnityEngine.Advertisements.IUnityAdsInitializationListener,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener__ctor_mA962AC26B0138DA9DA04E24A47462C08D1D48E77 (IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * __this, RuntimeObject* ___unityAdsInternalListener0, RuntimeObject* ___userListener1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsInitialize(System.String,System.Boolean,System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsInitialize_m58FF4C5691E54901632529D477AE8BEABB139C42 (String_t* ___gameId0, bool ___testMode1, bool ___enablePerPlacementLoad2, intptr_t ___initializationListener3, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.IosShowListener::.ctor(UnityEngine.Advertisements.IUnityAdsShowListener,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener__ctor_m6DA7501FCDBDEC41F15772712343D49E3227B637 (IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * __this, RuntimeObject* ___unityAdsInternalListener0, RuntimeObject* ___userListener1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsShow(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsShow_m1407039141A5FB5EBE81878E92F84DFB934AEA87 (String_t* ___placementId0, intptr_t ___showListener1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.MetaData::get_category()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mA024D4E519DD1CCEC25F80B93A4200115D5B7932_inline (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.MetaData::ToJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_ToJSON_mCCF425ED0824657198D267C26B136C445D15D65E (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetMetaData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetMetaData_m191677377DC84DB9BEB304BCF918CABCC311C1D4 (String_t* ___category0, String_t* ___data1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsGetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosPlatform_UnityAdsGetVersion_m6C38A89563FC4DF3C058DE04A09853F9A608E560 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsIsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosPlatform_UnityAdsIsInitialized_m217357C18283E8FD0F2B98E979C410735FF3E9CF (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsIsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosPlatform_UnityAdsIsReady_mE80F263FCC76FAF53C34833CCB793316231E4EDC (String_t* ___placementId0, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsGetDefaultPlacementID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosPlatform_UnityAdsGetDefaultPlacementID_m8A3E829D5DE7928942CE5F1A692162D22F70E7E7 (const RuntimeMethod* method);
// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.Utilities.EnumUtilities::GetShowResultsFromCompletionState(UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumUtilities_GetShowResultsFromCompletionState_m9038975D34C7F21DB81C39A4C993576E77F683CA (int32_t ___showCompletionState0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowFailure(System.IntPtr,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowFailure_m1BD4CE42328D7740A667FBFA2450A2AB628BAAEC (intptr_t ___ptr0, String_t* ___placementId1, int32_t ___error2, String_t* ___message3, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowStart(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowStart_mF41901AE44ABED7223CAD03EB3ECCC16623EB392 (intptr_t ___ptr0, String_t* ___placementId1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowClick(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowClick_m25FF3FFA562E413C4CF7C8E7BA00548AA2EB72D9 (intptr_t ___ptr0, String_t* ___placementId1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowComplete(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowComplete_m2DED19EF1FB3063006C282E27E70A90AA2E622A3 (intptr_t ___ptr0, String_t* ___placementId1, int32_t ___completionState2, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.IosShowListener/ShowFailureCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowFailureCallback__ctor_m9C1023F95EC8729DD28255B59CAA83F6D9CFF81E (ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.IosShowListener/ShowStartCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowStartCallback__ctor_m3237796D9B7970E6C72B91C862C815D2E8DEDDC7 (ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.IosShowListener/ShowClickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowClickCallback__ctor_m20307E4D699564FFAF4BFE5DAC395DE637DBB7A0 (ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowCompleteCallback__ctor_m16E7058F2161D6A3264510393CDB83A077D24029 (ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Advertisements.IosShowListener::ShowListenerCreate(UnityEngine.Advertisements.IosShowListener/ShowFailureCallback,UnityEngine.Advertisements.IosShowListener/ShowStartCallback,UnityEngine.Advertisements.IosShowListener/ShowClickCallback,UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosShowListener_ShowListenerCreate_mCFA60A445BAA7CAD902327EFDF2356A9D747E2E1 (ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318 * ___showFailureCallback0, ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87 * ___showStartCallback1, ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225 * ___showClickCallback2, ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777 * ___showCompleteCallback3, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.IosShowListener::ShowListenerDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_ShowListenerDestroy_m39647E2CAAE98EC0E821538E0A91AADE4EF2BC73 (intptr_t ___ptr0, const RuntimeMethod* method);
// T UnityEngine.Advertisements.Platform.iOS.IosNativeObject::Get<UnityEngine.Advertisements.IosShowListener>(System.IntPtr)
inline IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE (intptr_t ___ptr0, const RuntimeMethod* method)
{
	return ((  IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * (*) (intptr_t, const RuntimeMethod*))IosNativeObject_Get_TisRuntimeObject_m5C24800857598668A96F890C5D621E2617D77ACA_gshared)(___ptr0, method);
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowFailure_m2BBCCA385F7552ECDC1B0B1A674ECC2779FD134B (IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowStart_m597A0D4392ACE729B7CB245ACEA9BBCDB3754CD4 (IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * __this, String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowClick_mCFA7A08FB567DC8E6F9E6B296A7557798EC2417A (IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * __this, String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowComplete_m70700E58C14EE12238D9E2825E16EA589D82AF36 (IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * __this, String_t* ___placementId0, int32_t ___showCompletionState1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Utilities.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mF64079CC9F0C5A4D9F2B0F616A9C0E15C7C4157A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaData_set_category_m842DB606F0530156ECEA8ADA08B70C48213DB553_inline (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Utilities.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m553C76FACCBE4B92FCB2CFD3012F3F79EFDDE28D (RuntimeObject * ___obj0, const RuntimeMethod* method);
// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::get_NativePlatform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_mF4D0FFE9E137D920B39DEDB68807788708BC583A_inline (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Advertisements.IUnityAdsListener>::.ctor()
inline void HashSet_1__ctor_mBC3A350ED66A3FC536C328D7D26EF56D03D019A3 (HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsInitialized_mD4C29C317B072DF4E555FCCBC8B0EE53940F7284 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.Events.StartEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m135A350240DE73A3D519DC7C6E6D315B635D6C55 (EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Advertisements.Platform.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.Events.StartEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_add_OnStart_mC682ECAB305A4F2F2FA3641D14BF82965E0DD972 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.Events.FinishEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m32BCAE20F3D11E8EC067903258F7048855AEC57D (EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Advertisements.Platform.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.Events.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_add_OnFinish_m1AA2E1A0EE5D5293BC92DE91AE52031D7EAA13BB (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_m4DA12AC98D46EF004A244B6619E7BFD82B63C8E0 (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * __this, String_t* ___category0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_mD170ECD897CFA983F83494676B6E256C29CDFADE (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1 (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_m1893E50CF86E301FCFDC5421F3073208D22E237D (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * ___metaData0, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Platform.Platform::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_Version_mA68CC38E04A0954C121419DA474C785A7375014C (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m23FD1615C862155B7E071893B84401E9349761BD (U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsShowing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_m26FF0F8EAD6026CBDD3FDB3F487FF6631C0F37FF_inline (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method);
// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::get_resultCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9 * ShowOptions_get_resultCallback_m7D9A5B78C221DB6C375C0742DF41711EF7928D14_inline (ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * __this, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_mF2E0A8A3FC6619C3523EF046FC611885C8955168_inline (ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Show_m744AD2AE7DEC9ACBDF5059F83F9D19CD4E782EAB (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, String_t* ___placementId0, ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * ___showOptions1, RuntimeObject* ___showListener2, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_mBA7AD50DB304F1EAC9E01EB69F572C586189D4B2 (U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62 * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.Platform::get_UnityLifecycleManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_UnityLifecycleManager_m9027C2602495D0F89B2526D437DC7015FE9043FE_inline (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass41_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0__ctor_mC7EA4AE664F69D26858D7272F166D8D5F1D3D724 (U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_m22B8F96A0F6C237875FD20041C0EF22C9DE07F01 (U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass43_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0__ctor_m692C8BA518CB8786AB45B18A133F5067F317701D (U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Advertisements.IUnityAdsListener>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void HashSet_1__ctor_mED6F73D5A5A4026FC4A57F05F3101BCA801AC192 (HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 *, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m9D936778F28043838186FC2037F47460DA7925B9_gshared)(__this, ___collection0, method);
}
// System.Void UnityEngine.Advertisements.Platform.Platform::set_IsShowing(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Platform_set_IsShowing_m46F130DBBA517E043104CEBCD79CA534BEDC35CC_inline (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, bool ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E (Type_t * __this, String_t* ___name0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types1, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mDE1DAA5D330E9C975AC6423FC2D06862637BE68D (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsDidInitiatePurchasingCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_m0F827EA45C9CE1408B1D0516EE0074CEE0D03360 (String_t* ___eventString0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingGetProductCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m6378EA0BB94C5247DA490D48ED2EE9A6F5B856CA (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingGetPurchasingVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m3A0A91DB607F717F9ECA7E2BAC67EF7F2EC465DD (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingInitialize_m83C0904C496FB29D63F189FEAAE447743FB0E96B (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Purchasing.Purchasing::InitiatePurchasingCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Purchasing_InitiatePurchasingCommand_mB1B4A2CD325569B3F4A293AF616F0D9C4FE79508 (String_t* ___eventString0, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingDispatchReturnEvent(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingDispatchReturnEvent_m24EF271A42A41C32364E468D1D238C0A0F13B13C (int64_t ___eventType0, String_t* ___payload1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Purchasing.Purchasing::GetPurchasingCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Purchasing_GetPurchasingCatalog_m3FE1E56699DC4608931F8F748DF624DD885CC346 (const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Purchasing.Purchasing::GetPromoVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Purchasing_GetPromoVersion_m80F022242662D6B4B39B5662DFB0EB2E313416B9 (const RuntimeMethod* method);
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform UnityEngine.Advertisements.Purchasing.PurchasingPlatform::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * PurchasingPlatform_get_Instance_m77C3B013E64B7BA558A7E2A077EF6297E88DD3ED_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Purchasing.Purchasing::Initialize(UnityEngine.Advertisements.Purchasing.IPurchasingEventSender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Purchasing_Initialize_m19819881D3ED63492E9ED2C6D00C39597AE67E06 (RuntimeObject* ___platform0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::set_Instance(UnityEngine.Advertisements.Purchasing.PurchasingPlatform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PurchasingPlatform_set_Instance_m30D84B918719221436C921C6483C141629323D66_inline (PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingDidInitiatePurchasingCommand::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingDidInitiatePurchasingCommand__ctor_mBBE45F06DBE9053F2310946D93C6D3A6CA61688F (unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetDidInitiatePurchasingCommandCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingDidInitiatePurchasingCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetDidInitiatePurchasingCommandCallback_mF0E081EE8BEC8BC19FB346E3DEE8CFBD807E80A8 (unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetProductCatalog::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetProductCatalog__ctor_mA2F9A2EF2B802E58EF356FE814D4D1D69ADFB85D (unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetGetProductCatalogCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetProductCatalog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetGetProductCatalogCallback_m602B352D78E569406107B57F5D7B34657E19BAF6 (unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetPurchasingVersion::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetPurchasingVersion__ctor_m2F0C1B38920D117FD548D6DEF1B02F2BC9D5395E (unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetGetVersionCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetPurchasingVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetGetVersionCallback_m5C485D52402CC4912D196594B9C7F460A819D846 (unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingInitialize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingInitialize__ctor_m04803428151FA83C7CC62D07E9527AFFCE30CDAE (unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetInitializePurchasingCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingInitialize)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetInitializePurchasingCallback_mCD88A2A3B198301B4F15521AFDEC1EE574AF64FD (unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Initialize_m0EE5BB27F54857973EC4A924FFC41F24BC4C278B (UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Advertisements.Utilities.CoroutineExecutor>()
inline CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * GameObject_GetComponent_TisCoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8_m3D878055CD24BF43208E2118D45E4ACAC6E393A9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Utilities.CoroutineExecutor>()
inline CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * GameObject_AddComponent_TisCoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8_m936E7AA8929B885E17D6F134F9284361E0B346AE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Utilities.ApplicationQuit>()
inline ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28 * GameObject_AddComponent_TisApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28_m86D658340CF4FAB202912B5422CC2CD777573120 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(!0)
inline void Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback_Invoke_m7EE1BC76383C7B60CFAE9458D188D07CB34317CA (LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_Invoke_mCD461F8DFA08C61D19078303C7EA040EE6E5F5DF (ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mB6C35B2047B37FACD6C2DAFC9EF05AFDDD1A1F3A (Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_mA68624568B92BEA8C4C445ECAA556A00D5B5D22F (Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mF3B23401C12AE76928277742ED703E84D1906020 (Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mF1BA5E9851A44483B818F2FD46CBB96CB71BAF3D (Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m44A476C79F0C875DC5FF7AA24BFC3581FE108BCF (Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m47F724BA72AA1324B13FD60C927544052E317BC6 (Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_mFF1DAF2003FC7096C54C5A2685F85082220E330B (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.Events.FinishEventArgs::get_showResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FinishEventArgs_get_showResult_m9A797DA56F8A17647FF8BB4E269EE3A724A1A48D_inline (FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::Invoke(!0)
inline void Action_1_Invoke_m92CFC219BE1E947209DA9E2AF847D09E48931A05 (Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.Advertisements.Platform.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.Events.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_remove_OnFinish_mD421DEABEFCA850C8A6DC8A13F6FA5E8B85D2FD9 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1<UnityEngine.Advertisements.IUnityAdsListener> UnityEngine.Advertisements.Platform.Platform::get_Listeners()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * Platform_get_Listeners_m4FB9B6E7ED73F57D54EFA528FF85D39897CB039B_inline (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1<UnityEngine.Advertisements.IUnityAdsListener> UnityEngine.Advertisements.Platform.Platform::GetClonedHashSet(System.Collections.Generic.HashSet`1<UnityEngine.Advertisements.IUnityAdsListener>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * Platform_GetClonedHashSet_mB4479B611B9532E9BE2BA27E7055F8CAC1D1B647 (HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * ___hashSet0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<UnityEngine.Advertisements.IUnityAdsListener>::GetEnumerator()
inline Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6  HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5 (HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6  (*) (HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Advertisements.IUnityAdsListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_inline (Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *, const RuntimeMethod*))Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Advertisements.IUnityAdsListener>::MoveNext()
inline bool Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4 (Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *, const RuntimeMethod*))Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Advertisements.IUnityAdsListener>::Dispose()
inline void Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C (Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *, const RuntimeMethod*))Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.Events.StartEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEventArgs__ctor_m1124DD422B5DAB617E2B4A08C882DF712D60ED2E (StartEventArgs_t89137A1788A305D836F12314C43763F1CF19AF56 * __this, String_t* ___placementId0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.Events.StartEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m7D6DCD97A41ED1C842EC52AA9243BEFCB0260510 (EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * __this, RuntimeObject * ___sender0, StartEventArgs_t89137A1788A305D836F12314C43763F1CF19AF56 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C *, RuntimeObject *, StartEventArgs_t89137A1788A305D836F12314C43763F1CF19AF56 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void UnityEngine.Advertisements.Events.FinishEventArgs::.ctor(System.String,UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishEventArgs__ctor_mFC603DA04EDD6C4D5BB377EABEB44C778E01C166 (FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1 * __this, String_t* ___placementId0, int32_t ___showResult1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Advertisements.Events.FinishEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m2124AB0856E84A1BB72D4908646BC0864EB4B616 (EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * __this, RuntimeObject * ___sender0, FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 *, RuntimeObject *, FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetBannerShowCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetBannerHideCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetBannerClickCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetBannerErrorCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetBannerUnloadCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetBannerLoadCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityBannerInitialize();
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityAdsInitializationListenerCreate(Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsInitializationListenerDestroy(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsBridgeTransfer(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsInitialize(char*, int32_t, int32_t, intptr_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL UnityAdsGetDefaultPlacementID();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsShow(char*, intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityAdsIsReady(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL UnityAdsGetVersion();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityAdsIsInitialized();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetMetaData(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetReadyCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetDidErrorCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetDidStartCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetDidFinishCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityAdsShowListenerCreate(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsShowListenerDestroy(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsPurchasingDispatchReturnEvent(int64_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetDidInitiatePurchasingCommandCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetGetProductCatalogCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetGetVersionCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetInitializePurchasingCallback(Il2CppMethodPointer);
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
// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement__cctor_mCDE95B390605B2D3F56D8FFB437816FAEF201FA4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Platform == null)
		RuntimeObject* L_0 = ((Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var))->get_s_Platform_0();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// s_Platform = CreatePlatform();
		RuntimeObject* L_1;
		L_1 = Advertisement_CreatePlatform_m71249903340CD74515A1A385E86B3E12C5F9B26F(/*hidden argument*/NULL);
		((Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var))->set_s_Platform_0(L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isInitialized_m2CDAA558461243C4FC934FECF8FDB0A223EE587A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isInitialized => s_Platform.IsInitialized;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var))->get_s_Platform_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.Advertisements.Platform.IPlatform::get_IsInitialized() */, IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isShowing_m3C55CBE761C7D1643C568A96F1D90C2A3A17B4F8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isShowing => s_Platform.IsShowing;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var))->get_s_Platform_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.Advertisements.Platform.IPlatform::get_IsShowing() */, IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m0B54FE7136D20E78386C1DAD534FF0CCD5883722 (String_t* ___gameId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialize(gameId, false, false);
		String_t* L_0 = ___gameId0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m9FA168B596AC1FD65615897DDBF66A6A7D185E8D(L_0, (bool)0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m9FA168B596AC1FD65615897DDBF66A6A7D185E8D (String_t* ___gameId0, bool ___testMode1, bool ___enablePerPlacementLoad2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialize(gameId, testMode, enablePerPlacementLoad, null);
		String_t* L_0 = ___gameId0;
		bool L_1 = ___testMode1;
		bool L_2 = ___enablePerPlacementLoad2;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m0DDF9276FAF12F0A1065E76590EAE760852F3423(L_0, L_1, L_2, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m0DDF9276FAF12F0A1065E76590EAE760852F3423 (String_t* ___gameId0, bool ___testMode1, bool ___enablePerPlacementLoad2, RuntimeObject* ___initializationListener3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8B17C2F23CF76B280EDF692D4E3AEF9A008AB26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (testMode == false && UnityAdsSettings.testMode)
		bool L_0 = ___testMode1;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1;
		L_1 = UnityAdsSettings_get_testMode_mB7505FA841B82FB37A830EB43FE95DAB6FE38824(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.Log("Unity Ads is initializing in test mode since test mode is enabled in Service Window.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB8B17C2F23CF76B280EDF692D4E3AEF9A008AB26, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// s_Platform.Initialize(gameId, UnityAdsSettings.testMode || testMode, enablePerPlacementLoad, initializationListener);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var))->get_s_Platform_0();
		String_t* L_3 = ___gameId0;
		bool L_4;
		L_4 = UnityAdsSettings_get_testMode_mB7505FA841B82FB37A830EB43FE95DAB6FE38824(/*hidden argument*/NULL);
		bool L_5 = ___testMode1;
		bool L_6 = ___enablePerPlacementLoad2;
		RuntimeObject* L_7 = ___initializationListener3;
		NullCheck(L_2);
		InterfaceActionInvoker4< String_t*, bool, bool, RuntimeObject* >::Invoke(2 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Initialize(System.String,System.Boolean,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener) */, IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var, L_2, L_3, (bool)((int32_t)((int32_t)L_4|(int32_t)L_5)), L_6, L_7);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsReady_m689837A26CBB185622A442A26C8B460CAF29E400 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_Platform.IsReady(null);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var))->get_s_Platform_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean UnityEngine.Advertisements.Platform.IPlatform::IsReady(System.String) */, IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var, L_0, (String_t*)NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mCC49B4792DFE6920B6870A2E5430E951DD243926 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.Show();
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var))->get_s_Platform_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Show() */, IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::CreatePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Advertisement_CreatePlatform_m71249903340CD74515A1A385E86B3E12C5F9B26F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * V_4 = NULL;
	UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB * V_5 = NULL;
	Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// IUnityLifecycleManager unityLifecycleManager = new UnityLifecycleManager();
		UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB * L_0 = (UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB *)il2cpp_codegen_object_new(UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB_il2cpp_TypeInfo_var);
		UnityLifecycleManager__ctor_m5822FB5D756A7E771C98F99167F4E39A164EEC89(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// nativeBanner = new Platform.iOS.IosBanner();
		IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1 * L_1 = (IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1 *)il2cpp_codegen_object_new(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var);
		IosBanner__ctor_mA47E07719C9C72006E7114C2A3A5D84A7AE025C6(L_1, /*hidden argument*/NULL);
		// nativePlatform = new Platform.iOS.IosPlatform();
		IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * L_2 = (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF *)il2cpp_codegen_object_new(IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var);
		IosPlatform__ctor_mD09056D2993C762A6A115F8085A5AF9CD8B62618(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		// IBanner banner = new Advertisements.Banner(nativeBanner, unityLifecycleManager);
		RuntimeObject* L_3 = V_0;
		Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * L_4 = (Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 *)il2cpp_codegen_object_new(Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0_il2cpp_TypeInfo_var);
		Banner__ctor_mD7C17C210808E9AADE22AEBE2E3D8A5CE4C4515A(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		// return new Platform.Platform(nativePlatform, banner, unityLifecycleManager);
		RuntimeObject* L_5 = V_1;
		RuntimeObject* L_6 = V_2;
		RuntimeObject* L_7 = V_0;
		Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * L_8 = (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D *)il2cpp_codegen_object_new(Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D_il2cpp_TypeInfo_var);
		Platform__ctor_m95CD2B9F4FFBA9A0173D397ED9972FED96185125(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		goto IL_0066;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Exception)
		{
			// catch (Exception exception)
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			// Debug.LogError("Initializing Unity Ads.");
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral750B47A9E43C9EA610F98792362D027D33B89ECB)), /*hidden argument*/NULL);
			// Debug.LogError(exception.Message);
			Exception_t * L_9 = V_4;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_9);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_10, /*hidden argument*/NULL);
			// }
			goto IL_0040;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_003d;
			}
			throw e;
		}

CATCH_003d:
		{ // begin catch(System.MissingMethodException)
			// catch (MissingMethodException)
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0040;
		} // end catch (depth: 2)

IL_0040:
		{
			// var unsupportedPlatform = new Platform.Unsupported.UnsupportedPlatform();
			UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601 * L_11 = (UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601_il2cpp_TypeInfo_var)));
			UnsupportedPlatform__ctor_m5CBF1E2F1356D35BA196E1FA4DE3AFD1C361F072(L_11, /*hidden argument*/NULL);
			// var coroutineExecutor = new UnityLifecycleManager();
			UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB * L_12 = (UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB_il2cpp_TypeInfo_var)));
			UnityLifecycleManager__ctor_m5822FB5D756A7E771C98F99167F4E39A164EEC89(L_12, /*hidden argument*/NULL);
			V_5 = L_12;
			// var unsupportedBanner = new Platform.Unsupported.UnsupportedBanner();
			UnsupportedBanner_t7AF5B0FC5900E8DCCA7924298EFD0CCE5C9EE553 * L_13 = (UnsupportedBanner_t7AF5B0FC5900E8DCCA7924298EFD0CCE5C9EE553 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsupportedBanner_t7AF5B0FC5900E8DCCA7924298EFD0CCE5C9EE553_il2cpp_TypeInfo_var)));
			UnsupportedBanner__ctor_m6D6DAD586AB47309D25007D3A7EB49715DAFA6C2(L_13, /*hidden argument*/NULL);
			// var genericBanner = new Advertisements.Banner(unsupportedBanner, coroutineExecutor);
			UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB * L_14 = V_5;
			Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * L_15 = (Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0_il2cpp_TypeInfo_var)));
			Banner__ctor_mD7C17C210808E9AADE22AEBE2E3D8A5CE4C4515A(L_15, L_13, L_14, /*hidden argument*/NULL);
			V_6 = L_15;
			// return new Platform.Platform(unsupportedPlatform, genericBanner, coroutineExecutor);
			Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * L_16 = V_6;
			UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB * L_17 = V_5;
			Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * L_18 = (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D_il2cpp_TypeInfo_var)));
			Platform__ctor_m95CD2B9F4FFBA9A0173D397ED9972FED96185125(L_18, L_11, L_16, L_17, /*hidden argument*/NULL);
			V_3 = L_18;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0066;
		}
	} // end catch (depth: 1)

IL_0066:
	{
		// }
		RuntimeObject* L_19 = V_3;
		return L_19;
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
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::add_OnApplicationQuitEventHandler(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_add_OnApplicationQuitEventHandler_m461F6BCCE371D15CFB6CD7EB09CDE262706DB69F (ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_0 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_1 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_2 = NULL;
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = __this->get_OnApplicationQuitEventHandler_4();
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_1 = V_0;
		V_1 = L_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)CastclassSealed((RuntimeObject*)L_4, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var));
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** L_5 = __this->get_address_of_OnApplicationQuitEventHandler_4();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_6 = V_2;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_7 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8;
		L_8 = InterlockedCompareExchangeImpl<UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *>((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 **)L_5, L_6, L_7);
		V_0 = L_8;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_9 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_9) == ((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::remove_OnApplicationQuitEventHandler(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_remove_OnApplicationQuitEventHandler_m8E4598D4B841A1D366E49C4A857A8958C586C1B7 (ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_0 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_1 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_2 = NULL;
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = __this->get_OnApplicationQuitEventHandler_4();
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_1 = V_0;
		V_1 = L_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)CastclassSealed((RuntimeObject*)L_4, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var));
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** L_5 = __this->get_address_of_OnApplicationQuitEventHandler_4();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_6 = V_2;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_7 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8;
		L_8 = InterlockedCompareExchangeImpl<UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *>((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 **)L_5, L_6, L_7);
		V_0 = L_8;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_9 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_9) == ((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_OnApplicationQuit_m98DD960101B8DC611132232670639BF998726DBA (ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28 * __this, const RuntimeMethod* method)
{
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * G_B2_0 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * G_B1_0 = NULL;
	{
		// OnApplicationQuitEventHandler?.Invoke();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = __this->get_OnApplicationQuitEventHandler_4();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		UnityAction_Invoke_mFFF1FFE59D8285F8A81350E6D5C4D791F44F6AC9(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit__ctor_m313616A07B986DA0D04F1337E2041D01BF74D457 (ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Banner::get_UnityLifecycleManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Banner_get_UnityLifecycleManager_mE1420E56855D7DF329BE3C16984ACAAFAC9CC8BA (Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * __this, const RuntimeMethod* method)
{
	{
		// public IUnityLifecycleManager UnityLifecycleManager { get; }
		RuntimeObject* L_0 = __this->get_U3CUnityLifecycleManagerU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Banner::.ctor(UnityEngine.Advertisements.INativeBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_mD7C17C210808E9AADE22AEBE2E3D8A5CE4C4515A (Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * __this, RuntimeObject* ___nativeBanner0, RuntimeObject* ___unityLifecycleManager1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_t7CDEE6F3AD8C00E40CB5D1E459E671E3B939EAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Banner(INativeBanner nativeBanner, IUnityLifecycleManager unityLifecycleManager)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_NativeBanner = nativeBanner;
		RuntimeObject* L_0 = ___nativeBanner0;
		__this->set_m_NativeBanner_1(L_0);
		// UnityLifecycleManager = unityLifecycleManager;
		RuntimeObject* L_1 = ___unityLifecycleManager1;
		__this->set_U3CUnityLifecycleManagerU3Ek__BackingField_0(L_1);
		// m_NativeBanner.SetupBanner(this);
		RuntimeObject* L_2 = __this->get_m_NativeBanner_1();
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Advertisements.INativeBanner::SetupBanner(UnityEngine.Advertisements.IBanner) */, INativeBanner_t7CDEE6F3AD8C00E40CB5D1E459E671E3B939EAC1_il2cpp_TypeInfo_var, L_2, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::UnityAdsBannerDidShow(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_UnityAdsBannerDidShow_m93651CA517E75CAA00F052300FCC70BAF0149D63 (Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * __this, String_t* ___placementId0, BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * ___bannerOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CUnityAdsBannerDidShowU3Eb__0_mEC53195427234DF19D2BAA4863BBF2279602C625_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D * V_0 = NULL;
	BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * G_B2_0 = NULL;
	BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * G_B1_0 = NULL;
	BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D * L_0 = (U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass15_0__ctor_mB2944D2E3A01D2C80C2E3ACFB348110A1681FD1A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D * L_1 = V_0;
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_2 = ___bannerOptions1;
		NullCheck(L_1);
		L_1->set_bannerOptions_0(L_2);
		// var showCallback = bannerOptions?.showCallback;
		U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D * L_3 = V_0;
		NullCheck(L_3);
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_4 = L_3->get_bannerOptions_0();
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C *)(NULL));
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * L_6;
		L_6 = BannerOptions_get_showCallback_m4B6507E9558936032DE248611C825074A43568C7_inline(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_001f:
	{
		// if (showCallback != null)
		if (!G_B3_0)
		{
			goto IL_003d;
		}
	}
	{
		// UnityLifecycleManager?.Post(() => {
		//     bannerOptions.showCallback();
		// });
		RuntimeObject* L_7;
		L_7 = Banner_get_UnityLifecycleManager_mE1420E56855D7DF329BE3C16984ACAAFAC9CC8BA_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass15_0_U3CUnityAdsBannerDidShowU3Eb__0_mEC53195427234DF19D2BAA4863BBF2279602C625_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(G_B6_0);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var, G_B6_0, L_10);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::UnityAdsBannerDidHide(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_UnityAdsBannerDidHide_m02DA95EDE6DFACFD8EC0F463F947F90BE18C79CF (Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * __this, String_t* ___placementId0, BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * ___bannerOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CUnityAdsBannerDidHideU3Eb__0_mF201AF71686452BEBC4FE7FDB10B32109B50D2C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7 * V_0 = NULL;
	BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * G_B2_0 = NULL;
	BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * G_B1_0 = NULL;
	BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7 * L_0 = (U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass16_0__ctor_m2596B2A9DB3572F0844EF41FF827FCC533163F46(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7 * L_1 = V_0;
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_2 = ___bannerOptions1;
		NullCheck(L_1);
		L_1->set_bannerOptions_0(L_2);
		// var hideCallback = bannerOptions?.hideCallback;
		U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7 * L_3 = V_0;
		NullCheck(L_3);
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_4 = L_3->get_bannerOptions_0();
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C *)(NULL));
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * L_6;
		L_6 = BannerOptions_get_hideCallback_m1BB15E9FEFBCF252CF8FCEECB2919C767A73D887_inline(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_001f:
	{
		// if (hideCallback != null)
		if (!G_B3_0)
		{
			goto IL_003d;
		}
	}
	{
		// UnityLifecycleManager?.Post(() => {
		//     bannerOptions.hideCallback();
		// });
		RuntimeObject* L_7;
		L_7 = Banner_get_UnityLifecycleManager_mE1420E56855D7DF329BE3C16984ACAAFAC9CC8BA_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass16_0_U3CUnityAdsBannerDidHideU3Eb__0_mF201AF71686452BEBC4FE7FDB10B32109B50D2C8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(G_B6_0);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var, G_B6_0, L_10);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::UnityAdsBannerClick(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_UnityAdsBannerClick_mFA021A634F96CD891C1F979311293B65A481A739 (Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * __this, String_t* ___placementId0, BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * ___bannerOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CUnityAdsBannerClickU3Eb__0_mEC90AFD89CBC8566CFC5753734A1E5090D520E36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826 * V_0 = NULL;
	BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * G_B2_0 = NULL;
	BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * G_B1_0 = NULL;
	BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826 * L_0 = (U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass17_0__ctor_m258122D77ABDF0CB62D98AAF3D3A8A4F93A7E10B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826 * L_1 = V_0;
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_2 = ___bannerOptions1;
		NullCheck(L_1);
		L_1->set_bannerOptions_0(L_2);
		// var clickCallback = bannerOptions?.clickCallback;
		U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826 * L_3 = V_0;
		NullCheck(L_3);
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_4 = L_3->get_bannerOptions_0();
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C *)(NULL));
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * L_6;
		L_6 = BannerOptions_get_clickCallback_m56E6EE03D4360E6D8F4B273556451D8A2BE44F64_inline(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_001f:
	{
		// if (clickCallback != null)
		if (!G_B3_0)
		{
			goto IL_003d;
		}
	}
	{
		// UnityLifecycleManager?.Post(() => {
		//     bannerOptions.clickCallback();
		// });
		RuntimeObject* L_7;
		L_7 = Banner_get_UnityLifecycleManager_mE1420E56855D7DF329BE3C16984ACAAFAC9CC8BA_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass17_0_U3CUnityAdsBannerClickU3Eb__0_mEC90AFD89CBC8566CFC5753734A1E5090D520E36_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(G_B6_0);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var, G_B6_0, L_10);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::UnityAdsBannerDidLoad(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_UnityAdsBannerDidLoad_m15134A5E9C4F9AB864F9A1036A1986C8B4249ABD (Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * __this, String_t* ___placementId0, BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * ___bannerOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CUnityAdsBannerDidLoadU3Eb__0_m3A498D0FC7D2AD894CF7B29251EA66A7C38BFF54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4 * V_0 = NULL;
	BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * G_B2_0 = NULL;
	BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * G_B1_0 = NULL;
	LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4 * L_0 = (U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass18_0__ctor_mA404514F45E29E208E2958E21B333B0ED66267A9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4 * L_1 = V_0;
		BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * L_2 = ___bannerOptions1;
		NullCheck(L_1);
		L_1->set_bannerOptions_0(L_2);
		// var loadCallback = bannerOptions?.loadCallback;
		U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4 * L_3 = V_0;
		NullCheck(L_3);
		BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * L_4 = L_3->get_bannerOptions_0();
		BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E *)(NULL));
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * L_6;
		L_6 = BannerLoadOptions_get_loadCallback_m8D2F618B70D875D6BA94BAFB44A17B21CBDD7DF5_inline(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_001f:
	{
		// if (loadCallback != null)
		if (!G_B3_0)
		{
			goto IL_003d;
		}
	}
	{
		// UnityLifecycleManager?.Post(() => {
		//     bannerOptions.loadCallback();
		// });
		RuntimeObject* L_7;
		L_7 = Banner_get_UnityLifecycleManager_mE1420E56855D7DF329BE3C16984ACAAFAC9CC8BA_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass18_0_U3CUnityAdsBannerDidLoadU3Eb__0_m3A498D0FC7D2AD894CF7B29251EA66A7C38BFF54_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(G_B6_0);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var, G_B6_0, L_10);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::UnityAdsBannerDidError(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_UnityAdsBannerDidError_m5275AC7C7C9525B40293F8F0D006953FEB52ECBA (Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * __this, String_t* ___message0, BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * ___bannerOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CUnityAdsBannerDidErrorU3Eb__0_mC714875887FE3D697805657AD0BC5005DF34FFAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765 * V_0 = NULL;
	BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * G_B2_0 = NULL;
	BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * G_B1_0 = NULL;
	ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765 * L_0 = (U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass19_0__ctor_mEBD3FEB87010F3A469B824F45BE3531B65262470(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765 * L_1 = V_0;
		BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * L_2 = ___bannerOptions1;
		NullCheck(L_1);
		L_1->set_bannerOptions_0(L_2);
		U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765 * L_3 = V_0;
		String_t* L_4 = ___message0;
		NullCheck(L_3);
		L_3->set_message_1(L_4);
		// var errorCallback = bannerOptions?.errorCallback;
		U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765 * L_5 = V_0;
		NullCheck(L_5);
		BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * L_6 = L_5->get_bannerOptions_0();
		BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * L_7 = L_6;
		G_B1_0 = L_7;
		if (L_7)
		{
			G_B2_0 = L_7;
			goto IL_0021;
		}
	}
	{
		G_B3_0 = ((ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 *)(NULL));
		goto IL_0026;
	}

IL_0021:
	{
		NullCheck(G_B2_0);
		ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * L_8;
		L_8 = BannerLoadOptions_get_errorCallback_mD168B1D1BE035B21EB917A5A6465C2EFBCA450E1_inline(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0026:
	{
		// if (errorCallback != null)
		if (!G_B3_0)
		{
			goto IL_0044;
		}
	}
	{
		// UnityLifecycleManager?.Post(() => {
		//     bannerOptions.errorCallback(message ?? "");
		// });
		RuntimeObject* L_9;
		L_9 = Banner_get_UnityLifecycleManager_mE1420E56855D7DF329BE3C16984ACAAFAC9CC8BA_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_10 = L_9;
		G_B5_0 = L_10;
		if (L_10)
		{
			G_B6_0 = L_10;
			goto IL_0033;
		}
	}
	{
		return;
	}

IL_0033:
	{
		U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765 * L_11 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass19_0_U3CUnityAdsBannerDidErrorU3Eb__0_mC714875887FE3D697805657AD0BC5005DF34FFAE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(G_B6_0);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var, G_B6_0, L_12);
	}

IL_0044:
	{
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
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::get_loadCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * BannerLoadOptions_get_loadCallback_m8D2F618B70D875D6BA94BAFB44A17B21CBDD7DF5 (BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * __this, const RuntimeMethod* method)
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * L_0 = __this->get_U3CloadCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::get_errorCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * BannerLoadOptions_get_errorCallback_mD168B1D1BE035B21EB917A5A6465C2EFBCA450E1 (BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * __this, const RuntimeMethod* method)
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * L_0 = __this->get_U3CerrorCallbackU3Ek__BackingField_1();
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
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_showCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * BannerOptions_get_showCallback_m4B6507E9558936032DE248611C825074A43568C7 (BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * L_0 = __this->get_U3CshowCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_hideCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * BannerOptions_get_hideCallback_m1BB15E9FEFBCF252CF8FCEECB2919C767A73D887 (BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * L_0 = __this->get_U3ChideCallbackU3Ek__BackingField_1();
		return L_0;
	}
}
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_clickCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * BannerOptions_get_clickCallback_m56E6EE03D4360E6D8F4B273556451D8A2BE44F64 (BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * L_0 = __this->get_U3CclickCallbackU3Ek__BackingField_2();
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
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_Awake_m6A2C881A99221B3FCFA0FD3BA227FF24604E24ED (BannerPlaceholder_t976E009D31F6ECB3D5B9D99AD84D7E61C9B6B334 * __this, const RuntimeMethod* method)
{
	{
		// IsShowing = false;
		__this->set_IsShowing_7((bool)0);
		// aTexture = BackgroundTexture(320, 50, Color.grey);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA(/*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1;
		L_1 = BannerPlaceholder_BackgroundTexture_m8EA8956BE24F6DB668E4FEA022C5B68E1B734AEC(((int32_t)320), ((int32_t)50), L_0, /*hidden argument*/NULL);
		__this->set_aTexture_4(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_OnGUI_m1FBDFD57EC0F0779645BA55EF903854327671935 (BannerPlaceholder_t976E009D31F6ECB3D5B9D99AD84D7E61C9B6B334 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * G_B5_0 = NULL;
	BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * G_B4_0 = NULL;
	{
		// if (!IsShowing) return;
		bool L_0 = __this->get_IsShowing_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsShowing) return;
		return;
	}

IL_0009:
	{
		// var myStyle = new GUIStyle(GUI.skin.box) { alignment = TextAnchor.MiddleCenter, fontSize = 20 };
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_1;
		L_1 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2;
		L_2 = GUISkin_get_box_m3877DF429E9B3E7A4ADF39EAAEA4948DD6C38BB0(L_1, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_3, L_2, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = L_3;
		NullCheck(L_4);
		GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89(L_4, 4, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5 = L_4;
		NullCheck(L_5);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_5, ((int32_t)20), /*hidden argument*/NULL);
		V_0 = L_5;
		// if (GUI.Button(GetBannerRect(BannerPosition), aTexture))
		int32_t L_6 = __this->get_BannerPosition_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		L_7 = BannerPlaceholder_GetBannerRect_mB10DDFDACCC78E6A7930BADC06641BE653AFF443(L_6, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = __this->get_aTexture_4();
		bool L_9;
		L_9 = GUI_Button_m2D990F18AA1E71C725D759D25935878C8795BCB7(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		// BannerOptions?.clickCallback();
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_10 = __this->get_BannerOptions_6();
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_004c;
		}
	}
	{
		goto IL_0056;
	}

IL_004c:
	{
		NullCheck(G_B5_0);
		BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * L_12;
		L_12 = BannerOptions_get_clickCallback_m56E6EE03D4360E6D8F4B273556451D8A2BE44F64_inline(G_B5_0, /*hidden argument*/NULL);
		NullCheck(L_12);
		BannerCallback_Invoke_m9FB4493693324B08D89AEAF21BC14ABAF11C57C5(L_12, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// if (aTexture)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = __this->get_aTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0086;
		}
	}
	{
		// var bannerRect = GetBannerRect(BannerPosition);
		int32_t L_15 = __this->get_BannerPosition_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16;
		L_16 = BannerPlaceholder_GetBannerRect_mB10DDFDACCC78E6A7930BADC06641BE653AFF443(L_15, /*hidden argument*/NULL);
		// GUI.DrawTexture(bannerRect, aTexture, ScaleMode.ScaleToFit);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17 = L_16;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = __this->get_aTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E(L_17, L_18, 2, /*hidden argument*/NULL);
		// GUI.Box(bannerRect, "This would be your banner", myStyle);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_19 = V_0;
		GUI_Box_mCBAEFC1F48A5BF6E20691EE14024CEBF93705018(L_17, _stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0, L_19, /*hidden argument*/NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::ShowBanner(UnityEngine.Advertisements.BannerPosition,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_ShowBanner_mBD6FAA9DBB03CF62EBA03EBABF8D9724EB4FE0B0 (BannerPlaceholder_t976E009D31F6ECB3D5B9D99AD84D7E61C9B6B334 * __this, int32_t ___bannerPosition0, BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * ___bannerOptions1, const RuntimeMethod* method)
{
	{
		// BannerPosition = bannerPosition;
		int32_t L_0 = ___bannerPosition0;
		__this->set_BannerPosition_5(L_0);
		// BannerOptions = bannerOptions;
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_1 = ___bannerOptions1;
		__this->set_BannerOptions_6(L_1);
		// IsShowing = true;
		__this->set_IsShowing_7((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::HideBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_HideBanner_m4986C61B5DB5BD4D2CA427335AD4BF46F37448B6 (BannerPlaceholder_t976E009D31F6ECB3D5B9D99AD84D7E61C9B6B334 * __this, const RuntimeMethod* method)
{
	{
		// IsShowing = false;
		__this->set_IsShowing_7((bool)0);
		// }
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BackgroundTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * BannerPlaceholder_BackgroundTexture_m8EA8956BE24F6DB668E4FEA022C5B68E1B734AEC (int32_t ___width0, int32_t ___height1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var pix = new Color[width * height];
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		V_0 = L_2;
		// for (var i = 0; i < pix.Length; i++)
		V_1 = 0;
		goto IL_0019;
	}

IL_000d:
	{
		// pix[i] = color;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_3 = V_0;
		int32_t L_4 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ___color2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_5);
		// for (var i = 0; i < pix.Length; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0019:
	{
		// for (var i = 0; i < pix.Length; i++)
		int32_t L_7 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// var result = new Texture2D(width, height);
		int32_t L_9 = ___width0;
		int32_t L_10 = ___height1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_11, L_9, L_10, /*hidden argument*/NULL);
		// result.SetPixels(pix);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = L_11;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_13 = V_0;
		NullCheck(L_12);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_12, L_13, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = L_12;
		NullCheck(L_14);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_14, /*hidden argument*/NULL);
		// return result;
		return L_14;
	}
}
// UnityEngine.Rect UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::GetBannerRect(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  BannerPlaceholder_GetBannerRect_mB10DDFDACCC78E6A7930BADC06641BE653AFF443 (int32_t ___position0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___position0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_00d5;
			}
			case 4:
			{
				goto IL_00ae;
			}
			case 5:
			{
				goto IL_00f3;
			}
			case 6:
			{
				goto IL_0085;
			}
		}
	}
	{
		goto IL_0118;
	}

IL_0027:
	{
		// return new Rect(Screen.width / 2 - 160, 0, 320, 50);
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_2), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_1/(int32_t)2)), (int32_t)((int32_t)160))))), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_2;
	}

IL_004a:
	{
		// return new Rect(0, 0, 320, 50);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), (0.0f), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_3;
	}

IL_0064:
	{
		// return new Rect(Screen.width - 320, 0, 320, 50);
		int32_t L_4;
		L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_5), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)320))))), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_5;
	}

IL_0085:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height / 2 - 25, 320, 50);
		int32_t L_6;
		L_6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_8), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_6/(int32_t)2)), (int32_t)((int32_t)160))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_7/(int32_t)2)), (int32_t)((int32_t)25))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_8;
	}

IL_00ae:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height - 50, 320, 50);
		int32_t L_9;
		L_9 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_11), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_9/(int32_t)2)), (int32_t)((int32_t)160))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)50))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_11;
	}

IL_00d5:
	{
		// return new Rect(0, Screen.height - 50, 320, 50);
		int32_t L_12;
		L_12 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_13), (0.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)50))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_13;
	}

IL_00f3:
	{
		// return new Rect(Screen.width - 320, Screen.height - 50, 320, 50);
		int32_t L_14;
		L_14 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_15;
		L_15 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_16), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)320))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)50))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_16;
	}

IL_0118:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height - 50, 320, 50);
		int32_t L_17;
		L_17 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_18;
		L_18 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_19), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_17/(int32_t)2)), (int32_t)((int32_t)160))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)50))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder__ctor_m157D409FE7A3624DF377DB0E552C1AD2FB26C0FF (BannerPlaceholder_t976E009D31F6ECB3D5B9D99AD84D7E61C9B6B334 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Utilities.CoroutineExecutor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineExecutor_Update_m694D6010D21D54B548D2E8678DEEE4E53C506EF7 (CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	{
		// lock (queue)
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = __this->get_queue_5();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			goto IL_0029;
		}

IL_0013:
		{
			// queue.Dequeue()?.Invoke();
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_2 = __this->get_queue_5();
			NullCheck(L_2);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3;
			L_3 = Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5(L_2, /*hidden argument*/Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
			G_B3_0 = L_4;
			if (L_4)
			{
				G_B4_0 = L_4;
				goto IL_0024;
			}
		}

IL_0021:
		{
			goto IL_0029;
		}

IL_0024:
		{
			NullCheck(G_B4_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B4_0, /*hidden argument*/NULL);
		}

IL_0029:
		{
			// while (queue.Count > 0)
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_5 = __this->get_queue_5();
			NullCheck(L_5);
			int32_t L_6;
			L_6 = Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline(L_5, /*hidden argument*/Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
			if ((((int32_t)L_6) > ((int32_t)0)))
			{
				goto IL_0013;
			}
		}

IL_0037:
		{
			// }
			IL2CPP_LEAVE(0x43, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0042;
			}
		}

IL_003c:
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.CoroutineExecutor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineExecutor__ctor_m34DDFA376FDC3A74F0F5D41B1B63BBC1CD123287 (CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly Queue<Action> queue = new Queue<Action>();
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *)il2cpp_codegen_object_new(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var);
		Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4(L_0, /*hidden argument*/Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var);
		__this->set_queue_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.Utilities.EnumUtilities::GetShowResultsFromCompletionState(UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumUtilities_GetShowResultsFromCompletionState_m9038975D34C7F21DB81C39A4C993576E77F683CA (int32_t ___showCompletionState0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___showCompletionState0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___showCompletionState0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_000b;
		}
	}
	{
		// return ShowResult.Finished;
		return (int32_t)(2);
	}

IL_0009:
	{
		// return ShowResult.Skipped;
		return (int32_t)(1);
	}

IL_000b:
	{
		// return ShowResult.Failed;
		return (int32_t)(0);
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
// UnityEngine.Advertisements.ShowResult UnityEngine.Advertisements.Events.FinishEventArgs::get_showResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FinishEventArgs_get_showResult_m9A797DA56F8A17647FF8BB4E269EE3A724A1A48D (FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1 * __this, const RuntimeMethod* method)
{
	{
		// public ShowResult showResult { get; }
		int32_t L_0 = __this->get_U3CshowResultU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Events.FinishEventArgs::.ctor(System.String,UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishEventArgs__ctor_mFC603DA04EDD6C4D5BB377EABEB44C778E01C166 (FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1 * __this, String_t* ___placementId0, int32_t ___showResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FinishEventArgs(string placementId, ShowResult showResult)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// this.placementId = placementId;
		String_t* L_0 = ___placementId0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
		// this.showResult = showResult;
		int32_t L_1 = ___showResult1;
		__this->set_U3CshowResultU3Ek__BackingField_2(L_1);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidShow_m321FF9813EAC63E78EA6765AE7E24D33064318E3(char* ___placementId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	IosBanner_UnityAdsBannerDidShow_m321FF9813EAC63E78EA6765AE7E24D33064318E3(____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidHide_mF9ABA261CF7051F0377E607C52A260FF1A673236(char* ___placementId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	IosBanner_UnityAdsBannerDidHide_mF9ABA261CF7051F0377E607C52A260FF1A673236(____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerClick_mA65D35374382B7752906042F40E54AE100339673(char* ___placementId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	IosBanner_UnityAdsBannerClick_mA65D35374382B7752906042F40E54AE100339673(____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidError_m093C3E3B66AF1304225E960108F5DD736FFC48F2(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	IosBanner_UnityAdsBannerDidError_m093C3E3B66AF1304225E960108F5DD736FFC48F2(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidUnload_m8AAE33F67B340E82EDDCBAB957F609024ADC81C1(char* ___placementId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	IosBanner_UnityAdsBannerDidUnload_m8AAE33F67B340E82EDDCBAB957F609024ADC81C1(____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosBanner_UnityAdsBannerDidLoad_mFEC68685C683484E6BAA3F76B12C61E5B0B83F9C(char* ___placementId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	IosBanner_UnityAdsBannerDidLoad_mFEC68685C683484E6BAA3F76B12C61E5B0B83F9C(____placementId0_unmarshaled, NULL);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerShowCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerShowCallback_mE5AE355BBF616AEB4BD62E376123B2AA77C38456 (UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetBannerShowCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerHideCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerHideCallback_mB830E8859D3D912D47D386BC0A1EADABAB806CA4 (UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetBannerHideCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerClickCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerClickCallback_m23B120BF15AA7635EBFDC0B552DB9A20482F87F5 (UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetBannerClickCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerErrorCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerErrorCallback_mF010A20A0D8078DC33B98248576B33FA8708A9CD (UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetBannerErrorCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerUnloadCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerUnloadCallback_mA943C2C69D1933F08F4B2930DA862070E81FB933 (UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetBannerUnloadCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsSetBannerLoadCallback(UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsSetBannerLoadCallback_mCE1BD558FBF92B6B785209FC02F250A7C4243EED (UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetBannerLoadCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityBannerInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityBannerInitialize_m324B6198B32DA21FC51228ED10D8C309253BE1B7 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityBannerInitialize)();

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidShow_m321FF9813EAC63E78EA6765AE7E24D33064318E3 (String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t4C8A65288BD66F516365F7836CDFDD8A0E1FF070_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Banner.UnityAdsBannerDidShow(placementId, s_BannerOptions);
		RuntimeObject* L_0 = ((IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var))->get_s_Banner_0();
		String_t* L_1 = ___placementId0;
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_2 = ((IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var))->get_s_BannerOptions_2();
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.IBanner::UnityAdsBannerDidShow(System.String,UnityEngine.Advertisements.BannerOptions) */, IBanner_t4C8A65288BD66F516365F7836CDFDD8A0E1FF070_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidHide(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidHide_mF9ABA261CF7051F0377E607C52A260FF1A673236 (String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t4C8A65288BD66F516365F7836CDFDD8A0E1FF070_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Banner.UnityAdsBannerDidHide(placementId, s_BannerOptions);
		RuntimeObject* L_0 = ((IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var))->get_s_Banner_0();
		String_t* L_1 = ___placementId0;
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_2 = ((IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var))->get_s_BannerOptions_2();
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * >::Invoke(1 /* System.Void UnityEngine.Advertisements.IBanner::UnityAdsBannerDidHide(System.String,UnityEngine.Advertisements.BannerOptions) */, IBanner_t4C8A65288BD66F516365F7836CDFDD8A0E1FF070_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerClick_mA65D35374382B7752906042F40E54AE100339673 (String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t4C8A65288BD66F516365F7836CDFDD8A0E1FF070_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Banner.UnityAdsBannerClick(placementId, s_BannerOptions);
		RuntimeObject* L_0 = ((IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var))->get_s_Banner_0();
		String_t* L_1 = ___placementId0;
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_2 = ((IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var))->get_s_BannerOptions_2();
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * >::Invoke(2 /* System.Void UnityEngine.Advertisements.IBanner::UnityAdsBannerClick(System.String,UnityEngine.Advertisements.BannerOptions) */, IBanner_t4C8A65288BD66F516365F7836CDFDD8A0E1FF070_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidError_m093C3E3B66AF1304225E960108F5DD736FFC48F2 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t4C8A65288BD66F516365F7836CDFDD8A0E1FF070_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Banner.UnityAdsBannerDidError(message, s_BannerLoadOptions);
		RuntimeObject* L_0 = ((IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var))->get_s_Banner_0();
		String_t* L_1 = ___message0;
		BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * L_2 = ((IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var))->get_s_BannerLoadOptions_1();
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * >::Invoke(4 /* System.Void UnityEngine.Advertisements.IBanner::UnityAdsBannerDidError(System.String,UnityEngine.Advertisements.BannerLoadOptions) */, IBanner_t4C8A65288BD66F516365F7836CDFDD8A0E1FF070_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidUnload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidUnload_m8AAE33F67B340E82EDDCBAB957F609024ADC81C1 (String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::UnityAdsBannerDidLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_UnityAdsBannerDidLoad_mFEC68685C683484E6BAA3F76B12C61E5B0B83F9C (String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t4C8A65288BD66F516365F7836CDFDD8A0E1FF070_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Banner.UnityAdsBannerDidLoad(placementId, s_BannerLoadOptions);
		RuntimeObject* L_0 = ((IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var))->get_s_Banner_0();
		String_t* L_1 = ___placementId0;
		BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * L_2 = ((IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var))->get_s_BannerLoadOptions_1();
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * >::Invoke(3 /* System.Void UnityEngine.Advertisements.IBanner::UnityAdsBannerDidLoad(System.String,UnityEngine.Advertisements.BannerLoadOptions) */, IBanner_t4C8A65288BD66F516365F7836CDFDD8A0E1FF070_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// s_PlacementId = placementId;
		String_t* L_3 = ___placementId0;
		((IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var))->set_s_PlacementId_3(L_3);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::SetupBanner(UnityEngine.Advertisements.IBanner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner_SetupBanner_mE3D73183CE4004A2D2DE3049A9106DEBA7F5C580 (IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1 * __this, RuntimeObject* ___banner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_UnityAdsBannerClick_mA65D35374382B7752906042F40E54AE100339673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_UnityAdsBannerDidError_m093C3E3B66AF1304225E960108F5DD736FFC48F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_UnityAdsBannerDidHide_mF9ABA261CF7051F0377E607C52A260FF1A673236_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_UnityAdsBannerDidLoad_mFEC68685C683484E6BAA3F76B12C61E5B0B83F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_UnityAdsBannerDidShow_m321FF9813EAC63E78EA6765AE7E24D33064318E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_UnityAdsBannerDidUnload_m8AAE33F67B340E82EDDCBAB957F609024ADC81C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Banner = banner;
		RuntimeObject* L_0 = ___banner0;
		((IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_StaticFields*)il2cpp_codegen_static_fields_for(IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1_il2cpp_TypeInfo_var))->set_s_Banner_0(L_0);
		// UnityAdsSetBannerShowCallback(UnityAdsBannerDidShow);
		UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39 * L_1 = (UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39 *)il2cpp_codegen_object_new(UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39_il2cpp_TypeInfo_var);
		UnityAdsBannerShowDelegate__ctor_mB01F4CC929DB0BF11407229C58DC726D008799B9(L_1, NULL, (intptr_t)((intptr_t)IosBanner_UnityAdsBannerDidShow_m321FF9813EAC63E78EA6765AE7E24D33064318E3_RuntimeMethod_var), /*hidden argument*/NULL);
		IosBanner_UnityAdsSetBannerShowCallback_mE5AE355BBF616AEB4BD62E376123B2AA77C38456(L_1, /*hidden argument*/NULL);
		// UnityAdsSetBannerHideCallback(UnityAdsBannerDidHide);
		UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB * L_2 = (UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB *)il2cpp_codegen_object_new(UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB_il2cpp_TypeInfo_var);
		UnityAdsBannerHideDelegate__ctor_m48AAAE01D3AB09566026730479ECA42F453B7766(L_2, NULL, (intptr_t)((intptr_t)IosBanner_UnityAdsBannerDidHide_mF9ABA261CF7051F0377E607C52A260FF1A673236_RuntimeMethod_var), /*hidden argument*/NULL);
		IosBanner_UnityAdsSetBannerHideCallback_mB830E8859D3D912D47D386BC0A1EADABAB806CA4(L_2, /*hidden argument*/NULL);
		// UnityAdsSetBannerClickCallback(UnityAdsBannerClick);
		UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C * L_3 = (UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C *)il2cpp_codegen_object_new(UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C_il2cpp_TypeInfo_var);
		UnityAdsBannerClickDelegate__ctor_mC946BB51A214F9DF4E453DE8E9256ADE13058D12(L_3, NULL, (intptr_t)((intptr_t)IosBanner_UnityAdsBannerClick_mA65D35374382B7752906042F40E54AE100339673_RuntimeMethod_var), /*hidden argument*/NULL);
		IosBanner_UnityAdsSetBannerClickCallback_m23B120BF15AA7635EBFDC0B552DB9A20482F87F5(L_3, /*hidden argument*/NULL);
		// UnityAdsSetBannerErrorCallback(UnityAdsBannerDidError);
		UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B * L_4 = (UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B *)il2cpp_codegen_object_new(UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B_il2cpp_TypeInfo_var);
		UnityAdsBannerErrorDelegate__ctor_m5030294B00D540E1621667CDAA3A9D41B59186C5(L_4, NULL, (intptr_t)((intptr_t)IosBanner_UnityAdsBannerDidError_m093C3E3B66AF1304225E960108F5DD736FFC48F2_RuntimeMethod_var), /*hidden argument*/NULL);
		IosBanner_UnityAdsSetBannerErrorCallback_mF010A20A0D8078DC33B98248576B33FA8708A9CD(L_4, /*hidden argument*/NULL);
		// UnityAdsSetBannerUnloadCallback(UnityAdsBannerDidUnload);
		UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE * L_5 = (UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE *)il2cpp_codegen_object_new(UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE_il2cpp_TypeInfo_var);
		UnityAdsBannerUnloadDelegate__ctor_m2C15895630DBDB6D8DE39149A22F882F1FBD9C2C(L_5, NULL, (intptr_t)((intptr_t)IosBanner_UnityAdsBannerDidUnload_m8AAE33F67B340E82EDDCBAB957F609024ADC81C1_RuntimeMethod_var), /*hidden argument*/NULL);
		IosBanner_UnityAdsSetBannerUnloadCallback_mA943C2C69D1933F08F4B2930DA862070E81FB933(L_5, /*hidden argument*/NULL);
		// UnityAdsSetBannerLoadCallback(UnityAdsBannerDidLoad);
		UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025 * L_6 = (UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025 *)il2cpp_codegen_object_new(UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025_il2cpp_TypeInfo_var);
		UnityAdsBannerLoadDelegate__ctor_m226DDB079B0B5D40F020B8E9411291D62E285ABB(L_6, NULL, (intptr_t)((intptr_t)IosBanner_UnityAdsBannerDidLoad_mFEC68685C683484E6BAA3F76B12C61E5B0B83F9C_RuntimeMethod_var), /*hidden argument*/NULL);
		IosBanner_UnityAdsSetBannerLoadCallback_mCE1BD558FBF92B6B785209FC02F250A7C4243EED(L_6, /*hidden argument*/NULL);
		// UnityBannerInitialize();
		IosBanner_UnityBannerInitialize_m324B6198B32DA21FC51228ED10D8C309253BE1B7(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosBanner__ctor_mA47E07719C9C72006E7114C2A3A5D84A7AE025C6 (IosBanner_t874353ACD68DA6C9703CE47C683C56AF37571CD1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosInitializationListener_OnInitializationComplete_m7165028F246A814FA7CBBEE3885BC9791BA24555(intptr_t ___ptr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	IosInitializationListener_OnInitializationComplete_m7165028F246A814FA7CBBEE3885BC9791BA24555(___ptr0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosInitializationListener_OnInitializationFailed_mE1FCBCE03AA4A47714D971AEF4DB9806CCB17F4D(intptr_t ___ptr0, int32_t ___error1, char* ___message2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message2' to managed representation
	String_t* ____message2_unmarshaled = NULL;
	____message2_unmarshaled = il2cpp_codegen_marshal_string_result(___message2);

	// Managed method invocation
	IosInitializationListener_OnInitializationFailed_mE1FCBCE03AA4A47714D971AEF4DB9806CCB17F4D(___ptr0, ___error1, ____message2_unmarshaled, NULL);

}
// System.IntPtr UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::InitializationListenerCreate(UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback,UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosInitializationListener_InitializationListenerCreate_m15663F2983DE265C0214750A1E3D747CC3A1382F (InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194 * ___initSuccessCallback0, InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2 * ___initFailureCallback1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___initSuccessCallback0' to native representation
	Il2CppMethodPointer ____initSuccessCallback0_marshaled = NULL;
	____initSuccessCallback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___initSuccessCallback0));

	// Marshaling of parameter '___initFailureCallback1' to native representation
	Il2CppMethodPointer ____initFailureCallback1_marshaled = NULL;
	____initFailureCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___initFailureCallback1));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsInitializationListenerCreate)(____initSuccessCallback0_marshaled, ____initFailureCallback1_marshaled);

	return returnValue;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::InitializationListenerDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_InitializationListenerDestroy_m608AA7179359DE454D88DEDFD531FCF74766541D (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsInitializationListenerDestroy)(___ptr0);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::.ctor(UnityEngine.Advertisements.IUnityAdsInitializationListener,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener__ctor_mA962AC26B0138DA9DA04E24A47462C08D1D48E77 (IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * __this, RuntimeObject* ___unityAdsInternalListener0, RuntimeObject* ___userListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosInitializationListener_OnInitializationComplete_m7165028F246A814FA7CBBEE3885BC9791BA24555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosInitializationListener_OnInitializationFailed_mE1FCBCE03AA4A47714D971AEF4DB9806CCB17F4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IosInitializationListener(IUnityAdsInitializationListener unityAdsInternalListener, IUnityAdsInitializationListener userListener)
		IL2CPP_RUNTIME_CLASS_INIT(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		IosNativeObject__ctor_m5F3E29968928AA6772D607CD85F993FBDF7FD370(__this, /*hidden argument*/NULL);
		// NativePtr = InitializationListenerCreate(OnInitializationComplete, OnInitializationFailed);
		InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194 * L_0 = (InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194 *)il2cpp_codegen_object_new(InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194_il2cpp_TypeInfo_var);
		InitSuccessCallback__ctor_m0EEE2D826BB9EEEE4B9A00B8B4008BA8FBC72E6E(L_0, NULL, (intptr_t)((intptr_t)IosInitializationListener_OnInitializationComplete_m7165028F246A814FA7CBBEE3885BC9791BA24555_RuntimeMethod_var), /*hidden argument*/NULL);
		InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2 * L_1 = (InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2 *)il2cpp_codegen_object_new(InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2_il2cpp_TypeInfo_var);
		InitFailureCallback__ctor_m2A8C922C2452B6B14C46328E81366935EAA13423(L_1, NULL, (intptr_t)((intptr_t)IosInitializationListener_OnInitializationFailed_mE1FCBCE03AA4A47714D971AEF4DB9806CCB17F4D_RuntimeMethod_var), /*hidden argument*/NULL);
		intptr_t L_2;
		L_2 = IosInitializationListener_InitializationListenerCreate_m15663F2983DE265C0214750A1E3D747CC3A1382F(L_0, L_1, /*hidden argument*/NULL);
		IosNativeObject_set_NativePtr_mDB10C0F5BB80B63A28977BB84BC20211FA7F4DCE(__this, (intptr_t)L_2, /*hidden argument*/NULL);
		// m_UnityAdsInternalListener = unityAdsInternalListener;
		RuntimeObject* L_3 = ___unityAdsInternalListener0;
		__this->set_m_UnityAdsInternalListener_2(L_3);
		// m_UserListener = userListener;
		RuntimeObject* L_4 = ___userListener1;
		__this->set_m_UserListener_3(L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_Dispose_m7B9B45D8F63D3A9C7720838B770B1D1C09210C17 (IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		intptr_t L_0;
		L_0 = IosNativeObject_get_NativePtr_m55952C88D580C58372495F9F6F9683115ECA16FE_inline(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		return;
	}

IL_0013:
	{
		// InitializationListenerDestroy(NativePtr);
		intptr_t L_2;
		L_2 = IosNativeObject_get_NativePtr_m55952C88D580C58372495F9F6F9683115ECA16FE_inline(__this, /*hidden argument*/NULL);
		IosInitializationListener_InitializationListenerDestroy_m608AA7179359DE454D88DEDFD531FCF74766541D((intptr_t)L_2, /*hidden argument*/NULL);
		// NativePtr = IntPtr.Zero;
		IosNativeObject_set_NativePtr_mDB10C0F5BB80B63A28977BB84BC20211FA7F4DCE(__this, (intptr_t)(0), /*hidden argument*/NULL);
		// m_UnityAdsInternalListener = null;
		__this->set_m_UnityAdsInternalListener_2((RuntimeObject*)NULL);
		// m_UserListener = null;
		__this->set_m_UserListener_3((RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationComplete_mFFCFD20FBCE9F5B0D6BF8EF86078DA18569F375A (IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tF3541F5EE9D74500D445E4C4CA7B688318A2ADC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnInitializationComplete();
		RuntimeObject* L_0 = __this->get_m_UnityAdsInternalListener_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationComplete() */, IUnityAdsInitializationListener_tF3541F5EE9D74500D445E4C4CA7B688318A2ADC1_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// m_UserListener?.OnInitializationComplete();
		RuntimeObject* L_2 = __this->get_m_UserListener_3();
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		NullCheck(G_B5_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationComplete() */, IUnityAdsInitializationListener_tF3541F5EE9D74500D445E4C4CA7B688318A2ADC1_il2cpp_TypeInfo_var, G_B5_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationFailed_mB51FBCD266AC424876EC7CD05B189D03042B4DE3 (IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tF3541F5EE9D74500D445E4C4CA7B688318A2ADC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnInitializationFailed(error, message);
		RuntimeObject* L_0 = __this->get_m_UnityAdsInternalListener_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		int32_t L_2 = ___error0;
		String_t* L_3 = ___message1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String) */, IUnityAdsInitializationListener_tF3541F5EE9D74500D445E4C4CA7B688318A2ADC1_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3);
	}

IL_0013:
	{
		// m_UserListener?.OnInitializationFailed(error, message);
		RuntimeObject* L_4 = __this->get_m_UserListener_3();
		RuntimeObject* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_6 = ___error0;
		String_t* L_7 = ___message1;
		NullCheck(G_B5_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String) */, IUnityAdsInitializationListener_tF3541F5EE9D74500D445E4C4CA7B688318A2ADC1_il2cpp_TypeInfo_var, G_B5_0, L_6, L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationComplete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationComplete_m7165028F246A814FA7CBBEE3885BC9791BA24555 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E_m229054BFD26567EA48811D6F0D54D1161EE545B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * V_0 = NULL;
	{
		// var listener = Get<IosInitializationListener>(ptr);
		intptr_t L_0 = ___ptr0;
		IL2CPP_RUNTIME_CLASS_INIT(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * L_1;
		L_1 = IosNativeObject_Get_TisIosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E_m229054BFD26567EA48811D6F0D54D1161EE545B2((intptr_t)L_0, /*hidden argument*/IosNativeObject_Get_TisIosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E_m229054BFD26567EA48811D6F0D54D1161EE545B2_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * L_3 = V_0;
		intptr_t L_4 = ___ptr0;
		intptr_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m5CA0830CB17F0B4CC0D8994D9279B16255EC7327(L_3, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnInitializationComplete();
		IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * L_9 = V_0;
		NullCheck(L_9);
		IosInitializationListener_OnInitializationComplete_mFFCFD20FBCE9F5B0D6BF8EF86078DA18569F375A(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener::OnInitializationFailed(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosInitializationListener_OnInitializationFailed_mE1FCBCE03AA4A47714D971AEF4DB9806CCB17F4D (intptr_t ___ptr0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E_m229054BFD26567EA48811D6F0D54D1161EE545B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * V_0 = NULL;
	{
		// var listener = Get<IosInitializationListener>(ptr);
		intptr_t L_0 = ___ptr0;
		IL2CPP_RUNTIME_CLASS_INIT(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * L_1;
		L_1 = IosNativeObject_Get_TisIosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E_m229054BFD26567EA48811D6F0D54D1161EE545B2((intptr_t)L_0, /*hidden argument*/IosNativeObject_Get_TisIosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E_m229054BFD26567EA48811D6F0D54D1161EE545B2_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * L_3 = V_0;
		intptr_t L_4 = ___ptr0;
		intptr_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m5CA0830CB17F0B4CC0D8994D9279B16255EC7327(L_3, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnInitializationFailed((UnityAdsInitializationError)error, message);
		IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * L_9 = V_0;
		int32_t L_10 = ___error1;
		String_t* L_11 = ___message2;
		NullCheck(L_9);
		IosInitializationListener_OnInitializationFailed_mB51FBCD266AC424876EC7CD05B189D03042B4DE3(L_9, L_10, L_11, /*hidden argument*/NULL);
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
// System.IntPtr UnityEngine.Advertisements.Platform.iOS.IosNativeObject::get_NativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosNativeObject_get_NativePtr_m55952C88D580C58372495F9F6F9683115ECA16FE (IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD * __this, const RuntimeMethod* method)
{
	{
		// get => m_NativePtr;
		intptr_t L_0 = __this->get_m_NativePtr_1();
		return (intptr_t)L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::set_NativePtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject_set_NativePtr_mDB10C0F5BB80B63A28977BB84BC20211FA7F4DCE (IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD * __this, intptr_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryAdd_m2A339462EDFC09A31ED19439E15C3558BE5DA5EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryRemove_m94D7B4FA99F9811406BF1B8663EBAF63F512834E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD * V_0 = NULL;
	{
		// if (m_NativePtr == value) return;
		intptr_t L_0 = __this->get_m_NativePtr_1();
		intptr_t L_1 = ___value0;
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// if (m_NativePtr == value) return;
		return;
	}

IL_000f:
	{
		// if (m_NativePtr != IntPtr.Zero)
		intptr_t L_3 = __this->get_m_NativePtr_1();
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// s_Objects.TryRemove(m_NativePtr, out _);
		IL2CPP_RUNTIME_CLASS_INIT(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 * L_5 = ((IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_StaticFields*)il2cpp_codegen_static_fields_for(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var))->get_s_Objects_0();
		intptr_t L_6 = __this->get_m_NativePtr_1();
		NullCheck(L_5);
		bool L_7;
		L_7 = ConcurrentDictionary_2_TryRemove_m94D7B4FA99F9811406BF1B8663EBAF63F512834E(L_5, (intptr_t)L_6, (IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD **)(&V_0), /*hidden argument*/ConcurrentDictionary_2_TryRemove_m94D7B4FA99F9811406BF1B8663EBAF63F512834E_RuntimeMethod_var);
	}

IL_0034:
	{
		// m_NativePtr = value;
		intptr_t L_8 = ___value0;
		__this->set_m_NativePtr_1((intptr_t)L_8);
		// if (m_NativePtr != IntPtr.Zero)
		intptr_t L_9 = __this->get_m_NativePtr_1();
		bool L_10;
		L_10 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_9, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// s_Objects.TryAdd(m_NativePtr, this);
		IL2CPP_RUNTIME_CLASS_INIT(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 * L_11 = ((IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_StaticFields*)il2cpp_codegen_static_fields_for(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var))->get_s_Objects_0();
		intptr_t L_12 = __this->get_m_NativePtr_1();
		NullCheck(L_11);
		bool L_13;
		L_13 = ConcurrentDictionary_2_TryAdd_m2A339462EDFC09A31ED19439E15C3558BE5DA5EF(L_11, (intptr_t)L_12, __this, /*hidden argument*/ConcurrentDictionary_2_TryAdd_m2A339462EDFC09A31ED19439E15C3558BE5DA5EF_RuntimeMethod_var);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject_Dispose_mBB0E9102C5660B7BE81D7A543483DF285B142B9A (IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		intptr_t L_0;
		L_0 = IosNativeObject_get_NativePtr_m55952C88D580C58372495F9F6F9683115ECA16FE_inline(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		return;
	}

IL_0013:
	{
		// BridgeTransfer(NativePtr);
		intptr_t L_2;
		L_2 = IosNativeObject_get_NativePtr_m55952C88D580C58372495F9F6F9683115ECA16FE_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		IosNativeObject_BridgeTransfer_m9D249DCAE81B11660371DCE474E486F7BA99E342((intptr_t)L_2, /*hidden argument*/NULL);
		// NativePtr = IntPtr.Zero;
		IosNativeObject_set_NativePtr_mDB10C0F5BB80B63A28977BB84BC20211FA7F4DCE(__this, (intptr_t)(0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosNativeObject::CheckDisposedAndLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosNativeObject_CheckDisposedAndLogError_m5CA0830CB17F0B4CC0D8994D9279B16255EC7327 (IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF5647232AF23A5A9818CCBB98BB0C581B5FF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NativePtr != IntPtr.Zero) return false;
		intptr_t L_0;
		L_0 = IosNativeObject_get_NativePtr_m55952C88D580C58372495F9F6F9683115ECA16FE_inline(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (NativePtr != IntPtr.Zero) return false;
		return (bool)0;
	}

IL_0014:
	{
		// Debug.LogErrorFormat("UnityAds SDK: {0}: Instance of type {1} is disposed. Please create a new instance in order to call any method.", message, GetType().FullName);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		String_t* L_4 = ___message0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		Type_t * L_6;
		L_6 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral8BF5647232AF23A5A9818CCBB98BB0C581B5FF2F, L_5, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::BridgeTransfer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject_BridgeTransfer_m9D249DCAE81B11660371DCE474E486F7BA99E342 (intptr_t ___x0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsBridgeTransfer)(___x0);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject__ctor_m5F3E29968928AA6772D607CD85F993FBDF7FD370 (IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosNativeObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObject__cctor_m8DF86ADF16A79A2562656FD15E51D0FCB614BD2E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_mBD9A48B039C905A69F17C6B3D82001A52A1EC09B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static ConcurrentDictionary<IntPtr, IosNativeObject> s_Objects = new ConcurrentDictionary<IntPtr, IosNativeObject>();
		ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 * L_0 = (ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9 *)il2cpp_codegen_object_new(ConcurrentDictionary_2_tEF55452C6476FE99CD6F70237CAC2C5462F189E9_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2__ctor_mBD9A48B039C905A69F17C6B3D82001A52A1EC09B(L_0, /*hidden argument*/ConcurrentDictionary_2__ctor_mBD9A48B039C905A69F17C6B3D82001A52A1EC09B_RuntimeMethod_var);
		((IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_StaticFields*)il2cpp_codegen_static_fields_for(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var))->set_s_Objects_0(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosPlatform_UnityAdsReady_m59EA9785AE573691825399F7D168F44CECA710AD(char* ___placementId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	IosPlatform_UnityAdsReady_m59EA9785AE573691825399F7D168F44CECA710AD(____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosPlatform_UnityAdsDidError_m75F8A97597A76D732BF2EC28586302C2AD6C0518(int64_t ___rawError0, char* ___message1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message1' to managed representation
	String_t* ____message1_unmarshaled = NULL;
	____message1_unmarshaled = il2cpp_codegen_marshal_string_result(___message1);

	// Managed method invocation
	IosPlatform_UnityAdsDidError_m75F8A97597A76D732BF2EC28586302C2AD6C0518(___rawError0, ____message1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosPlatform_UnityAdsDidStart_mADDAF7680B98E8D9161E7B7E25B8E4ABA1AEF2DF(char* ___placementId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	IosPlatform_UnityAdsDidStart_mADDAF7680B98E8D9161E7B7E25B8E4ABA1AEF2DF(____placementId0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosPlatform_UnityAdsDidFinish_m4D486230CFB4B276945979FB058C18E37A90A974(char* ___placementId0, int64_t ___rawShowResult1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	IosPlatform_UnityAdsDidFinish_m4D486230CFB4B276945979FB058C18E37A90A974(____placementId0_unmarshaled, ___rawShowResult1, NULL);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsInitialize(System.String,System.Boolean,System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsInitialize_m58FF4C5691E54901632529D477AE8BEABB139C42 (String_t* ___gameId0, bool ___testMode1, bool ___enablePerPlacementLoad2, intptr_t ___initializationListener3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, intptr_t);

	// Marshaling of parameter '___gameId0' to native representation
	char* ____gameId0_marshaled = NULL;
	____gameId0_marshaled = il2cpp_codegen_marshal_string(___gameId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsInitialize)(____gameId0_marshaled, static_cast<int32_t>(___testMode1), static_cast<int32_t>(___enablePerPlacementLoad2), ___initializationListener3);

	// Marshaling cleanup of parameter '___gameId0' native representation
	il2cpp_codegen_marshal_free(____gameId0_marshaled);
	____gameId0_marshaled = NULL;

}
// System.String UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsGetDefaultPlacementID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosPlatform_UnityAdsGetDefaultPlacementID_m8A3E829D5DE7928942CE5F1A692162D22F70E7E7 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsGetDefaultPlacementID)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsShow(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsShow_m1407039141A5FB5EBE81878E92F84DFB934AEA87 (String_t* ___placementId0, intptr_t ___showListener1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, intptr_t);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsShow)(____placementId0_marshaled, ___showListener1);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsIsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosPlatform_UnityAdsIsReady_mE80F263FCC76FAF53C34833CCB793316231E4EDC (String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsIsReady)(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.String UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsGetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosPlatform_UnityAdsGetVersion_m6C38A89563FC4DF3C058DE04A09853F9A608E560 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsGetVersion)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsIsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosPlatform_UnityAdsIsInitialized_m217357C18283E8FD0F2B98E979C410735FF3E9CF (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsIsInitialized)();

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetMetaData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetMetaData_m191677377DC84DB9BEB304BCF918CABCC311C1D4 (String_t* ___category0, String_t* ___data1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___category0' to native representation
	char* ____category0_marshaled = NULL;
	____category0_marshaled = il2cpp_codegen_marshal_string(___category0);

	// Marshaling of parameter '___data1' to native representation
	char* ____data1_marshaled = NULL;
	____data1_marshaled = il2cpp_codegen_marshal_string(___data1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetMetaData)(____category0_marshaled, ____data1_marshaled);

	// Marshaling cleanup of parameter '___category0' native representation
	il2cpp_codegen_marshal_free(____category0_marshaled);
	____category0_marshaled = NULL;

	// Marshaling cleanup of parameter '___data1' native representation
	il2cpp_codegen_marshal_free(____data1_marshaled);
	____data1_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetReadyCallback(UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsReadyDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetReadyCallback_mAE34F94248250D0083417EA5D957E807E437563A (UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetReadyCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetDidErrorCallback(UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidErrorDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetDidErrorCallback_m03C32CEB47C3CC92D1C83F93338FF1669B260F0D (UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetDidErrorCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetDidStartCallback(UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidStartDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetDidStartCallback_m76FD06ADC0F9AB4B5669A3958D02DD6C2A806E49 (UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetDidStartCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsSetDidFinishCallback(UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidFinishDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsSetDidFinishCallback_mB9F526B0CFB4AD69E448EA14D5D2FE2B9ABB1FCB (UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetDidFinishCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsReady_m59EA9785AE573691825399F7D168F44CECA710AD (String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// s_Platform?.UnityAdsReady(placementId);
		RuntimeObject* L_0 = ((IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var))->get_s_Platform_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::UnityAdsReady(System.String) */, IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsDidError(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsDidError_m75F8A97597A76D732BF2EC28586302C2AD6C0518 (int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// s_Platform?.UnityAdsDidError(message);
		RuntimeObject* L_0 = ((IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var))->get_s_Platform_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___message1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(6 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::UnityAdsDidError(System.String) */, IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsDidStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsDidStart_mADDAF7680B98E8D9161E7B7E25B8E4ABA1AEF2DF (String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// s_Platform?.UnityAdsDidStart(placementId);
		RuntimeObject* L_0 = ((IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var))->get_s_Platform_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::UnityAdsDidStart(System.String) */, IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::UnityAdsDidFinish(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_UnityAdsDidFinish_m4D486230CFB4B276945979FB058C18E37A90A974 (String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// s_Platform?.UnityAdsDidFinish(placementId, (ShowResult)rawShowResult);
		RuntimeObject* L_0 = ((IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var))->get_s_Platform_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___placementId0;
		int64_t L_3 = ___rawShowResult1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(8 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::UnityAdsDidFinish(System.String,UnityEngine.Advertisements.ShowResult) */, IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var, G_B2_0, L_2, ((int32_t)((int32_t)L_3)));
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_SetupPlatform_mE583ACBB4B895AC693B7AC5F74A0B81886508EA9 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, RuntimeObject* ___iosPlatform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_UnityAdsDidError_m75F8A97597A76D732BF2EC28586302C2AD6C0518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_UnityAdsDidFinish_m4D486230CFB4B276945979FB058C18E37A90A974_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_UnityAdsDidStart_mADDAF7680B98E8D9161E7B7E25B8E4ABA1AEF2DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_UnityAdsReady_m59EA9785AE573691825399F7D168F44CECA710AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform = iosPlatform;
		RuntimeObject* L_0 = ___iosPlatform0;
		((IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var))->set_s_Platform_2(L_0);
		// UnityAdsSetReadyCallback(UnityAdsReady);
		UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8 * L_1 = (UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8 *)il2cpp_codegen_object_new(UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8_il2cpp_TypeInfo_var);
		UnityAdsReadyDelegate__ctor_m69FD51A73902DDF57F5EA8A60F38180B8A2DED45(L_1, NULL, (intptr_t)((intptr_t)IosPlatform_UnityAdsReady_m59EA9785AE573691825399F7D168F44CECA710AD_RuntimeMethod_var), /*hidden argument*/NULL);
		IosPlatform_UnityAdsSetReadyCallback_mAE34F94248250D0083417EA5D957E807E437563A(L_1, /*hidden argument*/NULL);
		// UnityAdsSetDidErrorCallback(UnityAdsDidError);
		UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D * L_2 = (UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D *)il2cpp_codegen_object_new(UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D_il2cpp_TypeInfo_var);
		UnityAdsDidErrorDelegate__ctor_m67EC37FE3D0ABA25A7C33AC029A2F9C6C4D5B271(L_2, NULL, (intptr_t)((intptr_t)IosPlatform_UnityAdsDidError_m75F8A97597A76D732BF2EC28586302C2AD6C0518_RuntimeMethod_var), /*hidden argument*/NULL);
		IosPlatform_UnityAdsSetDidErrorCallback_m03C32CEB47C3CC92D1C83F93338FF1669B260F0D(L_2, /*hidden argument*/NULL);
		// UnityAdsSetDidStartCallback(UnityAdsDidStart);
		UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61 * L_3 = (UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61 *)il2cpp_codegen_object_new(UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61_il2cpp_TypeInfo_var);
		UnityAdsDidStartDelegate__ctor_mA75C24D725320A16845F928D73997B7B485182AA(L_3, NULL, (intptr_t)((intptr_t)IosPlatform_UnityAdsDidStart_mADDAF7680B98E8D9161E7B7E25B8E4ABA1AEF2DF_RuntimeMethod_var), /*hidden argument*/NULL);
		IosPlatform_UnityAdsSetDidStartCallback_m76FD06ADC0F9AB4B5669A3958D02DD6C2A806E49(L_3, /*hidden argument*/NULL);
		// UnityAdsSetDidFinishCallback(UnityAdsDidFinish);
		UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95 * L_4 = (UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95 *)il2cpp_codegen_object_new(UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95_il2cpp_TypeInfo_var);
		UnityAdsDidFinishDelegate__ctor_mC5C16F8D8122844D28E9163A7445A586E152B892(L_4, NULL, (intptr_t)((intptr_t)IosPlatform_UnityAdsDidFinish_m4D486230CFB4B276945979FB058C18E37A90A974_RuntimeMethod_var), /*hidden argument*/NULL);
		IosPlatform_UnityAdsSetDidFinishCallback_mB9F526B0CFB4AD69E448EA14D5D2FE2B9ABB1FCB(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::Initialize(System.String,System.Boolean,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_Initialize_mAF487855586A93A2163F4536D9EFC9C9E06EF318 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, String_t* ___gameId0, bool ___testMode1, bool ___enablePerPlacementLoad2, RuntimeObject* ___initializationListener3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new PurchasingPlatform().Initialize();
		PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * L_0 = (PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 *)il2cpp_codegen_object_new(PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_il2cpp_TypeInfo_var);
		PurchasingPlatform__ctor_mAB82A0104035B56F3BAA5FD32FEC419FCB64C2F6(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		PurchasingPlatform_Initialize_m20529FE385966230350594410E5D19ED2D647D2B(L_0, /*hidden argument*/NULL);
		// UnityAdsInitialize(gameId, testMode, enablePerPlacementLoad, new IosInitializationListener(this, initializationListener).NativePtr);
		String_t* L_1 = ___gameId0;
		bool L_2 = ___testMode1;
		bool L_3 = ___enablePerPlacementLoad2;
		RuntimeObject* L_4 = ___initializationListener3;
		IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E * L_5 = (IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E *)il2cpp_codegen_object_new(IosInitializationListener_t240AA269ABF882A241005A7065736A95D750F47E_il2cpp_TypeInfo_var);
		IosInitializationListener__ctor_mA962AC26B0138DA9DA04E24A47462C08D1D48E77(L_5, __this, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		intptr_t L_6;
		L_6 = IosNativeObject_get_NativePtr_m55952C88D580C58372495F9F6F9683115ECA16FE_inline(L_5, /*hidden argument*/NULL);
		IosPlatform_UnityAdsInitialize_m58FF4C5691E54901632529D477AE8BEABB139C42(L_1, L_2, L_3, (intptr_t)L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_Show_m4D4EC2BAE70B2051A97C151E4AE4577C500438DC (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityAdsShow(placementId, new IosShowListener(this, showListener).NativePtr);
		String_t* L_0 = ___placementId0;
		RuntimeObject* L_1 = ___showListener1;
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_2 = (IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 *)il2cpp_codegen_object_new(IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_il2cpp_TypeInfo_var);
		IosShowListener__ctor_m6DA7501FCDBDEC41F15772712343D49E3227B637(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = IosNativeObject_get_NativePtr_m55952C88D580C58372495F9F6F9683115ECA16FE_inline(L_2, /*hidden argument*/NULL);
		IosPlatform_UnityAdsShow_m1407039141A5FB5EBE81878E92F84DFB934AEA87(L_0, (intptr_t)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_SetMetaData_mB5BEB2BD060E60E75904D40085145C3B5F820520 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * ___metaData0, const RuntimeMethod* method)
{
	{
		// UnityAdsSetMetaData(metaData.category, metaData.ToJSON());
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_0 = ___metaData0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MetaData_get_category_mA024D4E519DD1CCEC25F80B93A4200115D5B7932_inline(L_0, /*hidden argument*/NULL);
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_2 = ___metaData0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = MetaData_ToJSON_mCCF425ED0824657198D267C26B136C445D15D65E(L_2, /*hidden argument*/NULL);
		IosPlatform_UnityAdsSetMetaData_m191677377DC84DB9BEB304BCF918CABCC311C1D4(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.iOS.IosPlatform::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosPlatform_GetVersion_mF60C28A81746C503737C51764DF99B014224B5F9 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, const RuntimeMethod* method)
{
	{
		// return UnityAdsGetVersion();
		String_t* L_0;
		L_0 = IosPlatform_UnityAdsGetVersion_m6C38A89563FC4DF3C058DE04A09853F9A608E560(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosPlatform::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosPlatform_IsInitialized_m75121F58077BA9D118D3A499DDC2ECCC6A07D862 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, const RuntimeMethod* method)
{
	{
		// return UnityAdsIsInitialized();
		bool L_0;
		L_0 = IosPlatform_UnityAdsIsInitialized_m217357C18283E8FD0F2B98E979C410735FF3E9CF(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.iOS.IosPlatform::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IosPlatform_IsReady_m52B52F51A6E05A2259D6C66DBB3CC76A91F741A2 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// return UnityAdsIsReady(placementId);
		String_t* L_0 = ___placementId0;
		bool L_1;
		L_1 = IosPlatform_UnityAdsIsReady_mE80F263FCC76FAF53C34833CCB793316231E4EDC(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String UnityEngine.Advertisements.Platform.iOS.IosPlatform::GetDefaultPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosPlatform_GetDefaultPlacement_m319F4113DB56CBAFD71816827952DAC550D528C9 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, const RuntimeMethod* method)
{
	{
		// return UnityAdsGetDefaultPlacementID();
		String_t* L_0;
		L_0 = IosPlatform_UnityAdsGetDefaultPlacementID_m8A3E829D5DE7928942CE5F1A692162D22F70E7E7(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnInitializationComplete_m97AEA0B42A2E34FDA7D186E203C5FCC1C9DE3984 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnInitializationFailed_m5AE254A7214C03A0DD6C3E20D6F3FC8AA2E1A962 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// s_Platform?.UnityAdsDidError(message);
		RuntimeObject* L_0 = ((IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var))->get_s_Platform_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___message1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(6 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::UnityAdsDidError(System.String) */, IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnUnityAdsShowFailure_m29144A4464D9CCB7D48970BD4B00BABAA59C7027 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// s_Platform?.UnityAdsDidError(message);
		RuntimeObject* L_0 = ((IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var))->get_s_Platform_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___message2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(6 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::UnityAdsDidError(System.String) */, IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnUnityAdsShowStart_m85005E2B4533855918E9257112A41253479C4B46 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// s_Platform?.UnityAdsDidStart(placementId);
		RuntimeObject* L_0 = ((IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var))->get_s_Platform_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::UnityAdsDidStart(System.String) */, IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnUnityAdsShowClick_m2CB3061F1A6B86CC89F9064E11E4950D9A9E535D (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform_OnUnityAdsShowComplete_m75805C13B49E8DBED839BCAD18AA9B909C14F872 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, String_t* ___placementId0, int32_t ___completionState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// s_Platform?.UnityAdsDidFinish(placementId, EnumUtilities.GetShowResultsFromCompletionState(completionState));
		RuntimeObject* L_0 = ((IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_StaticFields*)il2cpp_codegen_static_fields_for(IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF_il2cpp_TypeInfo_var))->get_s_Platform_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		String_t* L_2 = ___placementId0;
		int32_t L_3 = ___completionState1;
		int32_t L_4;
		L_4 = EnumUtilities_GetShowResultsFromCompletionState_m9038975D34C7F21DB81C39A4C993576E77F683CA(L_3, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(8 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::UnityAdsDidFinish(System.String,UnityEngine.Advertisements.ShowResult) */, IPlatform_tAAE923E4A4AF364DB71C20EC15ED198D112DA87F_il2cpp_TypeInfo_var, G_B2_0, L_2, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlatform__ctor_mD09056D2993C762A6A115F8085A5AF9CD8B62618 (IosPlatform_t2C4B67E7B1DC331E748752D0AEB00398446D5FEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		IosNativeObject__ctor_m5F3E29968928AA6772D607CD85F993FBDF7FD370(__this, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowListener_OnShowFailure_m1BD4CE42328D7740A667FBFA2450A2AB628BAAEC(intptr_t ___ptr0, char* ___placementId1, int32_t ___error2, char* ___message3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId1' to managed representation
	String_t* ____placementId1_unmarshaled = NULL;
	____placementId1_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId1);

	// Marshaling of parameter '___message3' to managed representation
	String_t* ____message3_unmarshaled = NULL;
	____message3_unmarshaled = il2cpp_codegen_marshal_string_result(___message3);

	// Managed method invocation
	IosShowListener_OnShowFailure_m1BD4CE42328D7740A667FBFA2450A2AB628BAAEC(___ptr0, ____placementId1_unmarshaled, ___error2, ____message3_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowListener_OnShowStart_mF41901AE44ABED7223CAD03EB3ECCC16623EB392(intptr_t ___ptr0, char* ___placementId1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId1' to managed representation
	String_t* ____placementId1_unmarshaled = NULL;
	____placementId1_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId1);

	// Managed method invocation
	IosShowListener_OnShowStart_mF41901AE44ABED7223CAD03EB3ECCC16623EB392(___ptr0, ____placementId1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowListener_OnShowClick_m25FF3FFA562E413C4CF7C8E7BA00548AA2EB72D9(intptr_t ___ptr0, char* ___placementId1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId1' to managed representation
	String_t* ____placementId1_unmarshaled = NULL;
	____placementId1_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId1);

	// Managed method invocation
	IosShowListener_OnShowClick_m25FF3FFA562E413C4CF7C8E7BA00548AA2EB72D9(___ptr0, ____placementId1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowListener_OnShowComplete_m2DED19EF1FB3063006C282E27E70A90AA2E622A3(intptr_t ___ptr0, char* ___placementId1, int32_t ___completionState2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId1' to managed representation
	String_t* ____placementId1_unmarshaled = NULL;
	____placementId1_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId1);

	// Managed method invocation
	IosShowListener_OnShowComplete_m2DED19EF1FB3063006C282E27E70A90AA2E622A3(___ptr0, ____placementId1_unmarshaled, ___completionState2, NULL);

}
// System.IntPtr UnityEngine.Advertisements.IosShowListener::ShowListenerCreate(UnityEngine.Advertisements.IosShowListener/ShowFailureCallback,UnityEngine.Advertisements.IosShowListener/ShowStartCallback,UnityEngine.Advertisements.IosShowListener/ShowClickCallback,UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosShowListener_ShowListenerCreate_mCFA60A445BAA7CAD902327EFDF2356A9D747E2E1 (ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318 * ___showFailureCallback0, ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87 * ___showStartCallback1, ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225 * ___showClickCallback2, ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777 * ___showCompleteCallback3, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___showFailureCallback0' to native representation
	Il2CppMethodPointer ____showFailureCallback0_marshaled = NULL;
	____showFailureCallback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___showFailureCallback0));

	// Marshaling of parameter '___showStartCallback1' to native representation
	Il2CppMethodPointer ____showStartCallback1_marshaled = NULL;
	____showStartCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___showStartCallback1));

	// Marshaling of parameter '___showClickCallback2' to native representation
	Il2CppMethodPointer ____showClickCallback2_marshaled = NULL;
	____showClickCallback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___showClickCallback2));

	// Marshaling of parameter '___showCompleteCallback3' to native representation
	Il2CppMethodPointer ____showCompleteCallback3_marshaled = NULL;
	____showCompleteCallback3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___showCompleteCallback3));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsShowListenerCreate)(____showFailureCallback0_marshaled, ____showStartCallback1_marshaled, ____showClickCallback2_marshaled, ____showCompleteCallback3_marshaled);

	return returnValue;
}
// System.Void UnityEngine.Advertisements.IosShowListener::ShowListenerDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_ShowListenerDestroy_m39647E2CAAE98EC0E821538E0A91AADE4EF2BC73 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsShowListenerDestroy)(___ptr0);

}
// System.Void UnityEngine.Advertisements.IosShowListener::.ctor(UnityEngine.Advertisements.IUnityAdsShowListener,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener__ctor_m6DA7501FCDBDEC41F15772712343D49E3227B637 (IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * __this, RuntimeObject* ___unityAdsInternalListener0, RuntimeObject* ___userListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosShowListener_OnShowClick_m25FF3FFA562E413C4CF7C8E7BA00548AA2EB72D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosShowListener_OnShowComplete_m2DED19EF1FB3063006C282E27E70A90AA2E622A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosShowListener_OnShowFailure_m1BD4CE42328D7740A667FBFA2450A2AB628BAAEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosShowListener_OnShowStart_mF41901AE44ABED7223CAD03EB3ECCC16623EB392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IosShowListener(IUnityAdsShowListener unityAdsInternalListener, IUnityAdsShowListener userListener)
		IL2CPP_RUNTIME_CLASS_INIT(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		IosNativeObject__ctor_m5F3E29968928AA6772D607CD85F993FBDF7FD370(__this, /*hidden argument*/NULL);
		// NativePtr = ShowListenerCreate(OnShowFailure, OnShowStart, OnShowClick, OnShowComplete);
		ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318 * L_0 = (ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318 *)il2cpp_codegen_object_new(ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318_il2cpp_TypeInfo_var);
		ShowFailureCallback__ctor_m9C1023F95EC8729DD28255B59CAA83F6D9CFF81E(L_0, NULL, (intptr_t)((intptr_t)IosShowListener_OnShowFailure_m1BD4CE42328D7740A667FBFA2450A2AB628BAAEC_RuntimeMethod_var), /*hidden argument*/NULL);
		ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87 * L_1 = (ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87 *)il2cpp_codegen_object_new(ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87_il2cpp_TypeInfo_var);
		ShowStartCallback__ctor_m3237796D9B7970E6C72B91C862C815D2E8DEDDC7(L_1, NULL, (intptr_t)((intptr_t)IosShowListener_OnShowStart_mF41901AE44ABED7223CAD03EB3ECCC16623EB392_RuntimeMethod_var), /*hidden argument*/NULL);
		ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225 * L_2 = (ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225 *)il2cpp_codegen_object_new(ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225_il2cpp_TypeInfo_var);
		ShowClickCallback__ctor_m20307E4D699564FFAF4BFE5DAC395DE637DBB7A0(L_2, NULL, (intptr_t)((intptr_t)IosShowListener_OnShowClick_m25FF3FFA562E413C4CF7C8E7BA00548AA2EB72D9_RuntimeMethod_var), /*hidden argument*/NULL);
		ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777 * L_3 = (ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777 *)il2cpp_codegen_object_new(ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777_il2cpp_TypeInfo_var);
		ShowCompleteCallback__ctor_m16E7058F2161D6A3264510393CDB83A077D24029(L_3, NULL, (intptr_t)((intptr_t)IosShowListener_OnShowComplete_m2DED19EF1FB3063006C282E27E70A90AA2E622A3_RuntimeMethod_var), /*hidden argument*/NULL);
		intptr_t L_4;
		L_4 = IosShowListener_ShowListenerCreate_mCFA60A445BAA7CAD902327EFDF2356A9D747E2E1(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		IosNativeObject_set_NativePtr_mDB10C0F5BB80B63A28977BB84BC20211FA7F4DCE(__this, (intptr_t)L_4, /*hidden argument*/NULL);
		// m_UnityAdsInternalListener = unityAdsInternalListener;
		RuntimeObject* L_5 = ___unityAdsInternalListener0;
		__this->set_m_UnityAdsInternalListener_2(L_5);
		// m_UserListener = userListener;
		RuntimeObject* L_6 = ___userListener1;
		__this->set_m_UserListener_3(L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_Dispose_mDB42F1BB199AC3C8862829589E5AC4F275A5E85D (IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		intptr_t L_0;
		L_0 = IosNativeObject_get_NativePtr_m55952C88D580C58372495F9F6F9683115ECA16FE_inline(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (NativePtr == IntPtr.Zero) return;
		return;
	}

IL_0013:
	{
		// ShowListenerDestroy(NativePtr);
		intptr_t L_2;
		L_2 = IosNativeObject_get_NativePtr_m55952C88D580C58372495F9F6F9683115ECA16FE_inline(__this, /*hidden argument*/NULL);
		IosShowListener_ShowListenerDestroy_m39647E2CAAE98EC0E821538E0A91AADE4EF2BC73((intptr_t)L_2, /*hidden argument*/NULL);
		// NativePtr = IntPtr.Zero;
		IosNativeObject_set_NativePtr_mDB10C0F5BB80B63A28977BB84BC20211FA7F4DCE(__this, (intptr_t)(0), /*hidden argument*/NULL);
		// m_UnityAdsInternalListener = null;
		__this->set_m_UnityAdsInternalListener_2((RuntimeObject*)NULL);
		// m_UserListener = null;
		__this->set_m_UserListener_3((RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowFailure_m2BBCCA385F7552ECDC1B0B1A674ECC2779FD134B (IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnUnityAdsShowFailure(placementId, error, message);
		RuntimeObject* L_0 = __this->get_m_UnityAdsInternalListener_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0014;
	}

IL_000c:
	{
		String_t* L_2 = ___placementId0;
		int32_t L_3 = ___error1;
		String_t* L_4 = ___message2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3, L_4);
	}

IL_0014:
	{
		// m_UserListener?.OnUnityAdsShowFailure(placementId, error, message);
		RuntimeObject* L_5 = __this->get_m_UserListener_3();
		RuntimeObject* L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		String_t* L_7 = ___placementId0;
		int32_t L_8 = ___error1;
		String_t* L_9 = ___message2;
		NullCheck(G_B5_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA_il2cpp_TypeInfo_var, G_B5_0, L_7, L_8, L_9);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowStart_m597A0D4392ACE729B7CB245ACEA9BBCDB3754CD4 (IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnUnityAdsShowStart(placementId);
		RuntimeObject* L_0 = __this->get_m_UnityAdsInternalListener_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		String_t* L_2 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowStart(System.String) */, IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		// m_UserListener?.OnUnityAdsShowStart(placementId);
		RuntimeObject* L_3 = __this->get_m_UserListener_3();
		RuntimeObject* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		String_t* L_5 = ___placementId0;
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowStart(System.String) */, IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA_il2cpp_TypeInfo_var, G_B5_0, L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowClick_mCFA7A08FB567DC8E6F9E6B296A7557798EC2417A (IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnUnityAdsShowClick(placementId);
		RuntimeObject* L_0 = __this->get_m_UnityAdsInternalListener_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		String_t* L_2 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowClick(System.String) */, IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA_il2cpp_TypeInfo_var, G_B2_0, L_2);
	}

IL_0012:
	{
		// m_UserListener?.OnUnityAdsShowClick(placementId);
		RuntimeObject* L_3 = __this->get_m_UserListener_3();
		RuntimeObject* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		String_t* L_5 = ___placementId0;
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowClick(System.String) */, IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA_il2cpp_TypeInfo_var, G_B5_0, L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowComplete_m70700E58C14EE12238D9E2825E16EA589D82AF36 (IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * __this, String_t* ___placementId0, int32_t ___showCompletionState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// m_UnityAdsInternalListener?.OnUnityAdsShowComplete(placementId, showCompletionState);
		RuntimeObject* L_0 = __this->get_m_UnityAdsInternalListener_2();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_2 = ___placementId0;
		int32_t L_3 = ___showCompletionState1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3);
	}

IL_0013:
	{
		// m_UserListener?.OnUnityAdsShowComplete(placementId, showCompletionState);
		RuntimeObject* L_4 = __this->get_m_UserListener_3();
		RuntimeObject* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		String_t* L_6 = ___placementId0;
		int32_t L_7 = ___showCompletionState1;
		NullCheck(G_B5_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IUnityAdsShowListener_t1CF547849F3E0CA45726ED1189C0CF598CC207DA_il2cpp_TypeInfo_var, G_B5_0, L_6, L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowFailure(System.IntPtr,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowFailure_m1BD4CE42328D7740A667FBFA2450A2AB628BAAEC (intptr_t ___ptr0, String_t* ___placementId1, int32_t ___error2, String_t* ___message3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * V_0 = NULL;
	{
		// var listener = Get<IosShowListener>(ptr);
		intptr_t L_0 = ___ptr0;
		IL2CPP_RUNTIME_CLASS_INIT(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_1;
		L_1 = IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE((intptr_t)L_0, /*hidden argument*/IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_3 = V_0;
		intptr_t L_4 = ___ptr0;
		intptr_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m5CA0830CB17F0B4CC0D8994D9279B16255EC7327(L_3, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnShowFailure(placementId, (UnityAdsShowError)error, message);
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_9 = V_0;
		String_t* L_10 = ___placementId1;
		int32_t L_11 = ___error2;
		String_t* L_12 = ___message3;
		NullCheck(L_9);
		IosShowListener_OnShowFailure_m2BBCCA385F7552ECDC1B0B1A674ECC2779FD134B(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowStart(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowStart_mF41901AE44ABED7223CAD03EB3ECCC16623EB392 (intptr_t ___ptr0, String_t* ___placementId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * V_0 = NULL;
	{
		// var listener = Get<IosShowListener>(ptr);
		intptr_t L_0 = ___ptr0;
		IL2CPP_RUNTIME_CLASS_INIT(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_1;
		L_1 = IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE((intptr_t)L_0, /*hidden argument*/IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_3 = V_0;
		intptr_t L_4 = ___ptr0;
		intptr_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m5CA0830CB17F0B4CC0D8994D9279B16255EC7327(L_3, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnShowStart(placementId);
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_9 = V_0;
		String_t* L_10 = ___placementId1;
		NullCheck(L_9);
		IosShowListener_OnShowStart_m597A0D4392ACE729B7CB245ACEA9BBCDB3754CD4(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowClick(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowClick_m25FF3FFA562E413C4CF7C8E7BA00548AA2EB72D9 (intptr_t ___ptr0, String_t* ___placementId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * V_0 = NULL;
	{
		// var listener = Get<IosShowListener>(ptr);
		intptr_t L_0 = ___ptr0;
		IL2CPP_RUNTIME_CLASS_INIT(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_1;
		L_1 = IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE((intptr_t)L_0, /*hidden argument*/IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_3 = V_0;
		intptr_t L_4 = ___ptr0;
		intptr_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m5CA0830CB17F0B4CC0D8994D9279B16255EC7327(L_3, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnShowClick(placementId);
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_9 = V_0;
		String_t* L_10 = ___placementId1;
		NullCheck(L_9);
		IosShowListener_OnShowClick_mCFA7A08FB567DC8E6F9E6B296A7557798EC2417A(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.IosShowListener::OnShowComplete(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowListener_OnShowComplete_m2DED19EF1FB3063006C282E27E70A90AA2E622A3 (intptr_t ___ptr0, String_t* ___placementId1, int32_t ___completionState2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75);
		s_Il2CppMethodInitialized = true;
	}
	IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * V_0 = NULL;
	{
		// var listener = Get<IosShowListener>(ptr);
		intptr_t L_0 = ___ptr0;
		IL2CPP_RUNTIME_CLASS_INIT(IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD_il2cpp_TypeInfo_var);
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_1;
		L_1 = IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE((intptr_t)L_0, /*hidden argument*/IosNativeObject_Get_TisIosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223_m396E3FD03D41D9C00A309A1C4D39B8D5C5DD50DE_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) return;
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (listener == null) return;
		return;
	}

IL_000b:
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_3 = V_0;
		intptr_t L_4 = ___ptr0;
		intptr_t L_5 = L_4;
		RuntimeObject * L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral715AE1E8D20AEEBF0F9193BA746F31A3AFEEFF75, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = IosNativeObject_CheckDisposedAndLogError_m5CA0830CB17F0B4CC0D8994D9279B16255EC7327(L_3, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0024;
		}
	}
	{
		// if (listener.CheckDisposedAndLogError($"Expected listener [{ptr}] has been disposed already.")) return;
		return;
	}

IL_0024:
	{
		// listener.OnShowComplete(placementId, (UnityAdsShowCompletionState)completionState);
		IosShowListener_t2943A79AF56C26568B357FA8735D348CA8705223 * L_9 = V_0;
		String_t* L_10 = ___placementId1;
		int32_t L_11 = ___completionState2;
		NullCheck(L_9);
		IosShowListener_OnShowComplete_m70700E58C14EE12238D9E2825E16EA589D82AF36(L_9, L_10, L_11, /*hidden argument*/NULL);
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
// System.String UnityEngine.Advertisements.Utilities.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m553C76FACCBE4B92FCB2CFD3012F3F79EFDDE28D (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// return Serializer.Serialize(obj);
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1;
		L_1 = Serializer_Serialize_mF64079CC9F0C5A4D9F2B0F616A9C0E15C7C4157A(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.String UnityEngine.Advertisements.MetaData::get_category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mA024D4E519DD1CCEC25F80B93A4200115D5B7932 (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * __this, const RuntimeMethod* method)
{
	{
		// public string category { get; private set; }
		String_t* L_0 = __this->get_U3CcategoryU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_set_category_m842DB606F0530156ECEA8ADA08B70C48213DB553 (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string category { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CcategoryU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_m4DA12AC98D46EF004A244B6619E7BFD82B63C8E0 (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * __this, String_t* ___category0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly IDictionary<string, object> m_MetaData = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		__this->set_m_MetaData_0(L_0);
		// public MetaData(string category)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.category = category;
		String_t* L_1 = ___category0;
		MetaData_set_category_m842DB606F0530156ECEA8ADA08B70C48213DB553_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_mD170ECD897CFA983F83494676B6E256C29CDFADE (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MetaData[key] = value;
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.String UnityEngine.Advertisements.MetaData::ToJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_ToJSON_mCCF425ED0824657198D267C26B136C445D15D65E (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * __this, const RuntimeMethod* method)
{
	{
		// return Json.Serialize(m_MetaData);
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1;
		L_1 = Json_Serialize_m553C76FACCBE4B92FCB2CFD3012F3F79EFDDE28D(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void UnityEngine.Advertisements.Platform.Platform::add_OnStart(System.EventHandler`1<UnityEngine.Advertisements.Events.StartEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_add_OnStart_mC682ECAB305A4F2F2FA3641D14BF82965E0DD972 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * V_0 = NULL;
	EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * V_1 = NULL;
	EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * V_2 = NULL;
	{
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_0 = __this->get_OnStart_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_2 = V_1;
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C_il2cpp_TypeInfo_var));
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C ** L_5 = __this->get_address_of_OnStart_0();
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_6 = V_2;
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_7 = V_1;
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C *>((EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_9 = V_0;
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C *)L_9) == ((RuntimeObject*)(EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::remove_OnStart(System.EventHandler`1<UnityEngine.Advertisements.Events.StartEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_remove_OnStart_mF6D1E7240F7C8478B1020FD5D32637858FD92ED1 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * V_0 = NULL;
	EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * V_1 = NULL;
	EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * V_2 = NULL;
	{
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_0 = __this->get_OnStart_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_2 = V_1;
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C_il2cpp_TypeInfo_var));
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C ** L_5 = __this->get_address_of_OnStart_0();
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_6 = V_2;
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_7 = V_1;
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C *>((EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_9 = V_0;
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C *)L_9) == ((RuntimeObject*)(EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::add_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.Events.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_add_OnFinish_m1AA2E1A0EE5D5293BC92DE91AE52031D7EAA13BB (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * V_0 = NULL;
	EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * V_1 = NULL;
	EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * V_2 = NULL;
	{
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_0 = __this->get_OnFinish_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_2 = V_1;
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016_il2cpp_TypeInfo_var));
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 ** L_5 = __this->get_address_of_OnFinish_1();
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_6 = V_2;
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_7 = V_1;
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 *>((EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_9 = V_0;
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 *)L_9) == ((RuntimeObject*)(EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::remove_OnFinish(System.EventHandler`1<UnityEngine.Advertisements.Events.FinishEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_remove_OnFinish_mD421DEABEFCA850C8A6DC8A13F6FA5E8B85D2FD9 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * V_0 = NULL;
	EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * V_1 = NULL;
	EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * V_2 = NULL;
	{
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_0 = __this->get_OnFinish_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_2 = V_1;
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016_il2cpp_TypeInfo_var));
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 ** L_5 = __this->get_address_of_OnFinish_1();
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_6 = V_2;
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_7 = V_1;
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 *>((EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_9 = V_0;
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 *)L_9) == ((RuntimeObject*)(EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.Platform::get_UnityLifecycleManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_UnityLifecycleManager_m9027C2602495D0F89B2526D437DC7015FE9043FE (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method)
{
	{
		// public IUnityLifecycleManager UnityLifecycleManager { get; }
		RuntimeObject* L_0 = __this->get_U3CUnityLifecycleManagerU3Ek__BackingField_3();
		return L_0;
	}
}
// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::get_NativePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_mF4D0FFE9E137D920B39DEDB68807788708BC583A (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method)
{
	{
		// public INativePlatform NativePlatform { get; }
		RuntimeObject* L_0 = __this->get_U3CNativePlatformU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsInitialized_mD4C29C317B072DF4E555FCCBC8B0EE53940F7284 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public bool IsInitialized => NativePlatform?.IsInitialized() ?? false;
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mF4D0FFE9E137D920B39DEDB68807788708BC583A_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.Advertisements.INativePlatform::IsInitialized() */, INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var, G_B2_0);
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_m26FF0F8EAD6026CBDD3FDB3F487FF6631C0F37FF (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method)
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = __this->get_U3CIsShowingU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::set_IsShowing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_set_IsShowing_m46F130DBBA517E043104CEBCD79CA534BEDC35CC (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsShowingU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.Platform::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_Version_mA68CC38E04A0954C121419DA474C785A7375014C (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// public string Version => NativePlatform?.GetVersion() ?? "UnknownVersion";
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mF4D0FFE9E137D920B39DEDB68807788708BC583A_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.Advertisements.INativePlatform::GetVersion() */, INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		G_B5_0 = _stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741;
	}

IL_001b:
	{
		return G_B5_0;
	}
}
// System.Collections.Generic.HashSet`1<UnityEngine.Advertisements.IUnityAdsListener> UnityEngine.Advertisements.Platform.Platform::get_Listeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * Platform_get_Listeners_m4FB9B6E7ED73F57D54EFA528FF85D39897CB039B (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method)
{
	{
		// public HashSet<IUnityAdsListener> Listeners { get; }
		HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * L_0 = __this->get_U3CListenersU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::.ctor(UnityEngine.Advertisements.INativePlatform,UnityEngine.Advertisements.IBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m95CD2B9F4FFBA9A0173D397ED9972FED96185125 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, RuntimeObject* ___nativePlatform0, RuntimeObject* ___banner1, RuntimeObject* ___unityLifecycleManager2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mBC3A350ED66A3FC536C328D7D26EF56D03D019A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Platform(INativePlatform nativePlatform, IBanner banner, IUnityLifecycleManager unityLifecycleManager)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// NativePlatform = nativePlatform;
		RuntimeObject* L_0 = ___nativePlatform0;
		__this->set_U3CNativePlatformU3Ek__BackingField_4(L_0);
		// Banner = banner;
		RuntimeObject* L_1 = ___banner1;
		__this->set_U3CBannerU3Ek__BackingField_2(L_1);
		// UnityLifecycleManager = unityLifecycleManager;
		RuntimeObject* L_2 = ___unityLifecycleManager2;
		__this->set_U3CUnityLifecycleManagerU3Ek__BackingField_3(L_2);
		// Listeners = new HashSet<IUnityAdsListener>();
		HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * L_3 = (HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 *)il2cpp_codegen_object_new(HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mBC3A350ED66A3FC536C328D7D26EF56D03D019A3(L_3, /*hidden argument*/HashSet_1__ctor_mBC3A350ED66A3FC536C328D7D26EF56D03D019A3_RuntimeMethod_var);
		__this->set_U3CListenersU3Ek__BackingField_6(L_3);
		// NativePlatform.SetupPlatform(this);
		RuntimeObject* L_4;
		L_4 = Platform_get_NativePlatform_mF4D0FFE9E137D920B39DEDB68807788708BC583A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Advertisements.INativePlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform) */, INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var, L_4, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Initialize(System.String,System.Boolean,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Initialize_mA7D5CBF2ACBAA44B5699C6778F24823C8A3AE0F8 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, String_t* ___gameId0, bool ___testMode1, bool ___enablePerPlacementLoad2, RuntimeObject* ___initializationListener3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m135A350240DE73A3D519DC7C6E6D315B635D6C55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m32BCAE20F3D11E8EC067903258F7048855AEC57D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_U3CInitializeU3Eb__30_0_m38DF64A0E307638B35078B530B3E10E27AF481C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_U3CInitializeU3Eb__30_1_mA7D0C27475A5A0841CF16BDFD2DF3AF59C54B5E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052);
		s_Il2CppMethodInitialized = true;
	}
	MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * V_0 = NULL;
	MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * V_1 = NULL;
	{
		// if (!IsInitialized)
		bool L_0;
		L_0 = Platform_get_IsInitialized_mD4C29C317B072DF4E555FCCBC8B0EE53940F7284(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_00a4;
		}
	}
	{
		// OnStart += (sender, e) =>
		// {
		//     IsShowing = true;
		// };
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_1 = (EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C *)il2cpp_codegen_object_new(EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m135A350240DE73A3D519DC7C6E6D315B635D6C55(L_1, __this, (intptr_t)((intptr_t)Platform_U3CInitializeU3Eb__30_0_m38DF64A0E307638B35078B530B3E10E27AF481C1_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m135A350240DE73A3D519DC7C6E6D315B635D6C55_RuntimeMethod_var);
		Platform_add_OnStart_mC682ECAB305A4F2F2FA3641D14BF82965E0DD972(__this, L_1, /*hidden argument*/NULL);
		// OnFinish += (sender, e) =>
		// {
		//     IsShowing = false;
		// };
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_2 = (EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 *)il2cpp_codegen_object_new(EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m32BCAE20F3D11E8EC067903258F7048855AEC57D(L_2, __this, (intptr_t)((intptr_t)Platform_U3CInitializeU3Eb__30_1_mA7D0C27475A5A0841CF16BDFD2DF3AF59C54B5E7_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m32BCAE20F3D11E8EC067903258F7048855AEC57D_RuntimeMethod_var);
		Platform_add_OnFinish_m1AA2E1A0EE5D5293BC92DE91AE52031D7EAA13BB(__this, L_2, /*hidden argument*/NULL);
		// var framework = new MetaData("framework");
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_3 = (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 *)il2cpp_codegen_object_new(MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3_il2cpp_TypeInfo_var);
		MetaData__ctor_m4DA12AC98D46EF004A244B6619E7BFD82B63C8E0(L_3, _stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412, /*hidden argument*/NULL);
		V_0 = L_3;
		// framework.Set("name", "Unity");
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_4 = V_0;
		NullCheck(L_4);
		MetaData_Set_mD170ECD897CFA983F83494676B6E256C29CDFADE(L_4, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A, /*hidden argument*/NULL);
		// framework.Set("version", Application.unityVersion);
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_5 = V_0;
		String_t* L_6;
		L_6 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		NullCheck(L_5);
		MetaData_Set_mD170ECD897CFA983F83494676B6E256C29CDFADE(L_5, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, L_6, /*hidden argument*/NULL);
		// SetMetaData(framework);
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_7 = V_0;
		Platform_SetMetaData_m1893E50CF86E301FCFDC5421F3073208D22E237D(__this, L_7, /*hidden argument*/NULL);
		// var adapter = new MetaData("adapter");
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_8 = (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 *)il2cpp_codegen_object_new(MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3_il2cpp_TypeInfo_var);
		MetaData__ctor_m4DA12AC98D46EF004A244B6619E7BFD82B63C8E0(L_8, _stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3, /*hidden argument*/NULL);
		V_1 = L_8;
		// adapter.Set("name", "Packman");
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_9 = V_1;
		NullCheck(L_9);
		MetaData_Set_mD170ECD897CFA983F83494676B6E256C29CDFADE(L_9, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F, /*hidden argument*/NULL);
		// adapter.Set("version", Version);
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_10 = V_1;
		String_t* L_11;
		L_11 = Platform_get_Version_mA68CC38E04A0954C121419DA474C785A7375014C(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		MetaData_Set_mD170ECD897CFA983F83494676B6E256C29CDFADE(L_10, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, L_11, /*hidden argument*/NULL);
		// SetMetaData(adapter);
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_12 = V_1;
		Platform_SetMetaData_m1893E50CF86E301FCFDC5421F3073208D22E237D(__this, L_12, /*hidden argument*/NULL);
		// NativePlatform.Initialize(gameId, testMode, enablePerPlacementLoad, initializationListener);
		RuntimeObject* L_13;
		L_13 = Platform_get_NativePlatform_mF4D0FFE9E137D920B39DEDB68807788708BC583A_inline(__this, /*hidden argument*/NULL);
		String_t* L_14 = ___gameId0;
		bool L_15 = ___testMode1;
		bool L_16 = ___enablePerPlacementLoad2;
		RuntimeObject* L_17 = ___initializationListener3;
		NullCheck(L_13);
		InterfaceActionInvoker4< String_t*, bool, bool, RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.Advertisements.INativePlatform::Initialize(System.String,System.Boolean,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener) */, INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var, L_13, L_14, L_15, L_16, L_17);
	}

IL_00a4:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Show_m744AD2AE7DEC9ACBDF5059F83F9D19CD4E782EAB (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, String_t* ___placementId0, ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * ___showOptions1, RuntimeObject* ___showListener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m32BCAE20F3D11E8EC067903258F7048855AEC57D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_U3CShowU3Eb__0_m90AAF1944C755ABFD41E936FDD466CCBDD69EEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * V_0 = NULL;
	MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * V_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	{
		U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * L_0 = (U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass33_0__ctor_m23FD1615C862155B7E071893B84401E9349761BD(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * L_1 = V_0;
		ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * L_2 = ___showOptions1;
		NullCheck(L_1);
		L_1->set_showOptions_0(L_2);
		U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U3CU3E4__this_1(__this);
		// if (IsShowing) return;
		bool L_4;
		L_4 = Platform_get_IsShowing_m26FF0F8EAD6026CBDD3FDB3F487FF6631C0F37FF_inline(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// if (IsShowing) return;
		return;
	}

IL_001d:
	{
		// if (showOptions != null)
		U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * L_5 = V_0;
		NullCheck(L_5);
		ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * L_6 = L_5->get_showOptions_0();
		if (!L_6)
		{
			goto IL_0091;
		}
	}
	{
		// if (showOptions.resultCallback != null)
		U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * L_7 = V_0;
		NullCheck(L_7);
		ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * L_8 = L_7->get_showOptions_0();
		NullCheck(L_8);
		Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9 * L_9;
		L_9 = ShowOptions_get_resultCallback_m7D9A5B78C221DB6C375C0742DF41711EF7928D14_inline(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		// EventHandler<FinishEventArgs> finishHandler = null;
		U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * L_10 = V_0;
		NullCheck(L_10);
		L_10->set_finishHandler_2((EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 *)NULL);
		//                     finishHandler = (object sender, FinishEventArgs e) =>
		//                     {
		//                         showOptions.resultCallback(e.showResult);
		// #pragma warning restore 618
		//                         OnFinish -= finishHandler;
		//                     };
		U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * L_11 = V_0;
		U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * L_12 = V_0;
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_13 = (EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 *)il2cpp_codegen_object_new(EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m32BCAE20F3D11E8EC067903258F7048855AEC57D(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass33_0_U3CShowU3Eb__0_m90AAF1944C755ABFD41E936FDD466CCBDD69EEEB_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m32BCAE20F3D11E8EC067903258F7048855AEC57D_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->set_finishHandler_2(L_13);
		// OnFinish += finishHandler;
		U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * L_14 = V_0;
		NullCheck(L_14);
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_15 = L_14->get_finishHandler_2();
		Platform_add_OnFinish_m1AA2E1A0EE5D5293BC92DE91AE52031D7EAA13BB(__this, L_15, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// if (!string.IsNullOrEmpty(showOptions.gamerSid))
		U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * L_16 = V_0;
		NullCheck(L_16);
		ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * L_17 = L_16->get_showOptions_0();
		NullCheck(L_17);
		String_t* L_18;
		L_18 = ShowOptions_get_gamerSid_mF2E0A8A3FC6619C3523EF046FC611885C8955168_inline(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0091;
		}
	}
	{
		// var player = new MetaData("player");
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_20 = (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 *)il2cpp_codegen_object_new(MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3_il2cpp_TypeInfo_var);
		MetaData__ctor_m4DA12AC98D46EF004A244B6619E7BFD82B63C8E0(L_20, _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A, /*hidden argument*/NULL);
		V_1 = L_20;
		// player.Set("server_id", showOptions.gamerSid);
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_21 = V_1;
		U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * L_22 = V_0;
		NullCheck(L_22);
		ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * L_23 = L_22->get_showOptions_0();
		NullCheck(L_23);
		String_t* L_24;
		L_24 = ShowOptions_get_gamerSid_mF2E0A8A3FC6619C3523EF046FC611885C8955168_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		MetaData_Set_mD170ECD897CFA983F83494676B6E256C29CDFADE(L_21, _stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714, L_24, /*hidden argument*/NULL);
		// SetMetaData(player);
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_25 = V_1;
		Platform_SetMetaData_m1893E50CF86E301FCFDC5421F3073208D22E237D(__this, L_25, /*hidden argument*/NULL);
	}

IL_0091:
	{
		// NativePlatform.Show(string.IsNullOrEmpty(placementId) ? null : placementId, showListener);
		RuntimeObject* L_26;
		L_26 = Platform_get_NativePlatform_mF4D0FFE9E137D920B39DEDB68807788708BC583A_inline(__this, /*hidden argument*/NULL);
		String_t* L_27 = ___placementId0;
		bool L_28;
		L_28 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_27, /*hidden argument*/NULL);
		G_B8_0 = L_26;
		if (L_28)
		{
			G_B9_0 = L_26;
			goto IL_00a2;
		}
	}
	{
		String_t* L_29 = ___placementId0;
		G_B10_0 = L_29;
		G_B10_1 = G_B8_0;
		goto IL_00a3;
	}

IL_00a2:
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B9_0;
	}

IL_00a3:
	{
		RuntimeObject* L_30 = ___showListener2;
		NullCheck(G_B10_1);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(2 /* System.Void UnityEngine.Advertisements.INativePlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener) */, INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var, G_B10_1, G_B10_0, L_30);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Show_m70D97EFB5D63D552E8C791A350A47B04A1151852 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Show(NativePlatform.GetDefaultPlacement(), null, null);
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mF4D0FFE9E137D920B39DEDB68807788708BC583A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.Advertisements.INativePlatform::GetDefaultPlacement() */, INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var, L_0);
		Platform_Show_m744AD2AE7DEC9ACBDF5059F83F9D19CD4E782EAB(__this, L_1, (ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F *)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Platform::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_IsReady_m4C2234CE726352607D307334FDDCFDEB00F78524 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NativePlatform.IsReady(placementId);
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mF4D0FFE9E137D920B39DEDB68807788708BC583A_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnityEngine.Advertisements.INativePlatform::IsReady(System.String) */, INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_m1893E50CF86E301FCFDC5421F3073208D22E237D (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativePlatform.SetMetaData(metaData);
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mF4D0FFE9E137D920B39DEDB68807788708BC583A_inline(__this, /*hidden argument*/NULL);
		MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * L_1 = ___metaData0;
		NullCheck(L_0);
		InterfaceActionInvoker1< MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * >::Invoke(3 /* System.Void UnityEngine.Advertisements.INativePlatform::SetMetaData(UnityEngine.Advertisements.MetaData) */, INativePlatform_t30CE26930632BC37273CCF8572A4D6B5EE4F952A_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::UnityAdsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsReady_m91DC2FF093AA881863BACFD5BAD8D5E9D93D83E2 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_0_U3CUnityAdsReadyU3Eb__0_m6556FE019E828C55D250BC4696420F0386F1782D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62 * L_0 = (U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass40_0__ctor_mBA7AD50DB304F1EAC9E01EB69F572C586189D4B2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62 * L_2 = V_0;
		String_t* L_3 = ___placementId0;
		NullCheck(L_2);
		L_2->set_placementId_1(L_3);
		// UnityLifecycleManager.Post(() => {
		//     foreach (var listener in GetClonedHashSet(Listeners))
		//     {
		//         listener?.OnUnityAdsReady(placementId);
		//     }
		// });
		RuntimeObject* L_4;
		L_4 = Platform_get_UnityLifecycleManager_m9027C2602495D0F89B2526D437DC7015FE9043FE_inline(__this, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass40_0_U3CUnityAdsReadyU3Eb__0_m6556FE019E828C55D250BC4696420F0386F1782D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var, L_4, L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::UnityAdsDidError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsDidError_mF7089D41B4E968A37FE161503B7A3EA60B24A85C (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass41_0_U3CUnityAdsDidErrorU3Eb__0_m585A62B075944230A0F08A6DF265405DA218B36D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3 * L_0 = (U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass41_0__ctor_mC7EA4AE664F69D26858D7272F166D8D5F1D3D724(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3 * L_2 = V_0;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		L_2->set_message_1(L_3);
		// UnityLifecycleManager.Post(() => {
		//     foreach (var listener in GetClonedHashSet(Listeners))
		//     {
		//         listener?.OnUnityAdsDidError(message);
		//     }
		// });
		RuntimeObject* L_4;
		L_4 = Platform_get_UnityLifecycleManager_m9027C2602495D0F89B2526D437DC7015FE9043FE_inline(__this, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass41_0_U3CUnityAdsDidErrorU3Eb__0_m585A62B075944230A0F08A6DF265405DA218B36D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var, L_4, L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::UnityAdsDidStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsDidStart_mECB4587BEE9AC9AFB1B73C50135BE82DABF9531A (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass42_0_U3CUnityAdsDidStartU3Eb__0_m26D184712D9B8875E0CB1EC6EA136C7DFBE6F4A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6 * L_0 = (U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass42_0__ctor_m22B8F96A0F6C237875FD20041C0EF22C9DE07F01(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6 * L_2 = V_0;
		String_t* L_3 = ___placementId0;
		NullCheck(L_2);
		L_2->set_placementId_1(L_3);
		// UnityLifecycleManager.Post(() => {
		//     OnStart?.Invoke(this, new StartEventArgs(placementId));
		// 
		//     foreach (var listener in GetClonedHashSet(Listeners))
		//     {
		//         listener?.OnUnityAdsDidStart(placementId);
		//     }
		// });
		RuntimeObject* L_4;
		L_4 = Platform_get_UnityLifecycleManager_m9027C2602495D0F89B2526D437DC7015FE9043FE_inline(__this, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass42_0_U3CUnityAdsDidStartU3Eb__0_m26D184712D9B8875E0CB1EC6EA136C7DFBE6F4A3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var, L_4, L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::UnityAdsDidFinish(System.String,UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsDidFinish_m4202DFFB46E0745C1BEFADE4441F0383C3655DE9 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, String_t* ___placementId0, int32_t ___rawShowResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass43_0_U3CUnityAdsDidFinishU3Eb__0_m36F0C46E1C534BAF24A35F136726A8AAD1986648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6 * L_0 = (U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass43_0__ctor_m692C8BA518CB8786AB45B18A133F5067F317701D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6 * L_2 = V_0;
		String_t* L_3 = ___placementId0;
		NullCheck(L_2);
		L_2->set_placementId_1(L_3);
		U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6 * L_4 = V_0;
		int32_t L_5 = ___rawShowResult1;
		NullCheck(L_4);
		L_4->set_rawShowResult_2(L_5);
		// UnityLifecycleManager.Post(() => {
		//     OnFinish?.Invoke(this, new FinishEventArgs(placementId, rawShowResult));
		// 
		//     foreach (var listener in GetClonedHashSet(Listeners))
		//     {
		//         listener?.OnUnityAdsDidFinish(placementId, rawShowResult);
		//     }
		// });
		RuntimeObject* L_6;
		L_6 = Platform_get_UnityLifecycleManager_m9027C2602495D0F89B2526D437DC7015FE9043FE_inline(__this, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6 * L_7 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass43_0_U3CUnityAdsDidFinishU3Eb__0_m36F0C46E1C534BAF24A35F136726A8AAD1986648_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t0F58335091C354DDE334BD3805DFF1A3712439EA_il2cpp_TypeInfo_var, L_6, L_8);
		// }
		return;
	}
}
// System.Collections.Generic.HashSet`1<UnityEngine.Advertisements.IUnityAdsListener> UnityEngine.Advertisements.Platform.Platform::GetClonedHashSet(System.Collections.Generic.HashSet`1<UnityEngine.Advertisements.IUnityAdsListener>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * Platform_GetClonedHashSet_mB4479B611B9532E9BE2BA27E7055F8CAC1D1B647 (HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * ___hashSet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mED6F73D5A5A4026FC4A57F05F3101BCA801AC192_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new HashSet<IUnityAdsListener>(hashSet);
		HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * L_0 = ___hashSet0;
		HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * L_1 = (HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 *)il2cpp_codegen_object_new(HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mED6F73D5A5A4026FC4A57F05F3101BCA801AC192(L_1, L_0, /*hidden argument*/HashSet_1__ctor_mED6F73D5A5A4026FC4A57F05F3101BCA801AC192_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::<Initialize>b__30_0(System.Object,UnityEngine.Advertisements.Events.StartEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_U3CInitializeU3Eb__30_0_m38DF64A0E307638B35078B530B3E10E27AF481C1 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, RuntimeObject * ___sender0, StartEventArgs_t89137A1788A305D836F12314C43763F1CF19AF56 * ___e1, const RuntimeMethod* method)
{
	{
		// IsShowing = true;
		Platform_set_IsShowing_m46F130DBBA517E043104CEBCD79CA534BEDC35CC_inline(__this, (bool)1, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::<Initialize>b__30_1(System.Object,UnityEngine.Advertisements.Events.FinishEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_U3CInitializeU3Eb__30_1_mA7D0C27475A5A0841CF16BDFD2DF3AF59C54B5E7 (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, RuntimeObject * ___sender0, FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1 * ___e1, const RuntimeMethod* method)
{
	{
		// IsShowing = false;
		Platform_set_IsShowing_m46F130DBBA517E043104CEBCD79CA534BEDC35CC_inline(__this, (bool)0, /*hidden argument*/NULL);
		// };
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
// System.Boolean UnityEngine.Advertisements.Purchasing.Purchasing::Initialize(UnityEngine.Advertisements.Purchasing.IPurchasingEventSender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Purchasing_Initialize_m19819881D3ED63492E9ED2C6D00C39597AE67E06 (RuntimeObject* ___platform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Purchasing_Initialize_m19819881D3ED63492E9ED2C6D00C39597AE67E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (!s_Initialized)
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		bool L_0 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_Initialized_1();
		if (L_0)
		{
			goto IL_008f;
		}
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// s_PurchasingManagerType = Type.GetType(s_PurchasingManagerClassName, true);
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingManagerClassName_5();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = il2cpp_codegen_get_type(Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var, L_1, (bool)1, Purchasing_Initialize_m19819881D3ED63492E9ED2C6D00C39597AE67E06_RuntimeMethod_var);
		((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->set_s_PurchasingManagerType_0(L_2);
		// s_PurchasingInitiatePurchaseMethodInfo = s_PurchasingManagerType.GetMethod(s_PurchasingInitiatePurchaseMethodName, new Type[] { typeof(string) });
		Type_t * L_3 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		String_t* L_4 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingInitiatePurchaseMethodName_6();
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_5 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = L_5;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_8);
		NullCheck(L_3);
		MethodInfo_t * L_9;
		L_9 = Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E(L_3, L_4, L_6, /*hidden argument*/NULL);
		((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->set_s_PurchasingInitiatePurchaseMethodInfo_2(L_9);
		// s_PurchasingGetPromoVersionMethodInfo = s_PurchasingManagerType.GetMethod(s_PurchasingGetPromoVersionMethodName);
		Type_t * L_10 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		String_t* L_11 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoVersionMethodName_7();
		NullCheck(L_10);
		MethodInfo_t * L_12;
		L_12 = Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF(L_10, L_11, /*hidden argument*/NULL);
		((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->set_s_PurchasingGetPromoVersionMethodInfo_3(L_12);
		// s_PurchasingGetPromoCatalogMethodInfo = s_PurchasingManagerType.GetMethod(s_PurchasingGetPromoCatalogMethodName);
		Type_t * L_13 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		String_t* L_14 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoCatalogMethodName_8();
		NullCheck(L_13);
		MethodInfo_t * L_15;
		L_15 = Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF(L_13, L_14, /*hidden argument*/NULL);
		((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->set_s_PurchasingGetPromoCatalogMethodInfo_4(L_15);
		// }
		goto IL_0083;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006b;
		}
		throw e;
	}

CATCH_006b:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(exception.Message + "It is likely that a promo has been enabled on a placement, but IAP Promo has not been enabled in the project.");
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral159E98CAE03BDED0522C8ACCFA36B0B1D3F09C67)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_17, /*hidden argument*/NULL);
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0095;
	} // end catch (depth: 1)

IL_0083:
	{
		// s_Initialized = true;
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->set_s_Initialized_1((bool)1);
		// s_Platform = platform;
		RuntimeObject* L_18 = ___platform0;
		((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->set_s_Platform_9(L_18);
	}

IL_008f:
	{
		// return s_Initialized;
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		bool L_19 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_Initialized_1();
		return L_19;
	}

IL_0095:
	{
		// }
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Boolean UnityEngine.Advertisements.Purchasing.Purchasing::InitiatePurchasingCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Purchasing_InitiatePurchasingCommand_mB1B4A2CD325569B3F4A293AF616F0D9C4FE79508 (String_t* ___eventString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// Boolean isCommandSuccessful = false;
		V_0 = (bool)0;
		// if (s_PurchasingInitiatePurchaseMethodInfo != null)
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		MethodInfo_t * L_0 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingInitiatePurchaseMethodInfo_2();
		bool L_1;
		L_1 = MethodInfo_op_Inequality_mDE1DAA5D330E9C975AC6423FC2D06862637BE68D(L_0, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		// isCommandSuccessful = (Boolean)s_PurchasingInitiatePurchaseMethodInfo.Invoke(s_PurchasingManagerType, new[] { eventString });
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		MethodInfo_t * L_2 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingInitiatePurchaseMethodInfo_2();
		Type_t * L_3 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		String_t* L_6 = ___eventString0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_5;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_1;
		NullCheck(L_2);
		RuntimeObject * L_8;
		L_8 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_2, L_3, L_7, /*hidden argument*/NULL);
		V_0 = ((*(bool*)((bool*)UnBox(L_8, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
		// }
		goto IL_0040;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(exception.Message);
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_9, /*hidden argument*/NULL);
		// return false;
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0042;
	} // end catch (depth: 1)

IL_0040:
	{
		// return isCommandSuccessful;
		bool L_10 = V_0;
		return L_10;
	}

IL_0042:
	{
		// }
		bool L_11 = V_2;
		return L_11;
	}
}
// System.String UnityEngine.Advertisements.Purchasing.Purchasing::GetPurchasingCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Purchasing_GetPurchasingCatalog_m3FE1E56699DC4608931F8F748DF624DD885CC346 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// String purchasingCatalog = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (s_PurchasingGetPromoCatalogMethodInfo != null)
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		MethodInfo_t * L_0 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoCatalogMethodInfo_4();
		bool L_1;
		L_1 = MethodInfo_op_Inequality_mDE1DAA5D330E9C975AC6423FC2D06862637BE68D(L_0, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		// purchasingCatalog = (String)s_PurchasingGetPromoCatalogMethodInfo.Invoke(s_PurchasingManagerType, null);
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		MethodInfo_t * L_2 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoCatalogMethodInfo_4();
		Type_t * L_3 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		NullCheck(L_2);
		RuntimeObject * L_4;
		L_4 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_2, L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL, /*hidden argument*/NULL);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		// }
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002b;
		}
		throw e;
	}

CATCH_002b:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(exception.Message);
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_5, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		// return purchasingCatalog ?? "NULL";
		String_t* L_6 = V_0;
		String_t* L_7 = L_6;
		G_B4_0 = L_7;
		if (L_7)
		{
			G_B5_0 = L_7;
			goto IL_0041;
		}
	}
	{
		G_B5_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
	}

IL_0041:
	{
		return G_B5_0;
	}
}
// System.String UnityEngine.Advertisements.Purchasing.Purchasing::GetPromoVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Purchasing_GetPromoVersion_m80F022242662D6B4B39B5662DFB0EB2E313416B9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// String promoVersion = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (s_PurchasingGetPromoVersionMethodInfo != null)
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		MethodInfo_t * L_0 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoVersionMethodInfo_3();
		bool L_1;
		L_1 = MethodInfo_op_Inequality_mDE1DAA5D330E9C975AC6423FC2D06862637BE68D(L_0, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		// promoVersion = (String)s_PurchasingGetPromoVersionMethodInfo.Invoke(s_PurchasingManagerType, null);
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		MethodInfo_t * L_2 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoVersionMethodInfo_3();
		Type_t * L_3 = ((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		NullCheck(L_2);
		RuntimeObject * L_4;
		L_4 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_2, L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL, /*hidden argument*/NULL);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		// }
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002b;
		}
		throw e;
	}

CATCH_002b:
	{ // begin catch(System.Exception)
		// Debug.LogWarning(exception.Message);
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_5, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		// return promoVersion ?? "NULL";
		String_t* L_6 = V_0;
		String_t* L_7 = L_6;
		G_B4_0 = L_7;
		if (L_7)
		{
			G_B5_0 = L_7;
			goto IL_0041;
		}
	}
	{
		G_B5_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
	}

IL_0041:
	{
		return G_B5_0;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.Purchasing::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Purchasing__cctor_m445202CC92283EEA1A77D628D0FFCE01EEC80F3B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D4D542B0104C9893CE06E8E96A04AA1B1200B07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0855C9C91F56F4F5842F4BDBA9C41C9C713AD56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD28190374E8020BFFA63441226A3A4A88D84FA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static string s_PurchasingManagerClassName = "UnityEngine.Purchasing.Promo,Stores";
		((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->set_s_PurchasingManagerClassName_5(_stringLiteralE0855C9C91F56F4F5842F4BDBA9C41C9C713AD56);
		// static string s_PurchasingInitiatePurchaseMethodName = "InitiatePurchasingCommand",
		((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->set_s_PurchasingInitiatePurchaseMethodName_6(_stringLiteralFD28190374E8020BFFA63441226A3A4A88D84FA5);
		// s_PurchasingGetPromoVersionMethodName = "Version",
		((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->set_s_PurchasingGetPromoVersionMethodName_7(_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		// s_PurchasingGetPromoCatalogMethodName = "QueryPromoProducts";
		((Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var))->set_s_PurchasingGetPromoCatalogMethodName_8(_stringLiteral7D4D542B0104C9893CE06E8E96A04AA1B1200B07);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_m0F827EA45C9CE1408B1D0516EE0074CEE0D03360(char* ___eventString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___eventString0' to managed representation
	String_t* ____eventString0_unmarshaled = NULL;
	____eventString0_unmarshaled = il2cpp_codegen_marshal_string_result(___eventString0);

	// Managed method invocation
	PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_m0F827EA45C9CE1408B1D0516EE0074CEE0D03360(____eventString0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m6378EA0BB94C5247DA490D48ED2EE9A6F5B856CA()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m6378EA0BB94C5247DA490D48ED2EE9A6F5B856CA(NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m3A0A91DB607F717F9ECA7E2BAC67EF7F2EC465DD()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m3A0A91DB607F717F9ECA7E2BAC67EF7F2EC465DD(NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingInitialize_m83C0904C496FB29D63F189FEAAE447743FB0E96B()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PurchasingPlatform_UnityAdsPurchasingInitialize_m83C0904C496FB29D63F189FEAAE447743FB0E96B(NULL);

}
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform UnityEngine.Advertisements.Purchasing.PurchasingPlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * PurchasingPlatform_get_Instance_m77C3B013E64B7BA558A7E2A077EF6297E88DD3ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static PurchasingPlatform Instance { get; set; }
		PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * L_0 = ((PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::set_Instance(UnityEngine.Advertisements.Purchasing.PurchasingPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_set_Instance_m30D84B918719221436C921C6483C141629323D66 (PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static PurchasingPlatform Instance { get; set; }
		PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * L_0 = ___value0;
		((PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingDispatchReturnEvent(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingDispatchReturnEvent_m24EF271A42A41C32364E468D1D238C0A0F13B13C (int64_t ___eventType0, String_t* ___payload1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int64_t, char*);

	// Marshaling of parameter '___payload1' to native representation
	char* ____payload1_marshaled = NULL;
	____payload1_marshaled = il2cpp_codegen_marshal_string(___payload1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsPurchasingDispatchReturnEvent)(___eventType0, ____payload1_marshaled);

	// Marshaling cleanup of parameter '___payload1' native representation
	il2cpp_codegen_marshal_free(____payload1_marshaled);
	____payload1_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetDidInitiatePurchasingCommandCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingDidInitiatePurchasingCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetDidInitiatePurchasingCommandCallback_mF0E081EE8BEC8BC19FB346E3DEE8CFBD807E80A8 (unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetDidInitiatePurchasingCommandCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetGetProductCatalogCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetProductCatalog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetGetProductCatalogCallback_m602B352D78E569406107B57F5D7B34657E19BAF6 (unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetGetProductCatalogCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetGetVersionCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetPurchasingVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetGetVersionCallback_m5C485D52402CC4912D196594B9C7F460A819D846 (unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetGetVersionCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetInitializePurchasingCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingInitialize)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetInitializePurchasingCallback_mCD88A2A3B198301B4F15521AFDEC1EE574AF64FD (unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetInitializePurchasingCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsDidInitiatePurchasingCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_m0F827EA45C9CE1408B1D0516EE0074CEE0D03360 (String_t* ___eventString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		// string result = Purchasing.InitiatePurchasingCommand(eventString).ToString();
		String_t* L_0 = ___eventString0;
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Purchasing_InitiatePurchasingCommand_mB1B4A2CD325569B3F4A293AF616F0D9C4FE79508(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2;
		L_2 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		// UnityAdsPurchasingDispatchReturnEvent((long)PurchasingEvent.COMMAND, result);
		String_t* L_3 = V_0;
		PurchasingPlatform_UnityAdsPurchasingDispatchReturnEvent_m24EF271A42A41C32364E468D1D238C0A0F13B13C(((int64_t)((int64_t)0)), L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingGetProductCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m6378EA0BB94C5247DA490D48ED2EE9A6F5B856CA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string result = Purchasing.GetPurchasingCatalog();
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Purchasing_GetPurchasingCatalog_m3FE1E56699DC4608931F8F748DF624DD885CC346(/*hidden argument*/NULL);
		V_0 = L_0;
		// UnityAdsPurchasingDispatchReturnEvent((long)PurchasingEvent.CATALOG, result);
		String_t* L_1 = V_0;
		PurchasingPlatform_UnityAdsPurchasingDispatchReturnEvent_m24EF271A42A41C32364E468D1D238C0A0F13B13C(((int64_t)((int64_t)2)), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingGetPurchasingVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m3A0A91DB607F717F9ECA7E2BAC67EF7F2EC465DD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string result = Purchasing.GetPromoVersion();
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Purchasing_GetPromoVersion_m80F022242662D6B4B39B5662DFB0EB2E313416B9(/*hidden argument*/NULL);
		V_0 = L_0;
		// UnityAdsPurchasingDispatchReturnEvent((long)PurchasingEvent.VERSION, result);
		String_t* L_1 = V_0;
		PurchasingPlatform_UnityAdsPurchasingDispatchReturnEvent_m24EF271A42A41C32364E468D1D238C0A0F13B13C(((int64_t)((int64_t)1)), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingInitialize_m83C0904C496FB29D63F189FEAAE447743FB0E96B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		// string result = Purchasing.Initialize(Instance).ToString();
		PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * L_0;
		L_0 = PurchasingPlatform_get_Instance_m77C3B013E64B7BA558A7E2A077EF6297E88DD3ED_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t50FFB938A7A376A358C637B390FE7D8098043AA7_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Purchasing_Initialize_m19819881D3ED63492E9ED2C6D00C39597AE67E06(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2;
		L_2 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		// UnityAdsPurchasingDispatchReturnEvent((long)PurchasingEvent.INITIALIZATION, result);
		String_t* L_3 = V_0;
		PurchasingPlatform_UnityAdsPurchasingDispatchReturnEvent_m24EF271A42A41C32364E468D1D238C0A0F13B13C(((int64_t)((int64_t)3)), L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_Initialize_m20529FE385966230350594410E5D19ED2D647D2B (PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_m0F827EA45C9CE1408B1D0516EE0074CEE0D03360_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m6378EA0BB94C5247DA490D48ED2EE9A6F5B856CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m3A0A91DB607F717F9ECA7E2BAC67EF7F2EC465DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchasingPlatform_UnityAdsPurchasingInitialize_m83C0904C496FB29D63F189FEAAE447743FB0E96B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		PurchasingPlatform_set_Instance_m30D84B918719221436C921C6483C141629323D66_inline(__this, /*hidden argument*/NULL);
		// UnityAdsSetDidInitiatePurchasingCommandCallback(UnityAdsDidInitiatePurchasingCommand);
		unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B * L_0 = (unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B *)il2cpp_codegen_object_new(unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B_il2cpp_TypeInfo_var);
		unityAdsPurchasingDidInitiatePurchasingCommand__ctor_mBBE45F06DBE9053F2310946D93C6D3A6CA61688F(L_0, NULL, (intptr_t)((intptr_t)PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_m0F827EA45C9CE1408B1D0516EE0074CEE0D03360_RuntimeMethod_var), /*hidden argument*/NULL);
		PurchasingPlatform_UnityAdsSetDidInitiatePurchasingCommandCallback_mF0E081EE8BEC8BC19FB346E3DEE8CFBD807E80A8(L_0, /*hidden argument*/NULL);
		// UnityAdsSetGetProductCatalogCallback(UnityAdsPurchasingGetProductCatalog);
		unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB * L_1 = (unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB *)il2cpp_codegen_object_new(unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB_il2cpp_TypeInfo_var);
		unityAdsPurchasingGetProductCatalog__ctor_mA2F9A2EF2B802E58EF356FE814D4D1D69ADFB85D(L_1, NULL, (intptr_t)((intptr_t)PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m6378EA0BB94C5247DA490D48ED2EE9A6F5B856CA_RuntimeMethod_var), /*hidden argument*/NULL);
		PurchasingPlatform_UnityAdsSetGetProductCatalogCallback_m602B352D78E569406107B57F5D7B34657E19BAF6(L_1, /*hidden argument*/NULL);
		// UnityAdsSetGetVersionCallback(UnityAdsPurchasingGetPurchasingVersion);
		unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380 * L_2 = (unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380 *)il2cpp_codegen_object_new(unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380_il2cpp_TypeInfo_var);
		unityAdsPurchasingGetPurchasingVersion__ctor_m2F0C1B38920D117FD548D6DEF1B02F2BC9D5395E(L_2, NULL, (intptr_t)((intptr_t)PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m3A0A91DB607F717F9ECA7E2BAC67EF7F2EC465DD_RuntimeMethod_var), /*hidden argument*/NULL);
		PurchasingPlatform_UnityAdsSetGetVersionCallback_m5C485D52402CC4912D196594B9C7F460A819D846(L_2, /*hidden argument*/NULL);
		// UnityAdsSetInitializePurchasingCallback(UnityAdsPurchasingInitialize);
		unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE * L_3 = (unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE *)il2cpp_codegen_object_new(unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE_il2cpp_TypeInfo_var);
		unityAdsPurchasingInitialize__ctor_m04803428151FA83C7CC62D07E9527AFFCE30CDAE(L_3, NULL, (intptr_t)((intptr_t)PurchasingPlatform_UnityAdsPurchasingInitialize_m83C0904C496FB29D63F189FEAAE447743FB0E96B_RuntimeMethod_var), /*hidden argument*/NULL);
		PurchasingPlatform_UnityAdsSetInitializePurchasingCallback_mCD88A2A3B198301B4F15521AFDEC1EE574AF64FD(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform__ctor_mAB82A0104035B56F3BAA5FD32FEC419FCB64C2F6 (PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Action`1<UnityEngine.Advertisements.ShowResult> UnityEngine.Advertisements.ShowOptions::get_resultCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9 * ShowOptions_get_resultCallback_m7D9A5B78C221DB6C375C0742DF41711EF7928D14 (ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * __this, const RuntimeMethod* method)
{
	{
		// public Action<ShowResult> resultCallback { get; set; }
		Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9 * L_0 = __this->get_U3CresultCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_mF2E0A8A3FC6619C3523EF046FC611885C8955168 (ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * __this, const RuntimeMethod* method)
{
	{
		// public string gamerSid { get; set; }
		String_t* L_0 = __this->get_U3CgamerSidU3Ek__BackingField_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Events.StartEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartEventArgs__ctor_m1124DD422B5DAB617E2B4A08C882DF712D60ED2E (StartEventArgs_t89137A1788A305D836F12314C43763F1CF19AF56 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public StartEventArgs(string placementId)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// this.placementId = placementId;
		String_t* L_0 = ___placementId0;
		__this->set_U3CplacementIdU3Ek__BackingField_1(L_0);
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
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager__ctor_m5822FB5D756A7E771C98F99167F4E39A164EEC89 (UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB * __this, const RuntimeMethod* method)
{
	{
		// public UnityLifecycleManager() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Initialize();
		UnityLifecycleManager_Initialize_m0EE5BB27F54857973EC4A924FFC41F24BC4C278B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Initialize_m0EE5BB27F54857973EC4A924FFC41F24BC4C278B (UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28_m86D658340CF4FAB202912B5422CC2CD777573120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8_m936E7AA8929B885E17D6F134F9284361E0B346AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8_m3D878055CD24BF43208E2118D45E4ACAC6E393A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// var existingCoroutineExecutorGameObject = GameObject.Find(gameObjectName);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (existingCoroutineExecutorGameObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		// m_GameObject = existingCoroutineExecutorGameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		__this->set_m_GameObject_0(L_3);
		// m_CoroutineExecutor = m_GameObject.GetComponent<CoroutineExecutor>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_m_GameObject_0();
		NullCheck(L_4);
		CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_5;
		L_5 = GameObject_GetComponent_TisCoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8_m3D878055CD24BF43208E2118D45E4ACAC6E393A9(L_4, /*hidden argument*/GameObject_GetComponent_TisCoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8_m3D878055CD24BF43208E2118D45E4ACAC6E393A9_RuntimeMethod_var);
		__this->set_m_CoroutineExecutor_1(L_5);
		// if (m_CoroutineExecutor != null)
		CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_6 = __this->get_m_CoroutineExecutor_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// m_CoroutineExecutor.referenceCount++;
		CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_8 = __this->get_m_CoroutineExecutor_1();
		CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_referenceCount_4();
		NullCheck(L_9);
		L_9->set_referenceCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		// return;
		return;
	}

IL_004e:
	{
		// GameObject.DestroyImmediate(m_GameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_m_GameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_11, /*hidden argument*/NULL);
		// m_GameObject = null;
		__this->set_m_GameObject_0((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_0060:
	{
		// m_GameObject = new GameObject(gameObjectName) { hideFlags = HideFlags.HideInHierarchy | HideFlags.HideInInspector};
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_12, _stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12;
		NullCheck(L_13);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_13, 3, /*hidden argument*/NULL);
		__this->set_m_GameObject_0(L_13);
		// m_CoroutineExecutor = m_GameObject.AddComponent<CoroutineExecutor>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_m_GameObject_0();
		NullCheck(L_14);
		CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_15;
		L_15 = GameObject_AddComponent_TisCoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8_m936E7AA8929B885E17D6F134F9284361E0B346AE(L_14, /*hidden argument*/GameObject_AddComponent_TisCoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8_m936E7AA8929B885E17D6F134F9284361E0B346AE_RuntimeMethod_var);
		__this->set_m_CoroutineExecutor_1(L_15);
		// m_ApplicationQuit = m_GameObject.AddComponent<ApplicationQuit>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_m_GameObject_0();
		NullCheck(L_16);
		ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28 * L_17;
		L_17 = GameObject_AddComponent_TisApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28_m86D658340CF4FAB202912B5422CC2CD777573120(L_16, /*hidden argument*/GameObject_AddComponent_TisApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28_m86D658340CF4FAB202912B5422CC2CD777573120_RuntimeMethod_var);
		__this->set_m_ApplicationQuit_2(L_17);
		// m_CoroutineExecutor.referenceCount++;
		CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_18 = __this->get_m_CoroutineExecutor_1();
		CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_referenceCount_4();
		NullCheck(L_19);
		L_19->set_referenceCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		// GameObject.DontDestroyOnLoad(m_GameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_m_GameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Post(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Post_m99845DB8B4C922041BA9A97191BA1C25AD393182 (UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * G_B5_0 = NULL;
	CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * G_B4_0 = NULL;
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * G_B7_0 = NULL;
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * G_B6_0 = NULL;
	{
		// if (!m_CoroutineExecutor) {
		CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_0 = __this->get_m_CoroutineExecutor_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Initialize();
		UnityLifecycleManager_Initialize_m0EE5BB27F54857973EC4A924FFC41F24BC4C278B(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// lock (m_CoroutineExecutor.queue)
		CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_2 = __this->get_m_CoroutineExecutor_1();
		NullCheck(L_2);
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_3 = L_2->get_queue_5();
		V_0 = L_3;
		V_1 = (bool)0;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_4 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_1), /*hidden argument*/NULL);
			// m_CoroutineExecutor?.queue?.Enqueue(action);
			CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_5 = __this->get_m_CoroutineExecutor_1();
			CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_6 = L_5;
			G_B4_0 = L_6;
			if (L_6)
			{
				G_B5_0 = L_6;
				goto IL_0035;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0048);
		}

IL_0035:
		{
			NullCheck(G_B5_0);
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_7 = G_B5_0->get_queue_5();
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_8 = L_7;
			G_B6_0 = L_8;
			if (L_8)
			{
				G_B7_0 = L_8;
				goto IL_0040;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0048);
		}

IL_0040:
		{
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = ___action0;
			NullCheck(G_B7_0);
			Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09(G_B7_0, L_9, /*hidden argument*/Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x52, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_0051;
			}
		}

IL_004b:
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_11 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(72)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Dispose_m9AF694E7DA3DBC815351A9A04E5BE3CA478E1A9C (UnityLifecycleManager_tEC8B1043739DA3684ED762CD6FA6605271DB59EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_Disposed)
		bool L_0 = __this->get_m_Disposed_3();
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		// m_Disposed = true;
		__this->set_m_Disposed_3((bool)1);
		// m_CoroutineExecutor.referenceCount--;
		CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_1 = __this->get_m_CoroutineExecutor_1();
		CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_referenceCount_4();
		NullCheck(L_2);
		L_2->set_referenceCount_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
		// if (m_CoroutineExecutor.referenceCount == 0) {
		CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 * L_4 = __this->get_m_CoroutineExecutor_1();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_referenceCount_4();
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		// Object.DestroyImmediate(m_GameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_m_GameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// m_GameObject = null;
		__this->set_m_GameObject_0((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// m_CoroutineExecutor = null;
		__this->set_m_CoroutineExecutor_1((CoroutineExecutor_t330FFD34FB314D2320D8D0CAC6111B132CF72BE8 *)NULL);
		// m_ApplicationQuit = null;
		__this->set_m_ApplicationQuit_2((ApplicationQuit_tE35032E6949C68D01E929A9C1BC2D50E34B3FC28 *)NULL);
	}

IL_004f:
	{
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
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::SetupBanner(UnityEngine.Advertisements.IBanner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner_SetupBanner_m465925F8B7DE9AA9AA3114AEA5B445F663CC75D0 (UnsupportedBanner_t7AF5B0FC5900E8DCCA7924298EFD0CCE5C9EE553 * __this, RuntimeObject* ___banner0, const RuntimeMethod* method)
{
	{
		// public void SetupBanner(IBanner banner) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner__ctor_m6D6DAD586AB47309D25007D3A7EB49715DAFA6C2 (UnsupportedBanner_t7AF5B0FC5900E8DCCA7924298EFD0CCE5C9EE553 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetupPlatform_m9A2CFE4CCB8BD40CA5430C95E9CC2F74B50BAC0B (UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601 * __this, RuntimeObject* ___platform0, const RuntimeMethod* method)
{
	{
		// public void SetupPlatform(IPlatform platform) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Initialize(System.String,System.Boolean,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Initialize_m7CFCBB887648C191EAE7A962AA108A842C863E57 (UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601 * __this, String_t* ___gameId0, bool ___testMode1, bool ___enablePerPlacementLoad2, RuntimeObject* ___initializationListener3, const RuntimeMethod* method)
{
	{
		// public void Initialize(string gameId, bool testMode, bool enablePerPlacementLoad, IUnityAdsInitializationListener initializationListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Show_m410BDAB6B057ADD0369F6CF77107C58663F0E8CA (UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601 * __this, String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method)
{
	{
		// public void Show(string placementId, IUnityAdsShowListener showListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetMetaData_m9C489B75D0754741E6D27C91058CD4B13B309F50 (UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601 * __this, MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * ___metaData0, const RuntimeMethod* method)
{
	{
		// public void SetMetaData(MetaData metaData) {}
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsupportedPlatform_GetVersion_mFE026609DF04875BE062CDC5F0F0B4B4F38CB145 (UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "UnsupportedPlatformVersion";
		return _stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsupportedPlatform_IsInitialized_mD8D9268CBCB295B40F86DA9F617030ED4EE0D5A8 (UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601 * __this, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsupportedPlatform_IsReady_m60E49E1EA9797258ABA14CF8EDCBB51CB6BEB212 (UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.String UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::GetDefaultPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsupportedPlatform_GetDefaultPlacement_mF83DB62A7C91576E2D486905F030D59E5C6153B4 (UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601 * __this, const RuntimeMethod* method)
{
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_m5CBF1E2F1356D35BA196E1FA4DE3AFD1C361F072 (UnsupportedPlatform_t32164CEB838245A1D4618B1979569568FCECA601 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mB2944D2E3A01D2C80C2E3ACFB348110A1681FD1A (U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass15_0::<UnityAdsBannerDidShow>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CUnityAdsBannerDidShowU3Eb__0_mEC53195427234DF19D2BAA4863BBF2279602C625 (U3CU3Ec__DisplayClass15_0_tB35880A9DC177A2B7F129C60A6827B21969F1A5D * __this, const RuntimeMethod* method)
{
	{
		// bannerOptions.showCallback();
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_0 = __this->get_bannerOptions_0();
		NullCheck(L_0);
		BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * L_1;
		L_1 = BannerOptions_get_showCallback_m4B6507E9558936032DE248611C825074A43568C7_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		BannerCallback_Invoke_m9FB4493693324B08D89AEAF21BC14ABAF11C57C5(L_1, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m2596B2A9DB3572F0844EF41FF827FCC533163F46 (U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass16_0::<UnityAdsBannerDidHide>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CUnityAdsBannerDidHideU3Eb__0_mF201AF71686452BEBC4FE7FDB10B32109B50D2C8 (U3CU3Ec__DisplayClass16_0_t1340B199EB2F7F3D54BDC334BACFAA1CA4594FC7 * __this, const RuntimeMethod* method)
{
	{
		// bannerOptions.hideCallback();
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_0 = __this->get_bannerOptions_0();
		NullCheck(L_0);
		BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * L_1;
		L_1 = BannerOptions_get_hideCallback_m1BB15E9FEFBCF252CF8FCEECB2919C767A73D887_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		BannerCallback_Invoke_m9FB4493693324B08D89AEAF21BC14ABAF11C57C5(L_1, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m258122D77ABDF0CB62D98AAF3D3A8A4F93A7E10B (U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass17_0::<UnityAdsBannerClick>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CUnityAdsBannerClickU3Eb__0_mEC90AFD89CBC8566CFC5753734A1E5090D520E36 (U3CU3Ec__DisplayClass17_0_t539E1124927FE59D4CD17E4473A711D287BCA826 * __this, const RuntimeMethod* method)
{
	{
		// bannerOptions.clickCallback();
		BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * L_0 = __this->get_bannerOptions_0();
		NullCheck(L_0);
		BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * L_1;
		L_1 = BannerOptions_get_clickCallback_m56E6EE03D4360E6D8F4B273556451D8A2BE44F64_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		BannerCallback_Invoke_m9FB4493693324B08D89AEAF21BC14ABAF11C57C5(L_1, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mA404514F45E29E208E2958E21B333B0ED66267A9 (U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass18_0::<UnityAdsBannerDidLoad>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CUnityAdsBannerDidLoadU3Eb__0_m3A498D0FC7D2AD894CF7B29251EA66A7C38BFF54 (U3CU3Ec__DisplayClass18_0_t273F916D3ED877301A67D5194412BEC60B8764E4 * __this, const RuntimeMethod* method)
{
	{
		// bannerOptions.loadCallback();
		BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * L_0 = __this->get_bannerOptions_0();
		NullCheck(L_0);
		LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * L_1;
		L_1 = BannerLoadOptions_get_loadCallback_m8D2F618B70D875D6BA94BAFB44A17B21CBDD7DF5_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		LoadCallback_Invoke_m7EE1BC76383C7B60CFAE9458D188D07CB34317CA(L_1, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mEBD3FEB87010F3A469B824F45BE3531B65262470 (U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner/<>c__DisplayClass19_0::<UnityAdsBannerDidError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CUnityAdsBannerDidErrorU3Eb__0_mC714875887FE3D697805657AD0BC5005DF34FFAE (U3CU3Ec__DisplayClass19_0_t8EAA1232E910F67121021D517EB06FE3C84DF765 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * G_B1_1 = NULL;
	{
		// bannerOptions.errorCallback(message ?? "");
		BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * L_0 = __this->get_bannerOptions_0();
		NullCheck(L_0);
		ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * L_1;
		L_1 = BannerLoadOptions_get_errorCallback_mD168B1D1BE035B21EB917A5A6465C2EFBCA450E1_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_message_1();
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_001a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_001a:
	{
		NullCheck(G_B2_1);
		ErrorCallback_Invoke_mCD461F8DFA08C61D19078303C7EA040EE6E5F5DF(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// });
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 (ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback__ctor_m8FB1F6DA717F2846B56888130029F4290DB1110B (ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_Invoke_mCD461F8DFA08C61D19078303C7EA040EE6E5F5DF (ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorCallback_BeginInvoke_m444DE4EB573BED1113868E011E9D934F95936D68 (ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_EndInvoke_mAB885257344A1BE6055DA0E01FDB913160FCBBBD (ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E (LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback__ctor_m95595DD92662BCC152718425287228674FAD15DF (LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback_Invoke_m7EE1BC76383C7B60CFAE9458D188D07CB34317CA (LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadCallback_BeginInvoke_m953D03AE0A68663A7BF6560BB54FE46CE59AA73D (LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback_EndInvoke_mFEA95BB5C42B50D006E4A33E28CBF145EDE1D8E5 (LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C (BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback__ctor_m5774D31915339AEB66A5637D78C091C260E0B888 (BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_Invoke_m9FB4493693324B08D89AEAF21BC14ABAF11C57C5 (BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.BannerOptions/BannerCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BannerCallback_BeginInvoke_m1F45417A4AB999D24383D8AFECC3214DCA4C6B1C (BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_EndInvoke_m35E1005B5427EFEEB16C874C228F5052F4BDDB84 (BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C (UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerClickDelegate__ctor_mC946BB51A214F9DF4E453DE8E9256ADE13058D12 (UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerClickDelegate_Invoke_mFBEC5B2FBE34D93B1385DA745A1722829CBDA0AE (UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsBannerClickDelegate_BeginInvoke_mBED95D1449F4A6CECFAF9B16F09F96A220D667B3 (UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C * __this, String_t* ___placementId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerClickDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerClickDelegate_EndInvoke_m45B4BB16EC1531450015CD00E8871A0D8ECDE19B (UnityAdsBannerClickDelegate_tE1672B0ED594907BAA287868B77FE184BD57993C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B (UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerErrorDelegate__ctor_m5030294B00D540E1621667CDAA3A9D41B59186C5 (UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerErrorDelegate_Invoke_m41BBFDC0CBED056FD4338C2D0F8E4053654569A1 (UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsBannerErrorDelegate_BeginInvoke_m974374C5BC48AB90B22AEED233C8D5F91E598EC9 (UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerErrorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerErrorDelegate_EndInvoke_m64F333312059A5E3A97BA00C753CB2D8DA65F107 (UnityAdsBannerErrorDelegate_t0357DE9B250A3A8B07D362DEAB999BDC4C111D5B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB (UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerHideDelegate__ctor_m48AAAE01D3AB09566026730479ECA42F453B7766 (UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerHideDelegate_Invoke_m6AE08F544D99B030B96468D5D766D2D822B763CA (UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsBannerHideDelegate_BeginInvoke_m61488A4D588FA935477120703D4FD4FCDB8701D3 (UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB * __this, String_t* ___placementId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerHideDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerHideDelegate_EndInvoke_m18194C180A75FC8CE5E35525C87783118DA9FDA9 (UnityAdsBannerHideDelegate_t45DF45AE857126BBEF011B52610D0CF4741DFCFB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025 (UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerLoadDelegate__ctor_m226DDB079B0B5D40F020B8E9411291D62E285ABB (UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerLoadDelegate_Invoke_m5DE29E50FB19EA67035ECE6C9AFB67CC06D9AFA1 (UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsBannerLoadDelegate_BeginInvoke_mD4AD2F964863F6DB5189270750AAD74970CDDDDC (UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025 * __this, String_t* ___placementId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerLoadDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerLoadDelegate_EndInvoke_mBA7CC71B944BFBCB8CFFD30ECF67207D28488E5F (UnityAdsBannerLoadDelegate_tB9756A83DA67462060ED9E174D135C2367E28025 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39 (UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerShowDelegate__ctor_mB01F4CC929DB0BF11407229C58DC726D008799B9 (UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerShowDelegate_Invoke_m3BC33E71A7A702FDEECA5DF6DC39054F142B0512 (UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsBannerShowDelegate_BeginInvoke_m14E48B9E162EA276165285E098A8B16673645AB9 (UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39 * __this, String_t* ___placementId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerShowDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerShowDelegate_EndInvoke_m00B7B6C8DB29DE7198A38FA865504F0AD08B0145 (UnityAdsBannerShowDelegate_t63B9828586B36A5DE6B08106128FB19929D4AC39 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE (UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerUnloadDelegate__ctor_m2C15895630DBDB6D8DE39149A22F882F1FBD9C2C (UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerUnloadDelegate_Invoke_m95E43C427B1AF7FB443761AB3758A9D3E63802A5 (UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsBannerUnloadDelegate_BeginInvoke_mA904FA3657CC6816F841BD1A6ED4E44444BA74EB (UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE * __this, String_t* ___placementId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosBanner/UnityAdsBannerUnloadDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsBannerUnloadDelegate_EndInvoke_m05BFEE454B62C53BF4B0033196A066B53CD58CC5 (UnityAdsBannerUnloadDelegate_t3BD9E294EE70FEB6D305F1E4E51C17CA75EA31BE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2 (InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2 * __this, intptr_t ___ptr0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message2' to native representation
	char* ____message2_marshaled = NULL;
	____message2_marshaled = il2cpp_codegen_marshal_string(___message2);

	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ___error1, ____message2_marshaled);

	// Marshaling cleanup of parameter '___message2' native representation
	il2cpp_codegen_marshal_free(____message2_marshaled);
	____message2_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitFailureCallback__ctor_m2A8C922C2452B6B14C46328E81366935EAA13423 (InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback::Invoke(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitFailureCallback_Invoke_m32D45825B180E98A10FCBA58086D6FFF5F89F86C (InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2 * __this, intptr_t ___ptr0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ptr0, ___error1, ___message2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, ___error1, ___message2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___ptr0, ___error1, ___message2);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___ptr0, ___error1, ___message2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ptr0, ___error1, ___message2);
					else
						VirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ptr0, ___error1, ___message2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, ___error1, ___message2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InitFailureCallback_BeginInvoke_mE7541A86D11D654EA54F1598EDECEC2168C619EA (InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2 * __this, intptr_t ___ptr0, int32_t ___error1, String_t* ___message2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___error1);
	__d_args[2] = ___message2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitFailureCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitFailureCallback_EndInvoke_m7B2ECEF32D5B3F91AC9D518F11065E1C692CC607 (InitFailureCallback_tB52414952D5B0067B80E10FFF3C91708C20345E2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194 (InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___ptr0);

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitSuccessCallback__ctor_m0EEE2D826BB9EEEE4B9A00B8B4008BA8FBC72E6E (InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitSuccessCallback_Invoke_m4FFDEF21CE8DFF23E0BC69BE6CD085D0F71B704D (InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ptr0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___ptr0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___ptr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ptr0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ptr0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InitSuccessCallback_BeginInvoke_m830060A70BFC1E39CF2167F1C8C2D8A464BA06B7 (InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194 * __this, intptr_t ___ptr0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosInitializationListener/InitSuccessCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitSuccessCallback_EndInvoke_m39045EC9263EAFC780563B75B0A1173C1E03E661 (InitSuccessCallback_tC18616E2753E8F57BD0FD96334198C2246FEC194 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D (UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D * __this, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int64_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	il2cppPInvokeFunc(___rawError0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidErrorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsDidErrorDelegate__ctor_m67EC37FE3D0ABA25A7C33AC029A2F9C6C4D5B271 (UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidErrorDelegate::Invoke(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsDidErrorDelegate_Invoke_m9E82EEAF42598202DC311D0C87FA05E14858E2F2 (UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D * __this, int64_t ___rawError0, String_t* ___message1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rawError0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rawError0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rawError0, ___message1);
					else
						GenericVirtActionInvoker2< int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rawError0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rawError0, ___message1);
					else
						VirtActionInvoker2< int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rawError0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rawError0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidErrorDelegate::BeginInvoke(System.Int64,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsDidErrorDelegate_BeginInvoke_m1F6AB81267278DE364CC422299AA32AD47AED99C (UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D * __this, int64_t ___rawError0, String_t* ___message1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___rawError0);
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidErrorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsDidErrorDelegate_EndInvoke_mCECC8D50A88EB1AFE1D4D4A347053A6904547EEF (UnityAdsDidErrorDelegate_tF2038865FF04B7F38027AD83B462B6F14307E41D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95 (UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95 * __this, String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled, ___rawShowResult1);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidFinishDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsDidFinishDelegate__ctor_mC5C16F8D8122844D28E9163A7445A586E152B892 (UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidFinishDelegate::Invoke(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsDidFinishDelegate_Invoke_mF4991B4F032424486A20DDB0D38F1E615FE124AB (UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95 * __this, String_t* ___placementId0, int64_t ___rawShowResult1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, ___rawShowResult1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, ___rawShowResult1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int64_t >::Invoke(targetMethod, ___placementId0, ___rawShowResult1);
					else
						GenericVirtActionInvoker1< int64_t >::Invoke(targetMethod, ___placementId0, ___rawShowResult1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0, ___rawShowResult1);
					else
						VirtActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0, ___rawShowResult1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, ___rawShowResult1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int64_t >::Invoke(targetMethod, targetThis, ___placementId0, ___rawShowResult1);
					else
						GenericVirtActionInvoker2< String_t*, int64_t >::Invoke(targetMethod, targetThis, ___placementId0, ___rawShowResult1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0, ___rawShowResult1);
					else
						VirtActionInvoker2< String_t*, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0, ___rawShowResult1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___placementId0, ___rawShowResult1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, ___rawShowResult1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidFinishDelegate::BeginInvoke(System.String,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsDidFinishDelegate_BeginInvoke_m18F8D0303703C58C6A44015EA14EE161B5F7D9A0 (UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95 * __this, String_t* ___placementId0, int64_t ___rawShowResult1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___placementId0;
	__d_args[1] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___rawShowResult1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidFinishDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsDidFinishDelegate_EndInvoke_m90BA7CC0D40D9506EE620983B9AAF31C40C4C517 (UnityAdsDidFinishDelegate_t0F5A1065A024FB98B96CC07AF22B114C84539B95 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61 (UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidStartDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsDidStartDelegate__ctor_mA75C24D725320A16845F928D73997B7B485182AA (UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidStartDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsDidStartDelegate_Invoke_mBFBA7280A9650B60B047E0D00838E141D35FF5FD (UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidStartDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsDidStartDelegate_BeginInvoke_m5A1CA1B51C8F5CD9D6149B824B42E122F35F4CE9 (UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61 * __this, String_t* ___placementId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsDidStartDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsDidStartDelegate_EndInvoke_m0B0AFC3C9F280136CB05A41ADC93B2ACEFE83B49 (UnityAdsDidStartDelegate_tF3BABD90FFCAC13F00DDF994E092468A5C397F61 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8 (UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsReadyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsReadyDelegate__ctor_m69FD51A73902DDF57F5EA8A60F38180B8A2DED45 (UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsReadyDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsReadyDelegate_Invoke_mC2C0D73D0C70ED15BC6A448A9F4EBE080A5BCFC9 (UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___placementId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___placementId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___placementId0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsReadyDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAdsReadyDelegate_BeginInvoke_m52395A8AE3A8BCFC6ED09C17E7863F724B9D1793 (UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8 * __this, String_t* ___placementId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___placementId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Advertisements.Platform.iOS.IosPlatform/UnityAdsReadyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsReadyDelegate_EndInvoke_mBF7E2CA32473E0466028DA90419D0861C9D0B211 (UnityAdsReadyDelegate_tB3EFAC77142D93F00BB17032533DD66D5FD417B8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225 (ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225 * __this, intptr_t ___ptr0, String_t* ___placementId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___placementId1' to native representation
	char* ____placementId1_marshaled = NULL;
	____placementId1_marshaled = il2cpp_codegen_marshal_string(___placementId1);

	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ____placementId1_marshaled);

	// Marshaling cleanup of parameter '___placementId1' native representation
	il2cpp_codegen_marshal_free(____placementId1_marshaled);
	____placementId1_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowClickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowClickCallback__ctor_m20307E4D699564FFAF4BFE5DAC395DE637DBB7A0 (ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowClickCallback::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowClickCallback_Invoke_mBAB8390847219D340D08869E737B8F3BA376934C (ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225 * __this, intptr_t ___ptr0, String_t* ___placementId1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ptr0, ___placementId1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, ___placementId1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___ptr0, ___placementId1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___ptr0, ___placementId1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ptr0, ___placementId1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ptr0, ___placementId1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, ___placementId1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.IosShowListener/ShowClickCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowClickCallback_BeginInvoke_mBACBB00D64A02C67BCE0410662D999E2D781575E (ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225 * __this, intptr_t ___ptr0, String_t* ___placementId1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = ___placementId1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowClickCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowClickCallback_EndInvoke_m66789FD639171882F26BE1C333E21A28B2C448D6 (ShowClickCallback_tDA30FB4A0B31B74CAABA5C20E2E871B4A1972225 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777 (ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777 * __this, intptr_t ___ptr0, String_t* ___placementId1, int32_t ___completionState2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___placementId1' to native representation
	char* ____placementId1_marshaled = NULL;
	____placementId1_marshaled = il2cpp_codegen_marshal_string(___placementId1);

	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ____placementId1_marshaled, ___completionState2);

	// Marshaling cleanup of parameter '___placementId1' native representation
	il2cpp_codegen_marshal_free(____placementId1_marshaled);
	____placementId1_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowCompleteCallback__ctor_m16E7058F2161D6A3264510393CDB83A077D24029 (ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback::Invoke(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowCompleteCallback_Invoke_m4EA520DFEE549EE4F2D6A59A4EBD0ACBD579FE2F (ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777 * __this, intptr_t ___ptr0, String_t* ___placementId1, int32_t ___completionState2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ptr0, ___placementId1, ___completionState2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, ___placementId1, ___completionState2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___ptr0, ___placementId1, ___completionState2);
					else
						GenericVirtActionInvoker3< intptr_t, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___ptr0, ___placementId1, ___completionState2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ptr0, ___placementId1, ___completionState2);
					else
						VirtActionInvoker3< intptr_t, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ptr0, ___placementId1, ___completionState2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, ___placementId1, ___completionState2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback::BeginInvoke(System.IntPtr,System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowCompleteCallback_BeginInvoke_m74E80D7BF8EAE728406E1A925B85047770C77B9F (ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777 * __this, intptr_t ___ptr0, String_t* ___placementId1, int32_t ___completionState2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = ___placementId1;
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___completionState2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowCompleteCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowCompleteCallback_EndInvoke_mD3668FC747159C3975CCAF8C44D00D25EDCAB0A5 (ShowCompleteCallback_tBAAC839398D7778874142F66E84DBD8DF61BB777 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318 (ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318 * __this, intptr_t ___ptr0, String_t* ___placementId1, int32_t ___error2, String_t* ___message3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___placementId1' to native representation
	char* ____placementId1_marshaled = NULL;
	____placementId1_marshaled = il2cpp_codegen_marshal_string(___placementId1);

	// Marshaling of parameter '___message3' to native representation
	char* ____message3_marshaled = NULL;
	____message3_marshaled = il2cpp_codegen_marshal_string(___message3);

	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ____placementId1_marshaled, ___error2, ____message3_marshaled);

	// Marshaling cleanup of parameter '___placementId1' native representation
	il2cpp_codegen_marshal_free(____placementId1_marshaled);
	____placementId1_marshaled = NULL;

	// Marshaling cleanup of parameter '___message3' native representation
	il2cpp_codegen_marshal_free(____message3_marshaled);
	____message3_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowFailureCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowFailureCallback__ctor_m9C1023F95EC8729DD28255B59CAA83F6D9CFF81E (ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowFailureCallback::Invoke(System.IntPtr,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowFailureCallback_Invoke_mFE145EA80F89988A33E50A4CE6738E0231B40592 (ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318 * __this, intptr_t ___ptr0, String_t* ___placementId1, int32_t ___error2, String_t* ___message3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ptr0, ___placementId1, ___error2, ___message3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, ___placementId1, ___error2, ___message3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, String_t*, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___ptr0, ___placementId1, ___error2, ___message3);
					else
						GenericVirtActionInvoker4< intptr_t, String_t*, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___ptr0, ___placementId1, ___error2, ___message3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, String_t*, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ptr0, ___placementId1, ___error2, ___message3);
					else
						VirtActionInvoker4< intptr_t, String_t*, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ptr0, ___placementId1, ___error2, ___message3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, ___placementId1, ___error2, ___message3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.IosShowListener/ShowFailureCallback::BeginInvoke(System.IntPtr,System.String,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowFailureCallback_BeginInvoke_mD0AB79CC868FEA3EC26A81BC8703B7A39CCF4659 (ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318 * __this, intptr_t ___ptr0, String_t* ___placementId1, int32_t ___error2, String_t* ___message3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = ___placementId1;
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___error2);
	__d_args[3] = ___message3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowFailureCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowFailureCallback_EndInvoke_m8007C9D3DE273C466E96078CE9C63815113E89FA (ShowFailureCallback_t7BB0B1BAD0388BD5CCFDACD6414CAD1D9F599318 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87 (ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87 * __this, intptr_t ___ptr0, String_t* ___placementId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___placementId1' to native representation
	char* ____placementId1_marshaled = NULL;
	____placementId1_marshaled = il2cpp_codegen_marshal_string(___placementId1);

	// Native function invocation
	il2cppPInvokeFunc(___ptr0, ____placementId1_marshaled);

	// Marshaling cleanup of parameter '___placementId1' native representation
	il2cpp_codegen_marshal_free(____placementId1_marshaled);
	____placementId1_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowStartCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowStartCallback__ctor_m3237796D9B7970E6C72B91C862C815D2E8DEDDC7 (ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowStartCallback::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowStartCallback_Invoke_m31788D4251C124BF561EE5667E52962275290046 (ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87 * __this, intptr_t ___ptr0, String_t* ___placementId1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ptr0, ___placementId1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, ___placementId1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___ptr0, ___placementId1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___ptr0, ___placementId1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ptr0, ___placementId1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ptr0, ___placementId1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, ___placementId1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.IosShowListener/ShowStartCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowStartCallback_BeginInvoke_m1161BBAF1273D9D3C77FA04552C1D594B2248B32 (ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87 * __this, intptr_t ___ptr0, String_t* ___placementId1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = ___placementId1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Advertisements.IosShowListener/ShowStartCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowStartCallback_EndInvoke_m224A882144221EDB0E7B351A8177A1F713527BE0 (ShowStartCallback_tA00305EA522042DA66751DFDAE236510C1B2CF87 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mB6C35B2047B37FACD6C2DAFC9EF05AFDDD1A1F3A (Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serializer()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// builder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		// }
		return;
	}
}
// System.String UnityEngine.Advertisements.Utilities.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mF64079CC9F0C5A4D9F2B0F616A9C0E15C7C4157A (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = new Serializer();
		Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * L_0 = (Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 *)il2cpp_codegen_object_new(Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6_il2cpp_TypeInfo_var);
		Serializer__ctor_mB6C35B2047B37FACD6C2DAFC9EF05AFDDD1A1F3A(L_0, /*hidden argument*/NULL);
		// instance.SerializeValue(obj);
		Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_mA68624568B92BEA8C4C445ECAA556A00D5B5D22F(L_1, L_2, /*hidden argument*/NULL);
		// return instance.builder.ToString();
		NullCheck(L_1);
		StringBuilder_t * L_3 = L_1->get_builder_0();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_mA68624568B92BEA8C4C445ECAA556A00D5B5D22F (Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		// if (value == null)
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0015:
	{
		// else if ((asStr = value as string) != null)
		RuntimeObject * L_3 = ___value0;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString(asStr);
		String_t* L_5 = V_2;
		Serializer_SerializeString_mF3B23401C12AE76928277742ED703E84D1906020(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// else if (value is bool)
		RuntimeObject * L_6 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		// builder.Append((bool)value ? "true" : "false");
		StringBuilder_t * L_7 = __this->get_builder_0();
		RuntimeObject * L_8 = ___value0;
		G_B6_0 = L_7;
		if (((*(bool*)((bool*)UnBox(L_8, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_7;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B8_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0050:
	{
		// else if ((asList = value as IList) != null)
		RuntimeObject * L_10 = ___value0;
		RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		V_0 = L_11;
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		// SerializeArray(asList);
		RuntimeObject* L_12 = V_0;
		Serializer_SerializeArray_mF1BA5E9851A44483B818F2FD46CBB96CB71BAF3D(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0062:
	{
		// else if ((asDict = value as IDictionary) != null)
		RuntimeObject * L_13 = ___value0;
		RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		V_1 = L_14;
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		// SerializeObject(asDict);
		RuntimeObject* L_15 = V_1;
		Serializer_SerializeObject_m44A476C79F0C875DC5FF7AA24BFC3581FE108BCF(__this, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0074:
	{
		// else if (value is char)
		RuntimeObject * L_16 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		// SerializeString(new string((char)value, 1));
		RuntimeObject * L_17 = ___value0;
		String_t* L_18;
		L_18 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_17, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_mF3B23401C12AE76928277742ED703E84D1906020(__this, L_18, /*hidden argument*/NULL);
		// }
		return;
	}

IL_008f:
	{
		// SerializeOther(value);
		RuntimeObject * L_19 = ___value0;
		Serializer_SerializeOther_m47F724BA72AA1324B13FD60C927544052E317BC6(__this, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m44A476C79F0C875DC5FF7AA24BFC3581FE108BCF (Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append('{');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)123), /*hidden argument*/NULL);
		// foreach (object e in obj.Keys)
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001e:
		{
			// foreach (object e in obj.Keys)
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject * L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			// if (!first)
			bool L_7 = V_0;
			if (L_7)
			{
				goto IL_0036;
			}
		}

IL_0028:
		{
			// builder.Append(',');
			StringBuilder_t * L_8 = __this->get_builder_0();
			NullCheck(L_8);
			StringBuilder_t * L_9;
			L_9 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0036:
		{
			// SerializeString(e.ToString());
			RuntimeObject * L_10 = V_2;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
			Serializer_SerializeString_mF3B23401C12AE76928277742ED703E84D1906020(__this, L_11, /*hidden argument*/NULL);
			// builder.Append(':');
			StringBuilder_t * L_12 = __this->get_builder_0();
			NullCheck(L_12);
			StringBuilder_t * L_13;
			L_13 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_12, ((int32_t)58), /*hidden argument*/NULL);
			// SerializeValue(obj[e]);
			RuntimeObject* L_14 = ___obj0;
			RuntimeObject * L_15 = V_2;
			NullCheck(L_14);
			RuntimeObject * L_16;
			L_16 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_14, L_15);
			Serializer_SerializeValue_mA68624568B92BEA8C4C445ECAA556A00D5B5D22F(__this, L_16, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_005f:
		{
			// foreach (object e in obj.Keys)
			RuntimeObject* L_17 = V_1;
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_001e;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_20 = V_3;
			if (!L_20)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_21 = V_3;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		// builder.Append('}');
		StringBuilder_t * L_22 = __this->get_builder_0();
		NullCheck(L_22);
		StringBuilder_t * L_23;
		L_23 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_22, ((int32_t)125), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mF1BA5E9851A44483B818F2FD46CBB96CB71BAF3D (Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// builder.Append('[');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)91), /*hidden argument*/NULL);
		// bool first = true;
		V_0 = (bool)1;
		// foreach (object obj in anArray)
		RuntimeObject* L_2 = ___anArray0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0019:
		{
			// foreach (object obj in anArray)
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			// if (!first)
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0031;
			}
		}

IL_0023:
		{
			// builder.Append(',');
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_t * L_8;
			L_8 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0031:
		{
			// SerializeValue(obj);
			RuntimeObject * L_9 = V_2;
			Serializer_SerializeValue_mA68624568B92BEA8C4C445ECAA556A00D5B5D22F(__this, L_9, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_003a:
		{
			// foreach (object obj in anArray)
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0019;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_13 = V_3;
			if (!L_13)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			RuntimeObject* L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		// builder.Append(']');
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_15, ((int32_t)93), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mF3B23401C12AE76928277742ED703E84D1906020 (Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727BF366E3CC855B808D806440542BF7152AF19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append('\"');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)34), /*hidden argument*/NULL);
		// char[] charArray = str.ToCharArray();
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3;
		L_3 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_2, /*hidden argument*/NULL);
		// foreach (var c in charArray)
		V_0 = L_3;
		V_1 = 0;
		goto IL_012d;
	}

IL_001c:
	{
		// foreach (var c in charArray)
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00e0;
	}

IL_004f:
	{
		// builder.Append("\\\"");
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0065:
	{
		// builder.Append("\\\\");
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_007b:
	{
		// builder.Append("\\b");
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0091:
	{
		// builder.Append("\\f");
		StringBuilder_t * L_17 = __this->get_builder_0();
		NullCheck(L_17);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00a7:
	{
		// builder.Append("\\n");
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00ba:
	{
		// builder.Append("\\r");
		StringBuilder_t * L_21 = __this->get_builder_0();
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00cd:
	{
		// builder.Append("\\t");
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00e0:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_25 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		// if ((codepoint >= 32) && (codepoint <= 126))
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)32))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)126))))
		{
			goto IL_0100;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t * L_29 = __this->get_builder_0();
		Il2CppChar L_30 = V_2;
		NullCheck(L_29);
		StringBuilder_t * L_31;
		L_31 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, L_30, /*hidden argument*/NULL);
		// }
		goto IL_0129;
	}

IL_0100:
	{
		// builder.Append("\\u");
		StringBuilder_t * L_32 = __this->get_builder_0();
		NullCheck(L_32);
		StringBuilder_t * L_33;
		L_33 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_32, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, /*hidden argument*/NULL);
		// builder.Append(codepoint.ToString("x4"));
		StringBuilder_t * L_34 = __this->get_builder_0();
		String_t* L_35;
		L_35 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_3), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, /*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_34, L_35, /*hidden argument*/NULL);
	}

IL_0129:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_012d:
	{
		// foreach (var c in charArray)
		int32_t L_38 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_39 = V_0;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append('\"');
		StringBuilder_t * L_40 = __this->get_builder_0();
		NullCheck(L_40);
		StringBuilder_t * L_41;
		L_41 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_40, ((int32_t)34), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m47F724BA72AA1324B13FD60C927544052E317BC6 (Serializer_t289D7B4222EBA43623DAE19DB080ED4AB4BC33A6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// if (value is float)
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		// builder.Append(((float)value).ToString("R", System.Globalization.CultureInfo.InvariantCulture));
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_3;
		L_3 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_4;
		L_4 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)(&V_0), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// else if (value is int
		//          || value is uint
		//          || value is long
		//          || value is sbyte
		//          || value is byte
		//          || value is short
		//          || value is ushort
		//          || value is ulong)
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_12 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_13 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_13, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_007b;
		}
	}

IL_006d:
	{
		// builder.Append(value);
		StringBuilder_t * L_14 = __this->get_builder_0();
		RuntimeObject * L_15 = ___value0;
		NullCheck(L_14);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_007b:
	{
		// else if (value is double
		//          || value is decimal)
		RuntimeObject * L_17 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_17, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject * L_18 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}

IL_008b:
	{
		// builder.Append(Convert.ToDouble(value).ToString("R", System.Globalization.CultureInfo.InvariantCulture));
		StringBuilder_t * L_19 = __this->get_builder_0();
		RuntimeObject * L_20 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284(L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_22;
		L_22 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_23;
		L_23 = Double_ToString_mFF1DAF2003FC7096C54C5A2685F85082220E330B((double*)(&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, L_23, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b0:
	{
		// SerializeString(value.ToString());
		RuntimeObject * L_25 = ___value0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		Serializer_SerializeString_mF3B23401C12AE76928277742ED703E84D1906020(__this, L_26, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m23FD1615C862155B7E071893B84401E9349761BD (U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass33_0::<Show>b__0(System.Object,UnityEngine.Advertisements.Events.FinishEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3CShowU3Eb__0_m90AAF1944C755ABFD41E936FDD466CCBDD69EEEB (U3CU3Ec__DisplayClass33_0_t3C9B3B5B5CA971576BA0DD2A0EF9932EC939AE2E * __this, RuntimeObject * ___sender0, FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m92CFC219BE1E947209DA9E2AF847D09E48931A05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// showOptions.resultCallback(e.showResult);
		ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * L_0 = __this->get_showOptions_0();
		NullCheck(L_0);
		Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9 * L_1;
		L_1 = ShowOptions_get_resultCallback_m7D9A5B78C221DB6C375C0742DF41711EF7928D14_inline(L_0, /*hidden argument*/NULL);
		FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1 * L_2 = ___e1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FinishEventArgs_get_showResult_m9A797DA56F8A17647FF8BB4E269EE3A724A1A48D_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_m92CFC219BE1E947209DA9E2AF847D09E48931A05(L_1, L_3, /*hidden argument*/Action_1_Invoke_m92CFC219BE1E947209DA9E2AF847D09E48931A05_RuntimeMethod_var);
		// OnFinish -= finishHandler;
		Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * L_4 = __this->get_U3CU3E4__this_1();
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_5 = __this->get_finishHandler_2();
		NullCheck(L_4);
		Platform_remove_OnFinish_mD421DEABEFCA850C8A6DC8A13F6FA5E8B85D2FD9(L_4, L_5, /*hidden argument*/NULL);
		// };
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
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_mBA7AD50DB304F1EAC9E01EB69F572C586189D4B2 (U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass40_0::<UnityAdsReady>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0_U3CUnityAdsReadyU3Eb__0_m6556FE019E828C55D250BC4696420F0386F1782D (U3CU3Ec__DisplayClass40_0_tB5887C24CCB3E3E3E82420A86CE8DD8526FB2C62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsListener_tD05C653E78754DB6B30CF7D4A1BB6FBA20EAA232_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// foreach (var listener in GetClonedHashSet(Listeners))
		Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * L_1;
		L_1 = Platform_get_Listeners_m4FB9B6E7ED73F57D54EFA528FF85D39897CB039B_inline(L_0, /*hidden argument*/NULL);
		HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * L_2;
		L_2 = Platform_GetClonedHashSet_mB4479B611B9532E9BE2BA27E7055F8CAC1D1B647(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6  L_3;
		L_3 = HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5(L_2, /*hidden argument*/HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0018:
		{
			// foreach (var listener in GetClonedHashSet(Listeners))
			RuntimeObject* L_4;
			L_4 = Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_inline((Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_RuntimeMethod_var);
			// listener?.OnUnityAdsReady(placementId);
			RuntimeObject* L_5 = L_4;
			G_B3_0 = L_5;
			if (L_5)
			{
				G_B4_0 = L_5;
				goto IL_0025;
			}
		}

IL_0022:
		{
			goto IL_0030;
		}

IL_0025:
		{
			String_t* L_6 = __this->get_placementId_1();
			NullCheck(G_B4_0);
			InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsListener::OnUnityAdsReady(System.String) */, IUnityAdsListener_tD05C653E78754DB6B30CF7D4A1BB6FBA20EAA232_il2cpp_TypeInfo_var, G_B4_0, L_6);
		}

IL_0030:
		{
			// foreach (var listener in GetClonedHashSet(Listeners))
			bool L_7;
			L_7 = Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4((Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0018;
			}
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x49, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C((Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		// });
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
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass41_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0__ctor_mC7EA4AE664F69D26858D7272F166D8D5F1D3D724 (U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass41_0::<UnityAdsDidError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0_U3CUnityAdsDidErrorU3Eb__0_m585A62B075944230A0F08A6DF265405DA218B36D (U3CU3Ec__DisplayClass41_0_tAF2B01875022F3708DB3B0AC2ED695E633E232B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsListener_tD05C653E78754DB6B30CF7D4A1BB6FBA20EAA232_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// foreach (var listener in GetClonedHashSet(Listeners))
		Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * L_1;
		L_1 = Platform_get_Listeners_m4FB9B6E7ED73F57D54EFA528FF85D39897CB039B_inline(L_0, /*hidden argument*/NULL);
		HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * L_2;
		L_2 = Platform_GetClonedHashSet_mB4479B611B9532E9BE2BA27E7055F8CAC1D1B647(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6  L_3;
		L_3 = HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5(L_2, /*hidden argument*/HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0018:
		{
			// foreach (var listener in GetClonedHashSet(Listeners))
			RuntimeObject* L_4;
			L_4 = Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_inline((Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_RuntimeMethod_var);
			// listener?.OnUnityAdsDidError(message);
			RuntimeObject* L_5 = L_4;
			G_B3_0 = L_5;
			if (L_5)
			{
				G_B4_0 = L_5;
				goto IL_0025;
			}
		}

IL_0022:
		{
			goto IL_0030;
		}

IL_0025:
		{
			String_t* L_6 = __this->get_message_1();
			NullCheck(G_B4_0);
			InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsListener::OnUnityAdsDidError(System.String) */, IUnityAdsListener_tD05C653E78754DB6B30CF7D4A1BB6FBA20EAA232_il2cpp_TypeInfo_var, G_B4_0, L_6);
		}

IL_0030:
		{
			// foreach (var listener in GetClonedHashSet(Listeners))
			bool L_7;
			L_7 = Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4((Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0018;
			}
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x49, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C((Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		// });
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
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_m22B8F96A0F6C237875FD20041C0EF22C9DE07F01 (U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass42_0::<UnityAdsDidStart>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0_U3CUnityAdsDidStartU3Eb__0_m26D184712D9B8875E0CB1EC6EA136C7DFBE6F4A3 (U3CU3Ec__DisplayClass42_0_t12012BD85997E5CD8816227205E878DE82B572E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m7D6DCD97A41ED1C842EC52AA9243BEFCB0260510_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsListener_tD05C653E78754DB6B30CF7D4A1BB6FBA20EAA232_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartEventArgs_t89137A1788A305D836F12314C43763F1CF19AF56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * G_B2_0 = NULL;
	EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * G_B1_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	{
		// OnStart?.Invoke(this, new StartEventArgs(placementId));
		Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_1 = L_0->get_OnStart_0();
		EventHandler_1_tDF0B137E14F67DC90D46D37E78EACA76980CD51C * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_0027;
	}

IL_0011:
	{
		Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * L_3 = __this->get_U3CU3E4__this_0();
		String_t* L_4 = __this->get_placementId_1();
		StartEventArgs_t89137A1788A305D836F12314C43763F1CF19AF56 * L_5 = (StartEventArgs_t89137A1788A305D836F12314C43763F1CF19AF56 *)il2cpp_codegen_object_new(StartEventArgs_t89137A1788A305D836F12314C43763F1CF19AF56_il2cpp_TypeInfo_var);
		StartEventArgs__ctor_m1124DD422B5DAB617E2B4A08C882DF712D60ED2E(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m7D6DCD97A41ED1C842EC52AA9243BEFCB0260510(G_B2_0, L_3, L_5, /*hidden argument*/EventHandler_1_Invoke_m7D6DCD97A41ED1C842EC52AA9243BEFCB0260510_RuntimeMethod_var);
	}

IL_0027:
	{
		// foreach (var listener in GetClonedHashSet(Listeners))
		Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * L_6 = __this->get_U3CU3E4__this_0();
		NullCheck(L_6);
		HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * L_7;
		L_7 = Platform_get_Listeners_m4FB9B6E7ED73F57D54EFA528FF85D39897CB039B_inline(L_6, /*hidden argument*/NULL);
		HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * L_8;
		L_8 = Platform_GetClonedHashSet_mB4479B611B9532E9BE2BA27E7055F8CAC1D1B647(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6  L_9;
		L_9 = HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5(L_8, /*hidden argument*/HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5_RuntimeMethod_var);
		V_0 = L_9;
	}

IL_003d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_003f:
		{
			// foreach (var listener in GetClonedHashSet(Listeners))
			RuntimeObject* L_10;
			L_10 = Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_inline((Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_RuntimeMethod_var);
			// listener?.OnUnityAdsDidStart(placementId);
			RuntimeObject* L_11 = L_10;
			G_B6_0 = L_11;
			if (L_11)
			{
				G_B7_0 = L_11;
				goto IL_004c;
			}
		}

IL_0049:
		{
			goto IL_0057;
		}

IL_004c:
		{
			String_t* L_12 = __this->get_placementId_1();
			NullCheck(G_B7_0);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void UnityEngine.Advertisements.IUnityAdsListener::OnUnityAdsDidStart(System.String) */, IUnityAdsListener_tD05C653E78754DB6B30CF7D4A1BB6FBA20EAA232_il2cpp_TypeInfo_var, G_B7_0, L_12);
		}

IL_0057:
		{
			// foreach (var listener in GetClonedHashSet(Listeners))
			bool L_13;
			L_13 = Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4((Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_003f;
			}
		}

IL_0060:
		{
			IL2CPP_LEAVE(0x70, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C((Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x70, IL_0070)
	}

IL_0070:
	{
		// });
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
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass43_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0__ctor_m692C8BA518CB8786AB45B18A133F5067F317701D (U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform/<>c__DisplayClass43_0::<UnityAdsDidFinish>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0_U3CUnityAdsDidFinishU3Eb__0_m36F0C46E1C534BAF24A35F136726A8AAD1986648 (U3CU3Ec__DisplayClass43_0_t4D83C7A1841D73B6D839EE1117955511E22693B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m2124AB0856E84A1BB72D4908646BC0864EB4B616_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsListener_tD05C653E78754DB6B30CF7D4A1BB6FBA20EAA232_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * G_B2_0 = NULL;
	EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * G_B1_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	{
		// OnFinish?.Invoke(this, new FinishEventArgs(placementId, rawShowResult));
		Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_1 = L_0->get_OnFinish_1();
		EventHandler_1_t87FCF82DC0B4BD2D700D9E4C5FED4AC686B9B016 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_002d;
	}

IL_0011:
	{
		Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * L_3 = __this->get_U3CU3E4__this_0();
		String_t* L_4 = __this->get_placementId_1();
		int32_t L_5 = __this->get_rawShowResult_2();
		FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1 * L_6 = (FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1 *)il2cpp_codegen_object_new(FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1_il2cpp_TypeInfo_var);
		FinishEventArgs__ctor_mFC603DA04EDD6C4D5BB377EABEB44C778E01C166(L_6, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		EventHandler_1_Invoke_m2124AB0856E84A1BB72D4908646BC0864EB4B616(G_B2_0, L_3, L_6, /*hidden argument*/EventHandler_1_Invoke_m2124AB0856E84A1BB72D4908646BC0864EB4B616_RuntimeMethod_var);
	}

IL_002d:
	{
		// foreach (var listener in GetClonedHashSet(Listeners))
		Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * L_7 = __this->get_U3CU3E4__this_0();
		NullCheck(L_7);
		HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * L_8;
		L_8 = Platform_get_Listeners_m4FB9B6E7ED73F57D54EFA528FF85D39897CB039B_inline(L_7, /*hidden argument*/NULL);
		HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * L_9;
		L_9 = Platform_GetClonedHashSet_mB4479B611B9532E9BE2BA27E7055F8CAC1D1B647(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6  L_10;
		L_10 = HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5(L_9, /*hidden argument*/HashSet_1_GetEnumerator_m384231BFF7C61B79F276E678936C7A8DF7AF2BC5_RuntimeMethod_var);
		V_0 = L_10;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0045:
		{
			// foreach (var listener in GetClonedHashSet(Listeners))
			RuntimeObject* L_11;
			L_11 = Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_inline((Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mFD7D92CBAB7A7837AF225A928ECB03B4E3C858B9_RuntimeMethod_var);
			// listener?.OnUnityAdsDidFinish(placementId, rawShowResult);
			RuntimeObject* L_12 = L_11;
			G_B6_0 = L_12;
			if (L_12)
			{
				G_B7_0 = L_12;
				goto IL_0052;
			}
		}

IL_004f:
		{
			goto IL_0063;
		}

IL_0052:
		{
			String_t* L_13 = __this->get_placementId_1();
			int32_t L_14 = __this->get_rawShowResult_2();
			NullCheck(G_B7_0);
			InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void UnityEngine.Advertisements.IUnityAdsListener::OnUnityAdsDidFinish(System.String,UnityEngine.Advertisements.ShowResult) */, IUnityAdsListener_tD05C653E78754DB6B30CF7D4A1BB6FBA20EAA232_il2cpp_TypeInfo_var, G_B7_0, L_13, L_14);
		}

IL_0063:
		{
			// foreach (var listener in GetClonedHashSet(Listeners))
			bool L_15;
			L_15 = Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4((Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mBEC9E6E4A5EB62E6AE35E931DE6955392ECDC3D4_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0045;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x7C, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C((Enumerator_t5500FE55E0E890F4B32EE49EE6B0BF2C881F4CF6 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC984BE1AFA5E159EAEB6FA596829C5475A60DC0C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
	}

IL_007c:
	{
		// });
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B (unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B * __this, String_t* ___eventString0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___eventString0' to native representation
	char* ____eventString0_marshaled = NULL;
	____eventString0_marshaled = il2cpp_codegen_marshal_string(___eventString0);

	// Native function invocation
	il2cppPInvokeFunc(____eventString0_marshaled);

	// Marshaling cleanup of parameter '___eventString0' native representation
	il2cpp_codegen_marshal_free(____eventString0_marshaled);
	____eventString0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingDidInitiatePurchasingCommand::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingDidInitiatePurchasingCommand__ctor_mBBE45F06DBE9053F2310946D93C6D3A6CA61688F (unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingDidInitiatePurchasingCommand::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingDidInitiatePurchasingCommand_Invoke_m4EDE7127617C2D8723C2B32F1F3DDBC9226C9107 (unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B * __this, String_t* ___eventString0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___eventString0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eventString0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___eventString0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___eventString0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___eventString0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___eventString0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___eventString0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___eventString0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___eventString0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eventString0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eventString0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___eventString0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___eventString0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingDidInitiatePurchasingCommand::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityAdsPurchasingDidInitiatePurchasingCommand_BeginInvoke_m54EFB61D4D608EF7E55299A92CE70BF05E5CA3F8 (unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B * __this, String_t* ___eventString0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___eventString0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingDidInitiatePurchasingCommand::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingDidInitiatePurchasingCommand_EndInvoke_mAE79EA236D8DFBAE9B73F1D0D7C19882F9587B77 (unityAdsPurchasingDidInitiatePurchasingCommand_tC37582D507D1A3A7EF7FC33145737C2375051E8B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB (unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetProductCatalog::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetProductCatalog__ctor_mA2F9A2EF2B802E58EF356FE814D4D1D69ADFB85D (unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetProductCatalog::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetProductCatalog_Invoke_m23FB3E7B2E497C2A62342DB7DB1AB56D3A40273E (unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetProductCatalog::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityAdsPurchasingGetProductCatalog_BeginInvoke_m1A3B7A3AE8417D10ED71A8015F1C638592D13CBA (unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetProductCatalog::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetProductCatalog_EndInvoke_mEADD398D554C5597ABF90F6A629CE4E8F2D45531 (unityAdsPurchasingGetProductCatalog_t283C0A309DCC984A133BAB2444E707EA14AAB6CB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380 (unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetPurchasingVersion::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetPurchasingVersion__ctor_m2F0C1B38920D117FD548D6DEF1B02F2BC9D5395E (unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetPurchasingVersion::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetPurchasingVersion_Invoke_m9A6B776D88623766FADB643652F956FD32474221 (unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetPurchasingVersion::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityAdsPurchasingGetPurchasingVersion_BeginInvoke_m05FA0DC69D8E3CF504B00FA9E798F047780A3326 (unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetPurchasingVersion::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetPurchasingVersion_EndInvoke_m38CDDE9CB79382729D5E380ED9BEF0D4B9CE40FE (unityAdsPurchasingGetPurchasingVersion_t32CE345324FAEB2D0C3FA5BAB50A45B375B85380 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE (unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingInitialize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingInitialize__ctor_m04803428151FA83C7CC62D07E9527AFFCE30CDAE (unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingInitialize::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingInitialize_Invoke_m63B728149718B6BDC3BFBB6C1979A4AB3C570245 (unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingInitialize::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityAdsPurchasingInitialize_BeginInvoke_mE2CF05FEABCA46846A8FF79C336416942CE834A1 (unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingInitialize::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingInitialize_EndInvoke_m1D922354FD99DC3745C9B3582607168FD081C0B9 (unityAdsPurchasingInitialize_t3C0B2CFC4A52D36147054CDFF8BB5D36584A0AFE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * BannerOptions_get_showCallback_m4B6507E9558936032DE248611C825074A43568C7_inline (BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * L_0 = __this->get_U3CshowCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Banner_get_UnityLifecycleManager_mE1420E56855D7DF329BE3C16984ACAAFAC9CC8BA_inline (Banner_t6664DAB03F3AD53DFBC549421A9BAF3F4242E4B0 * __this, const RuntimeMethod* method)
{
	{
		// public IUnityLifecycleManager UnityLifecycleManager { get; }
		RuntimeObject* L_0 = __this->get_U3CUnityLifecycleManagerU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * BannerOptions_get_hideCallback_m1BB15E9FEFBCF252CF8FCEECB2919C767A73D887_inline (BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * L_0 = __this->get_U3ChideCallbackU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * BannerOptions_get_clickCallback_m56E6EE03D4360E6D8F4B273556451D8A2BE44F64_inline (BannerOptions_tF017D5FA0298D1F4428D78619B28AA5BE75C74E8 * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_t8961134B36FE112305A0BD117F4C4BD039D01F8C * L_0 = __this->get_U3CclickCallbackU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * BannerLoadOptions_get_loadCallback_m8D2F618B70D875D6BA94BAFB44A17B21CBDD7DF5_inline (BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * __this, const RuntimeMethod* method)
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_t98E9B04FCDE9D83040EF16C738585BDEF8CE4C6E * L_0 = __this->get_U3CloadCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * BannerLoadOptions_get_errorCallback_mD168B1D1BE035B21EB917A5A6465C2EFBCA450E1_inline (BannerLoadOptions_tBBA74895C1192705725DF5D0693EFB02E750370C * __this, const RuntimeMethod* method)
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_tBADDF5446727D93DBBAB9033F1457D39544FEAC6 * L_0 = __this->get_U3CerrorCallbackU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t IosNativeObject_get_NativePtr_m55952C88D580C58372495F9F6F9683115ECA16FE_inline (IosNativeObject_t7A450B15A58BD5CB427954127484D9B5D4CF84DD * __this, const RuntimeMethod* method)
{
	{
		// get => m_NativePtr;
		intptr_t L_0 = __this->get_m_NativePtr_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mA024D4E519DD1CCEC25F80B93A4200115D5B7932_inline (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * __this, const RuntimeMethod* method)
{
	{
		// public string category { get; private set; }
		String_t* L_0 = __this->get_U3CcategoryU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaData_set_category_m842DB606F0530156ECEA8ADA08B70C48213DB553_inline (MetaData_t4B4C5C5A31780E84E8F4EAA19B124BFE7770D8A3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string category { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CcategoryU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_mF4D0FFE9E137D920B39DEDB68807788708BC583A_inline (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method)
{
	{
		// public INativePlatform NativePlatform { get; }
		RuntimeObject* L_0 = __this->get_U3CNativePlatformU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_m26FF0F8EAD6026CBDD3FDB3F487FF6631C0F37FF_inline (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method)
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = __this->get_U3CIsShowingU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9 * ShowOptions_get_resultCallback_m7D9A5B78C221DB6C375C0742DF41711EF7928D14_inline (ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * __this, const RuntimeMethod* method)
{
	{
		// public Action<ShowResult> resultCallback { get; set; }
		Action_1_t9B0773997135D93BEFD32B0F92EE6495210D87E9 * L_0 = __this->get_U3CresultCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_mF2E0A8A3FC6619C3523EF046FC611885C8955168_inline (ShowOptions_t2B28852088684C3B09D0E007F6B6167AF1F17B8F * __this, const RuntimeMethod* method)
{
	{
		// public string gamerSid { get; set; }
		String_t* L_0 = __this->get_U3CgamerSidU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_UnityLifecycleManager_m9027C2602495D0F89B2526D437DC7015FE9043FE_inline (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method)
{
	{
		// public IUnityLifecycleManager UnityLifecycleManager { get; }
		RuntimeObject* L_0 = __this->get_U3CUnityLifecycleManagerU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Platform_set_IsShowing_m46F130DBBA517E043104CEBCD79CA534BEDC35CC_inline (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsShowingU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * PurchasingPlatform_get_Instance_m77C3B013E64B7BA558A7E2A077EF6297E88DD3ED_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static PurchasingPlatform Instance { get; set; }
		PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * L_0 = ((PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PurchasingPlatform_set_Instance_m30D84B918719221436C921C6483C141629323D66_inline (PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static PurchasingPlatform Instance { get; set; }
		PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8 * L_0 = ___value0;
		((PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t1ECEE44728867D6FE2DE25E1CCB42905458247C8_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FinishEventArgs_get_showResult_m9A797DA56F8A17647FF8BB4E269EE3A724A1A48D_inline (FinishEventArgs_tF22483D8E47C2F16E08BF1DE023D7590EE2F02D1 * __this, const RuntimeMethod* method)
{
	{
		// public ShowResult showResult { get; }
		int32_t L_0 = __this->get_U3CshowResultU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * Platform_get_Listeners_m4FB9B6E7ED73F57D54EFA528FF85D39897CB039B_inline (Platform_tA2DB13447C4BC48BA7B3591B2C1771776305283D * __this, const RuntimeMethod* method)
{
	{
		// public HashSet<IUnityAdsListener> Listeners { get; }
		HashSet_1_t0E53A30CCC3B9785A13CD15BB621190608AB0FA7 * L_0 = __this->get_U3CListenersU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return (RuntimeObject *)L_0;
	}
}
