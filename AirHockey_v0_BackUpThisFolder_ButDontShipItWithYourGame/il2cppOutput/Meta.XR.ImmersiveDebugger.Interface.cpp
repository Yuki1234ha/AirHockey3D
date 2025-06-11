#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<Meta.XR.ImmersiveDebugger.DebugColor,UnityEngine.Color>
struct Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Color>
struct Dictionary_2_t02712D85A437174C466DE8AAC0A7E57F4A02FDDA;
// System.Collections.Generic.IEqualityComparer`1<Meta.XR.ImmersiveDebugger.DebugColor>
struct IEqualityComparer_1_tF0D20B79733A194FA0CC42F21C1D1CE14591D365;
// System.Collections.Generic.Dictionary`2/KeyCollection<Meta.XR.ImmersiveDebugger.DebugColor,UnityEngine.Color>
struct KeyCollection_t57CEBB1B602FE04882CE758F7CB042C7D8C9E01A;
// System.Collections.Generic.Dictionary`2/ValueCollection<Meta.XR.ImmersiveDebugger.DebugColor,UnityEngine.Color>
struct ValueCollection_t0143C883A994F18285854FDEE959979F3A8DDDB1;
// System.Collections.Generic.Dictionary`2/Entry<Meta.XR.ImmersiveDebugger.DebugColor,UnityEngine.Color>[]
struct EntryU5BU5D_t7A2BD871CB06646C7104F1B74EFD2AA004F50D51;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Meta.XR.ImmersiveDebugger.CustomIntegrationConfigBase
struct CustomIntegrationConfigBase_tA2D5A7EC89347EEAC98055070E9D360EC4715BDC;
// Meta.XR.ImmersiveDebugger.DebugMember
struct DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Meta.XR.ImmersiveDebugger.ICustomIntegrationConfig
struct ICustomIntegrationConfig_tFCD8804FF3B4DD9472013D5B6899DD36C0651D11;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate
struct GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F;
// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate
struct GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D;
// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate
struct GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0;

IL2CPP_EXTERN_C RuntimeClass* CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICustomIntegrationConfig_tFCD8804FF3B4DD9472013D5B6899DD36C0651D11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m89EDCC103C21225DED231D8769B8BEA6C15036E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mFCCDCFAC6FB39BCAE4E7830446913C2218C4F9C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBAA4ED6CC042ECFC8C0082003BABEE36BCCE12F4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC7397FCA65423897A7D963ACE35CC40AC16BF066 
{
};

