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

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<OVRCameraRig>
struct Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F;
// System.Action`1<UnityEngine.Transform>
struct Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.XRDisplaySubsystem>
struct IEnumerable_1_t5C0B7461C42765B8F783474FDE7D0949645E64A6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// UnityEngine.RenderBuffer[]
struct RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5;
// UnityEngine.Rendering.RenderBufferLoadAction[]
struct RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA;
// UnityEngine.Rendering.RenderBufferStoreAction[]
struct RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.XR.XRDisplaySubsystem[]
struct XRDisplaySubsystemU5BU5D_t741124D80DCCCF62F2AF47431354B7387672F264;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Meta.XR.EnvironmentDepth.DepthProviderNotSupported
struct DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46;
// Meta.XR.EnvironmentDepth.EnvironmentDepthManager
struct EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631;
// Meta.XR.EnvironmentDepth.IDepthProvider
struct IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.ILogger
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// OVRCameraRig
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OcclusionShadersMode_t5E05D042A31C02AED3DAE94D664CB5FB98B24A9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06E02AAD278C470CA00827078CCD2F85C887CBD0;
IL2CPP_EXTERN_C String_t* _stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F;
IL2CPP_EXTERN_C String_t* _stringLiteral204F544BAFC4863B359F592A20972AD51732AE93;
IL2CPP_EXTERN_C String_t* _stringLiteral5F224B2AEF4A637D33372AD5CB608CD3CE8013AF;
IL2CPP_EXTERN_C String_t* _stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C;
IL2CPP_EXTERN_C String_t* _stringLiteralA5E8D505AB96888EB0230DF995112A81F0791818;
IL2CPP_EXTERN_C String_t* _stringLiteralB29005781C891F9AA15F6FF036E1C296DF7D185D;
IL2CPP_EXTERN_C String_t* _stringLiteralC92F425FF6D1AA7661F3BC4F16E65014AB18038A;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F5A00EE4168A8128DDBCD07A1218D7BFEA7A37;
IL2CPP_EXTERN_C String_t* _stringLiteralD6F88B54DD3C7EFD3BC298B67A6A0D1A93FAD275;
IL2CPP_EXTERN_C String_t* _stringLiteralDE36140A6B900DD92158BBA056C0056D6031D25D;
IL2CPP_EXTERN_C String_t* _stringLiteralF5C8165CA10C005224204E77DF9D14B920A64297;
IL2CPP_EXTERN_C String_t* _stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575;
IL2CPP_EXTERN_C const RuntimeMethod* DepthProviderNotSupported_GetDepthTextureId_m25108A6D6C920FFFC2E5A048B39CCB7DE076AC55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DepthProviderNotSupported_GetFrameDesc_mDF51925532A90D3B0D8FA36B190EDF11A69006BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Single_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA37F49C846EFE2734EC2E7A4550E7E13824C4EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m86269E3BF7BFAEF2B25AF0E6E3A0BCA88770566F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551;

struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5;
struct RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA;
struct RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC73739737D4E911DBA1D240C198942E5C147CBD1 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemU5BU5D_t741124D80DCCCF62F2AF47431354B7387672F264* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.Debug
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F  : public RuntimeObject
{
};

// Meta.XR.EnvironmentDepth.DepthProviderNotSupported
struct DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46  : public RuntimeObject
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

// System.Nullable`1<System.UInt32>
struct Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint32_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// Meta.XR.EnvironmentDepth.DepthFrameDesc
struct DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 
{
	// UnityEngine.Vector3 Meta.XR.EnvironmentDepth.DepthFrameDesc::createPoseLocation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___createPoseLocation_0;
	// UnityEngine.Vector4 Meta.XR.EnvironmentDepth.DepthFrameDesc::createPoseRotation
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___createPoseRotation_1;
	// System.Single Meta.XR.EnvironmentDepth.DepthFrameDesc::fovLeftAngle
	float ___fovLeftAngle_2;
	// System.Single Meta.XR.EnvironmentDepth.DepthFrameDesc::fovRightAngle
	float ___fovRightAngle_3;
	// System.Single Meta.XR.EnvironmentDepth.DepthFrameDesc::fovTopAngle
	float ___fovTopAngle_4;
	// System.Single Meta.XR.EnvironmentDepth.DepthFrameDesc::fovDownAngle
	float ___fovDownAngle_5;
	// System.Single Meta.XR.EnvironmentDepth.DepthFrameDesc::nearZ
	float ___nearZ_6;
	// System.Single Meta.XR.EnvironmentDepth.DepthFrameDesc::farZ
	float ___farZ_7;
};

