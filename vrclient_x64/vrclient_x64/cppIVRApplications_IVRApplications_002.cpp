#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.14/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRApplications_IVRApplications_002.h"
#ifdef __cplusplus
extern "C" {
#endif
EVRApplicationError cppIVRApplications_IVRApplications_002_AddApplicationManifest(void *linux_side, const char *pchApplicationManifestFullPath, bool bTemporary)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->AddApplicationManifest((const char *)pchApplicationManifestFullPath, (bool)bTemporary);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_002_RemoveApplicationManifest(void *linux_side, const char *pchApplicationManifestFullPath)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->RemoveApplicationManifest((const char *)pchApplicationManifestFullPath);
    return _ret;
}

bool cppIVRApplications_IVRApplications_002_IsApplicationInstalled(void *linux_side, const char *pchAppKey)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->IsApplicationInstalled((const char *)pchAppKey);
    return _ret;
}

uint32_t cppIVRApplications_IVRApplications_002_GetApplicationCount(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationCount();
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_002_GetApplicationKeyByIndex(void *linux_side, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationKeyByIndex((uint32_t)unApplicationIndex, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId(void *linux_side, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationKeyByProcessId((uint32_t)unProcessId, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_002_LaunchApplication(void *linux_side, const char *pchAppKey)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->LaunchApplication((const char *)pchAppKey);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_002_LaunchDashboardOverlay(void *linux_side, const char *pchAppKey)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->LaunchDashboardOverlay((const char *)pchAppKey);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_002_IdentifyApplication(void *linux_side, uint32_t unProcessId, const char *pchAppKey)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->IdentifyApplication((uint32_t)unProcessId, (const char *)pchAppKey);
    return _ret;
}

uint32_t cppIVRApplications_IVRApplications_002_GetApplicationProcessId(void *linux_side, const char *pchAppKey)
{
    uint32_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationProcessId((const char *)pchAppKey);
    return _ret;
}

const char * cppIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum(void *linux_side, EVRApplicationError error)
{
    const char *_ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationsErrorNameFromEnum((vr::EVRApplicationError)error);
    return _ret;
}

uint32_t cppIVRApplications_IVRApplications_002_GetApplicationPropertyString(void *linux_side, const char *pchAppKey, EVRApplicationProperty eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError *peError)
{
    uint32_t _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationPropertyString((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (char *)pchPropertyValueBuffer, (uint32_t)unPropertyValueBufferLen, (vr::EVRApplicationError *)peError);
    return _ret;
}

bool cppIVRApplications_IVRApplications_002_GetApplicationPropertyBool(void *linux_side, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationPropertyBool((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (vr::EVRApplicationError *)peError);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_002_SetApplicationAutoLaunch(void *linux_side, const char *pchAppKey, bool bAutoLaunch)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->SetApplicationAutoLaunch((const char *)pchAppKey, (bool)bAutoLaunch);
    return _ret;
}

bool cppIVRApplications_IVRApplications_002_GetApplicationAutoLaunch(void *linux_side, const char *pchAppKey)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationAutoLaunch((const char *)pchAppKey);
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_002_GetStartingApplication(void *linux_side, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->GetStartingApplication((char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
    return _ret;
}

EVRApplicationTransitionState cppIVRApplications_IVRApplications_002_GetTransitionState(void *linux_side)
{
    EVRApplicationTransitionState _ret;
    _ret = ((IVRApplications*)linux_side)->GetTransitionState();
    return _ret;
}

EVRApplicationError cppIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck(void *linux_side, const char *pchAppKey)
{
    EVRApplicationError _ret;
    _ret = ((IVRApplications*)linux_side)->PerformApplicationPrelaunchCheck((const char *)pchAppKey);
    return _ret;
}

const char * cppIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum(void *linux_side, EVRApplicationTransitionState state)
{
    const char *_ret;
    _ret = ((IVRApplications*)linux_side)->GetApplicationsTransitionStateNameFromEnum((vr::EVRApplicationTransitionState)state);
    return _ret;
}

bool cppIVRApplications_IVRApplications_002_IsQuitUserPromptRequested(void *linux_side)
{
    bool _ret;
    _ret = ((IVRApplications*)linux_side)->IsQuitUserPromptRequested();
    return _ret;
}

#ifdef __cplusplus
}
#endif
