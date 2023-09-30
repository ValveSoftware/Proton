/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRApplications_IVRApplications_003.h"
void cppIVRApplications_IVRApplications_003_AddApplicationManifest( struct cppIVRApplications_IVRApplications_003_AddApplicationManifest_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->AddApplicationManifest( params->pchApplicationManifestFullPath, params->bTemporary );
}

void cppIVRApplications_IVRApplications_003_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_003_RemoveApplicationManifest_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->RemoveApplicationManifest( params->pchApplicationManifestFullPath );
}

void cppIVRApplications_IVRApplications_003_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_003_IsApplicationInstalled_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (bool)iface->IsApplicationInstalled( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_GetApplicationCount( struct cppIVRApplications_IVRApplications_003_GetApplicationCount_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationCount(  );
}

void cppIVRApplications_IVRApplications_003_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_003_GetApplicationKeyByIndex_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_003_LaunchApplication( struct cppIVRApplications_IVRApplications_003_LaunchApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchApplication( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_003_LaunchDashboardOverlay_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchDashboardOverlay( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_IdentifyApplication( struct cppIVRApplications_IVRApplications_003_IdentifyApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_003_GetApplicationProcessId_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationProcessId( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (const char *)iface->GetApplicationsErrorNameFromEnum( params->error );
}

void cppIVRApplications_IVRApplications_003_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_003_GetApplicationPropertyString_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
}

void cppIVRApplications_IVRApplications_003_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_003_GetApplicationPropertyBool_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
}

void cppIVRApplications_IVRApplications_003_GetApplicationPropertyUint64( struct cppIVRApplications_IVRApplications_003_GetApplicationPropertyUint64_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetApplicationPropertyUint64( params->pchAppKey, params->eProperty, params->peError );
}

void cppIVRApplications_IVRApplications_003_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_003_SetApplicationAutoLaunch_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
}

void cppIVRApplications_IVRApplications_003_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_003_GetApplicationAutoLaunch_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationAutoLaunch( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_GetStartingApplication( struct cppIVRApplications_IVRApplications_003_GetStartingApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_003_GetTransitionState( struct cppIVRApplications_IVRApplications_003_GetTransitionState_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransitionState(  );
}

void cppIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (const char *)iface->GetApplicationsTransitionStateNameFromEnum( params->state );
}

void cppIVRApplications_IVRApplications_003_IsQuitUserPromptRequested( struct cppIVRApplications_IVRApplications_003_IsQuitUserPromptRequested_params *params )
{
    struct u_IVRApplications_IVRApplications_003 *iface = (struct u_IVRApplications_IVRApplications_003 *)params->linux_side;
    params->_ret = (bool)iface->IsQuitUserPromptRequested(  );
}

