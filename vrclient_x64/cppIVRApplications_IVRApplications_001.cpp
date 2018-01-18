#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.10/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRApplications_IVRApplications_001.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::EVRApplicationError cppIVRApplications_IVRApplications_001_AddApplicationManifest(void *linux_side, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    return ((IVRApplications*)linux_side)->AddApplicationManifest((const char *)pchApplicationManifestFullPath, (bool)bTemporary);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_001_RemoveApplicationManifest(void *linux_side, const char * pchApplicationManifestFullPath)
{
    return ((IVRApplications*)linux_side)->RemoveApplicationManifest((const char *)pchApplicationManifestFullPath);
}

bool cppIVRApplications_IVRApplications_001_IsApplicationInstalled(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->IsApplicationInstalled((const char *)pchAppKey);
}

uint32_t cppIVRApplications_IVRApplications_001_GetApplicationCount(void *linux_side)
{
    return ((IVRApplications*)linux_side)->GetApplicationCount();
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_001_GetApplicationKeyByIndex(void *linux_side, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    return ((IVRApplications*)linux_side)->GetApplicationKeyByIndex((uint32_t)unApplicationIndex, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId(void *linux_side, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    return ((IVRApplications*)linux_side)->GetApplicationKeyByProcessId((uint32_t)unProcessId, (char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_001_LaunchApplication(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->LaunchApplication((const char *)pchAppKey);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_001_LaunchDashboardOverlay(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->LaunchDashboardOverlay((const char *)pchAppKey);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_001_IdentifyApplication(void *linux_side, uint32_t unProcessId, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->IdentifyApplication((uint32_t)unProcessId, (const char *)pchAppKey);
}

uint32_t cppIVRApplications_IVRApplications_001_GetApplicationProcessId(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->GetApplicationProcessId((const char *)pchAppKey);
}

const char * cppIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum(void *linux_side, EVRApplicationError error)
{
    return ((IVRApplications*)linux_side)->GetApplicationsErrorNameFromEnum((vr::EVRApplicationError)error);
}

uint32_t cppIVRApplications_IVRApplications_001_GetApplicationPropertyString(void *linux_side, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    return ((IVRApplications*)linux_side)->GetApplicationPropertyString((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (char *)pchPropertyValueBuffer, (uint32_t)unPropertyValueBufferLen, (vr::EVRApplicationError *)peError);
}

bool cppIVRApplications_IVRApplications_001_GetApplicationPropertyBool(void *linux_side, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    return ((IVRApplications*)linux_side)->GetApplicationPropertyBool((const char *)pchAppKey, (vr::EVRApplicationProperty)eProperty, (vr::EVRApplicationError *)peError);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_001_GetHomeApplication(void *linux_side, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    return ((IVRApplications*)linux_side)->GetHomeApplication((char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_001_SetHomeApplication(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->SetHomeApplication((const char *)pchAppKey);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_001_SetApplicationAutoLaunch(void *linux_side, const char * pchAppKey, bool bAutoLaunch)
{
    return ((IVRApplications*)linux_side)->SetApplicationAutoLaunch((const char *)pchAppKey, (bool)bAutoLaunch);
}

bool cppIVRApplications_IVRApplications_001_GetApplicationAutoLaunch(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->GetApplicationAutoLaunch((const char *)pchAppKey);
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_001_GetStartingApplication(void *linux_side, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    return ((IVRApplications*)linux_side)->GetStartingApplication((char *)pchAppKeyBuffer, (uint32_t)unAppKeyBufferLen);
}

vr::EVRApplicationTransitionState cppIVRApplications_IVRApplications_001_GetTransitionState(void *linux_side)
{
    return ((IVRApplications*)linux_side)->GetTransitionState();
}

vr::EVRApplicationError cppIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck(void *linux_side, const char * pchAppKey)
{
    return ((IVRApplications*)linux_side)->PerformApplicationPrelaunchCheck((const char *)pchAppKey);
}

const char * cppIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum(void *linux_side, EVRApplicationTransitionState state)
{
    return ((IVRApplications*)linux_side)->GetApplicationsTransitionStateNameFromEnum((vr::EVRApplicationTransitionState)state);
}

#ifdef __cplusplus
}
#endif
