/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRApplications_IVRApplications_005.h"
void cppIVRApplications_IVRApplications_005_AddApplicationManifest( struct cppIVRApplications_IVRApplications_005_AddApplicationManifest_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->AddApplicationManifest( params->pchApplicationManifestFullPath, params->bTemporary );
}

void cppIVRApplications_IVRApplications_005_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_005_RemoveApplicationManifest_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->RemoveApplicationManifest( params->pchApplicationManifestFullPath );
}

void cppIVRApplications_IVRApplications_005_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_005_IsApplicationInstalled_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (bool)iface->IsApplicationInstalled( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_005_GetApplicationCount( struct cppIVRApplications_IVRApplications_005_GetApplicationCount_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationCount(  );
}

void cppIVRApplications_IVRApplications_005_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_005_GetApplicationKeyByIndex_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_005_LaunchApplication( struct cppIVRApplications_IVRApplications_005_LaunchApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchApplication( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_005_LaunchTemplateApplication( struct cppIVRApplications_IVRApplications_005_LaunchTemplateApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchTemplateApplication( params->pchTemplateAppKey, params->pchNewAppKey, params->pKeys, params->unKeys );
}

void cppIVRApplications_IVRApplications_005_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_005_LaunchDashboardOverlay_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchDashboardOverlay( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_005_CancelApplicationLaunch( struct cppIVRApplications_IVRApplications_005_CancelApplicationLaunch_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (bool)iface->CancelApplicationLaunch( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_005_IdentifyApplication( struct cppIVRApplications_IVRApplications_005_IdentifyApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
}

void cppIVRApplications_IVRApplications_005_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_005_GetApplicationProcessId_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationProcessId( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (const char *)iface->GetApplicationsErrorNameFromEnum( params->error );
}

void cppIVRApplications_IVRApplications_005_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_005_GetApplicationPropertyString_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
}

void cppIVRApplications_IVRApplications_005_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_005_GetApplicationPropertyBool_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
}

void cppIVRApplications_IVRApplications_005_GetApplicationPropertyUint64( struct cppIVRApplications_IVRApplications_005_GetApplicationPropertyUint64_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetApplicationPropertyUint64( params->pchAppKey, params->eProperty, params->peError );
}

void cppIVRApplications_IVRApplications_005_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_005_SetApplicationAutoLaunch_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
}

void cppIVRApplications_IVRApplications_005_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_005_GetApplicationAutoLaunch_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationAutoLaunch( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_005_GetStartingApplication( struct cppIVRApplications_IVRApplications_005_GetStartingApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_005_GetTransitionState( struct cppIVRApplications_IVRApplications_005_GetTransitionState_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransitionState(  );
}

void cppIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (const char *)iface->GetApplicationsTransitionStateNameFromEnum( params->state );
}

void cppIVRApplications_IVRApplications_005_IsQuitUserPromptRequested( struct cppIVRApplications_IVRApplications_005_IsQuitUserPromptRequested_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (bool)iface->IsQuitUserPromptRequested(  );
}

void cppIVRApplications_IVRApplications_005_LaunchInternalProcess( struct cppIVRApplications_IVRApplications_005_LaunchInternalProcess_params *params )
{
    struct u_IVRApplications_IVRApplications_005 *iface = (struct u_IVRApplications_IVRApplications_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchInternalProcess( params->pchBinaryPath, params->pchArguments, params->pchWorkingDirectory );
}

