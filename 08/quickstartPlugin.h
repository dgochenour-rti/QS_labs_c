

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from quickstart.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef quickstartPlugin_214727369_h
#define quickstartPlugin_214727369_h

#include "quickstart.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct qs_type
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct qs_type)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* qs_type must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct qs_type.
*/
typedef  struct qs_qs_type qs_qs_typeKeyHolder;

#define qs_qs_typePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define qs_qs_typePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define qs_qs_typePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define qs_qs_typePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define qs_qs_typePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define qs_qs_typePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define qs_qs_typePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern qs_qs_type*
qs_qs_typePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern qs_qs_type*
qs_qs_typePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern qs_qs_type*
qs_qs_typePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
qs_qs_typePluginSupport_copy_data(
    qs_qs_type *out,
    const qs_qs_type *in);

NDDSUSERDllExport extern void 
qs_qs_typePluginSupport_destroy_data_w_params(
    qs_qs_type *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
qs_qs_typePluginSupport_destroy_data_ex(
    qs_qs_type *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
qs_qs_typePluginSupport_destroy_data(
    qs_qs_type *sample);

NDDSUSERDllExport extern void 
qs_qs_typePluginSupport_print_data(
    const qs_qs_type *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern qs_qs_type*
qs_qs_typePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern qs_qs_type*
qs_qs_typePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
qs_qs_typePluginSupport_destroy_key_ex(
    qs_qs_typeKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
qs_qs_typePluginSupport_destroy_key(
    qs_qs_typeKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
qs_qs_typePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
qs_qs_typePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
qs_qs_typePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
qs_qs_typePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
qs_qs_typePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    qs_qs_type *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
qs_qs_typePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    qs_qs_type *out,
    const qs_qs_type *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
qs_qs_typePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const qs_qs_type *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
qs_qs_typePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    qs_qs_type *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
qs_qs_typePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const qs_qs_type *sample); 

NDDSUSERDllExport extern RTIBool 
qs_qs_typePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    qs_qs_type **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
qs_qs_typePlugin_deserialize_from_cdr_buffer(
    qs_qs_type *sample,
    const char * buffer,
    unsigned int length);    
NDDSUSERDllExport extern DDS_ReturnCode_t
qs_qs_typePlugin_data_to_string(
    const qs_qs_type *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property);    

NDDSUSERDllExport extern RTIBool
qs_qs_typePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
qs_qs_typePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
qs_qs_typePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
qs_qs_typePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
qs_qs_typePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const qs_qs_type * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
qs_qs_typePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
qs_qs_typePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
qs_qs_typePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
qs_qs_typePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const qs_qs_type *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
qs_qs_typePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    qs_qs_type * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
qs_qs_typePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    qs_qs_type ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
qs_qs_typePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    qs_qs_type *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
qs_qs_typePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    qs_qs_typeKeyHolder *key, 
    const qs_qs_type *instance);

NDDSUSERDllExport extern RTIBool 
qs_qs_typePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    qs_qs_type *instance, 
    const qs_qs_typeKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
qs_qs_typePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const qs_qs_type *instance);

NDDSUSERDllExport extern RTIBool 
qs_qs_typePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
qs_qs_typePlugin_new(void);

NDDSUSERDllExport extern void
qs_qs_typePlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* quickstartPlugin_214727369_h */

