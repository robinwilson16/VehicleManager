#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
187,
198,
199,
200,
201,
202,
203,
204,
205,
206,
209,
210,
320,
321,
322,
345,
346,
347,
364,
365,
366,
464,
465,
466,
469,
505,
506,
508,
510,
512,
514,
519,
527,
528,
529,
530,
531,
532,
533,
534,
615,
624,
625,
693,
699,
702,
704,
709,
710,
712,
713,
717,
718,
720,
721,
724,
725,
726,
729,
731,
734,
736,
738,
747,
812,
814,
816,
826,
827,
828,
830,
836,
837,
838,
839,
840,
848,
849,
850,
854,
855,
857,
861,
862,
863,
1155,
1314,
1315,
7588,
7589,
7591,
7592,
7593,
7594,
7595,
7597,
7598,
7599,
7616,
7618,
7623,
7625,
7627,
7629,
7680,
7681,
7683,
7684,
7685,
7686,
7687,
7689,
7691,
8686,
8690,
8692,
8693,
8694,
8695,
9111,
9112,
9113,
9114,
9132,
9133,
9134,
9178,
9244,
9247,
9255,
9256,
9257,
9258,
9259,
9539,
9543,
9544,
9573,
9607,
9614,
9621,
9632,
9636,
9659,
9737,
9739,
9749,
9751,
9752,
9753,
9760,
9775,
9795,
9796,
9804,
9806,
9813,
9814,
9817,
9819,
9824,
9830,
9831,
9838,
9840,
9852,
9855,
9856,
9857,
9868,
9878,
9884,
9885,
9886,
9888,
9889,
9906,
9908,
9923,
9943,
9944,
9971,
10001,
10002,
10487,
10571,
10572,
10757,
10758,
10763,
10764,
10765,
10770,
10822,
11221,
11222,
11418,
11422,
11432,
12243,
12264,
12266,
12268,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 187,
ves_icall_System_Array_InternalCreate,
// token 198,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 199,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 200,
ves_icall_System_Array_CanChangePrimitive,
// token 201,
ves_icall_System_Array_FastCopy,
// token 202,
ves_icall_System_Array_GetLengthInternal_raw,
// token 203,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 204,
ves_icall_System_Array_GetGenericValue_icall,
// token 205,
ves_icall_System_Array_GetValueImpl_raw,
// token 206,
ves_icall_System_Array_SetGenericValue_icall,
// token 209,
ves_icall_System_Array_SetValueImpl_raw,
// token 210,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 320,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 321,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 322,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 345,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 346,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 347,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 364,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 365,
ves_icall_System_Enum_InternalGetCorElementType,
// token 366,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 464,
ves_icall_System_Environment_get_ProcessorCount,
// token 465,
ves_icall_System_Environment_get_TickCount,
// token 466,
ves_icall_System_Environment_get_TickCount64,
// token 469,
ves_icall_System_Environment_FailFast_raw,
// token 505,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 506,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 508,
ves_icall_System_GC_SuppressFinalize_raw,
// token 510,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 512,
ves_icall_System_GC_GetGCMemoryInfo,
// token 514,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 519,
ves_icall_System_Object_MemberwiseClone_raw,
// token 527,
ves_icall_System_Math_Ceiling,
// token 528,
ves_icall_System_Math_Cos,
// token 529,
ves_icall_System_Math_Floor,
// token 530,
ves_icall_System_Math_Pow,
// token 531,
ves_icall_System_Math_Sin,
// token 532,
ves_icall_System_Math_Sqrt,
// token 533,
ves_icall_System_Math_Tan,
// token 534,
ves_icall_System_Math_ModF,
// token 615,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 624,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 625,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 693,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 699,
ves_icall_RuntimeType_make_array_type_raw,
// token 702,
ves_icall_RuntimeType_make_byref_type_raw,
// token 704,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 709,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 710,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 712,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 713,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 717,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 718,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 720,
ves_icall_System_RuntimeType_getFullName_raw,
// token 721,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 724,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 725,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 726,
ves_icall_RuntimeType_GetFields_native_raw,
// token 729,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 731,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 734,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 736,
ves_icall_RuntimeType_GetName_raw,
// token 738,
ves_icall_RuntimeType_GetNamespace_raw,
// token 747,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 812,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 814,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 816,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 826,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 827,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 828,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 830,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 836,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 837,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 838,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 839,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 840,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 848,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 849,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 850,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 854,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 855,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 857,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 861,
ves_icall_System_String_FastAllocateString_raw,
// token 862,
ves_icall_System_String_InternalIsInterned_raw,
// token 863,
ves_icall_System_String_InternalIntern_raw,
// token 1155,
ves_icall_System_Type_internal_from_handle_raw,
// token 1314,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1315,
ves_icall_System_ValueType_Equals_raw,
// token 7588,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7589,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7591,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7592,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7593,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7594,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7595,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7597,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7598,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7599,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7616,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7618,
mono_monitor_exit_icall_raw,
// token 7623,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7625,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7627,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7629,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7680,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7681,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7683,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7684,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7685,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7686,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7687,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7689,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7691,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8686,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8690,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8692,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8693,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8694,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8695,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9111,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9112,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9113,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9114,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9132,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9133,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9134,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9178,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9244,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9247,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9255,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9256,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9257,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9258,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9259,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 9539,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9543,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9544,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9573,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9607,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9614,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9621,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9632,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9636,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9659,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9737,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9739,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9749,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9751,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9752,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9753,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9760,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9775,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9795,
ves_icall_reflection_get_token_raw,
// token 9796,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9804,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9806,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9813,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9814,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9817,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9819,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9824,
ves_icall_reflection_get_token_raw,
// token 9830,
ves_icall_get_method_info_raw,
// token 9831,
ves_icall_get_method_attributes,
// token 9838,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9840,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9852,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9855,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9856,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9857,
ves_icall_reflection_get_token_raw,
// token 9868,
ves_icall_InternalInvoke_raw,
// token 9878,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9884,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9885,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9886,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9888,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9889,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9906,
ves_icall_InvokeClassConstructor_raw,
// token 9908,
ves_icall_InternalInvoke_raw,
// token 9923,
ves_icall_reflection_get_token_raw,
// token 9943,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 9944,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9971,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10001,
ves_icall_reflection_get_token_raw,
// token 10002,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10487,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10571,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10572,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10757,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10758,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10763,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10764,
ves_icall_ModuleBuilder_getToken_raw,
// token 10765,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10770,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10822,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11221,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11222,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11418,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 11422,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 11432,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 12243,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12264,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12266,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12268,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
};
