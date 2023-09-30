/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRApplications_IVRApplications_001_AddApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_001_AddApplicationManifest_params *params = (struct IVRApplications_IVRApplications_001_AddApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->AddApplicationManifest( params->pchApplicationManifestFullPath, params->bTemporary );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_RemoveApplicationManifest( void *args )
{
    struct IVRApplications_IVRApplications_001_RemoveApplicationManifest_params *params = (struct IVRApplications_IVRApplications_001_RemoveApplicationManifest_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->RemoveApplicationManifest( params->pchApplicationManifestFullPath );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_IsApplicationInstalled( void *args )
{
    struct IVRApplications_IVRApplications_001_IsApplicationInstalled_params *params = (struct IVRApplications_IVRApplications_001_IsApplicationInstalled_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (bool)iface->IsApplicationInstalled( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_GetApplicationCount( void *args )
{
    struct IVRApplications_IVRApplications_001_GetApplicationCount_params *params = (struct IVRApplications_IVRApplications_001_GetApplicationCount_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationCount(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_GetApplicationKeyByIndex( void *args )
{
    struct IVRApplications_IVRApplications_001_GetApplicationKeyByIndex_params *params = (struct IVRApplications_IVRApplications_001_GetApplicationKeyByIndex_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_GetApplicationKeyByProcessId( void *args )
{
    struct IVRApplications_IVRApplications_001_GetApplicationKeyByProcessId_params *params = (struct IVRApplications_IVRApplications_001_GetApplicationKeyByProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_LaunchApplication( void *args )
{
    struct IVRApplications_IVRApplications_001_LaunchApplication_params *params = (struct IVRApplications_IVRApplications_001_LaunchApplication_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchApplication( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_LaunchDashboardOverlay( void *args )
{
    struct IVRApplications_IVRApplications_001_LaunchDashboardOverlay_params *params = (struct IVRApplications_IVRApplications_001_LaunchDashboardOverlay_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchDashboardOverlay( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_IdentifyApplication( void *args )
{
    struct IVRApplications_IVRApplications_001_IdentifyApplication_params *params = (struct IVRApplications_IVRApplications_001_IdentifyApplication_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_GetApplicationProcessId( void *args )
{
    struct IVRApplications_IVRApplications_001_GetApplicationProcessId_params *params = (struct IVRApplications_IVRApplications_001_GetApplicationProcessId_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationProcessId( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum_params *params = (struct IVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (const char *)iface->GetApplicationsErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_GetApplicationPropertyString( void *args )
{
    struct IVRApplications_IVRApplications_001_GetApplicationPropertyString_params *params = (struct IVRApplications_IVRApplications_001_GetApplicationPropertyString_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_GetApplicationPropertyBool( void *args )
{
    struct IVRApplications_IVRApplications_001_GetApplicationPropertyBool_params *params = (struct IVRApplications_IVRApplications_001_GetApplicationPropertyBool_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_GetHomeApplication( void *args )
{
    struct IVRApplications_IVRApplications_001_GetHomeApplication_params *params = (struct IVRApplications_IVRApplications_001_GetHomeApplication_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetHomeApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_SetHomeApplication( void *args )
{
    struct IVRApplications_IVRApplications_001_SetHomeApplication_params *params = (struct IVRApplications_IVRApplications_001_SetHomeApplication_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHomeApplication( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_SetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_001_SetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_001_SetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_GetApplicationAutoLaunch( void *args )
{
    struct IVRApplications_IVRApplications_001_GetApplicationAutoLaunch_params *params = (struct IVRApplications_IVRApplications_001_GetApplicationAutoLaunch_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationAutoLaunch( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_GetStartingApplication( void *args )
{
    struct IVRApplications_IVRApplications_001_GetStartingApplication_params *params = (struct IVRApplications_IVRApplications_001_GetStartingApplication_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_GetTransitionState( void *args )
{
    struct IVRApplications_IVRApplications_001_GetTransitionState_params *params = (struct IVRApplications_IVRApplications_001_GetTransitionState_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransitionState(  );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck( void *args )
{
    struct IVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck_params *params = (struct IVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
    return 0;
}

NTSTATUS IVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum( void *args )
{
    struct IVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum_params *params = (struct IVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum_params *)args;
    struct u_IVRApplications_IVRApplications_001 *iface = (struct u_IVRApplications_IVRApplications_001 *)params->linux_side;
    params->_ret = (const char *)iface->GetApplicationsTransitionStateNameFromEnum( params->state );
    return 0;
}

