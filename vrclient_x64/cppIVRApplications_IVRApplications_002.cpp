/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRApplications_IVRApplications_002_AddApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_002_AddApplicationManifest_params *params = (struct IVRApplications_IVRApplications_002_AddApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    char *u_pchApplicationManifestFullPath = vrclient_dos_to_unix_path( params->pchApplicationManifestFullPath );
    params->_ret = iface->AddApplicationManifest( u_pchApplicationManifestFullPath, params->bTemporary );
    vrclient_free_path( u_pchApplicationManifestFullPath );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_RemoveApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_002_RemoveApplicationManifest_params *params = (struct IVRApplications_IVRApplications_002_RemoveApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    char *u_pchApplicationManifestFullPath = vrclient_dos_to_unix_path( params->pchApplicationManifestFullPath );
    params->_ret = iface->RemoveApplicationManifest( u_pchApplicationManifestFullPath );
    vrclient_free_path( u_pchApplicationManifestFullPath );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_IsApplicationInstalled( void *args )
{
    struct IVRApplications_IVRApplications_002_IsApplicationInstalled_params *params = (struct IVRApplications_IVRApplications_002_IsApplicationInstalled_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->IsApplicationInstalled( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_GetApplicationCount( void *args )
{
    struct IVRApplications_IVRApplications_002_GetApplicationCount_params *params = (struct IVRApplications_IVRApplications_002_GetApplicationCount_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->GetApplicationCount(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_GetApplicationKeyByIndex( void *args )
{
    struct IVRApplications_IVRApplications_002_GetApplicationKeyByIndex_params *params = (struct IVRApplications_IVRApplications_002_GetApplicationKeyByIndex_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_GetApplicationKeyByProcessId( void *args )
{
    struct IVRApplications_IVRApplications_002_GetApplicationKeyByProcessId_params *params = (struct IVRApplications_IVRApplications_002_GetApplicationKeyByProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_LaunchApplication( void *args )
{
    struct IVRApplications_IVRApplications_002_LaunchApplication_params *params = (struct IVRApplications_IVRApplications_002_LaunchApplication_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->LaunchApplication( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_LaunchDashboardOverlay( void *args )
{
    struct IVRApplications_IVRApplications_002_LaunchDashboardOverlay_params *params = (struct IVRApplications_IVRApplications_002_LaunchDashboardOverlay_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->LaunchDashboardOverlay( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_IdentifyApplication( void *args )
{
    struct IVRApplications_IVRApplications_002_IdentifyApplication_params *params = (struct IVRApplications_IVRApplications_002_IdentifyApplication_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_GetApplicationProcessId( void *args )
{
    struct IVRApplications_IVRApplications_002_GetApplicationProcessId_params *params = (struct IVRApplications_IVRApplications_002_GetApplicationProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->GetApplicationProcessId( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum_params *params = (struct IVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->GetApplicationsErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_GetApplicationPropertyString( void *args )
{
    struct IVRApplications_IVRApplications_002_GetApplicationPropertyString_params *params = (struct IVRApplications_IVRApplications_002_GetApplicationPropertyString_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_GetApplicationPropertyBool( void *args )
{
    struct IVRApplications_IVRApplications_002_GetApplicationPropertyBool_params *params = (struct IVRApplications_IVRApplications_002_GetApplicationPropertyBool_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_SetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_002_SetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_002_SetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_GetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_002_GetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_002_GetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->GetApplicationAutoLaunch( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_GetStartingApplication( void *args )
{
    struct IVRApplications_IVRApplications_002_GetStartingApplication_params *params = (struct IVRApplications_IVRApplications_002_GetStartingApplication_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_GetTransitionState( void *args )
{
    struct IVRApplications_IVRApplications_002_GetTransitionState_params *params = (struct IVRApplications_IVRApplications_002_GetTransitionState_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->GetTransitionState(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck( void *args )
{
    struct IVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck_params *params = (struct IVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum_params *params = (struct IVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->GetApplicationsTransitionStateNameFromEnum( params->state );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_002_IsQuitUserPromptRequested( void *args )
{
    struct IVRApplications_IVRApplications_002_IsQuitUserPromptRequested_params *params = (struct IVRApplications_IVRApplications_002_IsQuitUserPromptRequested_params *)args;
    struct u_IVRApplications_IVRApplications_002 *iface = (struct u_IVRApplications_IVRApplications_002 *)params->linux_side;
    params->_ret = iface->IsQuitUserPromptRequested(  );
    return 0;
}

