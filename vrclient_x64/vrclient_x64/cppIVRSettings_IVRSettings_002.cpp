#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.1.3b/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSettings_IVRSettings_002.h"
#ifdef __cplusplus
extern "C" {
#endif
const char * cppIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum(void *linux_side, EVRSettingsError eError)
{
    return ((IVRSettings*)linux_side)->GetSettingsErrorNameFromEnum((vr::EVRSettingsError)eError);
}

bool cppIVRSettings_IVRSettings_002_Sync(void *linux_side, bool bForce, EVRSettingsError * peError)
{
    return ((IVRSettings*)linux_side)->Sync((bool)bForce, (vr::EVRSettingsError *)peError);
}

void cppIVRSettings_IVRSettings_002_SetBool(void *linux_side, const char * pchSection, const char * pchSettingsKey, bool bValue, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->SetBool((const char *)pchSection, (const char *)pchSettingsKey, (bool)bValue, (vr::EVRSettingsError *)peError);
}

void cppIVRSettings_IVRSettings_002_SetInt32(void *linux_side, const char * pchSection, const char * pchSettingsKey, int32_t nValue, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->SetInt32((const char *)pchSection, (const char *)pchSettingsKey, (int32_t)nValue, (vr::EVRSettingsError *)peError);
}

void cppIVRSettings_IVRSettings_002_SetFloat(void *linux_side, const char * pchSection, const char * pchSettingsKey, float flValue, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->SetFloat((const char *)pchSection, (const char *)pchSettingsKey, (float)flValue, (vr::EVRSettingsError *)peError);
}

void cppIVRSettings_IVRSettings_002_SetString(void *linux_side, const char * pchSection, const char * pchSettingsKey, const char * pchValue, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->SetString((const char *)pchSection, (const char *)pchSettingsKey, (const char *)pchValue, (vr::EVRSettingsError *)peError);
}

bool cppIVRSettings_IVRSettings_002_GetBool(void *linux_side, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    return ((IVRSettings*)linux_side)->GetBool((const char *)pchSection, (const char *)pchSettingsKey, (vr::EVRSettingsError *)peError);
}

int32_t cppIVRSettings_IVRSettings_002_GetInt32(void *linux_side, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    return ((IVRSettings*)linux_side)->GetInt32((const char *)pchSection, (const char *)pchSettingsKey, (vr::EVRSettingsError *)peError);
}

float cppIVRSettings_IVRSettings_002_GetFloat(void *linux_side, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    return ((IVRSettings*)linux_side)->GetFloat((const char *)pchSection, (const char *)pchSettingsKey, (vr::EVRSettingsError *)peError);
}

void cppIVRSettings_IVRSettings_002_GetString(void *linux_side, const char * pchSection, const char * pchSettingsKey, char * pchValue, uint32_t unValueLen, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->GetString((const char *)pchSection, (const char *)pchSettingsKey, (char *)pchValue, (uint32_t)unValueLen, (vr::EVRSettingsError *)peError);
}

void cppIVRSettings_IVRSettings_002_RemoveSection(void *linux_side, const char * pchSection, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->RemoveSection((const char *)pchSection, (vr::EVRSettingsError *)peError);
}

void cppIVRSettings_IVRSettings_002_RemoveKeyInSection(void *linux_side, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->RemoveKeyInSection((const char *)pchSection, (const char *)pchSettingsKey, (vr::EVRSettingsError *)peError);
}

#ifdef __cplusplus
}
#endif