// Meta.XR.EnvironmentDepth.EnvironmentDepthUtils
struct EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A  : public RuntimeObject
{
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

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
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

// UnityEngine.RenderBuffer
struct RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 
{
	// System.Int32 UnityEngine.RenderBuffer::m_RenderTextureInstanceID
	int32_t ___m_RenderTextureInstanceID_0;
	// System.IntPtr UnityEngine.RenderBuffer::m_BufferPtr
	intptr_t ___m_BufferPtr_1;
};

// UnityEngine.Rendering.RenderBufferLoadAction
struct RenderBufferLoadAction_t3333B2CABABAC39DA0CDC25602E5E4FD93C2CB0E 
{
	// System.Int32 UnityEngine.Rendering.RenderBufferLoadAction::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.RenderBufferStoreAction
struct RenderBufferStoreAction_t87683F22C09634E24A574F21F42037C953A2C8B7 
{
	// System.Int32 UnityEngine.Rendering.RenderBufferStoreAction::value__
	int32_t ___value___2;
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.RenderTargetSetup
struct RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F 
{
	// UnityEngine.RenderBuffer[] UnityEngine.RenderTargetSetup::color
	RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5* ___color_0;
	// UnityEngine.RenderBuffer UnityEngine.RenderTargetSetup::depth
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 ___depth_1;
	// System.Int32 UnityEngine.RenderTargetSetup::mipLevel
	int32_t ___mipLevel_2;
	// UnityEngine.CubemapFace UnityEngine.RenderTargetSetup::cubemapFace
	int32_t ___cubemapFace_3;
	// System.Int32 UnityEngine.RenderTargetSetup::depthSlice
	int32_t ___depthSlice_4;
	// UnityEngine.Rendering.RenderBufferLoadAction[] UnityEngine.RenderTargetSetup::colorLoad
	RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA* ___colorLoad_5;
	// UnityEngine.Rendering.RenderBufferStoreAction[] UnityEngine.RenderTargetSetup::colorStore
	RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5* ___colorStore_6;
	// UnityEngine.Rendering.RenderBufferLoadAction UnityEngine.RenderTargetSetup::depthLoad
	int32_t ___depthLoad_7;
	// UnityEngine.Rendering.RenderBufferStoreAction UnityEngine.RenderTargetSetup::depthStore
	int32_t ___depthStore_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.RenderTargetSetup
struct RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_marshaled_pinvoke
{
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* ___color_0;
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 ___depth_1;
	int32_t ___mipLevel_2;
	int32_t ___cubemapFace_3;
	int32_t ___depthSlice_4;
	int32_t* ___colorLoad_5;
	int32_t* ___colorStore_6;
	int32_t ___depthLoad_7;
	int32_t ___depthStore_8;
};
// Native definition for COM marshalling of UnityEngine.RenderTargetSetup
struct RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_marshaled_com
{
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* ___color_0;
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 ___depth_1;
	int32_t ___mipLevel_2;
	int32_t ___cubemapFace_3;
	int32_t ___depthSlice_4;
	int32_t* ___colorLoad_5;
	int32_t* ___colorStore_6;
	int32_t ___depthLoad_7;
	int32_t ___depthStore_8;
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1  : public IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848
{
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___displayFocusChanged_2;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Meta.XR.EnvironmentDepth.EnvironmentDepthManager
struct EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.XR.EnvironmentDepth.OcclusionShadersMode Meta.XR.EnvironmentDepth.EnvironmentDepthManager::_occlusionShadersMode
	int32_t ____occlusionShadersMode_9;
	// System.Boolean Meta.XR.EnvironmentDepth.EnvironmentDepthManager::_removeHands
	bool ____removeHands_10;
	// OVRCameraRig Meta.XR.EnvironmentDepth.EnvironmentDepthManager::_cameraRig
	OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* ____cameraRig_11;
	// System.Boolean Meta.XR.EnvironmentDepth.EnvironmentDepthManager::_hasPermission
	bool ____hasPermission_13;
	// System.Nullable`1<System.UInt32> Meta.XR.EnvironmentDepth.EnvironmentDepthManager::_prevTextureId
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ____prevTextureId_14;
	// UnityEngine.Material Meta.XR.EnvironmentDepth.EnvironmentDepthManager::_preprocessMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____preprocessMaterial_15;
	// UnityEngine.RenderTexture Meta.XR.EnvironmentDepth.EnvironmentDepthManager::_preprocessTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____preprocessTexture_16;
	// UnityEngine.RenderTargetSetup Meta.XR.EnvironmentDepth.EnvironmentDepthManager::_preprocessRenderTargetSetup
	RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F ____preprocessRenderTargetSetup_17;
	// System.Boolean Meta.XR.EnvironmentDepth.EnvironmentDepthManager::<IsDepthAvailable>k__BackingField
	bool ___U3CIsDepthAvailableU3Ek__BackingField_18;
	// UnityEngine.Matrix4x4[] Meta.XR.EnvironmentDepth.EnvironmentDepthManager::_reprojectionMatrices
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ____reprojectionMatrices_19;
	// UnityEngine.XR.XRDisplaySubsystem Meta.XR.EnvironmentDepth.EnvironmentDepthManager::_xrDisplay
	XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* ____xrDisplay_20;
};

// OVRCameraRig
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform OVRCameraRig::<trackingSpace>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackingSpaceU3Ek__BackingField_4;
	// UnityEngine.Transform OVRCameraRig::<leftEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftEyeAnchorU3Ek__BackingField_5;
	// UnityEngine.Transform OVRCameraRig::<centerEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CcenterEyeAnchorU3Ek__BackingField_6;
	// UnityEngine.Transform OVRCameraRig::<rightEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightEyeAnchorU3Ek__BackingField_7;
	// UnityEngine.Transform OVRCameraRig::<leftHandAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftHandAnchorU3Ek__BackingField_8;
	// UnityEngine.Transform OVRCameraRig::<rightHandAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightHandAnchorU3Ek__BackingField_9;
	// UnityEngine.Transform OVRCameraRig::<leftHandAnchorDetached>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftHandAnchorDetachedU3Ek__BackingField_10;
	// UnityEngine.Transform OVRCameraRig::<rightHandAnchorDetached>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightHandAnchorDetachedU3Ek__BackingField_11;
	// UnityEngine.Transform OVRCameraRig::<leftControllerInHandAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftControllerInHandAnchorU3Ek__BackingField_12;
	// UnityEngine.Transform OVRCameraRig::<leftHandOnControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftHandOnControllerAnchorU3Ek__BackingField_13;
	// UnityEngine.Transform OVRCameraRig::<rightControllerInHandAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightControllerInHandAnchorU3Ek__BackingField_14;
	// UnityEngine.Transform OVRCameraRig::<rightHandOnControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightHandOnControllerAnchorU3Ek__BackingField_15;
	// UnityEngine.Transform OVRCameraRig::<leftControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftControllerAnchorU3Ek__BackingField_16;
	// UnityEngine.Transform OVRCameraRig::<rightControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightControllerAnchorU3Ek__BackingField_17;
	// UnityEngine.Transform OVRCameraRig::<trackerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackerAnchorU3Ek__BackingField_18;
	// System.Action`1<OVRCameraRig> OVRCameraRig::UpdatedAnchors
	Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F* ___UpdatedAnchors_19;
	// System.Action`1<UnityEngine.Transform> OVRCameraRig::TrackingSpaceChanged
	Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D* ___TrackingSpaceChanged_20;
	// System.Boolean OVRCameraRig::usePerEyeCameras
	bool ___usePerEyeCameras_21;
	// System.Boolean OVRCameraRig::useFixedUpdateForTracking
	bool ___useFixedUpdateForTracking_22;
	// System.Boolean OVRCameraRig::disableEyeAnchorCameras
	bool ___disableEyeAnchorCameras_23;
	// System.Boolean OVRCameraRig::_skipUpdate
	bool ____skipUpdate_24;
	// System.String OVRCameraRig::trackingSpaceName
	String_t* ___trackingSpaceName_25;
	// System.String OVRCameraRig::trackerAnchorName
	String_t* ___trackerAnchorName_26;
	// System.String OVRCameraRig::leftEyeAnchorName
	String_t* ___leftEyeAnchorName_27;
	// System.String OVRCameraRig::centerEyeAnchorName
	String_t* ___centerEyeAnchorName_28;
	// System.String OVRCameraRig::rightEyeAnchorName
	String_t* ___rightEyeAnchorName_29;
	// System.String OVRCameraRig::leftHandAnchorName
	String_t* ___leftHandAnchorName_30;
	// System.String OVRCameraRig::rightHandAnchorName
	String_t* ___rightHandAnchorName_31;
	// System.String OVRCameraRig::leftControllerAnchorName
	String_t* ___leftControllerAnchorName_32;
	// System.String OVRCameraRig::rightControllerAnchorName
	String_t* ___rightControllerAnchorName_33;
	// System.String OVRCameraRig::leftHandAnchorDetachedName
	String_t* ___leftHandAnchorDetachedName_34;
	// System.String OVRCameraRig::rightHandAnchorDetachedName
	String_t* ___rightHandAnchorDetachedName_35;
	// System.String OVRCameraRig::leftControllerInHandAnchorName
	String_t* ___leftControllerInHandAnchorName_36;
	// System.String OVRCameraRig::leftHandOnControllerAnchorName
	String_t* ___leftHandOnControllerAnchorName_37;
	// System.String OVRCameraRig::rightControllerInHandAnchorName
	String_t* ___rightControllerInHandAnchorName_38;
	// System.String OVRCameraRig::rightHandOnControllerAnchorName
	String_t* ___rightHandOnControllerAnchorName_39;
	// UnityEngine.Camera OVRCameraRig::_centerEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____centerEyeCamera_40;
	// UnityEngine.Camera OVRCameraRig::_leftEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____leftEyeCamera_41;
	// UnityEngine.Camera OVRCameraRig::_rightEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____rightEyeCamera_42;
	// UnityEngine.Matrix4x4 OVRCameraRig::_previousTrackingSpaceTransform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____previousTrackingSpaceTransform_43;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRDisplaySubsystemU5BU5D_t741124D80DCCCF62F2AF47431354B7387672F264* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>

// UnityEngine.Debug
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields
{
	// UnityEngine.ILogger UnityEngine.Debug::s_DefaultLogger
	RuntimeObject* ___s_DefaultLogger_0;
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_1;
};

// UnityEngine.Debug

// Meta.XR.EnvironmentDepth.DepthProviderNotSupported

// Meta.XR.EnvironmentDepth.DepthProviderNotSupported

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Nullable`1<System.UInt32>

// System.Nullable`1<System.UInt32>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.UInt32

// System.UInt32

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

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// Meta.XR.EnvironmentDepth.DepthFrameDesc

// Meta.XR.EnvironmentDepth.DepthFrameDesc

// Meta.XR.EnvironmentDepth.EnvironmentDepthUtils
struct EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_StaticFields
{
	// UnityEngine.Vector3 Meta.XR.EnvironmentDepth.EnvironmentDepthUtils::_scalingVector3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____scalingVector3_0;
};

// Meta.XR.EnvironmentDepth.EnvironmentDepthUtils

// UnityEngine.IntegratedSubsystem

// UnityEngine.IntegratedSubsystem

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RenderBuffer

// UnityEngine.RenderBuffer

// UnityEngine.Rendering.RenderBufferLoadAction

// UnityEngine.Rendering.RenderBufferLoadAction

// UnityEngine.Rendering.RenderBufferStoreAction

// UnityEngine.Rendering.RenderBufferStoreAction

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.RenderTargetSetup

// UnityEngine.RenderTargetSetup

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.XR.XRDisplaySubsystem

// UnityEngine.XR.XRDisplaySubsystem

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Meta.XR.EnvironmentDepth.EnvironmentDepthManager
struct EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields
{
	// System.Int32 Meta.XR.EnvironmentDepth.EnvironmentDepthManager::DepthTextureID
	int32_t ___DepthTextureID_6;
	// System.Int32 Meta.XR.EnvironmentDepth.EnvironmentDepthManager::ReprojectionMatricesID
	int32_t ___ReprojectionMatricesID_7;
	// System.Int32 Meta.XR.EnvironmentDepth.EnvironmentDepthManager::ZBufferParamsID
	int32_t ___ZBufferParamsID_8;
	// Meta.XR.EnvironmentDepth.IDepthProvider Meta.XR.EnvironmentDepth.EnvironmentDepthManager::_provider
	RuntimeObject* ____provider_12;
};

// Meta.XR.EnvironmentDepth.EnvironmentDepthManager

// OVRCameraRig

// OVRCameraRig
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RenderBuffer[]
struct RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5  : public RuntimeArray
{
	ALIGN_FIELD (8) RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 m_Items[1];

