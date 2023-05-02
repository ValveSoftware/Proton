#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_111x/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_111x
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008.h"
bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats(void *linux_side)
{
    return ((ISteamUserStats*)linux_side)->RequestCurrentStats();
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat(void *linux_side, const char * pchName, int32 * pData)
{
    return ((ISteamUserStats*)linux_side)->GetStat((const char *)pchName, (int32 *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2(void *linux_side, const char * pchName, float * pData)
{
    return ((ISteamUserStats*)linux_side)->GetStat((const char *)pchName, (float *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat(void *linux_side, const char * pchName, int32 nData)
{
    return ((ISteamUserStats*)linux_side)->SetStat((const char *)pchName, (int32)nData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2(void *linux_side, const char * pchName, float fData)
{
    return ((ISteamUserStats*)linux_side)->SetStat((const char *)pchName, (float)fData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat(void *linux_side, const char * pchName, float flCountThisSession, double dSessionLength)
{
    return ((ISteamUserStats*)linux_side)->UpdateAvgRateStat((const char *)pchName, (float)flCountThisSession, (double)dSessionLength);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement(void *linux_side, const char * pchName, bool * pbAchieved)
{
    return ((ISteamUserStats*)linux_side)->GetAchievement((const char *)pchName, (bool *)pbAchieved);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement(void *linux_side, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->SetAchievement((const char *)pchName);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement(void *linux_side, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->ClearAchievement((const char *)pchName);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime(void *linux_side, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementAndUnlockTime((const char *)pchName, (bool *)pbAchieved, (uint32 *)punUnlockTime);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats(void *linux_side)
{
    return ((ISteamUserStats*)linux_side)->StoreStats();
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon(void *linux_side, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementIcon((const char *)pchName);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute(void *linux_side, const char * pchName, const char * pchKey)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementDisplayAttribute((const char *)pchName, (const char *)pchKey);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress(void *linux_side, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    return ((ISteamUserStats*)linux_side)->IndicateAchievementProgress((const char *)pchName, (uint32)nCurProgress, (uint32)nMaxProgress);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats(void *linux_side, CSteamID steamIDUser)
{
    return ((ISteamUserStats*)linux_side)->RequestUserStats((CSteamID)steamIDUser);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat(void *linux_side, CSteamID steamIDUser, const char * pchName, int32 * pData)
{
    return ((ISteamUserStats*)linux_side)->GetUserStat((CSteamID)steamIDUser, (const char *)pchName, (int32 *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2(void *linux_side, CSteamID steamIDUser, const char * pchName, float * pData)
{
    return ((ISteamUserStats*)linux_side)->GetUserStat((CSteamID)steamIDUser, (const char *)pchName, (float *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement(void *linux_side, CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
    return ((ISteamUserStats*)linux_side)->GetUserAchievement((CSteamID)steamIDUser, (const char *)pchName, (bool *)pbAchieved);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime(void *linux_side, CSteamID steamIDUser, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    return ((ISteamUserStats*)linux_side)->GetUserAchievementAndUnlockTime((CSteamID)steamIDUser, (const char *)pchName, (bool *)pbAchieved, (uint32 *)punUnlockTime);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats(void *linux_side, bool bAchievementsToo)
{
    return ((ISteamUserStats*)linux_side)->ResetAllStats((bool)bAchievementsToo);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard(void *linux_side, const char * pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    return ((ISteamUserStats*)linux_side)->FindOrCreateLeaderboard((const char *)pchLeaderboardName, (ELeaderboardSortMethod)eLeaderboardSortMethod, (ELeaderboardDisplayType)eLeaderboardDisplayType);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard(void *linux_side, const char * pchLeaderboardName)
{
    return ((ISteamUserStats*)linux_side)->FindLeaderboard((const char *)pchLeaderboardName);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    return ((ISteamUserStats*)linux_side)->GetLeaderboardName((SteamLeaderboard_t)hSteamLeaderboard);
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    return ((ISteamUserStats*)linux_side)->GetLeaderboardEntryCount((SteamLeaderboard_t)hSteamLeaderboard);
}

ELeaderboardSortMethod cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    return ((ISteamUserStats*)linux_side)->GetLeaderboardSortMethod((SteamLeaderboard_t)hSteamLeaderboard);
}

ELeaderboardDisplayType cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    return ((ISteamUserStats*)linux_side)->GetLeaderboardDisplayType((SteamLeaderboard_t)hSteamLeaderboard);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries(void *linux_side, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    return ((ISteamUserStats*)linux_side)->DownloadLeaderboardEntries((SteamLeaderboard_t)hSteamLeaderboard, (ELeaderboardDataRequest)eLeaderboardDataRequest, (int)nRangeStart, (int)nRangeEnd);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry(void *linux_side, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, winLeaderboardEntry_t_111x * pLeaderboardEntry, int32 * pDetails, int cDetailsMax)
{
    LeaderboardEntry_t lin_pLeaderboardEntry;
    win_to_lin_struct_LeaderboardEntry_t_111x(pLeaderboardEntry, &lin_pLeaderboardEntry);
    bool retval = ((ISteamUserStats*)linux_side)->GetDownloadedLeaderboardEntry((SteamLeaderboardEntries_t)hSteamLeaderboardEntries, (int)index, &lin_pLeaderboardEntry, (int32 *)pDetails, (int)cDetailsMax);
    lin_to_win_struct_LeaderboardEntry_t_111x(&lin_pLeaderboardEntry, pLeaderboardEntry);
    return retval;
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore(void *linux_side, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 * pScoreDetails, int cScoreDetailsCount)
{
    return ((ISteamUserStats*)linux_side)->UploadLeaderboardScore((SteamLeaderboard_t)hSteamLeaderboard, (ELeaderboardUploadScoreMethod)eLeaderboardUploadScoreMethod, (int32)nScore, (const int32 *)pScoreDetails, (int)cScoreDetailsCount);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC(void *linux_side, SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
    return ((ISteamUserStats*)linux_side)->AttachLeaderboardUGC((SteamLeaderboard_t)hSteamLeaderboard, (UGCHandle_t)hUGC);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers(void *linux_side)
{
    return ((ISteamUserStats*)linux_side)->GetNumberOfCurrentPlayers();
}

#ifdef __cplusplus
}
#endif
