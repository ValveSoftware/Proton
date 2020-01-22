#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.8.19/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRApplications_IVRApplications_007.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::EVRApplicationError cppIVRApplications_IVRApplications_007_AddApplicationManifest(void *linux_side, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    return ((IVRApplications*)linux_side)->AddApplicationManifest((const char *)pchApplicationManifestFullPath, (bool)bTemporary);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_007_RemoveApplicationManifest(void *linux_side, const char * pchApplicationManifestFullPath)
{
    return ((IVRApplications*)linux_side)->RemoveApplicationManifest((const char *)pchApplicationManifestFullPath);
}

bool cppIVRApplications_IVRApplications_007_IsApplicationInstalled(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->IsApplicationInstalled((const char *)pchAppKey);
}

uint32_t cppIVRApplications_IVRApplications_007_GetApplicationCount(void *linux_side)
{
    return ((IVRApplications*)linux_side)->GetApplicationCount();
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_007_GetApplicationKeyByIndex(void *linux_side, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    return ((IVRApplications*)linux_side)->GetApplicationKeyByIndex((uint32_t)unApplicationIndex, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId(void *linux_side, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    return ((IVRApplications*)linux_side)->GetApplicationKeyByProcessId((uint32_t)unProcessId, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchApplication(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->LaunchApplication((const char *)pchAppKey);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchTemplateApplication(void *linux_side, const char * pchTemplateAppKey, const char * pchNewAppKey, AppOverrideKeys_t * pKeys, uint32_t unKeys)
{
    return ((IVRApplications*)linux_side)->LaunchTemplateApplication((const char *)pchTemplateAppKey, (const char *)pchNewAppKey, (const vr::AppOverrideKeys_t *)pKeys, (uint32_t)unKeys);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType(void *linux_side, const char * pchMimeType, const char * pchArgs)
{
    return ((IVRApplications*)linux_side)->LaunchApplicationFromMimeType((const char *)pchMimeType, (const char *)pchArgs);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchDashboardOverlay(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->LaunchDashboardOverlay((const char *)pchAppKey);
}

bool cppIVRApplications_IVRApplications_007_CancelApplicationLaunch(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->CancelApplicationLaunch((const char *)pchAppKey);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_007_IdentifyApplication(void *linux_side, uint32_t unProcessId, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->IdentifyApplication((uint32_t)unProcessId, (const char *)pchAppKey);
}

uint32_t cppIVRApplications_IVRApplications_007_GetApplicationProcessId(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->GetApplicationProcessId((const char *)pchAppKey);
}

const char * cppIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum(void *linux_side, EVRApplicationError error)
{
    return ((IVRApplications*)linux_side)->GetApplicationsErrorNameFromEnum((vr::EVRApplicationError)error);
}

uint32_t cppIVRApplications_IVRApplications_007_GetApplicationPropertyString(void *linux_side, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    return ((IVRApplications*)linux_side)->GetApplicationPropertyString((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (char *)pchPropertyValueBuffer, (uint32_t)unPropertyValueBufferLen, (vr::EVRApplicationError *)peError);
}

bool cppIVRApplications_IVRApplications_007_GetApplicationPropertyBool(void *linux_side, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    return ((IVRApplications*)linux_side)->GetApplicationPropertyBool((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (vr::EVRApplicationError *)peError);
}

uint64_t cppIVRApplications_IVRApplications_007_GetApplicationPropertyUint64(void *linux_side, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    return ((IVRApplications*)linux_side)->GetApplicationPropertyUint64((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (vr::EVRApplicationError *)peError);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_007_SetApplicationAutoLaunch(void *linux_side, const char * pchAppKey, bool bAutoLaunch)
{
    return ((IVRApplications*)linux_side)->SetApplicationAutoLaunch((const char *)pchAppKey, (bool)bAutoLaunch);
}

bool cppIVRApplications_IVRApplications_007_GetApplicationAutoLaunch(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->GetApplicationAutoLaunch((const char *)pchAppKey);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType(void *linux_side, const char * pchAppKey, const char * pchMimeType)
{
    return ((IVRApplications*)linux_side)->SetDefaultApplicationForMimeType((const char *)pchAppKey, (const char *)pchMimeType);
}

bool cppIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType(void *linux_side, const char * pchMimeType, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    return ((IVRApplications*)linux_side)->GetDefaultApplicationForMimeType((const char *)pchMimeType, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
}

bool cppIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes(void *linux_side, const char * pchAppKey, char * pchMimeTypesBuffer, uint32_t unMimeTypesBuffer)
{
    return ((IVRApplications*)linux_side)->GetApplicationSupportedMimeTypes((const char *)pchAppKey, (char *)pchMimeTypesBuffer, (uint32_t)unMimeTypesBuffer);
}

uint32_t cppIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType(void *linux_side, const char * pchMimeType, char * pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer)
{
    return ((IVRApplications*)linux_side)->GetApplicationsThatSupportMimeType((const char *)pchMimeType, (char *)pchAppKeysThatSupportBuffer, (uint32_t)unAppKeysThatSupportBuffer);
}

uint32_t cppIVRApplications_IVRApplications_007_GetApplicationLaunchArguments(void *linux_side, uint32_t unHandle, char * pchArgs, uint32_t unArgs)
{
    return ((IVRApplications*)linux_side)->GetApplicationLaunchArguments((uint32_t)unHandle, (char *)pchArgs, (uint32_t)unArgs);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_007_GetStartingApplication(void *linux_side, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    return ((IVRApplications*)linux_side)->GetStartingApplication((char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
}

vr::EVRSceneApplicationState cppIVRApplications_IVRApplications_007_GetSceneApplicationState(void *linux_side)
{
    return ((IVRApplications*)linux_side)->GetSceneApplicationState();
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->PerformApplicationPrelaunchCheck((const char *)pchAppKey);
}

const char * cppIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum(void *linux_side, EVRSceneApplicationState state)
{
    return ((IVRApplications*)linux_side)->GetSceneApplicationStateNameFromEnum((vr::EVRSceneApplicationState)state);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchInternalProcess(void *linux_side, const char * pchBinaryPath, const char * pchArguments, const char * pchWorkingDirectory)
{
    return ((IVRApplications*)linux_side)->LaunchInternalProcess((const char *)pchBinaryPath, (const char *)pchArguments, (const char *)pchWorkingDirectory);
}

uint32_t cppIVRApplications_IVRApplications_007_GetCurrentSceneProcessId(void *linux_side)
{
    return ((IVRApplications*)linux_side)->GetCurrentSceneProcessId();
}

#ifdef __cplusplus
}
#endif
