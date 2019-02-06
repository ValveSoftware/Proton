#include "steam_defs.h"
#include "steamworks_sdk_099y/steam_api.h"
#include "steamclient_private.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "struct_converters_099y.h"
uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats(void *linux_side, CGameID nGameID)
{
    return ((ISteamUserStats*)linux_side)->GetNumStats((CGameID)nGameID);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName(void *linux_side, CGameID nGameID, uint32 iStat)
{
    return ((ISteamUserStats*)linux_side)->GetStatName((CGameID)nGameID, (uint32)iStat);
}

ESteamUserStatType cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType(void *linux_side, CGameID nGameID, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->GetStatType((CGameID)nGameID, (const char *)pchName);
}

uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements(void *linux_side, CGameID nGameID)
{
    return ((ISteamUserStats*)linux_side)->GetNumAchievements((CGameID)nGameID);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName(void *linux_side, CGameID nGameID, uint32 iAchievement)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementName((CGameID)nGameID, (uint32)iAchievement);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats(void *linux_side, CGameID nGameID)
{
    return ((ISteamUserStats*)linux_side)->RequestCurrentStats((CGameID)nGameID);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat(void *linux_side, CGameID nGameID, const char * pchName, int32 * pData)
{
    return ((ISteamUserStats*)linux_side)->GetStat((CGameID)nGameID, (const char *)pchName, (int32 *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2(void *linux_side, CGameID nGameID, const char * pchName, float * pData)
{
    return ((ISteamUserStats*)linux_side)->GetStat((CGameID)nGameID, (const char *)pchName, (float *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat(void *linux_side, CGameID nGameID, const char * pchName, int32 nData)
{
    return ((ISteamUserStats*)linux_side)->SetStat((CGameID)nGameID, (const char *)pchName, (int32)nData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2(void *linux_side, CGameID nGameID, const char * pchName, float fData)
{
    return ((ISteamUserStats*)linux_side)->SetStat((CGameID)nGameID, (const char *)pchName, (float)fData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat(void *linux_side, CGameID nGameID, const char * pchName, float flCountThisSession, double dSessionLength)
{
    return ((ISteamUserStats*)linux_side)->UpdateAvgRateStat((CGameID)nGameID, (const char *)pchName, (float)flCountThisSession, (double)dSessionLength);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement(void *linux_side, CGameID nGameID, const char * pchName, bool * pbAchieved)
{
    return ((ISteamUserStats*)linux_side)->GetAchievement((CGameID)nGameID, (const char *)pchName, (bool *)pbAchieved);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement(void *linux_side, CGameID nGameID, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->SetAchievement((CGameID)nGameID, (const char *)pchName);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement(void *linux_side, CGameID nGameID, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->ClearAchievement((CGameID)nGameID, (const char *)pchName);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats(void *linux_side, CGameID nGameID)
{
    return ((ISteamUserStats*)linux_side)->StoreStats((CGameID)nGameID);
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon(void *linux_side, CGameID nGameID, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementIcon((CGameID)nGameID, (const char *)pchName);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute(void *linux_side, CGameID nGameID, const char * pchName, const char * pchKey)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementDisplayAttribute((CGameID)nGameID, (const char *)pchName, (const char *)pchKey);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress(void *linux_side, CGameID nGameID, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    return ((ISteamUserStats*)linux_side)->IndicateAchievementProgress((CGameID)nGameID, (const char *)pchName, (uint32)nCurProgress, (uint32)nMaxProgress);
}

#ifdef __cplusplus
}
#endif
