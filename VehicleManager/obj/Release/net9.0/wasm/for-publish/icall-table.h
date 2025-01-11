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
1404,
1405,
7718,
7719,
7721,
7722,
7723,
7724,
7725,
7727,
7728,
7729,
7746,
7748,
7753,
7755,
7757,
7759,
7810,
7811,
7813,
7814,
7815,
7816,
7817,
7819,
7821,
8817,
8821,
8823,
8824,
8825,
8826,
9242,
9243,
9244,
9245,
9263,
9264,
9265,
9309,
9375,
9378,
9386,
9387,
9388,
9389,
9390,
9671,
9672,
9676,
9677,
9706,
9740,
9747,
9754,
9765,
9769,
9792,
9870,
9872,
9882,
9884,
9885,
9886,
9893,
9908,
9928,
9929,
9937,
9939,
9946,
9947,
9950,
9952,
9957,
9963,
9964,
9971,
9973,
9985,
9988,
9989,
9990,
10001,
10011,
10017,
10018,
10019,
10021,
10022,
10039,
10041,
10056,
10076,
10077,
10104,
10134,
10135,
10623,
10707,
10708,
10893,
10894,
10899,
10900,
10901,
10906,
10958,
11360,
11361,
11563,
11567,
11577,
12427,
12448,
12450,
12452,
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
// token 1404,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1405,
ves_icall_System_ValueType_Equals_raw,
// token 7718,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7719,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7721,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7722,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7723,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7724,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7725,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7727,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7728,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7729,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7746,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7748,
mono_monitor_exit_icall_raw,
// token 7753,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7755,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7757,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7759,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7810,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7811,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7813,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7814,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7815,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7816,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7817,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7819,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7821,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8817,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8821,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8823,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8824,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8825,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8826,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9242,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9243,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9244,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9245,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9263,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9264,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9265,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9309,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9375,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9378,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9386,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9387,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9388,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9389,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9390,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 9671,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9672,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9676,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9677,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9706,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9740,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9747,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9754,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9765,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9769,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9792,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9870,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9872,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9882,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9884,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9885,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9886,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9893,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9908,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9928,
ves_icall_reflection_get_token_raw,
// token 9929,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9937,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9939,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9946,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9947,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9950,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9952,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9957,
ves_icall_reflection_get_token_raw,
// token 9963,
ves_icall_get_method_info_raw,
// token 9964,
ves_icall_get_method_attributes,
// token 9971,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9973,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9985,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9988,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9989,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9990,
ves_icall_reflection_get_token_raw,
// token 10001,
ves_icall_InternalInvoke_raw,
// token 10011,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10017,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10018,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10019,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10021,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10022,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10039,
ves_icall_InvokeClassConstructor_raw,
// token 10041,
ves_icall_InternalInvoke_raw,
// token 10056,
ves_icall_reflection_get_token_raw,
// token 10076,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10077,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10104,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10134,
ves_icall_reflection_get_token_raw,
// token 10135,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10623,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10707,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10708,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10893,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10894,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10899,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10900,
ves_icall_ModuleBuilder_getToken_raw,
// token 10901,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10906,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10958,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11360,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11361,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11563,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 11567,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 11577,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 12427,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12448,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12450,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12452,
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
