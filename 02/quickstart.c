

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from quickstart.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "quickstart.h"

/* ========================================================================= */
const char *qs_qs_typeTYPENAME = "qs::qs_type";

DDS_TypeCode* qs_qs_type_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode qs_qs_type_g_tc_name_string = DDS_INITIALIZE_STRING_TYPECODE((128));
    static DDS_TypeCode_Member qs_qs_type_g_tc_members[4]=
    {

        {
            (char *)"id",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"value1",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"condition1",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"name",/* Member name */
            {
                3,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode qs_qs_type_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"qs::qs_type", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            qs_qs_type_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for qs_qs_type*/

    if (is_initialized) {
        return &qs_qs_type_g_tc;
    }

    qs_qs_type_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    qs_qs_type_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    qs_qs_type_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    qs_qs_type_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&qs_qs_type_g_tc_name_string;

    is_initialized = RTI_TRUE;

    return &qs_qs_type_g_tc;
}

RTIBool qs_qs_type_initialize(
    qs_qs_type* sample) {
    return qs_qs_type_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool qs_qs_type_initialize_ex(
    qs_qs_type* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return qs_qs_type_initialize_w_params(
        sample,&allocParams);

}

RTIBool qs_qs_type_initialize_w_params(
    qs_qs_type* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->id)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initLong(&sample->value1)) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initBoolean(&sample->condition1)) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory){
        sample->name= DDS_String_alloc ((128));
        if (sample->name == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->name!= NULL) { 
            sample->name[0] = '\0';
        }
    }

    return RTI_TRUE;
}

void qs_qs_type_finalize(
    qs_qs_type* sample)
{

    qs_qs_type_finalize_ex(sample,RTI_TRUE);
}

void qs_qs_type_finalize_ex(
    qs_qs_type* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    qs_qs_type_finalize_w_params(
        sample,&deallocParams);
}

void qs_qs_type_finalize_w_params(
    qs_qs_type* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->name != NULL) {
        DDS_String_free(sample->name);
        sample->name=NULL;

    }
}

void qs_qs_type_finalize_optional_members(
    qs_qs_type* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool qs_qs_type_copy(
    qs_qs_type* dst,
    const qs_qs_type* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyLong (
        &dst->id, &src->id)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyLong (
        &dst->value1, &src->value1)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyBoolean (
        &dst->condition1, &src->condition1)) { 
        return RTI_FALSE;
    }
    if (!RTICdrType_copyStringEx (
        &dst->name, src->name, 
        (128) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'qs_qs_type' sequence class.
*/
#define T qs_qs_type
#define TSeq qs_qs_typeSeq

#define T_initialize_w_params qs_qs_type_initialize_w_params

#define T_finalize_w_params   qs_qs_type_finalize_w_params
#define T_copy       qs_qs_type_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