	inline RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rendering.RenderBufferLoadAction[]
struct RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// UnityEngine.Rendering.RenderBufferStoreAction[]
struct RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mCBA01F889BE624767358AB5494CD2D7F1B2FB064_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_subsystems, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Single<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Single_TisRuntimeObject_m4966D6BB67940E1EE80ADA3CC60C81D03436C62F_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T System.Nullable`1<System.UInt32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_gshared_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.UInt32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_gshared_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.UInt32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80_gshared (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, uint32_t ___0_value, const RuntimeMethod* method) ;

// System.Void Meta.XR.EnvironmentDepth.DepthProviderNotSupported::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProviderNotSupported__ctor_m36C707656C1F484EA4DF05DDA2435CEA343A9B4A (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.XR.EnvironmentDepth.EnvironmentDepthManager::get_IsDepthAvailable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) ;
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::SetOcclusionShaderKeywords(Meta.XR.EnvironmentDepth.OcclusionShadersMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0 (int32_t ___0_mode, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Meta.XR.EnvironmentDepth.EnvironmentDepthManager::get_IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::.ctor(System.Int32)
inline void List_1__ctor_m86269E3BF7BFAEF2B25AF0E6E3A0BCA88770566F (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370 (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* ___0_subsystems, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mCBA01F889BE624767358AB5494CD2D7F1B2FB064_gshared)(___0_subsystems, method);
}
// TSource System.Linq.Enumerable::Single<UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.IEnumerable`1<TSource>)
inline XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* Enumerable_Single_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA37F49C846EFE2734EC2E7A4550E7E13824C4EF3 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Single_TisRuntimeObject_m4966D6BB67940E1EE80ADA3CC60C81D03436C62F_gshared)(___0_source, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::set_IsDepthAvailable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalTexture_m6DAEF0F184187427D0B7EE64827BD95A482CC09C (int32_t ___0_nameID, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_value, const RuntimeMethod* method) ;
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::ResetDepthTextureIfAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_ResetDepthTextureIfAvailable_m08C8274380CE0F0078AD7DBCA015C2E2807C1A32 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::TryFetchDepthTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_TryFetchDepthTexture_mB175985B0B413B25EBC9FE2A22FA9AB2B5AEAC0F (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 Meta.XR.EnvironmentDepth.EnvironmentDepthUtils::ComputeNdcToLinearDepthParameters(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 EnvironmentDepthUtils_ComputeNdcToLinearDepthParameters_m4ED08BC1248832A75BCEE1B40D63F91EFA86F081 (float ___0_near, float ___1_far, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalVector_mDC5F45B008D44A2C8BF6D450CFE8B58B847C8190 (int32_t ___0_nameID, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::CacheCameraRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_CacheCameraRig_m6D78ED0C4C3C425E94D10381A114EDBF9B9B21D8 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform OVRCameraRig::get_trackingSpace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 Meta.XR.EnvironmentDepth.EnvironmentDepthUtils::CalculateReprojection(Meta.XR.EnvironmentDepth.DepthFrameDesc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 EnvironmentDepthUtils_CalculateReprojection_m5E3435EBDF139CCC6D1E006FF797311DF8ADF2E3 (DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 ___0_frameDesc, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalMatrixArray(System.Int32,UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalMatrixArray_m0232FB4129D259C4C70254E2ED65A8F19CA5D2AB (int32_t ___0_nameID, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___1_values, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<OVRCameraRig>()
inline OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234 (const RuntimeMethod* method)
{
	return ((  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88 (String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1 (String_t* ___0_keyword, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.UInt32>::GetValueOrDefault()
inline uint32_t Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.UInt32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099*, const RuntimeMethod*))Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.UInt32>::.ctor(T)
inline void Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80 (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, uint32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099*, uint32_t, const RuntimeMethod*))Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80_gshared)(__this, ___0_value, method);
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::PreprocessDepthTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_PreprocessDepthTexture_m3446EA7F2AB6FEEE92A73344D2EC6DE9FBB02253 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_depthTexture, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_mD60FB2D8D9560774F2E21BAC0A0061CB17904EA3 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_colorFormat, int32_t ___3_depthStencilFormat, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_volumeDepth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_depth_m3D8EF7C98634724B2DB8279387A81C4E19B5DA53 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalTexture_m9ECF95F30982225B918E7521B5F2C395CDC3DF16 (String_t* ___0_name, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_value, const RuntimeMethod* method) ;
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_colorBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 RenderTexture_get_colorBuffer_mE043AF01C1B2FB73BDC9C82D78528A367089CDE0 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_depthBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 RenderTexture_get_depthBuffer_mBBDFA14B3AC2AE4796795E89A0BCA59D54B859D5 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTargetSetup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRenderTarget_m473C88BAC10F05E85918C154CB0426D05A1933D4 (RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F ___0_setup, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_pass, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::DrawProceduralNow(UnityEngine.MeshTopology,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawProceduralNow_m978B544E28AF7B83FD6FF4AC88C41C9BF66CDC62 (int32_t ___0_topology, int32_t ___1_vertexCount, int32_t ___2_instanceCount, const RuntimeMethod* method) ;
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
// Meta.XR.EnvironmentDepth.IDepthProvider Meta.XR.EnvironmentDepth.EnvironmentDepthManager::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnvironmentDepthManager_CreateProvider_m35224046022B072044C09BCE9A58DF60117F03B1 (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsInfinity(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) ;
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
// Meta.XR.EnvironmentDepth.IDepthProvider Meta.XR.EnvironmentDepth.EnvironmentDepthManager::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnvironmentDepthManager_CreateProvider_m35224046022B072044C09BCE9A58DF60117F03B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new DepthProviderNotSupported();
		DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* L_0 = (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46*)il2cpp_codegen_object_new(DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DepthProviderNotSupported__ctor_m36C707656C1F484EA4DF05DDA2435CEA343A9B4A(L_0, NULL);
		return L_0;
	}
}
// System.Boolean Meta.XR.EnvironmentDepth.EnvironmentDepthManager::get_IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsSupported => _provider.IsSupported;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider_12;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Meta.XR.EnvironmentDepth.IDepthProvider::get_IsSupported() */, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Meta.XR.EnvironmentDepth.EnvironmentDepthManager::get_IsDepthAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDepthAvailable { get; private set; }
		bool L_0 = __this->___U3CIsDepthAvailableU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::set_IsDepthAvailable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsDepthAvailable { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsDepthAvailableU3Ek__BackingField_18 = L_0;
		return;
	}
}
// Meta.XR.EnvironmentDepth.OcclusionShadersMode Meta.XR.EnvironmentDepth.EnvironmentDepthManager::get_OcclusionShadersMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnvironmentDepthManager_get_OcclusionShadersMode_mF0CA69250148479C4BC4EE85DFD948CBD9EE5D6C (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		// get => _occlusionShadersMode;
		int32_t L_0 = __this->____occlusionShadersMode_9;
		return L_0;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::set_OcclusionShadersMode(Meta.XR.EnvironmentDepth.OcclusionShadersMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_OcclusionShadersMode_m457114F6E041C154E08A45E7AB442CFBC673C9D5 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_occlusionShadersMode == value)
		int32_t L_0 = __this->____occlusionShadersMode_9;
		int32_t L_1 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _occlusionShadersMode = value;
		int32_t L_2 = ___0_value;
		__this->____occlusionShadersMode_9 = L_2;
		// if (IsDepthAvailable)
		bool L_3;
		L_3 = EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline(__this, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// SetOcclusionShaderKeywords(value);
		int32_t L_4 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0(L_4, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Boolean Meta.XR.EnvironmentDepth.EnvironmentDepthManager::get_RemoveHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_RemoveHands_mB1BAB22E297B860E48BD05BD6BD238D05C47FAFE (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		// get => _removeHands;
		bool L_0 = __this->____removeHands_10;
		return L_0;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::set_RemoveHands(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_RemoveHands_mA9AB95B7CAE5D8DFBAD88EE83AAC3394E12B1595 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_removeHands == value)
		bool L_0 = __this->____removeHands_10;
		bool L_1 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _removeHands = value;
		bool L_2 = ___0_value;
		__this->____removeHands_10 = L_2;
		// if (enabled)
		bool L_3;
		L_3 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// _provider.RemoveHands = value;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider_12;
		bool L_5 = ___0_value;
		NullCheck(L_4);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Meta.XR.EnvironmentDepth.IDepthProvider::set_RemoveHands(System.Boolean) */, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_Awake_m0ADA6BE3CBB9FDEAA038174B84A47F6ADB3E781C (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA37F49C846EFE2734EC2E7A4550E7E13824C4EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m86269E3BF7BFAEF2B25AF0E6E3A0BCA88770566F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC92F425FF6D1AA7661F3BC4F16E65014AB18038A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F88B54DD3C7EFD3BC298B67A6A0D1A93FAD275);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* V_0 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_1 = NULL;
	{
		// Debug.LogError("DepthAPI requires at least Unity 2022.3.0f");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD6F88B54DD3C7EFD3BC298B67A6A0D1A93FAD275, NULL);
		// if (!IsSupported)
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B(NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// var displays = new List<XRDisplaySubsystem>(1);
		List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* L_1 = (List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597*)il2cpp_codegen_object_new(List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m86269E3BF7BFAEF2B25AF0E6E3A0BCA88770566F(L_1, 1, List_1__ctor_m86269E3BF7BFAEF2B25AF0E6E3A0BCA88770566F_RuntimeMethod_var);
		V_0 = L_1;
		// SubsystemManager.GetInstances(displays);
		List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370(L_2, SubsystemManager_GetInstances_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mCDFAF63EF2A2778CA3677E75360BC7961FCB3370_RuntimeMethod_var);
		// _xrDisplay = displays.Single();
		List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* L_3 = V_0;
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_4;
		L_4 = Enumerable_Single_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA37F49C846EFE2734EC2E7A4550E7E13824C4EF3(L_3, Enumerable_Single_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mA37F49C846EFE2734EC2E7A4550E7E13824C4EF3_RuntimeMethod_var);
		__this->____xrDisplay_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xrDisplay_20), (void*)L_4);
		// var shader = Shader.Find(shaderName);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5;
		L_5 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralC92F425FF6D1AA7661F3BC4F16E65014AB18038A, NULL);
		V_1 = L_5;
		// _preprocessMaterial = new Material(shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_7, L_6, NULL);
		__this->____preprocessMaterial_15 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preprocessMaterial_15), (void*)L_7);
		// }
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_OnEnable_m3425FD09A569E30BAAE5B148C8C46B75CD12654B (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204F544BAFC4863B359F592A20972AD51732AE93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsSupported)
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B(NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError($"Environment Depth is not supported. Please check {nameof(EnvironmentDepthManager)}.{nameof(IsSupported)} before enabling {nameof(EnvironmentDepthManager)}.\n" +
		//                             "Open 'Oculus -> Tools -> Project Setup Tool' to see requirements.\n");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral204F544BAFC4863B359F592A20972AD51732AE93, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// _hasPermission = Permission.HasUserAuthorizedPermission(OVRPermissionsRequester.ScenePermission);
		bool L_1;
		L_1 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C, NULL);
		__this->____hasPermission_13 = L_1;
		// if (_hasPermission)
		bool L_2 = __this->____hasPermission_13;
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		// _provider.SetDepthEnabled(true, _removeHands);
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider_12;
		bool L_4 = __this->____removeHands_10;
		NullCheck(L_3);
		InterfaceActionInvoker2< bool, bool >::Invoke(2 /* System.Void Meta.XR.EnvironmentDepth.IDepthProvider::SetDepthEnabled(System.Boolean,System.Boolean) */, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_3, (bool)1, L_4);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::ResetDepthTextureIfAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_ResetDepthTextureIfAvailable_m08C8274380CE0F0078AD7DBCA015C2E2807C1A32 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsDepthAvailable)
		bool L_0;
		L_0 = EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// IsDepthAvailable = false;
		EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762_inline(__this, (bool)0, NULL);
		// Shader.SetGlobalTexture(DepthTextureID, null);
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		int32_t L_1 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___DepthTextureID_6;
		Shader_SetGlobalTexture_m6DAEF0F184187427D0B7EE64827BD95A482CC09C(L_1, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// if (_occlusionShadersMode != OcclusionShadersMode.None)
		int32_t L_2 = __this->____occlusionShadersMode_9;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// SetOcclusionShaderKeywords(OcclusionShadersMode.None);
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0(0, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_OnDisable_mF0DE61B956A3C760549EF7AC61F828F6C2ACAFB5 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResetDepthTextureIfAvailable();
		EnvironmentDepthManager_ResetDepthTextureIfAvailable_m08C8274380CE0F0078AD7DBCA015C2E2807C1A32(__this, NULL);
		// if (IsSupported && _hasPermission)
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B(NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		bool L_1 = __this->____hasPermission_13;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// _provider.SetDepthEnabled(false, false);
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider_12;
		NullCheck(L_2);
		InterfaceActionInvoker2< bool, bool >::Invoke(2 /* System.Void Meta.XR.EnvironmentDepth.IDepthProvider::SetDepthEnabled(System.Boolean,System.Boolean) */, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_2, (bool)0, (bool)0);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_OnDestroy_m676509BBC91DDF17F034F3867448E7E3F3D56E9C (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_preprocessMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____preprocessMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(_preprocessMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->____preprocessMaterial_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		// if (_preprocessTexture != null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->____preprocessTexture_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Destroy(_preprocessTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->____preprocessTexture_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_Update_mE49EE443C3BEBFD2ED232B39989505B5F6DD7E45 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C);
		s_Il2CppMethodInitialized = true;
	}
	DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!_hasPermission)
		bool L_0 = __this->____hasPermission_13;
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		// if (!Permission.HasUserAuthorizedPermission(OVRPermissionsRequester.ScenePermission))
		bool L_1;
		L_1 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// _hasPermission = true;
		__this->____hasPermission_13 = (bool)1;
		// _provider.SetDepthEnabled(true, _removeHands);
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider_12;
		bool L_3 = __this->____removeHands_10;
		NullCheck(L_2);
		InterfaceActionInvoker2< bool, bool >::Invoke(2 /* System.Void Meta.XR.EnvironmentDepth.IDepthProvider::SetDepthEnabled(System.Boolean,System.Boolean) */, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_2, (bool)1, L_3);
	}

IL_002d:
	{
		// TryFetchDepthTexture();
		EnvironmentDepthManager_TryFetchDepthTexture_mB175985B0B413B25EBC9FE2A22FA9AB2B5AEAC0F(__this, NULL);
		// if (!IsDepthAvailable)
		bool L_4;
		L_4 = EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline(__this, NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		return;
	}

IL_003c:
	{
		// var leftEyeData = _provider.GetFrameDesc(0);
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider_12;
		NullCheck(L_5);
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_6;
		L_6 = InterfaceFuncInvoker1< DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2, int32_t >::Invoke(3 /* Meta.XR.EnvironmentDepth.DepthFrameDesc Meta.XR.EnvironmentDepth.IDepthProvider::GetFrameDesc(System.Int32) */, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_5, 0);
		V_0 = L_6;
		// var rightEyeData = _provider.GetFrameDesc(1);
		RuntimeObject* L_7 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider_12;
		NullCheck(L_7);
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_8;
		L_8 = InterfaceFuncInvoker1< DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2, int32_t >::Invoke(3 /* Meta.XR.EnvironmentDepth.DepthFrameDesc Meta.XR.EnvironmentDepth.IDepthProvider::GetFrameDesc(System.Int32) */, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_7, 1);
		V_1 = L_8;
		// var depthZBufferParams = EnvironmentDepthUtils.ComputeNdcToLinearDepthParameters(leftEyeData.nearZ, leftEyeData.farZ);
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_9 = V_0;
		float L_10 = L_9.___nearZ_6;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_11 = V_0;
		float L_12 = L_11.___farZ_7;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = EnvironmentDepthUtils_ComputeNdcToLinearDepthParameters_m4ED08BC1248832A75BCEE1B40D63F91EFA86F081(L_10, L_12, NULL);
		V_2 = L_13;
		// Shader.SetGlobalVector(ZBufferParamsID, depthZBufferParams);
		int32_t L_14 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___ZBufferParamsID_8;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_2;
		Shader_SetGlobalVector_mDC5F45B008D44A2C8BF6D450CFE8B58B847C8190(L_14, L_15, NULL);
		// CacheCameraRig();
		EnvironmentDepthManager_CacheCameraRig_m6D78ED0C4C3C425E94D10381A114EDBF9B9B21D8(__this, NULL);
		// var trackingSpaceViewMatrix = _cameraRig.trackingSpace.worldToLocalMatrix;
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_16 = __this->____cameraRig_11;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline(L_16, NULL);
		NullCheck(L_17);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18;
		L_18 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_17, NULL);
		V_3 = L_18;
		// _reprojectionMatrices[0] = EnvironmentDepthUtils.CalculateReprojection(leftEyeData) * trackingSpaceViewMatrix;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_19 = __this->____reprojectionMatrices_19;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_20 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21;
		L_21 = EnvironmentDepthUtils_CalculateReprojection_m5E3435EBDF139CCC6D1E006FF797311DF8ADF2E3(L_20, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_23;
		L_23 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_21, L_22, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_23);
		// _reprojectionMatrices[1] = EnvironmentDepthUtils.CalculateReprojection(rightEyeData) * trackingSpaceViewMatrix;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_24 = __this->____reprojectionMatrices_19;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_25 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26;
		L_26 = EnvironmentDepthUtils_CalculateReprojection_m5E3435EBDF139CCC6D1E006FF797311DF8ADF2E3(L_25, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_27 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_28;
		L_28 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_26, L_27, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_28);
		// Shader.SetGlobalMatrixArray(ReprojectionMatricesID, _reprojectionMatrices);
		int32_t L_29 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___ReprojectionMatricesID_7;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_30 = __this->____reprojectionMatrices_19;
		Shader_SetGlobalMatrixArray_m0232FB4129D259C4C70254E2ED65A8F19CA5D2AB(L_29, L_30, NULL);
		// }
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::CacheCameraRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_CacheCameraRig_m6D78ED0C4C3C425E94D10381A114EDBF9B9B21D8 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_cameraRig == null)
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_0 = __this->____cameraRig_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _cameraRig = FindObjectOfType<OVRCameraRig>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_2;
		L_2 = Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234(Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234_RuntimeMethod_var);
		__this->____cameraRig_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cameraRig_11), (void*)L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::SetOcclusionShaderKeywords(Meta.XR.EnvironmentDepth.OcclusionShadersMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0 (int32_t ___0_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OcclusionShadersMode_t5E05D042A31C02AED3DAE94D664CB5FB98B24A9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E8D505AB96888EB0230DF995112A81F0791818);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5C8165CA10C005224204E77DF9D14B920A64297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_mode;
		switch (L_0)
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_0014;
			}
			case 2:
			{
				goto IL_0029;
			}
		}
	}
	{
		goto IL_0053;
	}

IL_0014:
	{
		// Shader.DisableKeyword(SoftOcclusionKeyword);
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575, NULL);
		// Shader.EnableKeyword(HardOcclusionKeyword);
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F, NULL);
		// break;
		return;
	}

IL_0029:
	{
		// Shader.DisableKeyword(HardOcclusionKeyword);
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F, NULL);
		// Shader.EnableKeyword(SoftOcclusionKeyword);
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575, NULL);
		// break;
		return;
	}

IL_003e:
	{
		// Shader.DisableKeyword(HardOcclusionKeyword);
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F, NULL);
		// Shader.DisableKeyword(SoftOcclusionKeyword);
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575, NULL);
		// break;
		return;
	}

IL_0053:
	{
		// Debug.LogError($"Environment Depth: unknown {nameof(EnvironmentDepth.OcclusionShadersMode)} {mode}");
		int32_t L_1 = ___0_mode;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(OcclusionShadersMode_t5E05D042A31C02AED3DAE94D664CB5FB98B24A9C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E8D505AB96888EB0230DF995112A81F0791818, _stringLiteralF5C8165CA10C005224204E77DF9D14B920A64297, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		// }
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::TryFetchDepthTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_TryFetchDepthTexture_mB175985B0B413B25EBC9FE2A22FA9AB2B5AEAC0F (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint32_t V_3 = 0;
	{
		// uint textureId = 0;
		V_0 = 0;
		// if (!_xrDisplay.running || !_provider.GetDepthTextureId(ref textureId))
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_0 = __this->____xrDisplay_20;
		NullCheck(L_0);
		bool L_1;
		L_1 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider_12;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, uint32_t* >::Invoke(4 /* System.Boolean Meta.XR.EnvironmentDepth.IDepthProvider::GetDepthTextureId(System.UInt32&) */, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_2, (&V_0));
		if (L_3)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// RenderTexture depthTexture = null;
		V_1 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		// if (depthTexture == null) // can be null when the headset is awaking from sleep
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// ResetDepthTextureIfAvailable();
		EnvironmentDepthManager_ResetDepthTextureIfAvailable_m08C8274380CE0F0078AD7DBCA015C2E2807C1A32(__this, NULL);
		// return;
		return;
	}

IL_0030:
	{
		// if (_prevTextureId == textureId)
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_6 = __this->____prevTextureId_14;
		V_2 = L_6;
		uint32_t L_7 = V_0;
		V_3 = L_7;
		uint32_t L_8;
		L_8 = Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_inline((&V_2), Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_RuntimeMethod_var);
		uint32_t L_9 = V_3;
		bool L_10;
		L_10 = Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_inline((&V_2), Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)&(int32_t)L_10)))
		{
			goto IL_004e;
		}
	}
	{
		// return;
		return;
	}

IL_004e:
	{
		// _prevTextureId = textureId;
		uint32_t L_11 = V_0;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80((&L_12), L_11, /*hidden argument*/Nullable_1__ctor_m257B28AB68BEE9F7CB9F0FEA0143F06DE418FE80_RuntimeMethod_var);
		__this->____prevTextureId_14 = L_12;
		// Shader.SetGlobalTexture(DepthTextureID, depthTexture);
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		int32_t L_13 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___DepthTextureID_6;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = V_1;
		Shader_SetGlobalTexture_m6DAEF0F184187427D0B7EE64827BD95A482CC09C(L_13, L_14, NULL);
		// if (!IsDepthAvailable)
		bool L_15;
		L_15 = EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline(__this, NULL);
		if (L_15)
		{
			goto IL_0087;
		}
	}
	{
		// IsDepthAvailable = true;
		EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762_inline(__this, (bool)1, NULL);
		// if (_occlusionShadersMode != OcclusionShadersMode.None)
		int32_t L_16 = __this->____occlusionShadersMode_9;
		if (!L_16)
		{
			goto IL_0087;
		}
	}
	{
		// SetOcclusionShaderKeywords(_occlusionShadersMode);
		int32_t L_17 = __this->____occlusionShadersMode_9;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0(L_17, NULL);
	}

IL_0087:
	{
		// if (_occlusionShadersMode == OcclusionShadersMode.SoftOcclusion)
		int32_t L_18 = __this->____occlusionShadersMode_9;
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_0097;
		}
	}
	{
		// PreprocessDepthTexture(depthTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = V_1;
		EnvironmentDepthManager_PreprocessDepthTexture_m3446EA7F2AB6FEEE92A73344D2EC6DE9FBB02253(__this, L_19, NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::PreprocessDepthTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_PreprocessDepthTexture_m3446EA7F2AB6FEEE92A73344D2EC6DE9FBB02253 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_depthTexture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB29005781C891F9AA15F6FF036E1C296DF7D185D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F5A00EE4168A8128DDBCD07A1218D7BFEA7A37);
		s_Il2CppMethodInitialized = true;
	}
	RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_preprocessTexture == null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->____preprocessTexture_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00ed;
		}
	}
	{
		// _preprocessTexture = new RenderTexture(depthTexture.width, depthTexture.height, GraphicsFormat.R16G16B16A16_SFloat, GraphicsFormat.None)
		// {
		//     dimension = TextureDimension.Tex2DArray,
		//     volumeDepth = numSlices,
		//     name = nameof(_preprocessTexture),
		//     depth = 0,
		// };
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___0_depthTexture;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___0_depthTexture;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		RenderTexture__ctor_mD60FB2D8D9560774F2E21BAC0A0061CB17904EA3(L_6, L_3, L_5, ((int32_t)48), 0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = L_6;
		NullCheck(L_7);
		VirtualActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, L_7, 5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = L_7;
		NullCheck(L_8);
		RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633(L_8, 2, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = L_8;
		NullCheck(L_9);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_9, _stringLiteralD4F5A00EE4168A8128DDBCD07A1218D7BFEA7A37, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = L_9;
		NullCheck(L_10);
		RenderTexture_set_depth_m3D8EF7C98634724B2DB8279387A81C4E19B5DA53(L_10, 0, NULL);
		__this->____preprocessTexture_16 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preprocessTexture_16), (void*)L_10);
		// _preprocessTexture.Create();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = __this->____preprocessTexture_16;
		NullCheck(L_11);
		bool L_12;
		L_12 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_11, NULL);
		// Shader.SetGlobalTexture("_PreprocessedEnvironmentDepthTexture", _preprocessTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = __this->____preprocessTexture_16;
		Shader_SetGlobalTexture_m9ECF95F30982225B918E7521B5F2C395CDC3DF16(_stringLiteralB29005781C891F9AA15F6FF036E1C296DF7D185D, L_13, NULL);
		// _preprocessRenderTargetSetup = new RenderTargetSetup
		// {
		//     color = new[] { _preprocessTexture.colorBuffer },
		//     depth = _preprocessTexture.depthBuffer,
		//     depthSlice = -1,
		//     colorLoad = new[] { RenderBufferLoadAction.DontCare },
		//     colorStore = new[] { RenderBufferStoreAction.Store },
		//     depthLoad = RenderBufferLoadAction.DontCare,
		//     depthStore = RenderBufferStoreAction.DontCare,
		//     mipLevel = 0,
		//     cubemapFace = CubemapFace.Unknown
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F));
		RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5* L_14 = (RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5*)(RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5*)SZArrayNew(RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5_il2cpp_TypeInfo_var, (uint32_t)1);
		RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5* L_15 = L_14;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = __this->____preprocessTexture_16;
		NullCheck(L_16);
		RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 L_17;
		L_17 = RenderTexture_get_colorBuffer_mE043AF01C1B2FB73BDC9C82D78528A367089CDE0(L_16, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551)L_17);
		(&V_0)->___color_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___color_0), (void*)L_15);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = __this->____preprocessTexture_16;
		NullCheck(L_18);
		RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 L_19;
		L_19 = RenderTexture_get_depthBuffer_mBBDFA14B3AC2AE4796795E89A0BCA59D54B859D5(L_18, NULL);
		(&V_0)->___depth_1 = L_19;
		(&V_0)->___depthSlice_4 = (-1);
		RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA* L_20 = (RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA*)(RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA*)SZArrayNew(RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA_il2cpp_TypeInfo_var, (uint32_t)1);
		RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA* L_21 = L_20;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)2);
		(&V_0)->___colorLoad_5 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___colorLoad_5), (void*)L_21);
		RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5* L_22 = (RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5*)(RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5*)SZArrayNew(RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5_il2cpp_TypeInfo_var, (uint32_t)1);
		(&V_0)->___colorStore_6 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___colorStore_6), (void*)L_22);
		(&V_0)->___depthLoad_7 = 2;
		(&V_0)->___depthStore_8 = 3;
		(&V_0)->___mipLevel_2 = 0;
		(&V_0)->___cubemapFace_3 = (-1);
		RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F L_23 = V_0;
		__this->____preprocessRenderTargetSetup_17 = L_23;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____preprocessRenderTargetSetup_17))->___color_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____preprocessRenderTargetSetup_17))->___colorLoad_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____preprocessRenderTargetSetup_17))->___colorStore_6), (void*)NULL);
		#endif
	}

