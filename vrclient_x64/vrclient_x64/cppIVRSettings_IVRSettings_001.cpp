#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.2/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSettings_IVRSettings_001.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum( struct cppIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum_params *params )
{
    params->_ret = ((IVRSettings*)params->linux_side)->GetSettingsErrorNameFromEnum((vr::EVRSettingsError)params->eError);
}

void cppIVRSettings_IVRSettings_001_Sync( struct cppIVRSettings_IVRSettings_001_Sync_params *params )
{
    params->_ret = ((IVRSettings*)params->linux_side)->Sync((bool)params->bForce, (vr::EVRSettingsError *)params->peError);
}

void cppIVRSettings_IVRSettings_001_GetBool( struct cppIVRSettings_IVRSettings_001_GetBool_params *params )
{
    params->_ret = ((IVRSettings*)params->linux_side)->GetBool((const char *)params->pchSection, (const char *)params->pchSettingsKey, (bool)params->bDefaultValue, (vr::EVRSettingsError *)params->peError);
}

void cppIVRSettings_IVRSettings_001_SetBool( struct cppIVRSettings_IVRSettings_001_SetBool_params *params )
{
    ((IVRSettings*)params->linux_side)->SetBool((const char *)params->pchSection, (const char *)params->pchSettingsKey, (bool)params->bValue, (vr::EVRSettingsError *)params->peError);
}

void cppIVRSettings_IVRSettings_001_GetInt32( struct cppIVRSettings_IVRSettings_001_GetInt32_params *params )
{
    params->_ret = ((IVRSettings*)params->linux_side)->GetInt32((const char *)params->pchSection, (const char *)params->pchSettingsKey, (int32_t)params->nDefaultValue, (vr::EVRSettingsError *)params->peError);
}

void cppIVRSettings_IVRSettings_001_SetInt32( struct cppIVRSettings_IVRSettings_001_SetInt32_params *params )
{
    ((IVRSettings*)params->linux_side)->SetInt32((const char *)params->pchSection, (const char *)params->pchSettingsKey, (int32_t)params->nValue, (vr::EVRSettingsError *)params->peError);
}

void cppIVRSettings_IVRSettings_001_GetFloat( struct cppIVRSettings_IVRSettings_001_GetFloat_params *params )
{
    params->_ret = ((IVRSettings*)params->linux_side)->GetFloat((const char *)params->pchSection, (const char *)params->pchSettingsKey, (float)params->flDefaultValue, (vr::EVRSettingsError *)params->peError);
}

void cppIVRSettings_IVRSettings_001_SetFloat( struct cppIVRSettings_IVRSettings_001_SetFloat_params *params )
{
    ((IVRSettings*)params->linux_side)->SetFloat((const char *)params->pchSection, (const char *)params->pchSettingsKey, (float)params->flValue, (vr::EVRSettingsError *)params->peError);
}

void cppIVRSettings_IVRSettings_001_GetString( struct cppIVRSettings_IVRSettings_001_GetString_params *params )
{
    ((IVRSettings*)params->linux_side)->GetString((const char *)params->pchSection, (const char *)params->pchSettingsKey, (char *)params->pchValue, (uint32_t)params->unValueLen, (const char *)params->pchDefaultValue, (vr::EVRSettingsError *)params->peError);
}

void cppIVRSettings_IVRSettings_001_SetString( struct cppIVRSettings_IVRSettings_001_SetString_params *params )
{
    ((IVRSettings*)params->linux_side)->SetString((const char *)params->pchSection, (const char *)params->pchSettingsKey, (const char *)params->pchValue, (vr::EVRSettingsError *)params->peError);
}

void cppIVRSettings_IVRSettings_001_RemoveSection( struct cppIVRSettings_IVRSettings_001_RemoveSection_params *params )
{
    ((IVRSettings*)params->linux_side)->RemoveSection((const char *)params->pchSection, (vr::EVRSettingsError *)params->peError);
}

void cppIVRSettings_IVRSettings_001_RemoveKeyInSection( struct cppIVRSettings_IVRSettings_001_RemoveKeyInSection_params *params )
{
    ((IVRSettings*)params->linux_side)->RemoveKeyInSection((const char *)params->pchSection, (const char *)params->pchSettingsKey, (vr::EVRSettingsError *)params->peError);
}

#ifdef __cplusplus
}
#endif
