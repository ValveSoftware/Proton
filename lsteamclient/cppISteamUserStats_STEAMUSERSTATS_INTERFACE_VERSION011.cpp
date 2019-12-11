#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011.h"
bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats(void *linux_side)
{
    return ((ISteamUserStats*)linux_side)->RequestCurrentStats();
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat(void *linux_side, const char * pchName, int32 * pData)
{
    return ((ISteamUserStats*)linux_side)->GetStat((const char *)pchName, (int32 *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2(void *linux_side, const char * pchName, float * pData)
{
    return ((ISteamUserStats*)linux_side)->GetStat((const char *)pchName, (float *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat(void *linux_side, const char * pchName, int32 nData)
{
    return ((ISteamUserStats*)linux_side)->SetStat((const char *)pchName, (int32)nData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2(void *linux_side, const char * pchName, float fData)
{
    return ((ISteamUserStats*)linux_side)->SetStat((const char *)pchName, (float)fData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat(void *linux_side, const char * pchName, float flCountThisSession, double dSessionLength)
{
    return ((ISteamUserStats*)linux_side)->UpdateAvgRateStat((const char *)pchName, (float)flCountThisSession, (double)dSessionLength);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement(void *linux_side, const char * pchName, bool * pbAchieved)
{
    return ((ISteamUserStats*)linux_side)->GetAchievement((const char *)pchName, (bool *)pbAchieved);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement(void *linux_side, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->SetAchievement((const char *)pchName);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement(void *linux_side, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->ClearAchievement((const char *)pchName);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime(void *linux_side, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementAndUnlockTime((const char *)pchName, (bool *)pbAchieved, (uint32 *)punUnlockTime);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats(void *linux_side)
{
    return ((ISteamUserStats*)linux_side)->StoreStats();
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon(void *linux_side, const char * pchName)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementIcon((const char *)pchName);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute(void *linux_side, const char * pchName, const char * pchKey)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementDisplayAttribute((const char *)pchName, (const char *)pchKey);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress(void *linux_side, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    return ((ISteamUserStats*)linux_side)->IndicateAchievementProgress((const char *)pchName, (uint32)nCurProgress, (uint32)nMaxProgress);
}

uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements(void *linux_side)
{
    return ((ISteamUserStats*)linux_side)->GetNumAchievements();
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName(void *linux_side, uint32 iAchievement)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementName((uint32)iAchievement);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats(void *linux_side, CSteamID steamIDUser)
{
    return ((ISteamUserStats*)linux_side)->RequestUserStats((CSteamID)steamIDUser);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat(void *linux_side, CSteamID steamIDUser, const char * pchName, int32 * pData)
{
    return ((ISteamUserStats*)linux_side)->GetUserStat((CSteamID)steamIDUser, (const char *)pchName, (int32 *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2(void *linux_side, CSteamID steamIDUser, const char * pchName, float * pData)
{
    return ((ISteamUserStats*)linux_side)->GetUserStat((CSteamID)steamIDUser, (const char *)pchName, (float *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement(void *linux_side, CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
    return ((ISteamUserStats*)linux_side)->GetUserAchievement((CSteamID)steamIDUser, (const char *)pchName, (bool *)pbAchieved);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime(void *linux_side, CSteamID steamIDUser, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    return ((ISteamUserStats*)linux_side)->GetUserAchievementAndUnlockTime((CSteamID)steamIDUser, (const char *)pchName, (bool *)pbAchieved, (uint32 *)punUnlockTime);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats(void *linux_side, bool bAchievementsToo)
{
    return ((ISteamUserStats*)linux_side)->ResetAllStats((bool)bAchievementsToo);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard(void *linux_side, const char * pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    return ((ISteamUserStats*)linux_side)->FindOrCreateLeaderboard((const char *)pchLeaderboardName, (ELeaderboardSortMethod)eLeaderboardSortMethod, (ELeaderboardDisplayType)eLeaderboardDisplayType);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard(void *linux_side, const char * pchLeaderboardName)
{
    return ((ISteamUserStats*)linux_side)->FindLeaderboard((const char *)pchLeaderboardName);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    return ((ISteamUserStats*)linux_side)->GetLeaderboardName((SteamLeaderboard_t)hSteamLeaderboard);
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    return ((ISteamUserStats*)linux_side)->GetLeaderboardEntryCount((SteamLeaderboard_t)hSteamLeaderboard);
}

ELeaderboardSortMethod cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    return ((ISteamUserStats*)linux_side)->GetLeaderboardSortMethod((SteamLeaderboard_t)hSteamLeaderboard);
}

ELeaderboardDisplayType cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    return ((ISteamUserStats*)linux_side)->GetLeaderboardDisplayType((SteamLeaderboard_t)hSteamLeaderboard);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries(void *linux_side, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    return ((ISteamUserStats*)linux_side)->DownloadLeaderboardEntries((SteamLeaderboard_t)hSteamLeaderboard, (ELeaderboardDataRequest)eLeaderboardDataRequest, (int)nRangeStart, (int)nRangeEnd);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers(void *linux_side, SteamLeaderboard_t hSteamLeaderboard, CSteamID * prgUsers, int cUsers)
{
    return ((ISteamUserStats*)linux_side)->DownloadLeaderboardEntriesForUsers((SteamLeaderboard_t)hSteamLeaderboard, (CSteamID *)prgUsers, (int)cUsers);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry(void *linux_side, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, winLeaderboardEntry_t_147 * pLeaderboardEntry, int32 * pDetails, int cDetailsMax)
{
    LeaderboardEntry_t lin_pLeaderboardEntry;
    win_to_lin_struct_LeaderboardEntry_t_147(pLeaderboardEntry, &lin_pLeaderboardEntry);
    bool retval = ((ISteamUserStats*)linux_side)->GetDownloadedLeaderboardEntry((SteamLeaderboardEntries_t)hSteamLeaderboardEntries, (int)index, &lin_pLeaderboardEntry, (int32 *)pDetails, (int)cDetailsMax);
    lin_to_win_struct_LeaderboardEntry_t_147(&lin_pLeaderboardEntry, pLeaderboardEntry);
    return retval;
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore(void *linux_side, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 * pScoreDetails, int cScoreDetailsCount)
{
    return ((ISteamUserStats*)linux_side)->UploadLeaderboardScore((SteamLeaderboard_t)hSteamLeaderboard, (ELeaderboardUploadScoreMethod)eLeaderboardUploadScoreMethod, (int32)nScore, (const int32 *)pScoreDetails, (int)cScoreDetailsCount);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC(void *linux_side, SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
    return ((ISteamUserStats*)linux_side)->AttachLeaderboardUGC((SteamLeaderboard_t)hSteamLeaderboard, (UGCHandle_t)hUGC);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers(void *linux_side)
{
    return ((ISteamUserStats*)linux_side)->GetNumberOfCurrentPlayers();
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages(void *linux_side)
{
    return ((ISteamUserStats*)linux_side)->RequestGlobalAchievementPercentages();
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo(void *linux_side, char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved)
{
    return ((ISteamUserStats*)linux_side)->GetMostAchievedAchievementInfo((char *)pchName, (uint32)unNameBufLen, (float *)pflPercent, (bool *)pbAchieved);
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo(void *linux_side, int iIteratorPrevious, char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved)
{
    return ((ISteamUserStats*)linux_side)->GetNextMostAchievedAchievementInfo((int)iIteratorPrevious, (char *)pchName, (uint32)unNameBufLen, (float *)pflPercent, (bool *)pbAchieved);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent(void *linux_side, const char * pchName, float * pflPercent)
{
    return ((ISteamUserStats*)linux_side)->GetAchievementAchievedPercent((const char *)pchName, (float *)pflPercent);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats(void *linux_side, int nHistoryDays)
{
    return ((ISteamUserStats*)linux_side)->RequestGlobalStats((int)nHistoryDays);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat(void *linux_side, const char * pchStatName, int64 * pData)
{
    return ((ISteamUserStats*)linux_side)->GetGlobalStat((const char *)pchStatName, (int64 *)pData);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2(void *linux_side, const char * pchStatName, double * pData)
{
    return ((ISteamUserStats*)linux_side)->GetGlobalStat((const char *)pchStatName, (double *)pData);
}

int32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory(void *linux_side, const char * pchStatName, int64 * pData, uint32 cubData)
{
    return ((ISteamUserStats*)linux_side)->GetGlobalStatHistory((const char *)pchStatName, (int64 *)pData, (uint32)cubData);
}

int32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2(void *linux_side, const char * pchStatName, double * pData, uint32 cubData)
{
    return ((ISteamUserStats*)linux_side)->GetGlobalStatHistory((const char *)pchStatName, (double *)pData, (uint32)cubData);
}

#ifdef __cplusplus
}
#endif
