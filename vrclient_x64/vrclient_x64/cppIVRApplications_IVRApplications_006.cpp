#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.7.15/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRApplications_IVRApplications_006.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRApplications_IVRApplications_006_AddApplicationManifest( struct cppIVRApplications_IVRApplications_006_AddApplicationManifest_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->AddApplicationManifest((const char *)params->pchApplicationManifestFullPath, (bool)params->bTemporary);
}

void cppIVRApplications_IVRApplications_006_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_006_RemoveApplicationManifest_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->RemoveApplicationManifest((const char *)params->pchApplicationManifestFullPath);
}

void cppIVRApplications_IVRApplications_006_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_006_IsApplicationInstalled_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->IsApplicationInstalled((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_006_GetApplicationCount( struct cppIVRApplications_IVRApplications_006_GetApplicationCount_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationCount();
}

void cppIVRApplications_IVRApplications_006_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_006_GetApplicationKeyByIndex_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationKeyByIndex((uint32_t)params->unApplicationIndex, (char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationKeyByProcessId((uint32_t)params->unProcessId, (char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_006_LaunchApplication( struct cppIVRApplications_IVRApplications_006_LaunchApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchApplication((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_006_LaunchTemplateApplication( struct cppIVRApplications_IVRApplications_006_LaunchTemplateApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchTemplateApplication((const char *)params->pchTemplateAppKey, (const char *)params->pchNewAppKey, (const vr::AppOverrideKeys_t *)params->pKeys, (uint32_t)params->unKeys);
}

void cppIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType( struct cppIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchApplicationFromMimeType((const char *)params->pchMimeType, (const char *)params->pchArgs);
}

void cppIVRApplications_IVRApplications_006_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_006_LaunchDashboardOverlay_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchDashboardOverlay((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_006_CancelApplicationLaunch( struct cppIVRApplications_IVRApplications_006_CancelApplicationLaunch_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->CancelApplicationLaunch((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_006_IdentifyApplication( struct cppIVRApplications_IVRApplications_006_IdentifyApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->IdentifyApplication((uint32_t)params->unProcessId, (const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_006_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_006_GetApplicationProcessId_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationProcessId((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationsErrorNameFromEnum((vr::EVRApplicationError)params->error);
}

void cppIVRApplications_IVRApplications_006_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_006_GetApplicationPropertyString_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationPropertyString((const char *)params->pchAppKey, (vr::EVRApplicationProperty)params->eProperty, (char *)params->pchPropertyValueBuffer, (uint32_t)params->unPropertyValueBufferLen, (vr::EVRApplicationError *)params->peError);
}

void cppIVRApplications_IVRApplications_006_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_006_GetApplicationPropertyBool_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationPropertyBool((const char *)params->pchAppKey, (vr::EVRApplicationProperty)params->eProperty, (vr::EVRApplicationError *)params->peError);
}

void cppIVRApplications_IVRApplications_006_GetApplicationPropertyUint64( struct cppIVRApplications_IVRApplications_006_GetApplicationPropertyUint64_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationPropertyUint64((const char *)params->pchAppKey, (vr::EVRApplicationProperty)params->eProperty, (vr::EVRApplicationError *)params->peError);
}

void cppIVRApplications_IVRApplications_006_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_006_SetApplicationAutoLaunch_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->SetApplicationAutoLaunch((const char *)params->pchAppKey, (bool)params->bAutoLaunch);
}

void cppIVRApplications_IVRApplications_006_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_006_GetApplicationAutoLaunch_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationAutoLaunch((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType( struct cppIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->SetDefaultApplicationForMimeType((const char *)params->pchAppKey, (const char *)params->pchMimeType);
}

void cppIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType( struct cppIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetDefaultApplicationForMimeType((const char *)params->pchMimeType, (char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes( struct cppIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationSupportedMimeTypes((const char *)params->pchAppKey, (char *)params->pchMimeTypesBuffer, (uint32_t)params->unMimeTypesBuffer);
}

void cppIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType( struct cppIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationsThatSupportMimeType((const char *)params->pchMimeType, (char *)params->pchAppKeysThatSupportBuffer, (uint32_t)params->unAppKeysThatSupportBuffer);
}

void cppIVRApplications_IVRApplications_006_GetApplicationLaunchArguments( struct cppIVRApplications_IVRApplications_006_GetApplicationLaunchArguments_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationLaunchArguments((uint32_t)params->unHandle, (char *)params->pchArgs, (uint32_t)params->unArgs);
}

void cppIVRApplications_IVRApplications_006_GetStartingApplication( struct cppIVRApplications_IVRApplications_006_GetStartingApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetStartingApplication((char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_006_GetTransitionState( struct cppIVRApplications_IVRApplications_006_GetTransitionState_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetTransitionState();
}

void cppIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->PerformApplicationPrelaunchCheck((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationsTransitionStateNameFromEnum((vr::EVRApplicationTransitionState)params->state);
}

void cppIVRApplications_IVRApplications_006_IsQuitUserPromptRequested( struct cppIVRApplications_IVRApplications_006_IsQuitUserPromptRequested_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->IsQuitUserPromptRequested();
}

void cppIVRApplications_IVRApplications_006_LaunchInternalProcess( struct cppIVRApplications_IVRApplications_006_LaunchInternalProcess_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchInternalProcess((const char *)params->pchBinaryPath, (const char *)params->pchArguments, (const char *)params->pchWorkingDirectory);
}

void cppIVRApplications_IVRApplications_006_GetCurrentSceneProcessId( struct cppIVRApplications_IVRApplications_006_GetCurrentSceneProcessId_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetCurrentSceneProcessId();
}

#ifdef __cplusplus
}
#endif
