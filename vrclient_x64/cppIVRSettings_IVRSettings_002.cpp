/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum( void *args )
{
    struct IVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum_params *params = (struct IVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum_params *)args;
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    params->_ret = iface->GetSettingsErrorNameFromEnum( params->eError );
    return 0;
}

NTSTATUS IVRSettings_IVRSettings_002_Sync( void *args )
{
    struct IVRSettings_IVRSettings_002_Sync_params *params = (struct IVRSettings_IVRSettings_002_Sync_params *)args;
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    params->_ret = iface->Sync( params->bForce, params->peError );
    return 0;
}

NTSTATUS IVRSettings_IVRSettings_002_SetBool( void *args )
{
    struct IVRSettings_IVRSettings_002_SetBool_params *params = (struct IVRSettings_IVRSettings_002_SetBool_params *)args;
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->SetBool( params->pchSection, params->pchSettingsKey, params->bValue, params->peError );
    return 0;
}

NTSTATUS IVRSettings_IVRSettings_002_SetInt32( void *args )
{
    struct IVRSettings_IVRSettings_002_SetInt32_params *params = (struct IVRSettings_IVRSettings_002_SetInt32_params *)args;
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->SetInt32( params->pchSection, params->pchSettingsKey, params->nValue, params->peError );
    return 0;
}

NTSTATUS IVRSettings_IVRSettings_002_SetFloat( void *args )
{
    struct IVRSettings_IVRSettings_002_SetFloat_params *params = (struct IVRSettings_IVRSettings_002_SetFloat_params *)args;
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->SetFloat( params->pchSection, params->pchSettingsKey, params->flValue, params->peError );
    return 0;
}

NTSTATUS IVRSettings_IVRSettings_002_SetString( void *args )
{
    struct IVRSettings_IVRSettings_002_SetString_params *params = (struct IVRSettings_IVRSettings_002_SetString_params *)args;
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->SetString( params->pchSection, params->pchSettingsKey, params->pchValue, params->peError );
    return 0;
}

NTSTATUS IVRSettings_IVRSettings_002_GetBool( void *args )
{
    struct IVRSettings_IVRSettings_002_GetBool_params *params = (struct IVRSettings_IVRSettings_002_GetBool_params *)args;
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    params->_ret = iface->GetBool( params->pchSection, params->pchSettingsKey, params->peError );
    return 0;
}

NTSTATUS IVRSettings_IVRSettings_002_GetInt32( void *args )
{
    struct IVRSettings_IVRSettings_002_GetInt32_params *params = (struct IVRSettings_IVRSettings_002_GetInt32_params *)args;
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    params->_ret = iface->GetInt32( params->pchSection, params->pchSettingsKey, params->peError );
    return 0;
}

NTSTATUS IVRSettings_IVRSettings_002_GetFloat( void *args )
{
    struct IVRSettings_IVRSettings_002_GetFloat_params *params = (struct IVRSettings_IVRSettings_002_GetFloat_params *)args;
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    params->_ret = iface->GetFloat( params->pchSection, params->pchSettingsKey, params->peError );
    return 0;
}

NTSTATUS IVRSettings_IVRSettings_002_GetString( void *args )
{
    struct IVRSettings_IVRSettings_002_GetString_params *params = (struct IVRSettings_IVRSettings_002_GetString_params *)args;
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->GetString( params->pchSection, params->pchSettingsKey, params->pchValue, params->unValueLen, params->peError );
    return 0;
}

NTSTATUS IVRSettings_IVRSettings_002_RemoveSection( void *args )
{
    struct IVRSettings_IVRSettings_002_RemoveSection_params *params = (struct IVRSettings_IVRSettings_002_RemoveSection_params *)args;
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->RemoveSection( params->pchSection, params->peError );
    return 0;
}

NTSTATUS IVRSettings_IVRSettings_002_RemoveKeyInSection( void *args )
{
    struct IVRSettings_IVRSettings_002_RemoveKeyInSection_params *params = (struct IVRSettings_IVRSettings_002_RemoveKeyInSection_params *)args;
    struct u_IVRSettings_IVRSettings_002 *iface = (struct u_IVRSettings_IVRSettings_002 *)params->linux_side;
    iface->RemoveKeyInSection( params->pchSection, params->pchSettingsKey, params->peError );
    return 0;
}

