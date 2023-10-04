/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRApplications_IVRApplications_004_AddApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_004_AddApplicationManifest_params *params = (struct IVRApplications_IVRApplications_004_AddApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    char *u_pchApplicationManifestFullPath = vrclient_dos_to_unix_path( params->pchApplicationManifestFullPath );
    params->_ret = iface->AddApplicationManifest( u_pchApplicationManifestFullPath, params->bTemporary );
    vrclient_free_path( u_pchApplicationManifestFullPath );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_RemoveApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_004_RemoveApplicationManifest_params *params = (struct IVRApplications_IVRApplications_004_RemoveApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    char *u_pchApplicationManifestFullPath = vrclient_dos_to_unix_path( params->pchApplicationManifestFullPath );
    params->_ret = iface->RemoveApplicationManifest( u_pchApplicationManifestFullPath );
    vrclient_free_path( u_pchApplicationManifestFullPath );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_IsApplicationInstalled( void *args )
{
    struct IVRApplications_IVRApplications_004_IsApplicationInstalled_params *params = (struct IVRApplications_IVRApplications_004_IsApplicationInstalled_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->IsApplicationInstalled( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_GetApplicationCount( void *args )
{
    struct IVRApplications_IVRApplications_004_GetApplicationCount_params *params = (struct IVRApplications_IVRApplications_004_GetApplicationCount_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->GetApplicationCount(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_GetApplicationKeyByIndex( void *args )
{
    struct IVRApplications_IVRApplications_004_GetApplicationKeyByIndex_params *params = (struct IVRApplications_IVRApplications_004_GetApplicationKeyByIndex_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_GetApplicationKeyByProcessId( void *args )
{
    struct IVRApplications_IVRApplications_004_GetApplicationKeyByProcessId_params *params = (struct IVRApplications_IVRApplications_004_GetApplicationKeyByProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_LaunchApplication( void *args )
{
    struct IVRApplications_IVRApplications_004_LaunchApplication_params *params = (struct IVRApplications_IVRApplications_004_LaunchApplication_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->LaunchApplication( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_LaunchDashboardOverlay( void *args )
{
    struct IVRApplications_IVRApplications_004_LaunchDashboardOverlay_params *params = (struct IVRApplications_IVRApplications_004_LaunchDashboardOverlay_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->LaunchDashboardOverlay( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_CancelApplicationLaunch( void *args )
{
    struct IVRApplications_IVRApplications_004_CancelApplicationLaunch_params *params = (struct IVRApplications_IVRApplications_004_CancelApplicationLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->CancelApplicationLaunch( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_IdentifyApplication( void *args )
{
    struct IVRApplications_IVRApplications_004_IdentifyApplication_params *params = (struct IVRApplications_IVRApplications_004_IdentifyApplication_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_GetApplicationProcessId( void *args )
{
    struct IVRApplications_IVRApplications_004_GetApplicationProcessId_params *params = (struct IVRApplications_IVRApplications_004_GetApplicationProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->GetApplicationProcessId( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum_params *params = (struct IVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->GetApplicationsErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_GetApplicationPropertyString( void *args )
{
    struct IVRApplications_IVRApplications_004_GetApplicationPropertyString_params *params = (struct IVRApplications_IVRApplications_004_GetApplicationPropertyString_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_GetApplicationPropertyBool( void *args )
{
    struct IVRApplications_IVRApplications_004_GetApplicationPropertyBool_params *params = (struct IVRApplications_IVRApplications_004_GetApplicationPropertyBool_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_GetApplicationPropertyUint64( void *args )
{
    struct IVRApplications_IVRApplications_004_GetApplicationPropertyUint64_params *params = (struct IVRApplications_IVRApplications_004_GetApplicationPropertyUint64_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyUint64( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_SetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_004_SetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_004_SetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_GetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_004_GetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_004_GetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->GetApplicationAutoLaunch( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_GetStartingApplication( void *args )
{
    struct IVRApplications_IVRApplications_004_GetStartingApplication_params *params = (struct IVRApplications_IVRApplications_004_GetStartingApplication_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_GetTransitionState( void *args )
{
    struct IVRApplications_IVRApplications_004_GetTransitionState_params *params = (struct IVRApplications_IVRApplications_004_GetTransitionState_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->GetTransitionState(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck( void *args )
{
    struct IVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck_params *params = (struct IVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum_params *params = (struct IVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->GetApplicationsTransitionStateNameFromEnum( params->state );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_IsQuitUserPromptRequested( void *args )
{
    struct IVRApplications_IVRApplications_004_IsQuitUserPromptRequested_params *params = (struct IVRApplications_IVRApplications_004_IsQuitUserPromptRequested_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->IsQuitUserPromptRequested(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_004_LaunchInternalProcess( void *args )
{
    struct IVRApplications_IVRApplications_004_LaunchInternalProcess_params *params = (struct IVRApplications_IVRApplications_004_LaunchInternalProcess_params *)args;
    struct u_IVRApplications_IVRApplications_004 *iface = (struct u_IVRApplications_IVRApplications_004 *)params->linux_side;
    params->_ret = iface->LaunchInternalProcess( params->pchBinaryPath, params->pchArguments, params->pchWorkingDirectory );
    return 0;
}

