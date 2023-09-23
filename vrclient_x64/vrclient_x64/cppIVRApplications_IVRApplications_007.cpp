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
EVRApplicationError cppIVRApplications_IVRApplications_007_AddApplicationManifest(void *linux_side, const char *pchApplicationManifestFullPath, bool bTemporary)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->AddApplicationManifest((const char *)pchApplicationManifestFullPath, (bool)bTemporary);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_007_RemoveApplicationManifest(void *linux_side, const char *pchApplicationManifestFullPath)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->RemoveApplicationManifest((const char *)pchApplicationManifestFullPath);
    return _ret;
}

bool cppIVRApplications_IVRApplications_007_IsApplicationInstalled(void *linux_side, const char *pchAppKey)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->IsApplicationInstalled((const char *)pchAppKey);
    return _ret;
}

uint32_t cppIVRApplications_IVRApplications_007_GetApplicationCount(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationCount();
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_007_GetApplicationKeyByIndex(void *linux_side, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationKeyByIndex((uint32_t)unApplicationIndex, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId(void *linux_side, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationKeyByProcessId((uint32_t)unProcessId, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchApplication(void *linux_side, const char *pchAppKey)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->LaunchApplication((const char *)pchAppKey);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchTemplateApplication(void *linux_side, const char *pchTemplateAppKey, const char *pchNewAppKey, const AppOverrideKeys_t *pKeys, uint32_t unKeys)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->LaunchTemplateApplication((const char *)pchTemplateAppKey, (const char *)pchNewAppKey, (const vr::AppOverrideKeys_t *)pKeys, (uint32_t)unKeys);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType(void *linux_side, const char *pchMimeType, const char *pchArgs)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->LaunchApplicationFromMimeType((const char *)pchMimeType, (const char *)pchArgs);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchDashboardOverlay(void *linux_side, const char *pchAppKey)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->LaunchDashboardOverlay((const char *)pchAppKey);
    return _ret;
}

bool cppIVRApplications_IVRApplications_007_CancelApplicationLaunch(void *linux_side, const char *pchAppKey)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->CancelApplicationLaunch((const char *)pchAppKey);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_007_IdentifyApplication(void *linux_side, uint32_t unProcessId, const char *pchAppKey)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->IdentifyApplication((uint32_t)unProcessId, (const char *)pchAppKey);
    return _ret;
}

uint32_t cppIVRApplications_IVRApplications_007_GetApplicationProcessId(void *linux_side, const char *pchAppKey)
{
    uint32_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationProcessId((const char *)pchAppKey);
    return _ret;
}

const char * cppIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum(void *linux_side, EVRApplicationError error)
{
    const char *_ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationsErrorNameFromEnum((vr::EVRApplicationError)error);
    return _ret;
}

uint32_t cppIVRApplications_IVRApplications_007_GetApplicationPropertyString(void *linux_side, const char *pchAppKey, EVRApplicationProperty eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError *peError)
{
    uint32_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationPropertyString((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (char *)pchPropertyValueBuffer, (uint32_t)unPropertyValueBufferLen, (vr::EVRApplicationError *)peError);
    return _ret;
}

bool cppIVRApplications_IVRApplications_007_GetApplicationPropertyBool(void *linux_side, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationPropertyBool((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (vr::EVRApplicationError *)peError);
    return _ret;
}

uint64_t cppIVRApplications_IVRApplications_007_GetApplicationPropertyUint64(void *linux_side, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    uint64_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationPropertyUint64((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (vr::EVRApplicationError *)peError);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_007_SetApplicationAutoLaunch(void *linux_side, const char *pchAppKey, bool bAutoLaunch)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->SetApplicationAutoLaunch((const char *)pchAppKey, (bool)bAutoLaunch);
    return _ret;
}

bool cppIVRApplications_IVRApplications_007_GetApplicationAutoLaunch(void *linux_side, const char *pchAppKey)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationAutoLaunch((const char *)pchAppKey);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType(void *linux_side, const char *pchAppKey, const char *pchMimeType)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->SetDefaultApplicationForMimeType((const char *)pchAppKey, (const char *)pchMimeType);
    return _ret;
}

bool cppIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType(void *linux_side, const char *pchMimeType, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->GetDefaultApplicationForMimeType((const char *)pchMimeType, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
    return _ret;
}

bool cppIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes(void *linux_side, const char *pchAppKey, char *pchMimeTypesBuffer, uint32_t unMimeTypesBuffer)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationSupportedMimeTypes((const char *)pchAppKey, (char *)pchMimeTypesBuffer, (uint32_t)unMimeTypesBuffer);
    return _ret;
}

uint32_t cppIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType(void *linux_side, const char *pchMimeType, char *pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer)
{
    uint32_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationsThatSupportMimeType((const char *)pchMimeType, (char *)pchAppKeysThatSupportBuffer, (uint32_t)unAppKeysThatSupportBuffer);
    return _ret;
}

uint32_t cppIVRApplications_IVRApplications_007_GetApplicationLaunchArguments(void *linux_side, uint32_t unHandle, char *pchArgs, uint32_t unArgs)
{
    uint32_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationLaunchArguments((uint32_t)unHandle, (char *)pchArgs, (uint32_t)unArgs);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_007_GetStartingApplication(void *linux_side, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->GetStartingApplication((char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
    return _ret;
}

EVRSceneApplicationState cppIVRApplications_IVRApplications_007_GetSceneApplicationState(void *linux_side)
{
    EVRSceneApplicationState _ret;
    _ret = ((IVRApplications*)linux_side)->GetSceneApplicationState();
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck(void *linux_side, const char *pchAppKey)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->PerformApplicationPrelaunchCheck((const char *)pchAppKey);
    return _ret;
}

const char * cppIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum(void *linux_side, EVRSceneApplicationState state)
{
    const char *_ret;
    _ret = ((IVRApplications*)linux_side)->GetSceneApplicationStateNameFromEnum((vr::EVRSceneApplicationState)state);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_007_LaunchInternalProcess(void *linux_side, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->LaunchInternalProcess((const char *)pchBinaryPath, (const char *)pchArguments, (const char *)pchWorkingDirectory);
    return _ret;
}

uint32_t cppIVRApplications_IVRApplications_007_GetCurrentSceneProcessId(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetCurrentSceneProcessId();
    return _ret;
}

#ifdef __cplusplus
}
#endif
