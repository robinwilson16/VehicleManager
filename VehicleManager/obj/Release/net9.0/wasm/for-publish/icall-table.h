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
483,
484,
485,
488,
524,
525,
527,
529,
531,
533,
538,
546,
547,
548,
549,
550,
551,
552,
553,
636,
645,
646,
714,
720,
723,
725,
730,
731,
733,
734,
738,
739,
741,
742,
745,
746,
747,
750,
752,
755,
757,
759,
768,
834,
836,
838,
848,
849,
850,
852,
858,
859,
860,
861,
862,
870,
871,
872,
876,
877,
879,
883,
884,
885,
1177,
1337,
1338,
7613,
7614,
7616,
7617,
7618,
7619,
7620,
7622,
7623,
7624,
7641,
7643,
7648,
7650,
7652,
7654,
7705,
7706,
7708,
7709,
7710,
7711,
7712,
7714,
7716,
8711,
8715,
8717,
8718,
8719,
8720,
9136,
9137,
9138,
9139,
9157,
9158,
9159,
9203,
9269,
9272,
9280,
9281,
9282,
9283,
9284,
9565,
9566,
9570,
9571,
9600,
9634,
9641,
9648,
9659,
9663,
9686,
9764,
9766,
9776,
9778,
9779,
9780,
9787,
9802,
9822,
9823,
9831,
9833,
9840,
9841,
9844,
9846,
9851,
9857,
9858,
9865,
9867,
9879,
9882,
9883,
9884,
9895,
9905,
9911,
9912,
9913,
9915,
9916,
9933,
9935,
9950,
9970,
9971,
9998,
10028,
10029,
10515,
10599,
10600,
10785,
10786,
10791,
10792,
10793,
10798,
10850,
11249,
11250,
11446,
11450,
11460,
12272,
12293,
12295,
12297,
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
// token 483,
ves_icall_System_Environment_get_ProcessorCount,
// token 484,
ves_icall_System_Environment_get_TickCount,
// token 485,
ves_icall_System_Environment_get_TickCount64,
// token 488,
ves_icall_System_Environment_FailFast_raw,
// token 524,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 525,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 527,
ves_icall_System_GC_SuppressFinalize_raw,
// token 529,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 531,
ves_icall_System_GC_GetGCMemoryInfo,
// token 533,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 538,
ves_icall_System_Object_MemberwiseClone_raw,
// token 546,
ves_icall_System_Math_Ceiling,
// token 547,
ves_icall_System_Math_Cos,
// token 548,
ves_icall_System_Math_Floor,
// token 549,
ves_icall_System_Math_Pow,
// token 550,
ves_icall_System_Math_Sin,
// token 551,
ves_icall_System_Math_Sqrt,
// token 552,
ves_icall_System_Math_Tan,
// token 553,
ves_icall_System_Math_ModF,
// token 636,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 645,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 646,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 714,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 720,
ves_icall_RuntimeType_make_array_type_raw,
// token 723,
ves_icall_RuntimeType_make_byref_type_raw,
// token 725,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 730,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 731,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 733,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 734,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 738,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 739,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 741,
ves_icall_System_RuntimeType_getFullName_raw,
// token 742,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 745,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 746,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 747,
ves_icall_RuntimeType_GetFields_native_raw,
// token 750,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 752,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 755,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 757,
ves_icall_RuntimeType_GetName_raw,
// token 759,
ves_icall_RuntimeType_GetNamespace_raw,
// token 768,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 834,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 836,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 838,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 848,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 849,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 850,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 852,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 858,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 859,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 860,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 861,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 862,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 870,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 871,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 872,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 876,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 877,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 879,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 883,
ves_icall_System_String_FastAllocateString_raw,
// token 884,
ves_icall_System_String_InternalIsInterned_raw,
// token 885,
ves_icall_System_String_InternalIntern_raw,
// token 1177,
ves_icall_System_Type_internal_from_handle_raw,
// token 1337,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1338,
ves_icall_System_ValueType_Equals_raw,
// token 7613,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7614,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7616,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7617,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7618,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7619,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7620,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7622,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7623,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7624,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7641,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7643,
mono_monitor_exit_icall_raw,
// token 7648,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7650,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7652,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7654,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7705,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7706,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7708,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7709,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7710,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7711,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7712,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7714,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7716,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8711,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8715,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8717,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8718,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8719,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8720,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9136,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9137,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9138,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9139,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9157,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9158,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9159,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9203,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9269,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9272,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9280,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9281,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9282,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9283,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9284,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 9565,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9566,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9570,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9571,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9600,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9634,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9641,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9648,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9659,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9663,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9686,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9764,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9766,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9776,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9778,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9779,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9780,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9787,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9802,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9822,
ves_icall_reflection_get_token_raw,
// token 9823,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9831,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9833,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9840,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9841,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9844,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9846,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9851,
ves_icall_reflection_get_token_raw,
// token 9857,
ves_icall_get_method_info_raw,
// token 9858,
ves_icall_get_method_attributes,
// token 9865,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9867,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9879,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9882,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9883,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9884,
ves_icall_reflection_get_token_raw,
// token 9895,
ves_icall_InternalInvoke_raw,
// token 9905,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9911,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9912,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9913,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9915,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9916,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9933,
ves_icall_InvokeClassConstructor_raw,
// token 9935,
ves_icall_InternalInvoke_raw,
// token 9950,
ves_icall_reflection_get_token_raw,
// token 9970,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 9971,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9998,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10028,
ves_icall_reflection_get_token_raw,
// token 10029,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10515,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10599,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10600,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10785,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10786,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10791,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10792,
ves_icall_ModuleBuilder_getToken_raw,
// token 10793,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10798,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10850,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11249,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11250,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11446,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 11450,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 11460,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 12272,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12293,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12295,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12297,
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
