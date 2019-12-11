/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011.h"

typedef struct __winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011;

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat(_this->linux_side, pchName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2(_this->linux_side, pchName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchName, float flCountThisSession, double dSessionLength)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat(_this->linux_side, pchName, flCountThisSession, dSessionLength);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement(_this->linux_side, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime(_this->linux_side, pchName, pbAchieved, punUnlockTime);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon, 8)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchName, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute(_this->linux_side, pchName, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress(_this->linux_side, pchName, nCurProgress, nMaxProgress);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements, 4)
uint32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName, 8)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, uint32 iAchievement)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName(_this->linux_side, iAchievement);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats, 12)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, CSteamID steamIDUser, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, CSteamID steamIDUser, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement(_this->linux_side, steamIDUser, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime, 24)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime(_this->linux_side, steamIDUser, pchName, pbAchieved, punUnlockTime);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, bool bAchievementsToo)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats(_this->linux_side, bAchievementsToo);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard, 16)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard(_this->linux_side, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard, 8)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchLeaderboardName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard(_this->linux_side, pchLeaderboardName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount, 12)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod, 12)
ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType, 12)
ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries, 24)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries(_this->linux_side, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers, 20)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, SteamLeaderboard_t hSteamLeaderboard, CSteamID * prgUsers, int cUsers)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers(_this->linux_side, hSteamLeaderboard, prgUsers, cUsers);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry, 28)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, winLeaderboardEntry_t_147 * pLeaderboardEntry, int32 * pDetails, int cDetailsMax)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry(_this->linux_side, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore, 28)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 * pScoreDetails, int cScoreDetailsCount)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore(_this->linux_side, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC, 20)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC(_this->linux_side, hSteamLeaderboard, hUGC);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers, 4)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages, 4)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo, 20)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo(_this->linux_side, pchName, unNameBufLen, pflPercent, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo, 24)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, int iIteratorPrevious, char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo(_this->linux_side, iIteratorPrevious, pchName, unNameBufLen, pflPercent, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchName, float * pflPercent)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent(_this->linux_side, pchName, pflPercent);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats, 8)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, int nHistoryDays)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats(_this->linux_side, nHistoryDays);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchStatName, int64 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat(_this->linux_side, pchStatName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchStatName, double * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2(_this->linux_side, pchStatName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory, 16)
int32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchStatName, int64 * pData, uint32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory(_this->linux_side, pchStatName, pData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2, 16)
int32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *_this, const char * pchStatName, double * pData, uint32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2(_this->linux_side, pchStatName, pData, cubData);
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory)
    );
#ifndef __GNUC__
}
#endif

winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011(void *linux_side)
{
    winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010.h"

typedef struct __winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010;

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat(_this->linux_side, pchName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2(_this->linux_side, pchName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchName, float flCountThisSession, double dSessionLength)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat(_this->linux_side, pchName, flCountThisSession, dSessionLength);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement(_this->linux_side, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime(_this->linux_side, pchName, pbAchieved, punUnlockTime);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon, 8)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchName, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute(_this->linux_side, pchName, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress(_this->linux_side, pchName, nCurProgress, nMaxProgress);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats, 12)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, CSteamID steamIDUser, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, CSteamID steamIDUser, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement(_this->linux_side, steamIDUser, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime, 24)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime(_this->linux_side, steamIDUser, pchName, pbAchieved, punUnlockTime);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, bool bAchievementsToo)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats(_this->linux_side, bAchievementsToo);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard, 16)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard(_this->linux_side, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard, 8)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchLeaderboardName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard(_this->linux_side, pchLeaderboardName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount, 12)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod, 12)
ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType, 12)
ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries, 24)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries(_this->linux_side, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers, 20)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, SteamLeaderboard_t hSteamLeaderboard, CSteamID * prgUsers, int cUsers)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers(_this->linux_side, hSteamLeaderboard, prgUsers, cUsers);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry, 28)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, winLeaderboardEntry_t_119 * pLeaderboardEntry, int32 * pDetails, int cDetailsMax)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry(_this->linux_side, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore, 28)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 * pScoreDetails, int cScoreDetailsCount)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore(_this->linux_side, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC, 20)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC(_this->linux_side, hSteamLeaderboard, hUGC);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers, 4)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages, 4)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo, 20)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo(_this->linux_side, pchName, unNameBufLen, pflPercent, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo, 24)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, int iIteratorPrevious, char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo(_this->linux_side, iIteratorPrevious, pchName, unNameBufLen, pflPercent, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchName, float * pflPercent)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent(_this->linux_side, pchName, pflPercent);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats, 8)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, int nHistoryDays)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats(_this->linux_side, nHistoryDays);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchStatName, int64 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat(_this->linux_side, pchStatName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchStatName, double * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2(_this->linux_side, pchStatName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory, 16)
int32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchStatName, int64 * pData, uint32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory(_this->linux_side, pchStatName, pData, cubData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2, 16)
int32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *_this, const char * pchStatName, double * pData, uint32 cubData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2(_this->linux_side, pchStatName, pData, cubData);
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory)
    );
