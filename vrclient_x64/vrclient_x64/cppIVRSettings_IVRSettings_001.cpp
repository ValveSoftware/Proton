/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRSettings_IVRSettings_001.h"
void cppIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum( struct cppIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum_params *params )
{
    struct u_IVRSettings_IVRSettings_001 *iface = (struct u_IVRSettings_IVRSettings_001 *)params->linux_side;
    params->_ret = (const char *)iface->GetSettingsErrorNameFromEnum( params->eError );
}

void cppIVRSettings_IVRSettings_001_Sync( struct cppIVRSettings_IVRSettings_001_Sync_params *params )
{
    struct u_IVRSettings_IVRSettings_001 *iface = (struct u_IVRSettings_IVRSettings_001 *)params->linux_side;
    params->_ret = (bool)iface->Sync( params->bForce, params->peError );
}

void cppIVRSettings_IVRSettings_001_GetBool( struct cppIVRSettings_IVRSettings_001_GetBool_params *params )
{
    struct u_IVRSettings_IVRSettings_001 *iface = (struct u_IVRSettings_IVRSettings_001 *)params->linux_side;
    params->_ret = (bool)iface->GetBool( params->pchSection, params->pchSettingsKey, params->bDefaultValue, params->peError );
}

void cppIVRSettings_IVRSettings_001_SetBool( struct cppIVRSettings_IVRSettings_001_SetBool_params *params )
{
    struct u_IVRSettings_IVRSettings_001 *iface = (struct u_IVRSettings_IVRSettings_001 *)params->linux_side;
    iface->SetBool( params->pchSection, params->pchSettingsKey, params->bValue, params->peError );
}

void cppIVRSettings_IVRSettings_001_GetInt32( struct cppIVRSettings_IVRSettings_001_GetInt32_params *params )
{
    struct u_IVRSettings_IVRSettings_001 *iface = (struct u_IVRSettings_IVRSettings_001 *)params->linux_side;
    params->_ret = (int32_t)iface->GetInt32( params->pchSection, params->pchSettingsKey, params->nDefaultValue, params->peError );
}

void cppIVRSettings_IVRSettings_001_SetInt32( struct cppIVRSettings_IVRSettings_001_SetInt32_params *params )
{
    struct u_IVRSettings_IVRSettings_001 *iface = (struct u_IVRSettings_IVRSettings_001 *)params->linux_side;
    iface->SetInt32( params->pchSection, params->pchSettingsKey, params->nValue, params->peError );
}

void cppIVRSettings_IVRSettings_001_GetFloat( struct cppIVRSettings_IVRSettings_001_GetFloat_params *params )
{
    struct u_IVRSettings_IVRSettings_001 *iface = (struct u_IVRSettings_IVRSettings_001 *)params->linux_side;
    params->_ret = (float)iface->GetFloat( params->pchSection, params->pchSettingsKey, params->flDefaultValue, params->peError );
}

void cppIVRSettings_IVRSettings_001_SetFloat( struct cppIVRSettings_IVRSettings_001_SetFloat_params *params )
{
    struct u_IVRSettings_IVRSettings_001 *iface = (struct u_IVRSettings_IVRSettings_001 *)params->linux_side;
    iface->SetFloat( params->pchSection, params->pchSettingsKey, params->flValue, params->peError );
}

void cppIVRSettings_IVRSettings_001_GetString( struct cppIVRSettings_IVRSettings_001_GetString_params *params )
{
    struct u_IVRSettings_IVRSettings_001 *iface = (struct u_IVRSettings_IVRSettings_001 *)params->linux_side;
    iface->GetString( params->pchSection, params->pchSettingsKey, params->pchValue, params->unValueLen, params->pchDefaultValue, params->peError );
}

void cppIVRSettings_IVRSettings_001_SetString( struct cppIVRSettings_IVRSettings_001_SetString_params *params )
{
    struct u_IVRSettings_IVRSettings_001 *iface = (struct u_IVRSettings_IVRSettings_001 *)params->linux_side;
    iface->SetString( params->pchSection, params->pchSettingsKey, params->pchValue, params->peError );
}

void cppIVRSettings_IVRSettings_001_RemoveSection( struct cppIVRSettings_IVRSettings_001_RemoveSection_params *params )
{
    struct u_IVRSettings_IVRSettings_001 *iface = (struct u_IVRSettings_IVRSettings_001 *)params->linux_side;
    iface->RemoveSection( params->pchSection, params->peError );
}

void cppIVRSettings_IVRSettings_001_RemoveKeyInSection( struct cppIVRSettings_IVRSettings_001_RemoveKeyInSection_params *params )
{
    struct u_IVRSettings_IVRSettings_001 *iface = (struct u_IVRSettings_IVRSettings_001 *)params->linux_side;
    iface->RemoveKeyInSection( params->pchSection, params->pchSettingsKey, params->peError );
}

