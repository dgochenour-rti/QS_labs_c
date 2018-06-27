

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from quickstart.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef quickstart_214727312_h
#define quickstart_214727312_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern const char *qs_qs_typeTYPENAME;

typedef struct qs_qs_type {

    DDS_Long   id ;
    DDS_Long   value1 ;
    DDS_Boolean   condition1 ;
    DDS_Char *   name ;

} qs_qs_type ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* qs_qs_type_get_typecode(void); /* Type code */

DDS_SEQUENCE(qs_qs_typeSeq, qs_qs_type);

NDDSUSERDllExport
RTIBool qs_qs_type_initialize(
    qs_qs_type* self);

NDDSUSERDllExport
RTIBool qs_qs_type_initialize_ex(
    qs_qs_type* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool qs_qs_type_initialize_w_params(
    qs_qs_type* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void qs_qs_type_finalize(
    qs_qs_type* self);

NDDSUSERDllExport
void qs_qs_type_finalize_ex(
    qs_qs_type* self,RTIBool deletePointers);

NDDSUSERDllExport
void qs_qs_type_finalize_w_params(
    qs_qs_type* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void qs_qs_type_finalize_optional_members(
    qs_qs_type* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool qs_qs_type_copy(
    qs_qs_type* dst,
    const qs_qs_type* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* quickstart */

