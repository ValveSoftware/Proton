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
EVRApplicationError cppIVRApplications_IVRApplications_004_AddApplicationManifest(void *linux_side, const char *pchApplicationManifestFullPath, bool bTemporary)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->AddApplicationManifest((const char *)pchApplicationManifestFullPath, (bool)bTemporary);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_004_RemoveApplicationManifest(void *linux_side, const char *pchApplicationManifestFullPath)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->RemoveApplicationManifest((const char *)pchApplicationManifestFullPath);
    return _ret;
}

bool cppIVRApplications_IVRApplications_004_IsApplicationInstalled(void *linux_side, const char *pchAppKey)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->IsApplicationInstalled((const char *)pchAppKey);
    return _ret;
}

uint32_t cppIVRApplications_IVRApplications_004_GetApplicationCount(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationCount();
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_004_GetApplicationKeyByIndex(void *linux_side, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationKeyByIndex((uint32_t)unApplicationIndex, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId(void *linux_side, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationKeyByProcessId((uint32_t)unProcessId, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_004_LaunchApplication(void *linux_side, const char *pchAppKey)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->LaunchApplication((const char *)pchAppKey);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_004_LaunchDashboardOverlay(void *linux_side, const char *pchAppKey)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->LaunchDashboardOverlay((const char *)pchAppKey);
    return _ret;
}

bool cppIVRApplications_IVRApplications_004_CancelApplicationLaunch(void *linux_side, const char *pchAppKey)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->CancelApplicationLaunch((const char *)pchAppKey);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_004_IdentifyApplication(void *linux_side, uint32_t unProcessId, const char *pchAppKey)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->IdentifyApplication((uint32_t)unProcessId, (const char *)pchAppKey);
    return _ret;
}

uint32_t cppIVRApplications_IVRApplications_004_GetApplicationProcessId(void *linux_side, const char *pchAppKey)
{
    uint32_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationProcessId((const char *)pchAppKey);
    return _ret;
}

const char * cppIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum(void *linux_side, EVRApplicationError error)
{
    const char *_ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationsErrorNameFromEnum((vr::EVRApplicationError)error);
    return _ret;
}

uint32_t cppIVRApplications_IVRApplications_004_GetApplicationPropertyString(void *linux_side, const char *pchAppKey, EVRApplicationProperty eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError *peError)
{
    uint32_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationPropertyString((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (char *)pchPropertyValueBuffer, (uint32_t)unPropertyValueBufferLen, (vr::EVRApplicationError *)peError);
    return _ret;
}

bool cppIVRApplications_IVRApplications_004_GetApplicationPropertyBool(void *linux_side, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationPropertyBool((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (vr::EVRApplicationError *)peError);
    return _ret;
}

uint64_t cppIVRApplications_IVRApplications_004_GetApplicationPropertyUint64(void *linux_side, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    uint64_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationPropertyUint64((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (vr::EVRApplicationError *)peError);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_004_SetApplicationAutoLaunch(void *linux_side, const char *pchAppKey, bool bAutoLaunch)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->SetApplicationAutoLaunch((const char *)pchAppKey, (bool)bAutoLaunch);
    return _ret;
}

bool cppIVRApplications_IVRApplications_004_GetApplicationAutoLaunch(void *linux_side, const char *pchAppKey)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationAutoLaunch((const char *)pchAppKey);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_004_GetStartingApplication(void *linux_side, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->GetStartingApplication((char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
    return _ret;
}

EVRApplicationTransitionState cppIVRApplications_IVRApplications_004_GetTransitionState(void *linux_side)
{
    EVRApplicationTransitionState _ret;
    _ret = ((IVRApplications*)linux_side)->GetTransitionState();
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck(void *linux_side, const char *pchAppKey)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->PerformApplicationPrelaunchCheck((const char *)pchAppKey);
    return _ret;
}

const char * cppIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum(void *linux_side, EVRApplicationTransitionState state)
{
    const char *_ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationsTransitionStateNameFromEnum((vr::EVRApplicationTransitionState)state);
    return _ret;
}

bool cppIVRApplications_IVRApplications_004_IsQuitUserPromptRequested(void *linux_side)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->IsQuitUserPromptRequested();
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_004_LaunchInternalProcess(void *linux_side, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->LaunchInternalProcess((const char *)pchBinaryPath, (const char *)pchArguments, (const char *)pchWorkingDirectory);
    return _ret;
}

#ifdef __cplusplus
}
#endif
