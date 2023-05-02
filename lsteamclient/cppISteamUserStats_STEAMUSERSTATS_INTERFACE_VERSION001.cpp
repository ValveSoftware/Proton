#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099x
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001.h"
uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats(void *linux_side, CGameID nGameID)
{
    return ((ISteamUserStats*)linux_side)->GetNumStats((CGameID)nGameID);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName(void *linux_side, CGameID nGameID, uint32 iStat)
{
    return ((ISteamUserStats*)linux_side)->GetStatName((CGameID)nGameID, (uint32)iStat);
}

ESteamUserStatType cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType(void *linux_side, CGameID nGameID, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->GetStatType((CGameID)nGameID, (const char *)pchName);
}

uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements(void *linux_side, CGameID nGameID)
{
    return ((ISteamUserStats*)linux_side)->GetNumAchievements((CGameID)nGameID);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName(void *linux_side, CGameID nGameID, uint32 iAchievement)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementName((CGameID)nGameID, (uint32)iAchievement);
}

uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements(void *linux_side, CGameID nGameID)
{
    return ((ISteamUserStats*)linux_side)->GetNumGroupAchievements((CGameID)nGameID);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName(void *linux_side, CGameID nGameID, uint32 iAchievement)
{
    return ((ISteamUserStats*)linux_side)->GetGroupAchievementName((CGameID)nGameID, (uint32)iAchievement);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats(void *linux_side, CGameID nGameID)
{
    return ((ISteamUserStats*)linux_side)->RequestCurrentStats((CGameID)nGameID);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat(void *linux_side, CGameID nGameID, const char * pchName, int32 * pData)
{
    return ((ISteamUserStats*)linux_side)->GetStat((CGameID)nGameID, (const char *)pchName, (int32 *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2(void *linux_side, CGameID nGameID, const char * pchName, float * pData)
{
    return ((ISteamUserStats*)linux_side)->GetStat((CGameID)nGameID, (const char *)pchName, (float *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat(void *linux_side, CGameID nGameID, const char * pchName, int32 nData)
{
    return ((ISteamUserStats*)linux_side)->SetStat((CGameID)nGameID, (const char *)pchName, (int32)nData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2(void *linux_side, CGameID nGameID, const char * pchName, float fData)
{
    return ((ISteamUserStats*)linux_side)->SetStat((CGameID)nGameID, (const char *)pchName, (float)fData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat(void *linux_side, CGameID nGameID, const char * pchName, float flCountThisSession, double dSessionLength)
{
    return ((ISteamUserStats*)linux_side)->UpdateAvgRateStat((CGameID)nGameID, (const char *)pchName, (float)flCountThisSession, (double)dSessionLength);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement(void *linux_side, CGameID nGameID, const char * pchName, bool * pbAchieved)
{
    return ((ISteamUserStats*)linux_side)->GetAchievement((CGameID)nGameID, (const char *)pchName, (bool *)pbAchieved);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement(void *linux_side, CGameID nGameID, const char * pchName, bool * pbAchieved)
{
    return ((ISteamUserStats*)linux_side)->GetGroupAchievement((CGameID)nGameID, (const char *)pchName, (bool *)pbAchieved);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement(void *linux_side, CGameID nGameID, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->SetAchievement((CGameID)nGameID, (const char *)pchName);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement(void *linux_side, CGameID nGameID, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->SetGroupAchievement((CGameID)nGameID, (const char *)pchName);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats(void *linux_side, CGameID nGameID)
{
    return ((ISteamUserStats*)linux_side)->StoreStats((CGameID)nGameID);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement(void *linux_side, CGameID nGameID, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->ClearAchievement((CGameID)nGameID, (const char *)pchName);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement(void *linux_side, CGameID nGameID, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->ClearGroupAchievement((CGameID)nGameID, (const char *)pchName);
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon(void *linux_side, CGameID nGameID, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementIcon((CGameID)nGameID, (const char *)pchName);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute(void *linux_side, CGameID nGameID, const char * pchName, const char * pchKey)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementDisplayAttribute((CGameID)nGameID, (const char *)pchName, (const char *)pchKey);
}

#ifdef __cplusplus
}
#endif
