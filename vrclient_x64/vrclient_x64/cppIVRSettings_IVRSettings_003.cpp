#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.23.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSettings_IVRSettings_003.h"
#ifdef __cplusplus
extern "C" {
#endif
const char * cppIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum(void *linux_side, EVRSettingsError eError)
{
    return ((IVRSettings*)linux_side)->GetSettingsErrorNameFromEnum((vr::EVRSettingsError)eError);
}

void cppIVRSettings_IVRSettings_003_SetBool(void *linux_side, const char * pchSection, const char * pchSettingsKey, bool bValue, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->SetBool((const char *)pchSection, (const char *)pchSettingsKey, (bool)bValue, (vr::EVRSettingsError *)peError);
}

void cppIVRSettings_IVRSettings_003_SetInt32(void *linux_side, const char * pchSection, const char * pchSettingsKey, int32_t nValue, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->SetInt32((const char *)pchSection, (const char *)pchSettingsKey, (int32_t)nValue, (vr::EVRSettingsError *)peError);
}

void cppIVRSettings_IVRSettings_003_SetFloat(void *linux_side, const char * pchSection, const char * pchSettingsKey, float flValue, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->SetFloat((const char *)pchSection, (const char *)pchSettingsKey, (float)flValue, (vr::EVRSettingsError *)peError);
}

void cppIVRSettings_IVRSettings_003_SetString(void *linux_side, const char * pchSection, const char * pchSettingsKey, const char * pchValue, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->SetString((const char *)pchSection, (const char *)pchSettingsKey, (const char *)pchValue, (vr::EVRSettingsError *)peError);
}

bool cppIVRSettings_IVRSettings_003_GetBool(void *linux_side, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    return ((IVRSettings*)linux_side)->GetBool((const char *)pchSection, (const char *)pchSettingsKey, (vr::EVRSettingsError *)peError);
}

int32_t cppIVRSettings_IVRSettings_003_GetInt32(void *linux_side, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    return ((IVRSettings*)linux_side)->GetInt32((const char *)pchSection, (const char *)pchSettingsKey, (vr::EVRSettingsError *)peError);
}

float cppIVRSettings_IVRSettings_003_GetFloat(void *linux_side, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    return ((IVRSettings*)linux_side)->GetFloat((const char *)pchSection, (const char *)pchSettingsKey, (vr::EVRSettingsError *)peError);
}

void cppIVRSettings_IVRSettings_003_GetString(void *linux_side, const char * pchSection, const char * pchSettingsKey, char * pchValue, uint32_t unValueLen, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->GetString((const char *)pchSection, (const char *)pchSettingsKey, (char *)pchValue, (uint32_t)unValueLen, (vr::EVRSettingsError *)peError);
}

void cppIVRSettings_IVRSettings_003_RemoveSection(void *linux_side, const char * pchSection, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->RemoveSection((const char *)pchSection, (vr::EVRSettingsError *)peError);
}

void cppIVRSettings_IVRSettings_003_RemoveKeyInSection(void *linux_side, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    ((IVRSettings*)linux_side)->RemoveKeyInSection((const char *)pchSection, (const char *)pchSettingsKey, (vr::EVRSettingsError *)peError);
}

#ifdef __cplusplus
}
#endif