// System.Collections.Generic.Dictionary`2<Meta.XR.ImmersiveDebugger.DebugColor,UnityEngine.Color>
struct Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7A2BD871CB06646C7104F1B74EFD2AA004F50D51* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t57CEBB1B602FE04882CE758F7CB042C7D8C9E01A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0143C883A994F18285854FDEE959979F3A8DDDB1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig
struct CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF  : public RuntimeObject
{
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// Meta.XR.ImmersiveDebugger.DebugMember
struct DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// Meta.XR.ImmersiveDebugger.DebugGizmoType Meta.XR.ImmersiveDebugger.DebugMember::GizmoType
	int32_t ___GizmoType_1;
	// UnityEngine.Color Meta.XR.ImmersiveDebugger.DebugMember::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_2;
	// System.Boolean Meta.XR.ImmersiveDebugger.DebugMember::Tweakable
	bool ___Tweakable_3;
	// System.Single Meta.XR.ImmersiveDebugger.DebugMember::Min
	float ___Min_4;
	// System.Single Meta.XR.ImmersiveDebugger.DebugMember::Max
	float ___Max_5;
	// System.String Meta.XR.ImmersiveDebugger.DebugMember::Category
	String_t* ___Category_6;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate
struct GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F  : public MulticastDelegate_t
{
};

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate
struct GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D  : public MulticastDelegate_t
{
};

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate
struct GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfigBase
struct CustomIntegrationConfigBase_tA2D5A7EC89347EEAC98055070E9D360EC4715BDC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<Meta.XR.ImmersiveDebugger.DebugColor,UnityEngine.Color>

// System.Collections.Generic.Dictionary`2<Meta.XR.ImmersiveDebugger.DebugColor,UnityEngine.Color>

// System.Attribute

// System.Attribute

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig
struct CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields
{
	// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::GetCameraHandler
	GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* ___GetCameraHandler_0;
	// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::GetLeftControllerTransformHandler
	GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* ___GetLeftControllerTransformHandler_1;
	// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::GetRightControllerTransformHandler
	GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* ___GetRightControllerTransformHandler_2;
};

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.Void

// System.Void

// Meta.XR.ImmersiveDebugger.DebugMember
struct DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A_StaticFields
{
	// System.Collections.Generic.Dictionary`2<Meta.XR.ImmersiveDebugger.DebugColor,UnityEngine.Color> Meta.XR.ImmersiveDebugger.DebugMember::ParsedColors
	Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6* ___ParsedColors_0;
};

// Meta.XR.ImmersiveDebugger.DebugMember

// System.Delegate

// System.Delegate

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Transform

// UnityEngine.Transform

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate

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

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfigBase

// Meta.XR.ImmersiveDebugger.CustomIntegrationConfigBase
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Color>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD0B32534DC0940E22A1B0E8958C9CAA34C0625B4_gshared (Dictionary_2_t02712D85A437174C466DE8AAC0A7E57F4A02FDDA* __this, int32_t ___0_key, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m504750EDD1E892E04F507E93D04DABE88540A2C2_gshared (Dictionary_2_t02712D85A437174C466DE8AAC0A7E57F4A02FDDA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Color>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m99CB69B0EFEB92DD82BC26FEFAB1547D07E3B18C_gshared (Dictionary_2_t02712D85A437174C466DE8AAC0A7E57F4A02FDDA* __this, int32_t ___0_key, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCameraDelegate__ctor_mBE95805D1E07B8515BB1A1BEC6E722FA6048140D (GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::add_GetCameraHandler(Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_add_GetCameraHandler_m2CB915911752F24CE3A0DD370DBBF04BF4153C46 (GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* ___0_value, const RuntimeMethod* method) ;
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetLeftControllerTransformDelegate__ctor_m47B5A3B60F77255EE4ED73F869D0505B86FB3649 (GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::add_GetLeftControllerTransformHandler(Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_add_GetLeftControllerTransformHandler_mF8A8968A94AA936332633981CE73A77E961B23FC (GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* ___0_value, const RuntimeMethod* method) ;
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRightControllerTransformDelegate__ctor_mA50C965B2E8F5E1CDE853B7947B870191C52ECB7 (GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::add_GetRightControllerTransformHandler(Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_add_GetRightControllerTransformHandler_m87B72E57101D51268BDCF2055F5A4FDE98DF34E7 (GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* ___0_value, const RuntimeMethod* method) ;
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::remove_GetCameraHandler(Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_remove_GetCameraHandler_m3819BC074331701ED3D3EC09BCCC1A5468D2F2EA (GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* ___0_value, const RuntimeMethod* method) ;
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::remove_GetLeftControllerTransformHandler(Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_remove_GetLeftControllerTransformHandler_m86C114FAC4CC28DB0040055A72621458AF7487B1 (GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* ___0_value, const RuntimeMethod* method) ;
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::remove_GetRightControllerTransformHandler(Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_remove_GetRightControllerTransformHandler_mA6066A8091DEA0FF7254730CE55DDB76E73C46E5 (GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Camera Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetCameraDelegate_Invoke_mF0C2BD16291F0805BBD5D813330332389CF75824_inline (GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetLeftControllerTransformDelegate_Invoke_mBDD7372DA04E645773D618511F3EA0BD4F84DA6C_inline (GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetRightControllerTransformDelegate_Invoke_mA3E03A6AC793BBE9DC6B974E93429F6F70635CA9_inline (GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* __this, const RuntimeMethod* method) ;
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::SetupAllConfig(Meta.XR.ImmersiveDebugger.ICustomIntegrationConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_SetupAllConfig_m44E2A1766C87194074F81B59D3835F8F38194993 (RuntimeObject* ___0_customConfig, const RuntimeMethod* method) ;
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::ClearAllConfig(Meta.XR.ImmersiveDebugger.ICustomIntegrationConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_ClearAllConfig_mD56C62AD1DD7E8DD0FE78F7100C238E851888F9C (RuntimeObject* ___0_customConfig, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Meta.XR.ImmersiveDebugger.DebugColor,UnityEngine.Color>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mFCCDCFAC6FB39BCAE4E7830446913C2218C4F9C2 (Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6* __this, int32_t ___0_key, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6*, int32_t, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, const RuntimeMethod*))Dictionary_2_TryGetValue_mD0B32534DC0940E22A1B0E8958C9CAA34C0625B4_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Meta.XR.ImmersiveDebugger.DebugColor,UnityEngine.Color>::.ctor()
inline void Dictionary_2__ctor_mBAA4ED6CC042ECFC8C0082003BABEE36BCCE12F4 (Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6*, const RuntimeMethod*))Dictionary_2__ctor_m504750EDD1E892E04F507E93D04DABE88540A2C2_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Meta.XR.ImmersiveDebugger.DebugColor,UnityEngine.Color>::Add(TKey,TValue)
inline void Dictionary_2_Add_m89EDCC103C21225DED231D8769B8BEA6C15036E0 (Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6* __this, int32_t ___0_key, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6*, int32_t, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Dictionary_2_Add_m99CB69B0EFEB92DD82BC26FEFAB1547D07E3B18C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
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
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::add_GetCameraHandler(Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_add_GetCameraHandler_m2CB915911752F24CE3A0DD370DBBF04BF4153C46 (GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* V_0 = NULL;
	GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* V_1 = NULL;
	GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* V_2 = NULL;
	{
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_0 = ((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetCameraHandler_0;
		V_0 = L_0;
	}

IL_0006:
	{
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_1 = V_0;
		V_1 = L_1;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_2 = V_1;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F*)CastclassSealed((RuntimeObject*)L_4, GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F_il2cpp_TypeInfo_var));
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_5 = V_2;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_6 = V_1;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_7;
		L_7 = InterlockedCompareExchangeImpl<GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F*>((&((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetCameraHandler_0), L_5, L_6);
		V_0 = L_7;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_8 = V_0;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_9 = V_1;
		if ((!(((RuntimeObject*)(GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F*)L_8) == ((RuntimeObject*)(GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::remove_GetCameraHandler(Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_remove_GetCameraHandler_m3819BC074331701ED3D3EC09BCCC1A5468D2F2EA (GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* V_0 = NULL;
	GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* V_1 = NULL;
	GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* V_2 = NULL;
	{
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_0 = ((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetCameraHandler_0;
		V_0 = L_0;
	}

IL_0006:
	{
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_1 = V_0;
		V_1 = L_1;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_2 = V_1;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F*)CastclassSealed((RuntimeObject*)L_4, GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F_il2cpp_TypeInfo_var));
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_5 = V_2;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_6 = V_1;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_7;
		L_7 = InterlockedCompareExchangeImpl<GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F*>((&((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetCameraHandler_0), L_5, L_6);
		V_0 = L_7;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_8 = V_0;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_9 = V_1;
		if ((!(((RuntimeObject*)(GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F*)L_8) == ((RuntimeObject*)(GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::add_GetLeftControllerTransformHandler(Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_add_GetLeftControllerTransformHandler_mF8A8968A94AA936332633981CE73A77E961B23FC (GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* V_0 = NULL;
	GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* V_1 = NULL;
	GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* V_2 = NULL;
	{
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_0 = ((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetLeftControllerTransformHandler_1;
		V_0 = L_0;
	}

IL_0006:
	{
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_1 = V_0;
		V_1 = L_1;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_2 = V_1;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D*)CastclassSealed((RuntimeObject*)L_4, GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D_il2cpp_TypeInfo_var));
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_5 = V_2;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_6 = V_1;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_7;
		L_7 = InterlockedCompareExchangeImpl<GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D*>((&((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetLeftControllerTransformHandler_1), L_5, L_6);
		V_0 = L_7;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_8 = V_0;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_9 = V_1;
		if ((!(((RuntimeObject*)(GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D*)L_8) == ((RuntimeObject*)(GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::remove_GetLeftControllerTransformHandler(Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_remove_GetLeftControllerTransformHandler_m86C114FAC4CC28DB0040055A72621458AF7487B1 (GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* V_0 = NULL;
	GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* V_1 = NULL;
	GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* V_2 = NULL;
	{
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_0 = ((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetLeftControllerTransformHandler_1;
		V_0 = L_0;
	}

IL_0006:
	{
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_1 = V_0;
		V_1 = L_1;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_2 = V_1;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D*)CastclassSealed((RuntimeObject*)L_4, GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D_il2cpp_TypeInfo_var));
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_5 = V_2;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_6 = V_1;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_7;
		L_7 = InterlockedCompareExchangeImpl<GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D*>((&((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetLeftControllerTransformHandler_1), L_5, L_6);
		V_0 = L_7;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_8 = V_0;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_9 = V_1;
		if ((!(((RuntimeObject*)(GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D*)L_8) == ((RuntimeObject*)(GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::add_GetRightControllerTransformHandler(Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_add_GetRightControllerTransformHandler_m87B72E57101D51268BDCF2055F5A4FDE98DF34E7 (GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* V_0 = NULL;
	GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* V_1 = NULL;
	GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* V_2 = NULL;
	{
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_0 = ((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetRightControllerTransformHandler_2;
		V_0 = L_0;
	}

IL_0006:
	{
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_1 = V_0;
		V_1 = L_1;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_2 = V_1;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0*)CastclassSealed((RuntimeObject*)L_4, GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0_il2cpp_TypeInfo_var));
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_5 = V_2;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_6 = V_1;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_7;
		L_7 = InterlockedCompareExchangeImpl<GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0*>((&((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetRightControllerTransformHandler_2), L_5, L_6);
		V_0 = L_7;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_8 = V_0;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_9 = V_1;
		if ((!(((RuntimeObject*)(GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0*)L_8) == ((RuntimeObject*)(GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::remove_GetRightControllerTransformHandler(Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_remove_GetRightControllerTransformHandler_mA6066A8091DEA0FF7254730CE55DDB76E73C46E5 (GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* V_0 = NULL;
	GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* V_1 = NULL;
	GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* V_2 = NULL;
	{
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_0 = ((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetRightControllerTransformHandler_2;
		V_0 = L_0;
	}

IL_0006:
	{
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_1 = V_0;
		V_1 = L_1;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_2 = V_1;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0*)CastclassSealed((RuntimeObject*)L_4, GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0_il2cpp_TypeInfo_var));
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_5 = V_2;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_6 = V_1;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_7;
		L_7 = InterlockedCompareExchangeImpl<GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0*>((&((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetRightControllerTransformHandler_2), L_5, L_6);
		V_0 = L_7;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_8 = V_0;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_9 = V_1;
		if ((!(((RuntimeObject*)(GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0*)L_8) == ((RuntimeObject*)(GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::SetupAllConfig(Meta.XR.ImmersiveDebugger.ICustomIntegrationConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_SetupAllConfig_m44E2A1766C87194074F81B59D3835F8F38194993 (RuntimeObject* ___0_customConfig, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICustomIntegrationConfig_tFCD8804FF3B4DD9472013D5B6899DD36C0651D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetCameraHandler += customConfig.GetCamera;
		RuntimeObject* L_0 = ___0_customConfig;
		RuntimeObject* L_1 = L_0;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_2 = (GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F*)il2cpp_codegen_object_new(GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GetCameraDelegate__ctor_mBE95805D1E07B8515BB1A1BEC6E722FA6048140D(L_2, L_1, (intptr_t)((void*)GetInterfaceMethodInfo(L_1, 0, ICustomIntegrationConfig_tFCD8804FF3B4DD9472013D5B6899DD36C0651D11_il2cpp_TypeInfo_var)), NULL);
		CustomIntegrationConfig_add_GetCameraHandler_m2CB915911752F24CE3A0DD370DBBF04BF4153C46(L_2, NULL);
		// GetLeftControllerTransformHandler += customConfig.GetLeftControllerTransform;
		RuntimeObject* L_3 = ___0_customConfig;
		RuntimeObject* L_4 = L_3;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_5 = (GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D*)il2cpp_codegen_object_new(GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GetLeftControllerTransformDelegate__ctor_m47B5A3B60F77255EE4ED73F869D0505B86FB3649(L_5, L_4, (intptr_t)((void*)GetInterfaceMethodInfo(L_4, 1, ICustomIntegrationConfig_tFCD8804FF3B4DD9472013D5B6899DD36C0651D11_il2cpp_TypeInfo_var)), NULL);
		CustomIntegrationConfig_add_GetLeftControllerTransformHandler_mF8A8968A94AA936332633981CE73A77E961B23FC(L_5, NULL);
		// GetRightControllerTransformHandler += customConfig.GetRightControllerTransform;
		RuntimeObject* L_6 = ___0_customConfig;
		RuntimeObject* L_7 = L_6;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_8 = (GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0*)il2cpp_codegen_object_new(GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GetRightControllerTransformDelegate__ctor_mA50C965B2E8F5E1CDE853B7947B870191C52ECB7(L_8, L_7, (intptr_t)((void*)GetInterfaceMethodInfo(L_7, 2, ICustomIntegrationConfig_tFCD8804FF3B4DD9472013D5B6899DD36C0651D11_il2cpp_TypeInfo_var)), NULL);
		CustomIntegrationConfig_add_GetRightControllerTransformHandler_m87B72E57101D51268BDCF2055F5A4FDE98DF34E7(L_8, NULL);
		// }
		return;
	}
}
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::ClearAllConfig(Meta.XR.ImmersiveDebugger.ICustomIntegrationConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfig_ClearAllConfig_mD56C62AD1DD7E8DD0FE78F7100C238E851888F9C (RuntimeObject* ___0_customConfig, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICustomIntegrationConfig_tFCD8804FF3B4DD9472013D5B6899DD36C0651D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetCameraHandler -= customConfig.GetCamera;
		RuntimeObject* L_0 = ___0_customConfig;
		RuntimeObject* L_1 = L_0;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_2 = (GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F*)il2cpp_codegen_object_new(GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GetCameraDelegate__ctor_mBE95805D1E07B8515BB1A1BEC6E722FA6048140D(L_2, L_1, (intptr_t)((void*)GetInterfaceMethodInfo(L_1, 0, ICustomIntegrationConfig_tFCD8804FF3B4DD9472013D5B6899DD36C0651D11_il2cpp_TypeInfo_var)), NULL);
		CustomIntegrationConfig_remove_GetCameraHandler_m3819BC074331701ED3D3EC09BCCC1A5468D2F2EA(L_2, NULL);
		// GetLeftControllerTransformHandler -= customConfig.GetLeftControllerTransform;
		RuntimeObject* L_3 = ___0_customConfig;
		RuntimeObject* L_4 = L_3;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_5 = (GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D*)il2cpp_codegen_object_new(GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GetLeftControllerTransformDelegate__ctor_m47B5A3B60F77255EE4ED73F869D0505B86FB3649(L_5, L_4, (intptr_t)((void*)GetInterfaceMethodInfo(L_4, 1, ICustomIntegrationConfig_tFCD8804FF3B4DD9472013D5B6899DD36C0651D11_il2cpp_TypeInfo_var)), NULL);
		CustomIntegrationConfig_remove_GetLeftControllerTransformHandler_m86C114FAC4CC28DB0040055A72621458AF7487B1(L_5, NULL);
		// GetRightControllerTransformHandler -= customConfig.GetRightControllerTransform;
		RuntimeObject* L_6 = ___0_customConfig;
		RuntimeObject* L_7 = L_6;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_8 = (GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0*)il2cpp_codegen_object_new(GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GetRightControllerTransformDelegate__ctor_mA50C965B2E8F5E1CDE853B7947B870191C52ECB7(L_8, L_7, (intptr_t)((void*)GetInterfaceMethodInfo(L_7, 2, ICustomIntegrationConfig_tFCD8804FF3B4DD9472013D5B6899DD36C0651D11_il2cpp_TypeInfo_var)), NULL);
		CustomIntegrationConfig_remove_GetRightControllerTransformHandler_mA6066A8091DEA0FF7254730CE55DDB76E73C46E5(L_8, NULL);
		// }
		return;
	}
}
// UnityEngine.Camera Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::GetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CustomIntegrationConfig_GetCamera_mEDE04EC5F6A566321B919F4A733F84D6F10A3454 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* G_B2_0 = NULL;
	GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* G_B1_0 = NULL;
	{
		// return GetCameraHandler?.Invoke();
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_0 = ((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetCameraHandler_0;
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = GetCameraDelegate_Invoke_mF0C2BD16291F0805BBD5D813330332389CF75824_inline(G_B2_0, NULL);
		return L_2;
	}
}
// UnityEngine.Transform Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::GetLeftControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CustomIntegrationConfig_GetLeftControllerTransform_m74977FE2738446FECD0D616E0CA2F8788D4CF891 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* G_B2_0 = NULL;
	GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* G_B1_0 = NULL;
	{
		// return GetLeftControllerTransformHandler?.Invoke();
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_0 = ((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetLeftControllerTransformHandler_1;
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GetLeftControllerTransformDelegate_Invoke_mBDD7372DA04E645773D618511F3EA0BD4F84DA6C_inline(G_B2_0, NULL);
		return L_2;
	}
}
// UnityEngine.Transform Meta.XR.ImmersiveDebugger.CustomIntegrationConfig::GetRightControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CustomIntegrationConfig_GetRightControllerTransform_m85D60EA264E5EBA3D5BD2A09F34C9852958DF58E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* G_B2_0 = NULL;
	GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* G_B1_0 = NULL;
	{
		// return GetRightControllerTransformHandler?.Invoke();
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_0 = ((CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_StaticFields*)il2cpp_codegen_static_fields_for(CustomIntegrationConfig_tF7050084DC0103CFC864B66B453FE6C1D3D4D1EF_il2cpp_TypeInfo_var))->___GetRightControllerTransformHandler_2;
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GetRightControllerTransformDelegate_Invoke_mA3E03A6AC793BBE9DC6B974E93429F6F70635CA9_inline(G_B2_0, NULL);
		return L_2;
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
Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetCameraDelegate_Invoke_mF0C2BD16291F0805BBD5D813330332389CF75824_Multicast(GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* currentDelegate = reinterpret_cast<GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F*>(delegatesToInvoke[i]);
		typedef Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetCameraDelegate_Invoke_mF0C2BD16291F0805BBD5D813330332389CF75824_OpenInst(GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* __this, const RuntimeMethod* method)
{
	typedef Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetCameraDelegate_Invoke_mF0C2BD16291F0805BBD5D813330332389CF75824_OpenStatic(GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* __this, const RuntimeMethod* method)
{
	typedef Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetCameraDelegate_Invoke_mF0C2BD16291F0805BBD5D813330332389CF75824_OpenStaticInvoker(GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(__this->___method_ptr_0, method, NULL);
}
Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetCameraDelegate_Invoke_mF0C2BD16291F0805BBD5D813330332389CF75824_ClosedStaticInvoker(GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCameraDelegate__ctor_mBE95805D1E07B8515BB1A1BEC6E722FA6048140D (GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetCameraDelegate_Invoke_mF0C2BD16291F0805BBD5D813330332389CF75824_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetCameraDelegate_Invoke_mF0C2BD16291F0805BBD5D813330332389CF75824_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetCameraDelegate_Invoke_mF0C2BD16291F0805BBD5D813330332389CF75824_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&GetCameraDelegate_Invoke_mF0C2BD16291F0805BBD5D813330332389CF75824_Multicast;
}
// UnityEngine.Camera Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetCameraDelegate_Invoke_mF0C2BD16291F0805BBD5D813330332389CF75824 (GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* __this, const RuntimeMethod* method) 
{
	typedef Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetCameraDelegate_BeginInvoke_mE9E25AA56311EF957EBC18156E9A5135AB26CDF9 (GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// UnityEngine.Camera Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetCameraDelegate_EndInvoke_mD131D65511047387210FB3C809F61257AA6A947F (GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetLeftControllerTransformDelegate_Invoke_mBDD7372DA04E645773D618511F3EA0BD4F84DA6C_Multicast(GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* currentDelegate = reinterpret_cast<GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D*>(delegatesToInvoke[i]);
		typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetLeftControllerTransformDelegate_Invoke_mBDD7372DA04E645773D618511F3EA0BD4F84DA6C_OpenInst(GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* __this, const RuntimeMethod* method)
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetLeftControllerTransformDelegate_Invoke_mBDD7372DA04E645773D618511F3EA0BD4F84DA6C_OpenStatic(GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* __this, const RuntimeMethod* method)
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetLeftControllerTransformDelegate_Invoke_mBDD7372DA04E645773D618511F3EA0BD4F84DA6C_OpenStaticInvoker(GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(__this->___method_ptr_0, method, NULL);
}
Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetLeftControllerTransformDelegate_Invoke_mBDD7372DA04E645773D618511F3EA0BD4F84DA6C_ClosedStaticInvoker(GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetLeftControllerTransformDelegate__ctor_m47B5A3B60F77255EE4ED73F869D0505B86FB3649 (GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetLeftControllerTransformDelegate_Invoke_mBDD7372DA04E645773D618511F3EA0BD4F84DA6C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetLeftControllerTransformDelegate_Invoke_mBDD7372DA04E645773D618511F3EA0BD4F84DA6C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetLeftControllerTransformDelegate_Invoke_mBDD7372DA04E645773D618511F3EA0BD4F84DA6C_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&GetLeftControllerTransformDelegate_Invoke_mBDD7372DA04E645773D618511F3EA0BD4F84DA6C_Multicast;
}
// UnityEngine.Transform Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetLeftControllerTransformDelegate_Invoke_mBDD7372DA04E645773D618511F3EA0BD4F84DA6C (GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* __this, const RuntimeMethod* method) 
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetLeftControllerTransformDelegate_BeginInvoke_mDD3FC86531E7771FB1C1665165728A94C12EBC6A (GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// UnityEngine.Transform Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetLeftControllerTransformDelegate_EndInvoke_m837CB988C9C82D71C7BB6F02170CAC63B22D3838 (GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetRightControllerTransformDelegate_Invoke_mA3E03A6AC793BBE9DC6B974E93429F6F70635CA9_Multicast(GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* currentDelegate = reinterpret_cast<GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0*>(delegatesToInvoke[i]);
		typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetRightControllerTransformDelegate_Invoke_mA3E03A6AC793BBE9DC6B974E93429F6F70635CA9_OpenInst(GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* __this, const RuntimeMethod* method)
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetRightControllerTransformDelegate_Invoke_mA3E03A6AC793BBE9DC6B974E93429F6F70635CA9_OpenStatic(GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* __this, const RuntimeMethod* method)
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetRightControllerTransformDelegate_Invoke_mA3E03A6AC793BBE9DC6B974E93429F6F70635CA9_OpenStaticInvoker(GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(__this->___method_ptr_0, method, NULL);
}
Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetRightControllerTransformDelegate_Invoke_mA3E03A6AC793BBE9DC6B974E93429F6F70635CA9_ClosedStaticInvoker(GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRightControllerTransformDelegate__ctor_mA50C965B2E8F5E1CDE853B7947B870191C52ECB7 (GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetRightControllerTransformDelegate_Invoke_mA3E03A6AC793BBE9DC6B974E93429F6F70635CA9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetRightControllerTransformDelegate_Invoke_mA3E03A6AC793BBE9DC6B974E93429F6F70635CA9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetRightControllerTransformDelegate_Invoke_mA3E03A6AC793BBE9DC6B974E93429F6F70635CA9_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&GetRightControllerTransformDelegate_Invoke_mA3E03A6AC793BBE9DC6B974E93429F6F70635CA9_Multicast;
}
// UnityEngine.Transform Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetRightControllerTransformDelegate_Invoke_mA3E03A6AC793BBE9DC6B974E93429F6F70635CA9 (GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* __this, const RuntimeMethod* method) 
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetRightControllerTransformDelegate_BeginInvoke_mEAC2B78E3E654314CBCA928BD7258629930C6729 (GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// UnityEngine.Transform Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetRightControllerTransformDelegate_EndInvoke_m3C9814263CB05AD4AF37D9E0735334EDB9CBCBC7 (GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfigBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfigBase_Awake_mE343DD448130865AD3706C93DFBB62E0D5F4CD78 (CustomIntegrationConfigBase_tA2D5A7EC89347EEAC98055070E9D360EC4715BDC* __this, const RuntimeMethod* method) 
{
	{
		// CustomIntegrationConfig.SetupAllConfig(this);
		CustomIntegrationConfig_SetupAllConfig_m44E2A1766C87194074F81B59D3835F8F38194993(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfigBase::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfigBase_OnDestroy_mB07679E1AA9B42D79B1E3D30192010B56F0640CC (CustomIntegrationConfigBase_tA2D5A7EC89347EEAC98055070E9D360EC4715BDC* __this, const RuntimeMethod* method) 
{
	{
		// CustomIntegrationConfig.ClearAllConfig(this);
		CustomIntegrationConfig_ClearAllConfig_mD56C62AD1DD7E8DD0FE78F7100C238E851888F9C(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Camera Meta.XR.ImmersiveDebugger.CustomIntegrationConfigBase::GetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CustomIntegrationConfigBase_GetCamera_m00168AB60C2B28A6286AF3D29FA7ED81F24E4EAB (CustomIntegrationConfigBase_tA2D5A7EC89347EEAC98055070E9D360EC4715BDC* __this, const RuntimeMethod* method) 
{
	{
		// return null;
		return (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
	}
}
// UnityEngine.Transform Meta.XR.ImmersiveDebugger.CustomIntegrationConfigBase::GetLeftControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CustomIntegrationConfigBase_GetLeftControllerTransform_mE831FB4E8953AC59121633BEB6A2C86A1E968E92 (CustomIntegrationConfigBase_tA2D5A7EC89347EEAC98055070E9D360EC4715BDC* __this, const RuntimeMethod* method) 
{
	{
		// return null;
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}
}
// UnityEngine.Transform Meta.XR.ImmersiveDebugger.CustomIntegrationConfigBase::GetRightControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* CustomIntegrationConfigBase_GetRightControllerTransform_m91C228CA4277A2B8DBEAE4131AD2568A9F033220 (CustomIntegrationConfigBase_tA2D5A7EC89347EEAC98055070E9D360EC4715BDC* __this, const RuntimeMethod* method) 
{
	{
		// return null;
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}
}
// System.Void Meta.XR.ImmersiveDebugger.CustomIntegrationConfigBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomIntegrationConfigBase__ctor_mE96705B31E26A03C2FEDA28BCE42594BA3E59993 (CustomIntegrationConfigBase_tA2D5A7EC89347EEAC98055070E9D360EC4715BDC* __this, const RuntimeMethod* method) 
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
// System.Void Meta.XR.ImmersiveDebugger.DebugMember::.ctor(Meta.XR.ImmersiveDebugger.DebugColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugMember__ctor_m23524BF378E4EA831123889D02C9A659855D65EA (DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A* __this, int32_t ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mFCCDCFAC6FB39BCAE4E7830446913C2218C4F9C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Color Color = UnityEngine.Color.gray;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		__this->___Color_2 = L_0;
		// public float Max = 1.0f;
		__this->___Max_5 = (1.0f);
		// public DebugMember(DebugColor color = DebugColor.Gray)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// ParsedColors.TryGetValue(color, out Color);
		il2cpp_codegen_runtime_class_init_inline(DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A_il2cpp_TypeInfo_var);
		Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6* L_1 = ((DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A_StaticFields*)il2cpp_codegen_static_fields_for(DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A_il2cpp_TypeInfo_var))->___ParsedColors_0;
		int32_t L_2 = ___0_color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3 = (&__this->___Color_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mFCCDCFAC6FB39BCAE4E7830446913C2218C4F9C2(L_1, L_2, L_3, Dictionary_2_TryGetValue_mFCCDCFAC6FB39BCAE4E7830446913C2218C4F9C2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.XR.ImmersiveDebugger.DebugMember::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugMember__cctor_mCDE94112D1AD0353A21B35FC7D2A1DD84FA62566 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m89EDCC103C21225DED231D8769B8BEA6C15036E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBAA4ED6CC042ECFC8C0082003BABEE36BCCE12F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<DebugColor, Color> ParsedColors = new Dictionary<DebugColor, Color>()
		// {
		//     { DebugColor.Red, UnityEngine.Color.red },
		//     { DebugColor.Gray, UnityEngine.Color.gray }
		// };
		Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6* L_0 = (Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6*)il2cpp_codegen_object_new(Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mBAA4ED6CC042ECFC8C0082003BABEE36BCCE12F4(L_0, Dictionary_2__ctor_mBAA4ED6CC042ECFC8C0082003BABEE36BCCE12F4_RuntimeMethod_var);
		Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6* L_1 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_1);
		Dictionary_2_Add_m89EDCC103C21225DED231D8769B8BEA6C15036E0(L_1, 0, L_2, Dictionary_2_Add_m89EDCC103C21225DED231D8769B8BEA6C15036E0_RuntimeMethod_var);
		Dictionary_2_tFB050FB91677DA51BF54AE7DAB9B3CEB02ED2AF6* L_3 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_3);
		Dictionary_2_Add_m89EDCC103C21225DED231D8769B8BEA6C15036E0(L_3, 1, L_4, Dictionary_2_Add_m89EDCC103C21225DED231D8769B8BEA6C15036E0_RuntimeMethod_var);
		((DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A_StaticFields*)il2cpp_codegen_static_fields_for(DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A_il2cpp_TypeInfo_var))->___ParsedColors_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A_StaticFields*)il2cpp_codegen_static_fields_for(DebugMember_tF9F428EB2AB116C284A469FDBF48467B7BB9708A_il2cpp_TypeInfo_var))->___ParsedColors_0), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetCameraDelegate_Invoke_mF0C2BD16291F0805BBD5D813330332389CF75824_inline (GetCameraDelegate_t6656012307EDCA92ED0C70BC60F9690D39C4793F* __this, const RuntimeMethod* method) 
{
	typedef Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetLeftControllerTransformDelegate_Invoke_mBDD7372DA04E645773D618511F3EA0BD4F84DA6C_inline (GetLeftControllerTransformDelegate_t3E242C6D8768FC9FC65FEF1CEB27278B9E14CA4D* __this, const RuntimeMethod* method) 
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetRightControllerTransformDelegate_Invoke_mA3E03A6AC793BBE9DC6B974E93429F6F70635CA9_inline (GetRightControllerTransformDelegate_t05D09FB2276D34E3CCD477BD774DA92286498DF0* __this, const RuntimeMethod* method) 
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
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
