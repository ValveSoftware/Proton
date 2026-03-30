/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS IVRApplications_IVRApplications_008_AddApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_008_AddApplicationManifest_params *params = (struct IVRApplications_IVRApplications_008_AddApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    char *u_pchApplicationManifestFullPath = vrclient_dos_to_unix_path( params->pchApplicationManifestFullPath );
    params->_ret = iface->AddApplicationManifest( u_pchApplicationManifestFullPath, params->bTemporary );
    vrclient_free_path( u_pchApplicationManifestFullPath );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_AddApplicationManifest( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_AddApplicationManifest_params *params = (struct wow64_IVRApplications_IVRApplications_008_AddApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    char *u_pchApplicationManifestFullPath = vrclient_dos_to_unix_path( params->pchApplicationManifestFullPath );
    params->_ret = iface->AddApplicationManifest( u_pchApplicationManifestFullPath, params->bTemporary );
    vrclient_free_path( u_pchApplicationManifestFullPath );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_RemoveApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_008_RemoveApplicationManifest_params *params = (struct IVRApplications_IVRApplications_008_RemoveApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    char *u_pchApplicationManifestFullPath = vrclient_dos_to_unix_path( params->pchApplicationManifestFullPath );
    params->_ret = iface->RemoveApplicationManifest( u_pchApplicationManifestFullPath );
    vrclient_free_path( u_pchApplicationManifestFullPath );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_RemoveApplicationManifest( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_RemoveApplicationManifest_params *params = (struct wow64_IVRApplications_IVRApplications_008_RemoveApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    char *u_pchApplicationManifestFullPath = vrclient_dos_to_unix_path( params->pchApplicationManifestFullPath );
    params->_ret = iface->RemoveApplicationManifest( u_pchApplicationManifestFullPath );
    vrclient_free_path( u_pchApplicationManifestFullPath );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_IsApplicationInstalled( void *args )
{
    struct IVRApplications_IVRApplications_008_IsApplicationInstalled_params *params = (struct IVRApplications_IVRApplications_008_IsApplicationInstalled_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->IsApplicationInstalled( params->pchAppKey );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_IsApplicationInstalled( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_IsApplicationInstalled_params *params = (struct wow64_IVRApplications_IVRApplications_008_IsApplicationInstalled_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->IsApplicationInstalled( params->pchAppKey );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetApplicationCount( void *args )
{
    struct IVRApplications_IVRApplications_008_GetApplicationCount_params *params = (struct IVRApplications_IVRApplications_008_GetApplicationCount_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationCount(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetApplicationCount( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetApplicationCount_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetApplicationCount_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationCount(  );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetApplicationKeyByIndex( void *args )
{
    struct IVRApplications_IVRApplications_008_GetApplicationKeyByIndex_params *params = (struct IVRApplications_IVRApplications_008_GetApplicationKeyByIndex_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetApplicationKeyByIndex( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetApplicationKeyByIndex_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetApplicationKeyByIndex_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetApplicationKeyByProcessId( void *args )
{
    struct IVRApplications_IVRApplications_008_GetApplicationKeyByProcessId_params *params = (struct IVRApplications_IVRApplications_008_GetApplicationKeyByProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetApplicationKeyByProcessId( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetApplicationKeyByProcessId_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetApplicationKeyByProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_LaunchApplication( void *args )
{
    struct IVRApplications_IVRApplications_008_LaunchApplication_params *params = (struct IVRApplications_IVRApplications_008_LaunchApplication_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->LaunchApplication( params->pchAppKey );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_LaunchApplication( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_LaunchApplication_params *params = (struct wow64_IVRApplications_IVRApplications_008_LaunchApplication_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->LaunchApplication( params->pchAppKey );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_LaunchTemplateApplication( void *args )
{
    struct IVRApplications_IVRApplications_008_LaunchTemplateApplication_params *params = (struct IVRApplications_IVRApplications_008_LaunchTemplateApplication_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    u_AppOverrideKeys_t u_pKeys;
    if (params->pKeys) u_pKeys = *params->pKeys;
    params->_ret = iface->LaunchTemplateApplication( params->pchTemplateAppKey, params->pchNewAppKey, params->pKeys ? &u_pKeys : nullptr, params->unKeys );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_LaunchTemplateApplication( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_LaunchTemplateApplication_params *params = (struct wow64_IVRApplications_IVRApplications_008_LaunchTemplateApplication_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    u_AppOverrideKeys_t u_pKeys;
    if (params->pKeys) u_pKeys = *params->pKeys;
    params->_ret = iface->LaunchTemplateApplication( params->pchTemplateAppKey, params->pchNewAppKey, params->pKeys ? &u_pKeys : nullptr, params->unKeys );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_LaunchApplicationFromMimeType( void *args )
{
    struct IVRApplications_IVRApplications_008_LaunchApplicationFromMimeType_params *params = (struct IVRApplications_IVRApplications_008_LaunchApplicationFromMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->LaunchApplicationFromMimeType( params->pchMimeType, params->pchArgs );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_LaunchApplicationFromMimeType( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_LaunchApplicationFromMimeType_params *params = (struct wow64_IVRApplications_IVRApplications_008_LaunchApplicationFromMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->LaunchApplicationFromMimeType( params->pchMimeType, params->pchArgs );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_LaunchDashboardOverlay( void *args )
{
    struct IVRApplications_IVRApplications_008_LaunchDashboardOverlay_params *params = (struct IVRApplications_IVRApplications_008_LaunchDashboardOverlay_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->LaunchDashboardOverlay( params->pchAppKey );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_LaunchDashboardOverlay( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_LaunchDashboardOverlay_params *params = (struct wow64_IVRApplications_IVRApplications_008_LaunchDashboardOverlay_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->LaunchDashboardOverlay( params->pchAppKey );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_CancelApplicationLaunch( void *args )
{
    struct IVRApplications_IVRApplications_008_CancelApplicationLaunch_params *params = (struct IVRApplications_IVRApplications_008_CancelApplicationLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->CancelApplicationLaunch( params->pchAppKey );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_CancelApplicationLaunch( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_CancelApplicationLaunch_params *params = (struct wow64_IVRApplications_IVRApplications_008_CancelApplicationLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->CancelApplicationLaunch( params->pchAppKey );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_IdentifyApplication( void *args )
{
    struct IVRApplications_IVRApplications_008_IdentifyApplication_params *params = (struct IVRApplications_IVRApplications_008_IdentifyApplication_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_IdentifyApplication( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_IdentifyApplication_params *params = (struct wow64_IVRApplications_IVRApplications_008_IdentifyApplication_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetApplicationProcessId( void *args )
{
    struct IVRApplications_IVRApplications_008_GetApplicationProcessId_params *params = (struct IVRApplications_IVRApplications_008_GetApplicationProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationProcessId( params->pchAppKey );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetApplicationProcessId( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetApplicationProcessId_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetApplicationProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationProcessId( params->pchAppKey );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetApplicationsErrorNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_008_GetApplicationsErrorNameFromEnum_params *params = (struct IVRApplications_IVRApplications_008_GetApplicationsErrorNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationsErrorNameFromEnum( params->error );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetApplicationsErrorNameFromEnum( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetApplicationsErrorNameFromEnum_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetApplicationsErrorNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationsErrorNameFromEnum( params->error );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetApplicationPropertyString( void *args )
{
    struct IVRApplications_IVRApplications_008_GetApplicationPropertyString_params *params = (struct IVRApplications_IVRApplications_008_GetApplicationPropertyString_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetApplicationPropertyString( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetApplicationPropertyString_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetApplicationPropertyString_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetApplicationPropertyBool( void *args )
{
    struct IVRApplications_IVRApplications_008_GetApplicationPropertyBool_params *params = (struct IVRApplications_IVRApplications_008_GetApplicationPropertyBool_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetApplicationPropertyBool( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetApplicationPropertyBool_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetApplicationPropertyBool_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetApplicationPropertyUint64( void *args )
{
    struct IVRApplications_IVRApplications_008_GetApplicationPropertyUint64_params *params = (struct IVRApplications_IVRApplications_008_GetApplicationPropertyUint64_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationPropertyUint64( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetApplicationPropertyUint64( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetApplicationPropertyUint64_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetApplicationPropertyUint64_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationPropertyUint64( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_SetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_008_SetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_008_SetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_SetApplicationAutoLaunch( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_SetApplicationAutoLaunch_params *params = (struct wow64_IVRApplications_IVRApplications_008_SetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_008_GetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_008_GetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationAutoLaunch( params->pchAppKey );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetApplicationAutoLaunch( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetApplicationAutoLaunch_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationAutoLaunch( params->pchAppKey );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_SetDefaultApplicationForMimeType( void *args )
{
    struct IVRApplications_IVRApplications_008_SetDefaultApplicationForMimeType_params *params = (struct IVRApplications_IVRApplications_008_SetDefaultApplicationForMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->SetDefaultApplicationForMimeType( params->pchAppKey, params->pchMimeType );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_SetDefaultApplicationForMimeType( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_SetDefaultApplicationForMimeType_params *params = (struct wow64_IVRApplications_IVRApplications_008_SetDefaultApplicationForMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->SetDefaultApplicationForMimeType( params->pchAppKey, params->pchMimeType );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetDefaultApplicationForMimeType( void *args )
{
    struct IVRApplications_IVRApplications_008_GetDefaultApplicationForMimeType_params *params = (struct IVRApplications_IVRApplications_008_GetDefaultApplicationForMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetDefaultApplicationForMimeType( params->pchMimeType, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetDefaultApplicationForMimeType( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetDefaultApplicationForMimeType_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetDefaultApplicationForMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetDefaultApplicationForMimeType( params->pchMimeType, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetApplicationSupportedMimeTypes( void *args )
{
    struct IVRApplications_IVRApplications_008_GetApplicationSupportedMimeTypes_params *params = (struct IVRApplications_IVRApplications_008_GetApplicationSupportedMimeTypes_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationSupportedMimeTypes( params->pchAppKey, params->pchMimeTypesBuffer, params->unMimeTypesBuffer );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetApplicationSupportedMimeTypes( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetApplicationSupportedMimeTypes_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetApplicationSupportedMimeTypes_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationSupportedMimeTypes( params->pchAppKey, params->pchMimeTypesBuffer, params->unMimeTypesBuffer );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetApplicationsThatSupportMimeType( void *args )
{
    struct IVRApplications_IVRApplications_008_GetApplicationsThatSupportMimeType_params *params = (struct IVRApplications_IVRApplications_008_GetApplicationsThatSupportMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationsThatSupportMimeType( params->pchMimeType, params->pchAppKeysThatSupportBuffer, params->unAppKeysThatSupportBuffer );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetApplicationsThatSupportMimeType( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetApplicationsThatSupportMimeType_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetApplicationsThatSupportMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationsThatSupportMimeType( params->pchMimeType, params->pchAppKeysThatSupportBuffer, params->unAppKeysThatSupportBuffer );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetApplicationLaunchArguments( void *args )
{
    struct IVRApplications_IVRApplications_008_GetApplicationLaunchArguments_params *params = (struct IVRApplications_IVRApplications_008_GetApplicationLaunchArguments_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationLaunchArguments( params->unHandle, params->pchArgs, params->unArgs );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetApplicationLaunchArguments( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetApplicationLaunchArguments_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetApplicationLaunchArguments_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetApplicationLaunchArguments( params->unHandle, params->pchArgs, params->unArgs );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetStartingApplication( void *args )
{
    struct IVRApplications_IVRApplications_008_GetStartingApplication_params *params = (struct IVRApplications_IVRApplications_008_GetStartingApplication_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetStartingApplication( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetStartingApplication_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetStartingApplication_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetSceneApplicationState( void *args )
{
    struct IVRApplications_IVRApplications_008_GetSceneApplicationState_params *params = (struct IVRApplications_IVRApplications_008_GetSceneApplicationState_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetSceneApplicationState(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetSceneApplicationState( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetSceneApplicationState_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetSceneApplicationState_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetSceneApplicationState(  );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_PerformApplicationPrelaunchCheck( void *args )
{
    struct IVRApplications_IVRApplications_008_PerformApplicationPrelaunchCheck_params *params = (struct IVRApplications_IVRApplications_008_PerformApplicationPrelaunchCheck_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_PerformApplicationPrelaunchCheck( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_PerformApplicationPrelaunchCheck_params *params = (struct wow64_IVRApplications_IVRApplications_008_PerformApplicationPrelaunchCheck_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetSceneApplicationStateNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_008_GetSceneApplicationStateNameFromEnum_params *params = (struct IVRApplications_IVRApplications_008_GetSceneApplicationStateNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetSceneApplicationStateNameFromEnum( params->state );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetSceneApplicationStateNameFromEnum( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetSceneApplicationStateNameFromEnum_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetSceneApplicationStateNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetSceneApplicationStateNameFromEnum( params->state );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_RegisterSubprocess( void *args )
{
    struct IVRApplications_IVRApplications_008_RegisterSubprocess_params *params = (struct IVRApplications_IVRApplications_008_RegisterSubprocess_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->RegisterSubprocess( params->nPid );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_RegisterSubprocess( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_RegisterSubprocess_params *params = (struct wow64_IVRApplications_IVRApplications_008_RegisterSubprocess_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->RegisterSubprocess( params->nPid );
    return 0;
}
#endif

NTSTATUS IVRApplications_IVRApplications_008_GetCurrentSceneProcessId( void *args )
{
    struct IVRApplications_IVRApplications_008_GetCurrentSceneProcessId_params *params = (struct IVRApplications_IVRApplications_008_GetCurrentSceneProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetCurrentSceneProcessId(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRApplications_IVRApplications_008_GetCurrentSceneProcessId( void *args )
{
    struct wow64_IVRApplications_IVRApplications_008_GetCurrentSceneProcessId_params *params = (struct wow64_IVRApplications_IVRApplications_008_GetCurrentSceneProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_008 *iface = (struct u_IVRApplications_IVRApplications_008 *)params->u_iface;
    params->_ret = iface->GetCurrentSceneProcessId(  );
    return 0;
}
#endif

