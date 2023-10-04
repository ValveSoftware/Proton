/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRApplications_IVRApplications_007_AddApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_007_AddApplicationManifest_params *params = (struct IVRApplications_IVRApplications_007_AddApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    char *u_pchApplicationManifestFullPath = vrclient_dos_to_unix_path( params->pchApplicationManifestFullPath );
    params->_ret = iface->AddApplicationManifest( u_pchApplicationManifestFullPath, params->bTemporary );
    vrclient_free_path( u_pchApplicationManifestFullPath );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_RemoveApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_007_RemoveApplicationManifest_params *params = (struct IVRApplications_IVRApplications_007_RemoveApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    char *u_pchApplicationManifestFullPath = vrclient_dos_to_unix_path( params->pchApplicationManifestFullPath );
    params->_ret = iface->RemoveApplicationManifest( u_pchApplicationManifestFullPath );
    vrclient_free_path( u_pchApplicationManifestFullPath );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_IsApplicationInstalled( void *args )
{
    struct IVRApplications_IVRApplications_007_IsApplicationInstalled_params *params = (struct IVRApplications_IVRApplications_007_IsApplicationInstalled_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->IsApplicationInstalled( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetApplicationCount( void *args )
{
    struct IVRApplications_IVRApplications_007_GetApplicationCount_params *params = (struct IVRApplications_IVRApplications_007_GetApplicationCount_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetApplicationCount(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetApplicationKeyByIndex( void *args )
{
    struct IVRApplications_IVRApplications_007_GetApplicationKeyByIndex_params *params = (struct IVRApplications_IVRApplications_007_GetApplicationKeyByIndex_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetApplicationKeyByProcessId( void *args )
{
    struct IVRApplications_IVRApplications_007_GetApplicationKeyByProcessId_params *params = (struct IVRApplications_IVRApplications_007_GetApplicationKeyByProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_LaunchApplication( void *args )
{
    struct IVRApplications_IVRApplications_007_LaunchApplication_params *params = (struct IVRApplications_IVRApplications_007_LaunchApplication_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->LaunchApplication( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_LaunchTemplateApplication( void *args )
{
    struct IVRApplications_IVRApplications_007_LaunchTemplateApplication_params *params = (struct IVRApplications_IVRApplications_007_LaunchTemplateApplication_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->LaunchTemplateApplication( params->pchTemplateAppKey, params->pchNewAppKey, params->pKeys, params->unKeys );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_LaunchApplicationFromMimeType( void *args )
{
    struct IVRApplications_IVRApplications_007_LaunchApplicationFromMimeType_params *params = (struct IVRApplications_IVRApplications_007_LaunchApplicationFromMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->LaunchApplicationFromMimeType( params->pchMimeType, params->pchArgs );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_LaunchDashboardOverlay( void *args )
{
    struct IVRApplications_IVRApplications_007_LaunchDashboardOverlay_params *params = (struct IVRApplications_IVRApplications_007_LaunchDashboardOverlay_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->LaunchDashboardOverlay( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_CancelApplicationLaunch( void *args )
{
    struct IVRApplications_IVRApplications_007_CancelApplicationLaunch_params *params = (struct IVRApplications_IVRApplications_007_CancelApplicationLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->CancelApplicationLaunch( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_IdentifyApplication( void *args )
{
    struct IVRApplications_IVRApplications_007_IdentifyApplication_params *params = (struct IVRApplications_IVRApplications_007_IdentifyApplication_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetApplicationProcessId( void *args )
{
    struct IVRApplications_IVRApplications_007_GetApplicationProcessId_params *params = (struct IVRApplications_IVRApplications_007_GetApplicationProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetApplicationProcessId( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum_params *params = (struct IVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetApplicationsErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetApplicationPropertyString( void *args )
{
    struct IVRApplications_IVRApplications_007_GetApplicationPropertyString_params *params = (struct IVRApplications_IVRApplications_007_GetApplicationPropertyString_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetApplicationPropertyBool( void *args )
{
    struct IVRApplications_IVRApplications_007_GetApplicationPropertyBool_params *params = (struct IVRApplications_IVRApplications_007_GetApplicationPropertyBool_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetApplicationPropertyUint64( void *args )
{
    struct IVRApplications_IVRApplications_007_GetApplicationPropertyUint64_params *params = (struct IVRApplications_IVRApplications_007_GetApplicationPropertyUint64_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetApplicationPropertyUint64( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_SetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_007_SetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_007_SetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_007_GetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_007_GetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetApplicationAutoLaunch( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType( void *args )
{
    struct IVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType_params *params = (struct IVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->SetDefaultApplicationForMimeType( params->pchAppKey, params->pchMimeType );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType( void *args )
{
    struct IVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType_params *params = (struct IVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetDefaultApplicationForMimeType( params->pchMimeType, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes( void *args )
{
    struct IVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes_params *params = (struct IVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetApplicationSupportedMimeTypes( params->pchAppKey, params->pchMimeTypesBuffer, params->unMimeTypesBuffer );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType( void *args )
{
    struct IVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType_params *params = (struct IVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetApplicationsThatSupportMimeType( params->pchMimeType, params->pchAppKeysThatSupportBuffer, params->unAppKeysThatSupportBuffer );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetApplicationLaunchArguments( void *args )
{
    struct IVRApplications_IVRApplications_007_GetApplicationLaunchArguments_params *params = (struct IVRApplications_IVRApplications_007_GetApplicationLaunchArguments_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetApplicationLaunchArguments( params->unHandle, params->pchArgs, params->unArgs );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetStartingApplication( void *args )
{
    struct IVRApplications_IVRApplications_007_GetStartingApplication_params *params = (struct IVRApplications_IVRApplications_007_GetStartingApplication_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetSceneApplicationState( void *args )
{
    struct IVRApplications_IVRApplications_007_GetSceneApplicationState_params *params = (struct IVRApplications_IVRApplications_007_GetSceneApplicationState_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetSceneApplicationState(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck( void *args )
{
    struct IVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck_params *params = (struct IVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum_params *params = (struct IVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetSceneApplicationStateNameFromEnum( params->state );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_LaunchInternalProcess( void *args )
{
    struct IVRApplications_IVRApplications_007_LaunchInternalProcess_params *params = (struct IVRApplications_IVRApplications_007_LaunchInternalProcess_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->LaunchInternalProcess( params->pchBinaryPath, params->pchArguments, params->pchWorkingDirectory );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_007_GetCurrentSceneProcessId( void *args )
{
    struct IVRApplications_IVRApplications_007_GetCurrentSceneProcessId_params *params = (struct IVRApplications_IVRApplications_007_GetCurrentSceneProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_007 *iface = (struct u_IVRApplications_IVRApplications_007 *)params->linux_side;
    params->_ret = iface->GetCurrentSceneProcessId(  );
    return 0;
}

