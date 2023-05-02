#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_102/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_102
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003.h"
bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats(void *linux_side)
{
    return ((ISteamUserStats*)linux_side)->RequestCurrentStats();
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat(void *linux_side, const char * pchName, int32 * pData)
{
    return ((ISteamUserStats*)linux_side)->GetStat((const char *)pchName, (int32 *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2(void *linux_side, const char * pchName, float * pData)
{
    return ((ISteamUserStats*)linux_side)->GetStat((const char *)pchName, (float *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat(void *linux_side, const char * pchName, int32 nData)
{
    return ((ISteamUserStats*)linux_side)->SetStat((const char *)pchName, (int32)nData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2(void *linux_side, const char * pchName, float fData)
{
    return ((ISteamUserStats*)linux_side)->SetStat((const char *)pchName, (float)fData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat(void *linux_side, const char * pchName, float flCountThisSession, double dSessionLength)
{
    return ((ISteamUserStats*)linux_side)->UpdateAvgRateStat((const char *)pchName, (float)flCountThisSession, (double)dSessionLength);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement(void *linux_side, const char * pchName, bool * pbAchieved)
{
    return ((ISteamUserStats*)linux_side)->GetAchievement((const char *)pchName, (bool *)pbAchieved);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement(void *linux_side, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->SetAchievement((const char *)pchName);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement(void *linux_side, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->ClearAchievement((const char *)pchName);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats(void *linux_side)
{
    return ((ISteamUserStats*)linux_side)->StoreStats();
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon(void *linux_side, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementIcon((const char *)pchName);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute(void *linux_side, const char * pchName, const char * pchKey)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementDisplayAttribute((const char *)pchName, (const char *)pchKey);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress(void *linux_side, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    return ((ISteamUserStats*)linux_side)->IndicateAchievementProgress((const char *)pchName, (uint32)nCurProgress, (uint32)nMaxProgress);
}

#ifdef __cplusplus
}
#endif
