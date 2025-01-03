#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
188,
201,
202,
203,
204,
205,
206,
207,
208,
209,
212,
213,
214,
382,
383,
384,
407,
408,
409,
426,
427,
428,
545,
546,
547,
550,
586,
587,
589,
591,
593,
595,
600,
608,
609,
610,
611,
612,
613,
614,
615,
698,
707,
708,
777,
783,
786,
788,
793,
794,
796,
797,
801,
802,
804,
805,
808,
809,
810,
813,
815,
818,
820,
822,
831,
897,
899,
901,
911,
912,
913,
915,
921,
922,
923,
924,
925,
933,
934,
935,
939,
940,
942,
946,
947,
948,
1240,
1403,
1404,
7714,
7715,
7717,
7718,
7719,
7720,
7721,
7723,
7724,
7725,
7742,
7744,
7749,
7751,
7753,
7755,
7806,
7807,
7809,
7810,
7811,
7812,
7813,
7815,
7817,
8813,
8817,
8819,
8820,
8821,
8822,
9238,
9239,
9240,
9241,
9259,
9260,
9261,
9305,
9371,
9374,
9382,
9383,
9384,
9385,
9386,
9667,
9668,
9672,
9673,
9702,
9736,
9743,
9750,
9761,
9765,
9788,
9866,
9868,
9878,
9880,
9881,
9882,
9889,
9904,
9924,
9925,
9933,
9935,
9942,
9943,
9946,
9948,
9953,
9959,
9960,
9967,
9969,
9981,
9984,
9985,
9986,
9997,
10007,
10013,
10014,
10015,
10017,
10018,
10035,
10037,
10052,
10072,
10073,
10100,
10130,
10131,
10619,
10703,
10704,
10889,
10890,
10895,
10896,
10897,
10902,
10954,
11356,
11357,
11553,
11557,
11567,
12417,
12438,
12440,
12442,
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
void ves_icall_System_Array_InitializeInternal_raw (int,int);
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
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
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
// token 188,
ves_icall_System_Array_InternalCreate,
// token 201,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 202,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 203,
ves_icall_System_Array_CanChangePrimitive,
// token 204,
ves_icall_System_Array_FastCopy,
// token 205,
ves_icall_System_Array_GetLengthInternal_raw,
// token 206,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 207,
ves_icall_System_Array_GetGenericValue_icall,
// token 208,
ves_icall_System_Array_GetValueImpl_raw,
// token 209,
ves_icall_System_Array_SetGenericValue_icall,
// token 212,
ves_icall_System_Array_SetValueImpl_raw,
// token 213,
ves_icall_System_Array_InitializeInternal_raw,
// token 214,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 382,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 383,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 384,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 407,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 408,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 409,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 426,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 427,
ves_icall_System_Enum_InternalGetCorElementType,
// token 428,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 545,
ves_icall_System_Environment_get_ProcessorCount,
// token 546,
ves_icall_System_Environment_get_TickCount,
// token 547,
ves_icall_System_Environment_get_TickCount64,
// token 550,
ves_icall_System_Environment_FailFast_raw,
// token 586,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 587,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 589,
ves_icall_System_GC_SuppressFinalize_raw,
// token 591,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 593,
ves_icall_System_GC_GetGCMemoryInfo,
// token 595,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 600,
ves_icall_System_Object_MemberwiseClone_raw,
// token 608,
ves_icall_System_Math_Ceiling,
// token 609,
ves_icall_System_Math_Cos,
// token 610,
ves_icall_System_Math_Floor,
// token 611,
ves_icall_System_Math_Pow,
// token 612,
ves_icall_System_Math_Sin,
// token 613,
ves_icall_System_Math_Sqrt,
// token 614,
ves_icall_System_Math_Tan,
// token 615,
ves_icall_System_Math_ModF,
// token 698,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 707,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 708,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 777,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 783,
ves_icall_RuntimeType_make_array_type_raw,
// token 786,
ves_icall_RuntimeType_make_byref_type_raw,
// token 788,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 793,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 794,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 796,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 797,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 801,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 802,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 804,
ves_icall_System_RuntimeType_getFullName_raw,
// token 805,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 808,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 809,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 810,
ves_icall_RuntimeType_GetFields_native_raw,
// token 813,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 815,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 818,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 820,
ves_icall_RuntimeType_GetName_raw,
// token 822,
ves_icall_RuntimeType_GetNamespace_raw,
// token 831,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 897,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 899,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 901,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 911,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 912,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 913,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 915,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 921,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 922,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 923,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 924,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 925,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 933,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 934,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 935,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 939,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 940,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 942,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 946,
ves_icall_System_String_FastAllocateString_raw,
// token 947,
ves_icall_System_String_InternalIsInterned_raw,
// token 948,
ves_icall_System_String_InternalIntern_raw,
// token 1240,
ves_icall_System_Type_internal_from_handle_raw,
// token 1403,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1404,
ves_icall_System_ValueType_Equals_raw,
// token 7714,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7715,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7717,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7718,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7719,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7720,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7721,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7723,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7724,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7725,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7742,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7744,
mono_monitor_exit_icall_raw,
// token 7749,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7751,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7753,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7755,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7806,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7807,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7809,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7810,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7811,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7812,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7813,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7815,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7817,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8813,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8817,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8819,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8820,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8821,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8822,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9238,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9239,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9240,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9241,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9259,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9260,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9261,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9305,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9371,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9374,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9382,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9383,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9384,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9385,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9386,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 9667,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9668,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9672,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9673,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9702,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9736,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9743,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9750,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9761,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9765,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9788,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9866,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9868,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9878,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9880,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9881,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9882,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9889,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9904,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9924,
ves_icall_reflection_get_token_raw,
// token 9925,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9933,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9935,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9942,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9943,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9946,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9948,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9953,
ves_icall_reflection_get_token_raw,
// token 9959,
ves_icall_get_method_info_raw,
// token 9960,
ves_icall_get_method_attributes,
// token 9967,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9969,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9981,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9984,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9985,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9986,
ves_icall_reflection_get_token_raw,
// token 9997,
ves_icall_InternalInvoke_raw,
// token 10007,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10013,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10014,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10015,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10017,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10018,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10035,
ves_icall_InvokeClassConstructor_raw,
// token 10037,
ves_icall_InternalInvoke_raw,
// token 10052,
ves_icall_reflection_get_token_raw,
// token 10072,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10073,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10100,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10130,
ves_icall_reflection_get_token_raw,
// token 10131,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10619,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10703,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10704,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10889,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10890,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10895,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10896,
ves_icall_ModuleBuilder_getToken_raw,
// token 10897,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10902,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10954,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11356,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11357,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11553,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 11557,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 11567,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 12417,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12438,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12440,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12442,
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