#ifndef __GNUC__
}
#endif

winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010(void *linux_side)
{
    winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009.h"

typedef struct __winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009;

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat(_this->linux_side, pchName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2(_this->linux_side, pchName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchName, float flCountThisSession, double dSessionLength)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat(_this->linux_side, pchName, flCountThisSession, dSessionLength);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement(_this->linux_side, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime(_this->linux_side, pchName, pbAchieved, punUnlockTime);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon, 8)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchName, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute(_this->linux_side, pchName, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress(_this->linux_side, pchName, nCurProgress, nMaxProgress);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats, 12)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, CSteamID steamIDUser, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, CSteamID steamIDUser, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement(_this->linux_side, steamIDUser, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime, 24)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime(_this->linux_side, steamIDUser, pchName, pbAchieved, punUnlockTime);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, bool bAchievementsToo)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats(_this->linux_side, bAchievementsToo);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard, 16)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard(_this->linux_side, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard, 8)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, const char * pchLeaderboardName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard(_this->linux_side, pchLeaderboardName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount, 12)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod, 12)
ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType, 12)
ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries, 24)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries(_this->linux_side, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers, 20)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, SteamLeaderboard_t hSteamLeaderboard, CSteamID * prgUsers, int cUsers)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers(_this->linux_side, hSteamLeaderboard, prgUsers, cUsers);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry, 28)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, winLeaderboardEntry_t_113 * pLeaderboardEntry, int32 * pDetails, int cDetailsMax)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry(_this->linux_side, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore, 28)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 * pScoreDetails, int cScoreDetailsCount)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore(_this->linux_side, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC, 20)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this, SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC(_this->linux_side, hSteamLeaderboard, hUGC);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers, 4)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers(_this->linux_side);
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetUserAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_DownloadLeaderboardEntriesForUsers)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_UploadLeaderboardScore)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_AttachLeaderboardUGC)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_GetNumberOfCurrentPlayers)
    );
#ifndef __GNUC__
}
#endif

winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009(void *linux_side)
{
    winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION009_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008.h"

typedef struct __winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008;

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat(_this->linux_side, pchName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2(_this->linux_side, pchName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchName, float flCountThisSession, double dSessionLength)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat(_this->linux_side, pchName, flCountThisSession, dSessionLength);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement(_this->linux_side, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime(_this->linux_side, pchName, pbAchieved, punUnlockTime);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon, 8)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchName, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute(_this->linux_side, pchName, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress(_this->linux_side, pchName, nCurProgress, nMaxProgress);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats, 12)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, CSteamID steamIDUser, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, CSteamID steamIDUser, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement(_this->linux_side, steamIDUser, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime, 24)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime(_this->linux_side, steamIDUser, pchName, pbAchieved, punUnlockTime);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, bool bAchievementsToo)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats(_this->linux_side, bAchievementsToo);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard, 16)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard(_this->linux_side, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard, 8)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, const char * pchLeaderboardName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard(_this->linux_side, pchLeaderboardName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount, 12)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod, 12)
ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType, 12)
ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries, 24)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries(_this->linux_side, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry, 28)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, winLeaderboardEntry_t_111x * pLeaderboardEntry, int32 * pDetails, int cDetailsMax)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry(_this->linux_side, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore, 28)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 * pScoreDetails, int cScoreDetailsCount)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore(_this->linux_side, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC, 20)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this, SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC(_this->linux_side, hSteamLeaderboard, hUGC);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers, 4)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers(_this->linux_side);
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers)
    );
#ifndef __GNUC__
}
#endif

winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008(void *linux_side)
{
    winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007.h"

typedef struct __winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007;

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat(_this->linux_side, pchName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2(_this->linux_side, pchName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchName, float flCountThisSession, double dSessionLength)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat(_this->linux_side, pchName, flCountThisSession, dSessionLength);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement(_this->linux_side, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime(_this->linux_side, pchName, pbAchieved, punUnlockTime);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon, 8)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchName, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute(_this->linux_side, pchName, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress(_this->linux_side, pchName, nCurProgress, nMaxProgress);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats, 12)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, CSteamID steamIDUser, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, CSteamID steamIDUser, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement(_this->linux_side, steamIDUser, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime, 24)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime(_this->linux_side, steamIDUser, pchName, pbAchieved, punUnlockTime);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, bool bAchievementsToo)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats(_this->linux_side, bAchievementsToo);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard, 16)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard(_this->linux_side, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard, 8)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, const char * pchLeaderboardName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard(_this->linux_side, pchLeaderboardName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount, 12)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod, 12)
ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType, 12)
ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries, 24)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries(_this->linux_side, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry, 28)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t * pLeaderboardEntry, int32 * pDetails, int cDetailsMax)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry(_this->linux_side, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore, 28)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 * pScoreDetails, int cScoreDetailsCount)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore(_this->linux_side, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers, 4)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers(_this->linux_side);
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers)
    );
#ifndef __GNUC__
}
#endif

winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007(void *linux_side)
{
    winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006.h"

typedef struct __winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006;

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, const char * pchName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat(_this->linux_side, pchName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, const char * pchName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2(_this->linux_side, pchName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, const char * pchName, float flCountThisSession, double dSessionLength)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat(_this->linux_side, pchName, flCountThisSession, dSessionLength);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement(_this->linux_side, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon, 8)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, const char * pchName, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute(_this->linux_side, pchName, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress(_this->linux_side, pchName, nCurProgress, nMaxProgress);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats, 12)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, CSteamID steamIDUser, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, CSteamID steamIDUser, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement(_this->linux_side, steamIDUser, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, bool bAchievementsToo)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats(_this->linux_side, bAchievementsToo);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard, 16)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, const char * pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard(_this->linux_side, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard, 8)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, const char * pchLeaderboardName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard(_this->linux_side, pchLeaderboardName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount, 12)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod, 12)
ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType, 12)
ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries, 24)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries(_this->linux_side, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry, 28)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t * pLeaderboardEntry, int32 * pDetails, int cDetailsMax)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry(_this->linux_side, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore, 28)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 * pScoreDetails, int cScoreDetailsCount)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore(_this->linux_side, hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers, 4)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers(_this->linux_side);
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_UploadLeaderboardScore)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_GetNumberOfCurrentPlayers)
    );
#ifndef __GNUC__
}
#endif

winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006(void *linux_side)
{
    winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION006_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005.h"

typedef struct __winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005;

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, const char * pchName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat(_this->linux_side, pchName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, const char * pchName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2(_this->linux_side, pchName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, const char * pchName, float flCountThisSession, double dSessionLength)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat(_this->linux_side, pchName, flCountThisSession, dSessionLength);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement(_this->linux_side, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon, 8)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, const char * pchName, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute(_this->linux_side, pchName, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress(_this->linux_side, pchName, nCurProgress, nMaxProgress);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats, 12)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, CSteamID steamIDUser, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, CSteamID steamIDUser, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement(_this->linux_side, steamIDUser, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, bool bAchievementsToo)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats(_this->linux_side, bAchievementsToo);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard, 16)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, const char * pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard(_this->linux_side, pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard, 8)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, const char * pchLeaderboardName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard(_this->linux_side, pchLeaderboardName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount, 12)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod, 12)
ELeaderboardSortMethod __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType, 12)
ELeaderboardDisplayType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, SteamLeaderboard_t hSteamLeaderboard)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType(_this->linux_side, hSteamLeaderboard);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries, 24)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries(_this->linux_side, hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry, 28)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t * pLeaderboardEntry, int32 * pDetails, int cDetailsMax)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry(_this->linux_side, hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore, 24)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *_this, SteamLeaderboard_t hSteamLeaderboard, int32 nScore, int32 * pScoreDetails, int cScoreDetailsCount)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore(_this->linux_side, hSteamLeaderboard, nScore, pScoreDetails, cScoreDetailsCount);
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore)
    );
#ifndef __GNUC__
}
#endif

winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005(void *linux_side)
{
    winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004.h"

typedef struct __winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004;

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, const char * pchName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat(_this->linux_side, pchName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, const char * pchName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2(_this->linux_side, pchName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, const char * pchName, float flCountThisSession, double dSessionLength)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat(_this->linux_side, pchName, flCountThisSession, dSessionLength);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement(_this->linux_side, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon, 8)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, const char * pchName, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute(_this->linux_side, pchName, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress(_this->linux_side, pchName, nCurProgress, nMaxProgress);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats, 12)
SteamAPICall_t __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats(_this->linux_side, steamIDUser);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, CSteamID steamIDUser, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, CSteamID steamIDUser, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2(_this->linux_side, steamIDUser, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *_this, CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement(_this->linux_side, steamIDUser, pchName, pbAchieved);
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement)
    );
#ifndef __GNUC__
}
#endif

winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004(void *linux_side)
{
    winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003.h"

typedef struct __winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003;

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *_this, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *_this, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2(_this->linux_side, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *_this, const char * pchName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat(_this->linux_side, pchName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *_this, const char * pchName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2(_this->linux_side, pchName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *_this, const char * pchName, float flCountThisSession, double dSessionLength)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat(_this->linux_side, pchName, flCountThisSession, dSessionLength);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *_this, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement(_this->linux_side, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement, 8)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats, 4)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon, 8)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *_this, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon(_this->linux_side, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute, 12)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *_this, const char * pchName, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute(_this->linux_side, pchName, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *_this, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress(_this->linux_side, pchName, nCurProgress, nMaxProgress);
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_IndicateAchievementProgress)
    );
#ifndef __GNUC__
}
#endif

winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003(void *linux_side)
{
    winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION003_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002.h"

typedef struct __winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002;

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats, 12)
uint32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName, 16)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, uint32 iStat)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName(_this->linux_side, nGameID, iStat);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType, 16)
ESteamUserStatType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType(_this->linux_side, nGameID, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements, 12)
uint32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName, 16)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, uint32 iAchievement)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName(_this->linux_side, nGameID, iAchievement);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat(_this->linux_side, nGameID, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2(_this->linux_side, nGameID, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, const char * pchName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat(_this->linux_side, nGameID, pchName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, const char * pchName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2(_this->linux_side, nGameID, pchName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat, 28)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, const char * pchName, float flCountThisSession, double dSessionLength)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat(_this->linux_side, nGameID, pchName, flCountThisSession, dSessionLength);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement(_this->linux_side, nGameID, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement(_this->linux_side, nGameID, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement(_this->linux_side, nGameID, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon, 16)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon(_this->linux_side, nGameID, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute, 20)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, const char * pchName, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute(_this->linux_side, nGameID, pchName, pchKey);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress, 24)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *_this, CGameID nGameID, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress(_this->linux_side, nGameID, pchName, nCurProgress, nMaxProgress);
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStatType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetNumAchievements)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_GetAchievementDisplayAttribute)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_IndicateAchievementProgress)
    );
#ifndef __GNUC__
}
#endif

winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002(void *linux_side)
{
    winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION002_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001.h"

typedef struct __winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001;

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats, 12)
uint32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName, 16)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, uint32 iStat)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName(_this->linux_side, nGameID, iStat);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType, 16)
ESteamUserStatType __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType(_this->linux_side, nGameID, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements, 12)
uint32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName, 16)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, uint32 iAchievement)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName(_this->linux_side, nGameID, iAchievement);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements, 12)
uint32 __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName, 16)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, uint32 iAchievement)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName(_this->linux_side, nGameID, iAchievement);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName, int32 * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat(_this->linux_side, nGameID, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName, float * pData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2(_this->linux_side, nGameID, pchName, pData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat(_this->linux_side, nGameID, pchName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2(_this->linux_side, nGameID, pchName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat, 28)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName, float flCountThisSession, double dSessionLength)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat(_this->linux_side, nGameID, pchName, flCountThisSession, dSessionLength);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement(_this->linux_side, nGameID, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement, 20)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName, bool * pbAchieved)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement(_this->linux_side, nGameID, pchName, pbAchieved);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement(_this->linux_side, nGameID, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement(_this->linux_side, nGameID, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats, 12)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats(_this->linux_side, nGameID);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement(_this->linux_side, nGameID, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement, 16)
bool __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement(_this->linux_side, nGameID, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon, 16)
int __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon(_this->linux_side, nGameID, pchName);
}

DEFINE_THISCALL_WRAPPER(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute, 20)
const char * __thiscall winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *_this, CGameID nGameID, const char * pchName, const char * pchKey)
{
    TRACE("%p\n", _this);
    return cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute(_this->linux_side, nGameID, pchName, pchKey);
}

extern vtable_ptr winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon)
        VTABLE_ADD_FUNC(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute)
    );
#ifndef __GNUC__
}
#endif

winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *create_winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001(void *linux_side)
{
    winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_vtable;
    r->linux_side = linux_side;
    return r;
}

