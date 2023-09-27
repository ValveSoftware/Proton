#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRApplications_IVRApplications_007.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRApplications_IVRApplications_007_AddApplicationManifest( struct cppIVRApplications_IVRApplications_007_AddApplicationManifest_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->AddApplicationManifest((const char *)params->pchApplicationManifestFullPath, (bool)params->bTemporary);
}

void cppIVRApplications_IVRApplications_007_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_007_RemoveApplicationManifest_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->RemoveApplicationManifest((const char *)params->pchApplicationManifestFullPath);
}

void cppIVRApplications_IVRApplications_007_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_007_IsApplicationInstalled_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->IsApplicationInstalled((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_007_GetApplicationCount( struct cppIVRApplications_IVRApplications_007_GetApplicationCount_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationCount();
}

void cppIVRApplications_IVRApplications_007_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_007_GetApplicationKeyByIndex_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationKeyByIndex((uint32_t)params->unApplicationIndex, (char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationKeyByProcessId((uint32_t)params->unProcessId, (char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_007_LaunchApplication( struct cppIVRApplications_IVRApplications_007_LaunchApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchApplication((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_007_LaunchTemplateApplication( struct cppIVRApplications_IVRApplications_007_LaunchTemplateApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchTemplateApplication((const char *)params->pchTemplateAppKey, (const char *)params->pchNewAppKey, (const vr::AppOverrideKeys_t *)params->pKeys, (uint32_t)params->unKeys);
}

void cppIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType( struct cppIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchApplicationFromMimeType((const char *)params->pchMimeType, (const char *)params->pchArgs);
}

void cppIVRApplications_IVRApplications_007_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_007_LaunchDashboardOverlay_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchDashboardOverlay((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_007_CancelApplicationLaunch( struct cppIVRApplications_IVRApplications_007_CancelApplicationLaunch_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->CancelApplicationLaunch((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_007_IdentifyApplication( struct cppIVRApplications_IVRApplications_007_IdentifyApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->IdentifyApplication((uint32_t)params->unProcessId, (const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_007_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_007_GetApplicationProcessId_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationProcessId((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationsErrorNameFromEnum((vr::EVRApplicationError)params->error);
}

void cppIVRApplications_IVRApplications_007_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_007_GetApplicationPropertyString_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationPropertyString((const char *)params->pchAppKey, (vr::EVRApplicationProperty)params->eProperty, (char *)params->pchPropertyValueBuffer, (uint32_t)params->unPropertyValueBufferLen, (vr::EVRApplicationError *)params->peError);
}

void cppIVRApplications_IVRApplications_007_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_007_GetApplicationPropertyBool_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationPropertyBool((const char *)params->pchAppKey, (vr::EVRApplicationProperty)params->eProperty, (vr::EVRApplicationError *)params->peError);
}

void cppIVRApplications_IVRApplications_007_GetApplicationPropertyUint64( struct cppIVRApplications_IVRApplications_007_GetApplicationPropertyUint64_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationPropertyUint64((const char *)params->pchAppKey, (vr::EVRApplicationProperty)params->eProperty, (vr::EVRApplicationError *)params->peError);
}

void cppIVRApplications_IVRApplications_007_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_007_SetApplicationAutoLaunch_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->SetApplicationAutoLaunch((const char *)params->pchAppKey, (bool)params->bAutoLaunch);
}

void cppIVRApplications_IVRApplications_007_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_007_GetApplicationAutoLaunch_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationAutoLaunch((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType( struct cppIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->SetDefaultApplicationForMimeType((const char *)params->pchAppKey, (const char *)params->pchMimeType);
}

void cppIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType( struct cppIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetDefaultApplicationForMimeType((const char *)params->pchMimeType, (char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes( struct cppIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationSupportedMimeTypes((const char *)params->pchAppKey, (char *)params->pchMimeTypesBuffer, (uint32_t)params->unMimeTypesBuffer);
}

void cppIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType( struct cppIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationsThatSupportMimeType((const char *)params->pchMimeType, (char *)params->pchAppKeysThatSupportBuffer, (uint32_t)params->unAppKeysThatSupportBuffer);
}

void cppIVRApplications_IVRApplications_007_GetApplicationLaunchArguments( struct cppIVRApplications_IVRApplications_007_GetApplicationLaunchArguments_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationLaunchArguments((uint32_t)params->unHandle, (char *)params->pchArgs, (uint32_t)params->unArgs);
}

void cppIVRApplications_IVRApplications_007_GetStartingApplication( struct cppIVRApplications_IVRApplications_007_GetStartingApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetStartingApplication((char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_007_GetSceneApplicationState( struct cppIVRApplications_IVRApplications_007_GetSceneApplicationState_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetSceneApplicationState();
}

void cppIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->PerformApplicationPrelaunchCheck((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum( struct cppIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetSceneApplicationStateNameFromEnum((vr::EVRSceneApplicationState)params->state);
}

void cppIVRApplications_IVRApplications_007_LaunchInternalProcess( struct cppIVRApplications_IVRApplications_007_LaunchInternalProcess_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchInternalProcess((const char *)params->pchBinaryPath, (const char *)params->pchArguments, (const char *)params->pchWorkingDirectory);
}

void cppIVRApplications_IVRApplications_007_GetCurrentSceneProcessId( struct cppIVRApplications_IVRApplications_007_GetCurrentSceneProcessId_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetCurrentSceneProcessId();
}

#ifdef __cplusplus
}
#endif
