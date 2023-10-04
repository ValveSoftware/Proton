/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRApplications_IVRApplications_006_AddApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_006_AddApplicationManifest_params *params = (struct IVRApplications_IVRApplications_006_AddApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    char *u_pchApplicationManifestFullPath = vrclient_dos_to_unix_path( params->pchApplicationManifestFullPath );
    params->_ret = iface->AddApplicationManifest( u_pchApplicationManifestFullPath, params->bTemporary );
    vrclient_free_path( u_pchApplicationManifestFullPath );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_RemoveApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_006_RemoveApplicationManifest_params *params = (struct IVRApplications_IVRApplications_006_RemoveApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    char *u_pchApplicationManifestFullPath = vrclient_dos_to_unix_path( params->pchApplicationManifestFullPath );
    params->_ret = iface->RemoveApplicationManifest( u_pchApplicationManifestFullPath );
    vrclient_free_path( u_pchApplicationManifestFullPath );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_IsApplicationInstalled( void *args )
{
    struct IVRApplications_IVRApplications_006_IsApplicationInstalled_params *params = (struct IVRApplications_IVRApplications_006_IsApplicationInstalled_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->IsApplicationInstalled( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetApplicationCount( void *args )
{
    struct IVRApplications_IVRApplications_006_GetApplicationCount_params *params = (struct IVRApplications_IVRApplications_006_GetApplicationCount_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetApplicationCount(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetApplicationKeyByIndex( void *args )
{
    struct IVRApplications_IVRApplications_006_GetApplicationKeyByIndex_params *params = (struct IVRApplications_IVRApplications_006_GetApplicationKeyByIndex_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetApplicationKeyByProcessId( void *args )
{
    struct IVRApplications_IVRApplications_006_GetApplicationKeyByProcessId_params *params = (struct IVRApplications_IVRApplications_006_GetApplicationKeyByProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_LaunchApplication( void *args )
{
    struct IVRApplications_IVRApplications_006_LaunchApplication_params *params = (struct IVRApplications_IVRApplications_006_LaunchApplication_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->LaunchApplication( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_LaunchTemplateApplication( void *args )
{
    struct IVRApplications_IVRApplications_006_LaunchTemplateApplication_params *params = (struct IVRApplications_IVRApplications_006_LaunchTemplateApplication_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->LaunchTemplateApplication( params->pchTemplateAppKey, params->pchNewAppKey, params->pKeys, params->unKeys );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_LaunchApplicationFromMimeType( void *args )
{
    struct IVRApplications_IVRApplications_006_LaunchApplicationFromMimeType_params *params = (struct IVRApplications_IVRApplications_006_LaunchApplicationFromMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->LaunchApplicationFromMimeType( params->pchMimeType, params->pchArgs );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_LaunchDashboardOverlay( void *args )
{
    struct IVRApplications_IVRApplications_006_LaunchDashboardOverlay_params *params = (struct IVRApplications_IVRApplications_006_LaunchDashboardOverlay_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->LaunchDashboardOverlay( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_CancelApplicationLaunch( void *args )
{
    struct IVRApplications_IVRApplications_006_CancelApplicationLaunch_params *params = (struct IVRApplications_IVRApplications_006_CancelApplicationLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->CancelApplicationLaunch( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_IdentifyApplication( void *args )
{
    struct IVRApplications_IVRApplications_006_IdentifyApplication_params *params = (struct IVRApplications_IVRApplications_006_IdentifyApplication_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetApplicationProcessId( void *args )
{
    struct IVRApplications_IVRApplications_006_GetApplicationProcessId_params *params = (struct IVRApplications_IVRApplications_006_GetApplicationProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetApplicationProcessId( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum_params *params = (struct IVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetApplicationsErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetApplicationPropertyString( void *args )
{
    struct IVRApplications_IVRApplications_006_GetApplicationPropertyString_params *params = (struct IVRApplications_IVRApplications_006_GetApplicationPropertyString_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetApplicationPropertyBool( void *args )
{
    struct IVRApplications_IVRApplications_006_GetApplicationPropertyBool_params *params = (struct IVRApplications_IVRApplications_006_GetApplicationPropertyBool_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetApplicationPropertyUint64( void *args )
{
    struct IVRApplications_IVRApplications_006_GetApplicationPropertyUint64_params *params = (struct IVRApplications_IVRApplications_006_GetApplicationPropertyUint64_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyUint64( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_SetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_006_SetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_006_SetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_006_GetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_006_GetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetApplicationAutoLaunch( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType( void *args )
{
    struct IVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType_params *params = (struct IVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->SetDefaultApplicationForMimeType( params->pchAppKey, params->pchMimeType );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType( void *args )
{
    struct IVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType_params *params = (struct IVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetDefaultApplicationForMimeType( params->pchMimeType, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes( void *args )
{
    struct IVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes_params *params = (struct IVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetApplicationSupportedMimeTypes( params->pchAppKey, params->pchMimeTypesBuffer, params->unMimeTypesBuffer );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType( void *args )
{
    struct IVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType_params *params = (struct IVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetApplicationsThatSupportMimeType( params->pchMimeType, params->pchAppKeysThatSupportBuffer, params->unAppKeysThatSupportBuffer );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetApplicationLaunchArguments( void *args )
{
    struct IVRApplications_IVRApplications_006_GetApplicationLaunchArguments_params *params = (struct IVRApplications_IVRApplications_006_GetApplicationLaunchArguments_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetApplicationLaunchArguments( params->unHandle, params->pchArgs, params->unArgs );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetStartingApplication( void *args )
{
    struct IVRApplications_IVRApplications_006_GetStartingApplication_params *params = (struct IVRApplications_IVRApplications_006_GetStartingApplication_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetTransitionState( void *args )
{
    struct IVRApplications_IVRApplications_006_GetTransitionState_params *params = (struct IVRApplications_IVRApplications_006_GetTransitionState_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetTransitionState(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck( void *args )
{
    struct IVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck_params *params = (struct IVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum_params *params = (struct IVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetApplicationsTransitionStateNameFromEnum( params->state );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_IsQuitUserPromptRequested( void *args )
{
    struct IVRApplications_IVRApplications_006_IsQuitUserPromptRequested_params *params = (struct IVRApplications_IVRApplications_006_IsQuitUserPromptRequested_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->IsQuitUserPromptRequested(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_LaunchInternalProcess( void *args )
{
    struct IVRApplications_IVRApplications_006_LaunchInternalProcess_params *params = (struct IVRApplications_IVRApplications_006_LaunchInternalProcess_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->LaunchInternalProcess( params->pchBinaryPath, params->pchArguments, params->pchWorkingDirectory );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_006_GetCurrentSceneProcessId( void *args )
{
    struct IVRApplications_IVRApplications_006_GetCurrentSceneProcessId_params *params = (struct IVRApplications_IVRApplications_006_GetCurrentSceneProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = iface->GetCurrentSceneProcessId(  );
    return 0;
}

