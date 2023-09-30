/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRSettings_IVRSettings_002.h"
void cppIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum( struct cppIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum_params *params )
{
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    params->_ret = (const char *)iface->GetSettingsErrorNameFromEnum( params->eError );
}

void cppIVRSettings_IVRSettings_002_Sync( struct cppIVRSettings_IVRSettings_002_Sync_params *params )
{
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    params->_ret = (bool)iface->Sync( params->bForce, params->peError );
}

void cppIVRSettings_IVRSettings_002_SetBool( struct cppIVRSettings_IVRSettings_002_SetBool_params *params )
{
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->SetBool( params->pchSection, params->pchSettingsKey, params->bValue, params->peError );
}

void cppIVRSettings_IVRSettings_002_SetInt32( struct cppIVRSettings_IVRSettings_002_SetInt32_params *params )
{
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->SetInt32( params->pchSection, params->pchSettingsKey, params->nValue, params->peError );
}

void cppIVRSettings_IVRSettings_002_SetFloat( struct cppIVRSettings_IVRSettings_002_SetFloat_params *params )
{
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->SetFloat( params->pchSection, params->pchSettingsKey, params->flValue, params->peError );
}

void cppIVRSettings_IVRSettings_002_SetString( struct cppIVRSettings_IVRSettings_002_SetString_params *params )
{
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->SetString( params->pchSection, params->pchSettingsKey, params->pchValue, params->peError );
}

void cppIVRSettings_IVRSettings_002_GetBool( struct cppIVRSettings_IVRSettings_002_GetBool_params *params )
{
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    params->_ret = (bool)iface->GetBool( params->pchSection, params->pchSettingsKey, params->peError );
}

void cppIVRSettings_IVRSettings_002_GetInt32( struct cppIVRSettings_IVRSettings_002_GetInt32_params *params )
{
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    params->_ret = (int32_t)iface->GetInt32( params->pchSection, params->pchSettingsKey, params->peError );
}

void cppIVRSettings_IVRSettings_002_GetFloat( struct cppIVRSettings_IVRSettings_002_GetFloat_params *params )
{
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    params->_ret = (float)iface->GetFloat( params->pchSection, params->pchSettingsKey, params->peError );
}

void cppIVRSettings_IVRSettings_002_GetString( struct cppIVRSettings_IVRSettings_002_GetString_params *params )
{
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->GetString( params->pchSection, params->pchSettingsKey, params->pchValue, params->unValueLen, params->peError );
}

void cppIVRSettings_IVRSettings_002_RemoveSection( struct cppIVRSettings_IVRSettings_002_RemoveSection_params *params )
{
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->RemoveSection( params->pchSection, params->peError );
}

void cppIVRSettings_IVRSettings_002_RemoveKeyInSection( struct cppIVRSettings_IVRSettings_002_RemoveKeyInSection_params *params )
{
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->RemoveKeyInSection( params->pchSection, params->pchSettingsKey, params->peError );
}