IL_00ed:
	{
		// Graphics.SetRenderTarget(_preprocessRenderTargetSetup);
		RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F L_24 = __this->____preprocessRenderTargetSetup_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m473C88BAC10F05E85918C154CB0426D05A1933D4(L_24, NULL);
		// _preprocessMaterial.SetPass(0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->____preprocessMaterial_15;
		NullCheck(L_25);
		bool L_26;
		L_26 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_25, 0, NULL);
		// Graphics.DrawProceduralNow(MeshTopology.Triangles, 3, numSlices);
		Graphics_DrawProceduralNow_m978B544E28AF7B83FD6FF4AC88C41C9BF66CDC62(0, 3, 2, NULL);
		// }
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::Log(UnityEngine.LogType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_Log_m1CB09C58585D4E275084C2E6DCB56920334BBE3E (int32_t ___0_type, String_t* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static void Log(LogType type, string msg) => Debug.unityLogger.Log(type, msg);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		int32_t L_1 = ___0_type;
		String_t* L_2 = ___1_msg;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(2 /* System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager__ctor_m21A2BC6430D9332470D4AA443155413563A20F52 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private OcclusionShadersMode _occlusionShadersMode = OcclusionShadersMode.SoftOcclusion;
		__this->____occlusionShadersMode_9 = 2;
		// private readonly Matrix4x4[] _reprojectionMatrices = new Matrix4x4[2];
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____reprojectionMatrices_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reprojectionMatrices_19), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager__cctor_mB5AE399ADCD05E59E531AED3129B2926C4A3B153 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06E02AAD278C470CA00827078CCD2F85C887CBD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F224B2AEF4A637D33372AD5CB608CD3CE8013AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE36140A6B900DD92158BBA056C0056D6031D25D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int DepthTextureID = Shader.PropertyToID("_EnvironmentDepthTexture");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralDE36140A6B900DD92158BBA056C0056D6031D25D, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___DepthTextureID_6 = L_0;
		// private static readonly int ReprojectionMatricesID = Shader.PropertyToID("_EnvironmentDepthReprojectionMatrices");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral06E02AAD278C470CA00827078CCD2F85C887CBD0, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___ReprojectionMatricesID_7 = L_1;
		// private static readonly int ZBufferParamsID = Shader.PropertyToID("_EnvironmentDepthZBufferParams");
		int32_t L_2;
		L_2 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral5F224B2AEF4A637D33372AD5CB608CD3CE8013AF, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___ZBufferParamsID_8 = L_2;
		// private static readonly IDepthProvider _provider = CreateProvider();
		RuntimeObject* L_3;
		L_3 = EnvironmentDepthManager_CreateProvider_m35224046022B072044C09BCE9A58DF60117F03B1(NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider_12), (void*)L_3);
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
// System.Boolean Meta.XR.EnvironmentDepth.DepthProviderNotSupported::get_IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthProviderNotSupported_get_IsSupported_m34C21FF90DCAF1D795886B3E44869668D2AF2B5B (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSupported => false;
		return (bool)0;
	}
}
// System.Void Meta.XR.EnvironmentDepth.DepthProviderNotSupported::set_RemoveHands(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProviderNotSupported_set_RemoveHands_m4092087F7C37911FE0B780C159C45A6EB059654E (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { }
		return;
	}
}
// System.Void Meta.XR.EnvironmentDepth.DepthProviderNotSupported::SetDepthEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProviderNotSupported_SetDepthEnabled_m1205999B3797AAE75239D5B0008F830AB484D40B (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, bool ___0_isEnabled, bool ___1_removeHands, const RuntimeMethod* method) 
{
	{
		// public void SetDepthEnabled(bool isEnabled, bool removeHands) { }
		return;
	}
}
// Meta.XR.EnvironmentDepth.DepthFrameDesc Meta.XR.EnvironmentDepth.DepthProviderNotSupported::GetFrameDesc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 DepthProviderNotSupported_GetFrameDesc_mDF51925532A90D3B0D8FA36B190EDF11A69006BA (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, int32_t ___0_eye, const RuntimeMethod* method) 
{
	DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public DepthFrameDesc GetFrameDesc(int eye) => throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DepthProviderNotSupported_GetFrameDesc_mDF51925532A90D3B0D8FA36B190EDF11A69006BA_RuntimeMethod_var)));
	}
}
// System.Boolean Meta.XR.EnvironmentDepth.DepthProviderNotSupported::GetDepthTextureId(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthProviderNotSupported_GetDepthTextureId_m25108A6D6C920FFFC2E5A048B39CCB7DE076AC55 (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, uint32_t* ___0_textureId, const RuntimeMethod* method) 
{
	{
		// public bool GetDepthTextureId(ref uint textureId) => throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DepthProviderNotSupported_GetDepthTextureId_m25108A6D6C920FFFC2E5A048B39CCB7DE076AC55_RuntimeMethod_var)));
	}
}
// System.Void Meta.XR.EnvironmentDepth.DepthProviderNotSupported::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProviderNotSupported__ctor_m36C707656C1F484EA4DF05DDA2435CEA343A9B4A (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Vector4 Meta.XR.EnvironmentDepth.EnvironmentDepthUtils::ComputeNdcToLinearDepthParameters(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 EnvironmentDepthUtils_ComputeNdcToLinearDepthParameters_m4ED08BC1248832A75BCEE1B40D63F91EFA86F081 (float ___0_near, float ___1_far, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (far < near || float.IsInfinity(far))
		float L_0 = ___1_far;
		float L_1 = ___0_near;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		float L_2 = ___1_far;
		bool L_3;
		L_3 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}

IL_000c:
	{
		// invDepthFactor = -2.0f * near;
		float L_4 = ___0_near;
		V_0 = ((float)il2cpp_codegen_multiply((-2.0f), L_4));
		// depthOffset = -1.0f;
		V_1 = (-1.0f);
		goto IL_0033;
	}

IL_001c:
	{
		// invDepthFactor = -2.0f * far * near / (far - near);
		float L_5 = ___1_far;
		float L_6 = ___0_near;
		float L_7 = ___1_far;
		float L_8 = ___0_near;
		V_0 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_5)), L_6))/((float)il2cpp_codegen_subtract(L_7, L_8))));
		// depthOffset = -(far + near) / (far - near);
		float L_9 = ___1_far;
		float L_10 = ___0_near;
		float L_11 = ___1_far;
		float L_12 = ___0_near;
		V_1 = ((float)(((-((float)il2cpp_codegen_add(L_9, L_10))))/((float)il2cpp_codegen_subtract(L_11, L_12))));
	}

IL_0033:
	{
		// return new Vector4(invDepthFactor, depthOffset, 0, 0);
		float L_13 = V_0;
		float L_14 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_15), L_13, L_14, (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_15;
	}
}
// UnityEngine.Matrix4x4 Meta.XR.EnvironmentDepth.EnvironmentDepthUtils::CalculateReprojection(Meta.XR.EnvironmentDepth.DepthFrameDesc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 EnvironmentDepthUtils_CalculateReprojection_m5E3435EBDF139CCC6D1E006FF797311DF8ADF2E3 (DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 ___0_frameDesc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_16;
	memset((&V_16), 0, sizeof(V_16));
	{
		// float left = frameDesc.fovLeftAngle;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_0 = ___0_frameDesc;
		float L_1 = L_0.___fovLeftAngle_2;
		V_0 = L_1;
		// float right = frameDesc.fovRightAngle;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_2 = ___0_frameDesc;
		float L_3 = L_2.___fovRightAngle_3;
		V_1 = L_3;
		// float bottom = frameDesc.fovDownAngle;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_4 = ___0_frameDesc;
		float L_5 = L_4.___fovDownAngle_5;
		V_2 = L_5;
		// float top = frameDesc.fovTopAngle;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_6 = ___0_frameDesc;
		float L_7 = L_6.___fovTopAngle_4;
		V_3 = L_7;
		// float near = frameDesc.nearZ;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_8 = ___0_frameDesc;
		float L_9 = L_8.___nearZ_6;
		V_4 = L_9;
		// float far = frameDesc.farZ;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_10 = ___0_frameDesc;
		float L_11 = L_10.___farZ_7;
		V_5 = L_11;
		// float x = 2.0F / (right + left);
		float L_12 = V_1;
		float L_13 = V_0;
		V_6 = ((float)((2.0f)/((float)il2cpp_codegen_add(L_12, L_13))));
		// float y = 2.0F / (top + bottom);
		float L_14 = V_3;
		float L_15 = V_2;
		V_7 = ((float)((2.0f)/((float)il2cpp_codegen_add(L_14, L_15))));
		// float a = (right - left) / (right + left);
		float L_16 = V_1;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_0;
		V_8 = ((float)(((float)il2cpp_codegen_subtract(L_16, L_17))/((float)il2cpp_codegen_add(L_18, L_19))));
		// float b = (top - bottom) / (top + bottom);
		float L_20 = V_3;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_2;
		V_9 = ((float)(((float)il2cpp_codegen_subtract(L_20, L_21))/((float)il2cpp_codegen_add(L_22, L_23))));
		// if (float.IsInfinity(far))
		float L_24 = V_5;
		bool L_25;
		L_25 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_24, NULL);
		if (!L_25)
		{
			goto IL_0070;
		}
	}
	{
		// c = -1.0F;
		V_10 = (-1.0f);
		// d = -2.0f * near;
		float L_26 = V_4;
		V_11 = ((float)il2cpp_codegen_multiply((-2.0f), L_26));
		goto IL_0092;
	}

IL_0070:
	{
		// c = -(far + near) / (far - near);
		float L_27 = V_5;
		float L_28 = V_4;
		float L_29 = V_5;
		float L_30 = V_4;
		V_10 = ((float)(((-((float)il2cpp_codegen_add(L_27, L_28))))/((float)il2cpp_codegen_subtract(L_29, L_30))));
		// d = -(2.0F * far * near) / (far - near);
		float L_31 = V_5;
		float L_32 = V_4;
		float L_33 = V_5;
		float L_34 = V_4;
		V_11 = ((float)(((-((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_31)), L_32))))/((float)il2cpp_codegen_subtract(L_33, L_34))));
	}

IL_0092:
	{
		// float e = -1.0F;
		V_12 = (-1.0f);
		// Matrix4x4 m = new Matrix4x4
		// {
		//     m00 = x,
		//     m01 = 0,
		//     m02 = a,
		//     m03 = 0,
		//     m10 = 0,
		//     m11 = y,
		//     m12 = b,
		//     m13 = 0,
		//     m20 = 0,
		//     m21 = 0,
		//     m22 = c,
		//     m23 = d,
		//     m30 = 0,
		//     m31 = 0,
		//     m32 = e,
		//     m33 = 0
		// 
		// };
		il2cpp_codegen_initobj((&V_16), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		float L_35 = V_6;
		(&V_16)->___m00_0 = L_35;
		(&V_16)->___m01_4 = (0.0f);
		float L_36 = V_8;
		(&V_16)->___m02_8 = L_36;
		(&V_16)->___m03_12 = (0.0f);
		(&V_16)->___m10_1 = (0.0f);
		float L_37 = V_7;
		(&V_16)->___m11_5 = L_37;
		float L_38 = V_9;
		(&V_16)->___m12_9 = L_38;
		(&V_16)->___m13_13 = (0.0f);
		(&V_16)->___m20_2 = (0.0f);
		(&V_16)->___m21_6 = (0.0f);
		float L_39 = V_10;
		(&V_16)->___m22_10 = L_39;
		float L_40 = V_11;
		(&V_16)->___m23_14 = L_40;
		(&V_16)->___m30_3 = (0.0f);
		(&V_16)->___m31_7 = (0.0f);
		float L_41 = V_12;
		(&V_16)->___m32_11 = L_41;
		(&V_16)->___m33_15 = (0.0f);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_42 = V_16;
		// var createRotation = frameDesc.createPoseRotation;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_43 = ___0_frameDesc;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_44 = L_43.___createPoseRotation_1;
		V_13 = L_44;
		// var depthOrientation = new Quaternion(
		//     createRotation.x,
		//     createRotation.y,
		//     createRotation.z,
		//     createRotation.w
		// );
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_45 = V_13;
		float L_46 = L_45.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_47 = V_13;
		float L_48 = L_47.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_49 = V_13;
		float L_50 = L_49.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_51 = V_13;
		float L_52 = L_51.___w_4;
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&V_14), L_46, L_48, L_50, L_52, NULL);
		// var viewMatrix = Matrix4x4.TRS(frameDesc.createPoseLocation, depthOrientation,
		//     _scalingVector3).inverse;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_53 = ___0_frameDesc;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = L_53.___createPoseLocation_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55 = V_14;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ((EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var))->____scalingVector3_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_57;
		L_57 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_54, L_55, L_56, NULL);
		V_16 = L_57;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_58;
		L_58 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_16), NULL);
		V_15 = L_58;
		// return m * viewMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_59 = V_15;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_60;
		L_60 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_42, L_59, NULL);
		return L_60;
	}
}
// System.Void Meta.XR.EnvironmentDepth.EnvironmentDepthUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthUtils__cctor_m2DF5D2142435F391BB3D02EC4A0EFC82248879D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Vector3 _scalingVector3 = new(1, 1, -1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (1.0f), (1.0f), (-1.0f), /*hidden argument*/NULL);
		((EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var))->____scalingVector3_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDepthAvailable { get; private set; }
		bool L_0 = __this->___U3CIsDepthAvailableU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsDepthAvailable { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsDepthAvailableU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) 
{
	{
		// public Transform trackingSpace { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtrackingSpaceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))->___s_Logger_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) == ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_gshared_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = (uint32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_gshared_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
