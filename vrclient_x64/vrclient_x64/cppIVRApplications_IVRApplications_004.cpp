#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.18/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRApplications_IVRApplications_004.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRApplications_IVRApplications_004_AddApplicationManifest( struct cppIVRApplications_IVRApplications_004_AddApplicationManifest_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->AddApplicationManifest((const char *)params->pchApplicationManifestFullPath, (bool)params->bTemporary);
}

void cppIVRApplications_IVRApplications_004_RemoveApplicationManifest( struct cppIVRApplications_IVRApplications_004_RemoveApplicationManifest_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->RemoveApplicationManifest((const char *)params->pchApplicationManifestFullPath);
}

void cppIVRApplications_IVRApplications_004_IsApplicationInstalled( struct cppIVRApplications_IVRApplications_004_IsApplicationInstalled_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->IsApplicationInstalled((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_004_GetApplicationCount( struct cppIVRApplications_IVRApplications_004_GetApplicationCount_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationCount();
}

void cppIVRApplications_IVRApplications_004_GetApplicationKeyByIndex( struct cppIVRApplications_IVRApplications_004_GetApplicationKeyByIndex_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationKeyByIndex((uint32_t)params->unApplicationIndex, (char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId( struct cppIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationKeyByProcessId((uint32_t)params->unProcessId, (char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_004_LaunchApplication( struct cppIVRApplications_IVRApplications_004_LaunchApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchApplication((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_004_LaunchDashboardOverlay( struct cppIVRApplications_IVRApplications_004_LaunchDashboardOverlay_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchDashboardOverlay((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_004_CancelApplicationLaunch( struct cppIVRApplications_IVRApplications_004_CancelApplicationLaunch_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->CancelApplicationLaunch((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_004_IdentifyApplication( struct cppIVRApplications_IVRApplications_004_IdentifyApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->IdentifyApplication((uint32_t)params->unProcessId, (const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_004_GetApplicationProcessId( struct cppIVRApplications_IVRApplications_004_GetApplicationProcessId_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationProcessId((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum( struct cppIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationsErrorNameFromEnum((vr::EVRApplicationError)params->error);
}

void cppIVRApplications_IVRApplications_004_GetApplicationPropertyString( struct cppIVRApplications_IVRApplications_004_GetApplicationPropertyString_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationPropertyString((const char *)params->pchAppKey, (vr::EVRApplicationProperty)params->eProperty, (char *)params->pchPropertyValueBuffer, (uint32_t)params->unPropertyValueBufferLen, (vr::EVRApplicationError *)params->peError);
}

void cppIVRApplications_IVRApplications_004_GetApplicationPropertyBool( struct cppIVRApplications_IVRApplications_004_GetApplicationPropertyBool_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationPropertyBool((const char *)params->pchAppKey, (vr::EVRApplicationProperty)params->eProperty, (vr::EVRApplicationError *)params->peError);
}

void cppIVRApplications_IVRApplications_004_GetApplicationPropertyUint64( struct cppIVRApplications_IVRApplications_004_GetApplicationPropertyUint64_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationPropertyUint64((const char *)params->pchAppKey, (vr::EVRApplicationProperty)params->eProperty, (vr::EVRApplicationError *)params->peError);
}

void cppIVRApplications_IVRApplications_004_SetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_004_SetApplicationAutoLaunch_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->SetApplicationAutoLaunch((const char *)params->pchAppKey, (bool)params->bAutoLaunch);
}

void cppIVRApplications_IVRApplications_004_GetApplicationAutoLaunch( struct cppIVRApplications_IVRApplications_004_GetApplicationAutoLaunch_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationAutoLaunch((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_004_GetStartingApplication( struct cppIVRApplications_IVRApplications_004_GetStartingApplication_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetStartingApplication((char *)params->pchAppKeyBuffer, (uint32_t)params->unAppKeyBufferLen);
}

void cppIVRApplications_IVRApplications_004_GetTransitionState( struct cppIVRApplications_IVRApplications_004_GetTransitionState_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetTransitionState();
}

void cppIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck( struct cppIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->PerformApplicationPrelaunchCheck((const char *)params->pchAppKey);
}

void cppIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum( struct cppIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->GetApplicationsTransitionStateNameFromEnum((vr::EVRApplicationTransitionState)params->state);
}

void cppIVRApplications_IVRApplications_004_IsQuitUserPromptRequested( struct cppIVRApplications_IVRApplications_004_IsQuitUserPromptRequested_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->IsQuitUserPromptRequested();
}

void cppIVRApplications_IVRApplications_004_LaunchInternalProcess( struct cppIVRApplications_IVRApplications_004_LaunchInternalProcess_params *params )
{
    params->_ret = ((IVRApplications*)params->linux_side)->LaunchInternalProcess((const char *)params->pchBinaryPath, (const char *)params->pchArguments, (const char *)params->pchWorkingDirectory);
}

#ifdef __cplusplus
}
#endif
