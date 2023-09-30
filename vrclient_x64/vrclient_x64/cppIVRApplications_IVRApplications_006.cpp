/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRApplications_IVRApplications_006.h"
void cppIVRApplications_IVRApplications_006_AddApplicationManifest( struct cppIVRApplications_IVRApplications_006_AddApplicationManifest_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->AddApplicationManifest( params->pchApplicationManifestFullPath, params->bTemporary );
}

void cppIVRApplications_IVRApplications_006_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_006_RemoveApplicationManifest_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->RemoveApplicationManifest( params->pchApplicationManifestFullPath );
}

void cppIVRApplications_IVRApplications_006_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_006_IsApplicationInstalled_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (bool)iface->IsApplicationInstalled( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_006_GetApplicationCount( struct cppIVRApplications_IVRApplications_006_GetApplicationCount_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationCount(  );
}

void cppIVRApplications_IVRApplications_006_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_006_GetApplicationKeyByIndex_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByIndex( params->unApplicationIndex, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationKeyByProcessId( params->unProcessId, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_006_LaunchApplication( struct cppIVRApplications_IVRApplications_006_LaunchApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchApplication( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_006_LaunchTemplateApplication( struct cppIVRApplications_IVRApplications_006_LaunchTemplateApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchTemplateApplication( params->pchTemplateAppKey, params->pchNewAppKey, params->pKeys, params->unKeys );
}

void cppIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType( struct cppIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchApplicationFromMimeType( params->pchMimeType, params->pchArgs );
}

void cppIVRApplications_IVRApplications_006_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_006_LaunchDashboardOverlay_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchDashboardOverlay( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_006_CancelApplicationLaunch( struct cppIVRApplications_IVRApplications_006_CancelApplicationLaunch_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (bool)iface->CancelApplicationLaunch( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_006_IdentifyApplication( struct cppIVRApplications_IVRApplications_006_IdentifyApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->IdentifyApplication( params->unProcessId, params->pchAppKey );
}

void cppIVRApplications_IVRApplications_006_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_006_GetApplicationProcessId_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationProcessId( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (const char *)iface->GetApplicationsErrorNameFromEnum( params->error );
}

void cppIVRApplications_IVRApplications_006_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_006_GetApplicationPropertyString_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationPropertyString( params->pchAppKey, params->eProperty, params->pchPropertyValueBuffer, params->unPropertyValueBufferLen, params->peError );
}

void cppIVRApplications_IVRApplications_006_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_006_GetApplicationPropertyBool_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationPropertyBool( params->pchAppKey, params->eProperty, params->peError );
}

void cppIVRApplications_IVRApplications_006_GetApplicationPropertyUint64( struct cppIVRApplications_IVRApplications_006_GetApplicationPropertyUint64_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetApplicationPropertyUint64( params->pchAppKey, params->eProperty, params->peError );
}

void cppIVRApplications_IVRApplications_006_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_006_SetApplicationAutoLaunch_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetApplicationAutoLaunch( params->pchAppKey, params->bAutoLaunch );
}

void cppIVRApplications_IVRApplications_006_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_006_GetApplicationAutoLaunch_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationAutoLaunch( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType( struct cppIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDefaultApplicationForMimeType( params->pchAppKey, params->pchMimeType );
}

void cppIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType( struct cppIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (bool)iface->GetDefaultApplicationForMimeType( params->pchMimeType, params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes( struct cppIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (bool)iface->GetApplicationSupportedMimeTypes( params->pchAppKey, params->pchMimeTypesBuffer, params->unMimeTypesBuffer );
}

void cppIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType( struct cppIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationsThatSupportMimeType( params->pchMimeType, params->pchAppKeysThatSupportBuffer, params->unAppKeysThatSupportBuffer );
}

void cppIVRApplications_IVRApplications_006_GetApplicationLaunchArguments( struct cppIVRApplications_IVRApplications_006_GetApplicationLaunchArguments_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetApplicationLaunchArguments( params->unHandle, params->pchArgs, params->unArgs );
}

void cppIVRApplications_IVRApplications_006_GetStartingApplication( struct cppIVRApplications_IVRApplications_006_GetStartingApplication_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetStartingApplication( params->pchAppKeyBuffer, params->unAppKeyBufferLen );
}

void cppIVRApplications_IVRApplications_006_GetTransitionState( struct cppIVRApplications_IVRApplications_006_GetTransitionState_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransitionState(  );
}

void cppIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->PerformApplicationPrelaunchCheck( params->pchAppKey );
}

void cppIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (const char *)iface->GetApplicationsTransitionStateNameFromEnum( params->state );
}

void cppIVRApplications_IVRApplications_006_IsQuitUserPromptRequested( struct cppIVRApplications_IVRApplications_006_IsQuitUserPromptRequested_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (bool)iface->IsQuitUserPromptRequested(  );
}

void cppIVRApplications_IVRApplications_006_LaunchInternalProcess( struct cppIVRApplications_IVRApplications_006_LaunchInternalProcess_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->LaunchInternalProcess( params->pchBinaryPath, params->pchArguments, params->pchWorkingDirectory );
}

void cppIVRApplications_IVRApplications_006_GetCurrentSceneProcessId( struct cppIVRApplications_IVRApplications_006_GetCurrentSceneProcessId_params *params )
{
    struct u_IVRApplications_IVRApplications_006 *iface = (struct u_IVRApplications_IVRApplications_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneProcessId(  );
}

