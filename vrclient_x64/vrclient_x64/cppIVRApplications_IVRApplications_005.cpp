/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRApplications_IVRApplications_005_AddApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_005_AddApplicationManifest_params *params = (struct IVRApplications_IVRApplications_005_AddApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->AddApplicationManifest( params->pchApplicationManifestFullPath, params->bTemporary );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_RemoveApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_005_RemoveApplicationManifest_params *params = (struct IVRApplications_IVRApplications_005_RemoveApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->RemoveApplicationManifest( params->pchApplicationManifestFullPath );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_IsApplicationInstalled( void *args )
{
    struct IVRApplications_IVRApplications_005_IsApplicationInstalled_params *params = (struct IVRApplications_IVRApplications_005_IsApplicationInstalled_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (bool)iface->IsApplicationInstalled( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_GetApplicationCount( void *args )
{
    struct IVRApplications_IVRApplications_005_GetApplicationCount_params *params = (struct IVRApplications_IVRApplications_005_GetApplicationCount_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationCount(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_GetApplicationKeyByIndex( void *args )
{
    struct IVRApplications_IVRApplications_005_GetApplicationKeyByIndex_params *params = (struct IVRApplications_IVRApplications_005_GetApplicationKeyByIndex_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_GetApplicationKeyByProcessId( void *args )
{
    struct IVRApplications_IVRApplications_005_GetApplicationKeyByProcessId_params *params = (struct IVRApplications_IVRApplications_005_GetApplicationKeyByProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_LaunchApplication( void *args )
{
    struct IVRApplications_IVRApplications_005_LaunchApplication_params *params = (struct IVRApplications_IVRApplications_005_LaunchApplication_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchApplication( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_LaunchTemplateApplication( void *args )
{
    struct IVRApplications_IVRApplications_005_LaunchTemplateApplication_params *params = (struct IVRApplications_IVRApplications_005_LaunchTemplateApplication_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchTemplateApplication( params->pchTemplateAppKey, params->pchNewAppKey, params->pKeys, params->unKeys );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_LaunchDashboardOverlay( void *args )
{
    struct IVRApplications_IVRApplications_005_LaunchDashboardOverlay_params *params = (struct IVRApplications_IVRApplications_005_LaunchDashboardOverlay_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchDashboardOverlay( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_CancelApplicationLaunch( void *args )
{
    struct IVRApplications_IVRApplications_005_CancelApplicationLaunch_params *params = (struct IVRApplications_IVRApplications_005_CancelApplicationLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (bool)iface->CancelApplicationLaunch( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_IdentifyApplication( void *args )
{
    struct IVRApplications_IVRApplications_005_IdentifyApplication_params *params = (struct IVRApplications_IVRApplications_005_IdentifyApplication_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_GetApplicationProcessId( void *args )
{
    struct IVRApplications_IVRApplications_005_GetApplicationProcessId_params *params = (struct IVRApplications_IVRApplications_005_GetApplicationProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationProcessId( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum_params *params = (struct IVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (const char *)iface->GetApplicationsErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_GetApplicationPropertyString( void *args )
{
    struct IVRApplications_IVRApplications_005_GetApplicationPropertyString_params *params = (struct IVRApplications_IVRApplications_005_GetApplicationPropertyString_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_GetApplicationPropertyBool( void *args )
{
    struct IVRApplications_IVRApplications_005_GetApplicationPropertyBool_params *params = (struct IVRApplications_IVRApplications_005_GetApplicationPropertyBool_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_GetApplicationPropertyUint64( void *args )
{
    struct IVRApplications_IVRApplications_005_GetApplicationPropertyUint64_params *params = (struct IVRApplications_IVRApplications_005_GetApplicationPropertyUint64_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetApplicationPropertyUint64( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_SetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_005_SetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_005_SetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_GetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_005_GetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_005_GetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationAutoLaunch( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_GetStartingApplication( void *args )
{
    struct IVRApplications_IVRApplications_005_GetStartingApplication_params *params = (struct IVRApplications_IVRApplications_005_GetStartingApplication_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_GetTransitionState( void *args )
{
    struct IVRApplications_IVRApplications_005_GetTransitionState_params *params = (struct IVRApplications_IVRApplications_005_GetTransitionState_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransitionState(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck( void *args )
{
    struct IVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck_params *params = (struct IVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum_params *params = (struct IVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (const char *)iface->GetApplicationsTransitionStateNameFromEnum( params->state );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_IsQuitUserPromptRequested( void *args )
{
    struct IVRApplications_IVRApplications_005_IsQuitUserPromptRequested_params *params = (struct IVRApplications_IVRApplications_005_IsQuitUserPromptRequested_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (bool)iface->IsQuitUserPromptRequested(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_005_LaunchInternalProcess( void *args )
{
    struct IVRApplications_IVRApplications_005_LaunchInternalProcess_params *params = (struct IVRApplications_IVRApplications_005_LaunchInternalProcess_params *)args;
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchInternalProcess( params->pchBinaryPath, params->pchArguments, params->pchWorkingDirectory );
    return 0;
}

