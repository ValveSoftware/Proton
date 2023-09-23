#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_104/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_104
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005.h"
bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->RequestCurrentStats();
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat(void *linux_side, const char *pchName, int32 *pData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetStat((const char *)pchName, (int32 *)pData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2(void *linux_side, const char *pchName, float *pData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetStat((const char *)pchName, (float *)pData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat(void *linux_side, const char *pchName, int32 nData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->SetStat((const char *)pchName, (int32)nData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2(void *linux_side, const char *pchName, float fData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->SetStat((const char *)pchName, (float)fData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat(void *linux_side, const char *pchName, float flCountThisSession, double dSessionLength)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->UpdateAvgRateStat((const char *)pchName, (float)flCountThisSession, (double)dSessionLength);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement(void *linux_side, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievement((const char *)pchName, (bool *)pbAchieved);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement(void *linux_side, const char *pchName)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->SetAchievement((const char *)pchName);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement(void *linux_side, const char *pchName)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->ClearAchievement((const char *)pchName);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->StoreStats();
    return (_ret);
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon(void *linux_side, const char *pchName)
{
    int _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievementIcon((const char *)pchName);
    return (_ret);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute(void *linux_side, const char *pchName, const char *pchKey)
{
    const char *_ret;
    _ret = ((ISteamUserStats*)linux_side)->GetAchievementDisplayAttribute((const char *)pchName, (const char *)pchKey);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress(void *linux_side, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->IndicateAchievementProgress((const char *)pchName, (uint32)nCurProgress, (uint32)nMaxProgress);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats(void *linux_side, CSteamID steamIDUser)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->RequestUserStats((CSteamID)steamIDUser);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat(void *linux_side, CSteamID steamIDUser, const char *pchName, int32 *pData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetUserStat((CSteamID)steamIDUser, (const char *)pchName, (int32 *)pData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2(void *linux_side, CSteamID steamIDUser, const char *pchName, float *pData)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetUserStat((CSteamID)steamIDUser, (const char *)pchName, (float *)pData);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement(void *linux_side, CSteamID steamIDUser, const char *pchName, bool *pbAchieved)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetUserAchievement((CSteamID)steamIDUser, (const char *)pchName, (bool *)pbAchieved);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats(void *linux_side, bool bAchievementsToo)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->ResetAllStats((bool)bAchievementsToo);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard(void *linux_side, const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->FindOrCreateLeaderboard((const char *)pchLeaderboardName, (ELeaderboardSortMethod)eLeaderboardSortMethod, (ELeaderboardDisplayType)eLeaderboardDisplayType);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard(void *linux_side, const char *pchLeaderboardName)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->FindLeaderboard((const char *)pchLeaderboardName);
    return (_ret);
}

const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    const char *_ret;
    _ret = ((ISteamUserStats*)linux_side)->GetLeaderboardName((SteamLeaderboard_t)hSteamLeaderboard);
    return (_ret);
}

int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    int _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetLeaderboardEntryCount((SteamLeaderboard_t)hSteamLeaderboard);
    return (_ret);
}

ELeaderboardSortMethod cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardSortMethod _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetLeaderboardSortMethod((SteamLeaderboard_t)hSteamLeaderboard);
    return (_ret);
}

ELeaderboardDisplayType cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType(void *linux_side, SteamLeaderboard_t hSteamLeaderboard)
{
    ELeaderboardDisplayType _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetLeaderboardDisplayType((SteamLeaderboard_t)hSteamLeaderboard);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries(void *linux_side, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->DownloadLeaderboardEntries((SteamLeaderboard_t)hSteamLeaderboard, (ELeaderboardDataRequest)eLeaderboardDataRequest, (int)nRangeStart, (int)nRangeEnd);
    return (_ret);
}

bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry(void *linux_side, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32 *pDetails, int cDetailsMax)
{
    bool _ret;
    _ret = ((ISteamUserStats*)linux_side)->GetDownloadedLeaderboardEntry((SteamLeaderboardEntries_t)hSteamLeaderboardEntries, (int)index, (LeaderboardEntry_t *)pLeaderboardEntry, (int32 *)pDetails, (int)cDetailsMax);
    return (_ret);
}

SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore(void *linux_side, SteamLeaderboard_t hSteamLeaderboard, int32 nScore, int32 *pScoreDetails, int cScoreDetailsCount)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamUserStats*)linux_side)->UploadLeaderboardScore((SteamLeaderboard_t)hSteamLeaderboard, (int32)nScore, (int32 *)pScoreDetails, (int)cScoreDetailsCount);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
