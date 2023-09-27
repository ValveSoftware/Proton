#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.1/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRApplications_IVRApplications_005.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRApplications_IVRApplications_005_AddApplicationManifest( struct cppIVRApplications_IVRApplications_005_AddApplicationManifest_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->AddApplicationManifest((const char *)params->pchApplicationManifestFullPath, (bool)params->bTemporary);
}

void cppIVRApplications_IVRApplications_005_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_005_RemoveApplicationManifest_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->RemoveApplicationManifest((const char *)params->pchApplicationManifestFullPath);
}

void cppIVRApplications_IVRApplications_005_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_005_IsApplicationInstalled_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->IsApplicationInstalled((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_005_GetApplicationCount( struct cppIVRApplications_IVRApplications_005_GetApplicationCount_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationCount();
}

void cppIVRApplications_IVRApplications_005_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_005_GetApplicationKeyByIndex_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationKeyByIndex((uint32_t)params->unApplicationIndex, (char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationKeyByProcessId((uint32_t)params->unProcessId, (char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_005_LaunchApplication( struct cppIVRApplications_IVRApplications_005_LaunchApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchApplication((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_005_LaunchTemplateApplication( struct cppIVRApplications_IVRApplications_005_LaunchTemplateApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchTemplateApplication((const char *)params->pchTemplateAppKey, (const char *)params->pchNewAppKey, (const vr::AppOverrideKeys_t *)params->pKeys, (uint32_t)params->unKeys);
}

void cppIVRApplications_IVRApplications_005_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_005_LaunchDashboardOverlay_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchDashboardOverlay((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_005_CancelApplicationLaunch( struct cppIVRApplications_IVRApplications_005_CancelApplicationLaunch_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->CancelApplicationLaunch((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_005_IdentifyApplication( struct cppIVRApplications_IVRApplications_005_IdentifyApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->IdentifyApplication((uint32_t)params->unProcessId, (const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_005_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_005_GetApplicationProcessId_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationProcessId((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationsErrorNameFromEnum((vr::EVRApplicationError)params->error);
}

void cppIVRApplications_IVRApplications_005_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_005_GetApplicationPropertyString_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationPropertyString((const char *)params->pchAppKey, (vr::EVRApplicationProperty)params->eProperty, (char *)params->pchPropertyValueBuffer, (uint32_t)params->unPropertyValueBufferLen, (vr::EVRApplicationError *)params->peError);
}

void cppIVRApplications_IVRApplications_005_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_005_GetApplicationPropertyBool_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationPropertyBool((const char *)params->pchAppKey, (vr::EVRApplicationProperty)params->eProperty, (vr::EVRApplicationError *)params->peError);
}

void cppIVRApplications_IVRApplications_005_GetApplicationPropertyUint64( struct cppIVRApplications_IVRApplications_005_GetApplicationPropertyUint64_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationPropertyUint64((const char *)params->pchAppKey, (vr::EVRApplicationProperty)params->eProperty, (vr::EVRApplicationError *)params->peError);
}

void cppIVRApplications_IVRApplications_005_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_005_SetApplicationAutoLaunch_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->SetApplicationAutoLaunch((const char *)params->pchAppKey, (bool)params->bAutoLaunch);
}

void cppIVRApplications_IVRApplications_005_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_005_GetApplicationAutoLaunch_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationAutoLaunch((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_005_GetStartingApplication( struct cppIVRApplications_IVRApplications_005_GetStartingApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetStartingApplication((char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_005_GetTransitionState( struct cppIVRApplications_IVRApplications_005_GetTransitionState_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetTransitionState();
}

void cppIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->PerformApplicationPrelaunchCheck((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationsTransitionStateNameFromEnum((vr::EVRApplicationTransitionState)params->state);
}

void cppIVRApplications_IVRApplications_005_IsQuitUserPromptRequested( struct cppIVRApplications_IVRApplications_005_IsQuitUserPromptRequested_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->IsQuitUserPromptRequested();
}

void cppIVRApplications_IVRApplications_005_LaunchInternalProcess( struct cppIVRApplications_IVRApplications_005_LaunchInternalProcess_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchInternalProcess((const char *)params->pchBinaryPath, (const char *)params->pchArguments, (const char *)params->pchWorkingDirectory);
}

#ifdef __cplusplus
}
#endif
