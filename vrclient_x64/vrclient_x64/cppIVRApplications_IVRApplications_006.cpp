#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.1.3b/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRApplications_IVRApplications_006.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::EVRApplicationError cppIVRApplications_IVRApplications_006_AddApplicationManifest(void *linux_side, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    return ((IVRApplications*)linux_side)->AddApplicationManifest((const char *)pchApplicationManifestFullPath, (bool)bTemporary);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_006_RemoveApplicationManifest(void *linux_side, const char * pchApplicationManifestFullPath)
{
    return ((IVRApplications*)linux_side)->RemoveApplicationManifest((const char *)pchApplicationManifestFullPath);
}

bool cppIVRApplications_IVRApplications_006_IsApplicationInstalled(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->IsApplicationInstalled((const char *)pchAppKey);
}

uint32_t cppIVRApplications_IVRApplications_006_GetApplicationCount(void *linux_side)
{
    return ((IVRApplications*)linux_side)->GetApplicationCount();
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_006_GetApplicationKeyByIndex(void *linux_side, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    return ((IVRApplications*)linux_side)->GetApplicationKeyByIndex((uint32_t)unApplicationIndex, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId(void *linux_side, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    return ((IVRApplications*)linux_side)->GetApplicationKeyByProcessId((uint32_t)unProcessId, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_006_LaunchApplication(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->LaunchApplication((const char *)pchAppKey);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_006_LaunchTemplateApplication(void *linux_side, const char * pchTemplateAppKey, const char * pchNewAppKey, AppOverrideKeys_t * pKeys, uint32_t unKeys)
{
    return ((IVRApplications*)linux_side)->LaunchTemplateApplication((const char *)pchTemplateAppKey, (const char *)pchNewAppKey, (const vr::AppOverrideKeys_t *)pKeys, (uint32_t)unKeys);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType(void *linux_side, const char * pchMimeType, const char * pchArgs)
{
    return ((IVRApplications*)linux_side)->LaunchApplicationFromMimeType((const char *)pchMimeType, (const char *)pchArgs);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_006_LaunchDashboardOverlay(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->LaunchDashboardOverlay((const char *)pchAppKey);
}

bool cppIVRApplications_IVRApplications_006_CancelApplicationLaunch(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->CancelApplicationLaunch((const char *)pchAppKey);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_006_IdentifyApplication(void *linux_side, uint32_t unProcessId, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->IdentifyApplication((uint32_t)unProcessId, (const char *)pchAppKey);
}

uint32_t cppIVRApplications_IVRApplications_006_GetApplicationProcessId(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->GetApplicationProcessId((const char *)pchAppKey);
}

const char * cppIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum(void *linux_side, EVRApplicationError error)
{
    return ((IVRApplications*)linux_side)->GetApplicationsErrorNameFromEnum((vr::EVRApplicationError)error);
}

uint32_t cppIVRApplications_IVRApplications_006_GetApplicationPropertyString(void *linux_side, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    return ((IVRApplications*)linux_side)->GetApplicationPropertyString((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (char *)pchPropertyValueBuffer, (uint32_t)unPropertyValueBufferLen, (vr::EVRApplicationError *)peError);
}

bool cppIVRApplications_IVRApplications_006_GetApplicationPropertyBool(void *linux_side, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    return ((IVRApplications*)linux_side)->GetApplicationPropertyBool((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (vr::EVRApplicationError *)peError);
}

uint64_t cppIVRApplications_IVRApplications_006_GetApplicationPropertyUint64(void *linux_side, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    return ((IVRApplications*)linux_side)->GetApplicationPropertyUint64((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (vr::EVRApplicationError *)peError);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_006_SetApplicationAutoLaunch(void *linux_side, const char * pchAppKey, bool bAutoLaunch)
{
    return ((IVRApplications*)linux_side)->SetApplicationAutoLaunch((const char *)pchAppKey, (bool)bAutoLaunch);
}

bool cppIVRApplications_IVRApplications_006_GetApplicationAutoLaunch(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->GetApplicationAutoLaunch((const char *)pchAppKey);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType(void *linux_side, const char * pchAppKey, const char * pchMimeType)
{
    return ((IVRApplications*)linux_side)->SetDefaultApplicationForMimeType((const char *)pchAppKey, (const char *)pchMimeType);
}

bool cppIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType(void *linux_side, const char * pchMimeType, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    return ((IVRApplications*)linux_side)->GetDefaultApplicationForMimeType((const char *)pchMimeType, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
}

bool cppIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes(void *linux_side, const char * pchAppKey, char * pchMimeTypesBuffer, uint32_t unMimeTypesBuffer)
{
    return ((IVRApplications*)linux_side)->GetApplicationSupportedMimeTypes((const char *)pchAppKey, (char *)pchMimeTypesBuffer, (uint32_t)unMimeTypesBuffer);
}

uint32_t cppIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType(void *linux_side, const char * pchMimeType, char * pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer)
{
    return ((IVRApplications*)linux_side)->GetApplicationsThatSupportMimeType((const char *)pchMimeType, (char *)pchAppKeysThatSupportBuffer, (uint32_t)unAppKeysThatSupportBuffer);
}

uint32_t cppIVRApplications_IVRApplications_006_GetApplicationLaunchArguments(void *linux_side, uint32_t unHandle, char * pchArgs, uint32_t unArgs)
{
    return ((IVRApplications*)linux_side)->GetApplicationLaunchArguments((uint32_t)unHandle, (char *)pchArgs, (uint32_t)unArgs);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_006_GetStartingApplication(void *linux_side, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    return ((IVRApplications*)linux_side)->GetStartingApplication((char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
}

vr::EVRApplicationTransitionState cppIVRApplications_IVRApplications_006_GetTransitionState(void *linux_side)
{
    return ((IVRApplications*)linux_side)->GetTransitionState();
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->PerformApplicationPrelaunchCheck((const char *)pchAppKey);
}

const char * cppIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum(void *linux_side, EVRApplicationTransitionState state)
{
    return ((IVRApplications*)linux_side)->GetApplicationsTransitionStateNameFromEnum((vr::EVRApplicationTransitionState)state);
}

bool cppIVRApplications_IVRApplications_006_IsQuitUserPromptRequested(void *linux_side)
{
    return ((IVRApplications*)linux_side)->IsQuitUserPromptRequested();
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_006_LaunchInternalProcess(void *linux_side, const char * pchBinaryPath, const char * pchArguments, const char * pchWorkingDirectory)
{
    return ((IVRApplications*)linux_side)->LaunchInternalProcess((const char *)pchBinaryPath, (const char *)pchArguments, (const char *)pchWorkingDirectory);
}

uint32_t cppIVRApplications_IVRApplications_006_GetCurrentSceneProcessId(void *linux_side)
{
    return ((IVRApplications*)linux_side)->GetCurrentSceneProcessId();
}

#ifdef __cplusplus
}
#endif
