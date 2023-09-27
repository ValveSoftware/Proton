#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012.h"
void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestCurrentStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStat( (const char *)params->pchName, (int32 *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetStat( (const char *)params->pchName, (float *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetStat( (const char *)params->pchName, (int32)params->nData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetStat( (const char *)params->pchName, (float)params->fData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->UpdateAvgRateStat( (const char *)params->pchName, (float)params->flCountThisSession, (double)params->dSessionLength );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievement( (const char *)params->pchName, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->SetAchievement( (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->ClearAchievement( (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementAndUnlockTime( (const char *)params->pchName, (bool *)params->pbAchieved, (uint32 *)params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->StoreStats(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementIcon( (const char *)params->pchName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementDisplayAttribute( (const char *)params->pchName, (const char *)params->pchKey );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->IndicateAchievementProgress( (const char *)params->pchName, (uint32)params->nCurProgress, (uint32)params->nMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetNumAchievements(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementName( (uint32)params->iAchievement );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestUserStats( (CSteamID)params->steamIDUser );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserStat( (CSteamID)params->steamIDUser, (const char *)params->pchName, (int32 *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserStat( (CSteamID)params->steamIDUser, (const char *)params->pchName, (float *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserAchievement( (CSteamID)params->steamIDUser, (const char *)params->pchName, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetUserAchievementAndUnlockTime( (CSteamID)params->steamIDUser, (const char *)params->pchName, (bool *)params->pbAchieved, (uint32 *)params->punUnlockTime );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->ResetAllStats( (bool)params->bAchievementsToo );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->FindOrCreateLeaderboard( (const char *)params->pchLeaderboardName, (ELeaderboardSortMethod)params->eLeaderboardSortMethod, (ELeaderboardDisplayType)params->eLeaderboardDisplayType );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->FindLeaderboard( (const char *)params->pchLeaderboardName );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardName( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardEntryCount( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardSortMethod( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetLeaderboardDisplayType( (SteamLeaderboard_t)params->hSteamLeaderboard );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->DownloadLeaderboardEntries( (SteamLeaderboard_t)params->hSteamLeaderboard, (ELeaderboardDataRequest)params->eLeaderboardDataRequest, (int)params->nRangeStart, (int)params->nRangeEnd );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->DownloadLeaderboardEntriesForUsers( (SteamLeaderboard_t)params->hSteamLeaderboard, (CSteamID *)params->prgUsers, (int)params->cUsers );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry_params *params )
{
    LeaderboardEntry_t lin_pLeaderboardEntry;
    win_to_lin_struct_LeaderboardEntry_t_158( params->pLeaderboardEntry, &lin_pLeaderboardEntry );
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetDownloadedLeaderboardEntry( (SteamLeaderboardEntries_t)params->hSteamLeaderboardEntries, (int)params->index, &lin_pLeaderboardEntry, (int32 *)params->pDetails, (int)params->cDetailsMax );
    lin_to_win_struct_LeaderboardEntry_t_158( &lin_pLeaderboardEntry, params->pLeaderboardEntry );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->UploadLeaderboardScore( (SteamLeaderboard_t)params->hSteamLeaderboard, (ELeaderboardUploadScoreMethod)params->eLeaderboardUploadScoreMethod, (int32)params->nScore, (const int32 *)params->pScoreDetails, (int)params->cScoreDetailsCount );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->AttachLeaderboardUGC( (SteamLeaderboard_t)params->hSteamLeaderboard, (UGCHandle_t)params->hUGC );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetNumberOfCurrentPlayers(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestGlobalAchievementPercentages(  );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetMostAchievedAchievementInfo( (char *)params->pchName, (uint32)params->unNameBufLen, (float *)params->pflPercent, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetNextMostAchievedAchievementInfo( (int)params->iIteratorPrevious, (char *)params->pchName, (uint32)params->unNameBufLen, (float *)params->pflPercent, (bool *)params->pbAchieved );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementAchievedPercent( (const char *)params->pchName, (float *)params->pflPercent );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->RequestGlobalStats( (int)params->nHistoryDays );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetGlobalStat( (const char *)params->pchStatName, (int64 *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetGlobalStat( (const char *)params->pchStatName, (double *)params->pData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetGlobalStatHistory( (const char *)params->pchStatName, (int64 *)params->pData, (uint32)params->cubData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetGlobalStatHistory( (const char *)params->pchStatName, (double *)params->pData, (uint32)params->cubData );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementProgressLimits( (const char *)params->pchName, (int32 *)params->pnMinProgress, (int32 *)params->pnMaxProgress );
}

void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2_params *params )
{
    params->_ret = ((ISteamUserStats*)params->linux_side)->GetAchievementProgressLimits( (const char *)params->pchName, (float *)params->pfMinProgress, (float *)params->pfMaxProgress );
}

#ifdef __cplusplus
}
#endif
